/* Generated code for Python module 'numpy.core._add_newdocs'
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

/* The "module_numpy$core$_add_newdocs" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$core$_add_newdocs;
PyDictObject *moduledict_numpy$core$_add_newdocs;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[289];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "numpy.core._add_newdocs");

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
void checkModuleConstants_numpy$core$_add_newdocs(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "numpy.core._add_newdocs");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_8baa49b39c388f56108927938a7b72fe;
static PyCodeObject *codeobj_0f0dd0019052872e74c7a917113824a0;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[6]; CHECK_OBJECT(module_filename_obj);
    codeobj_8baa49b39c388f56108927938a7b72fe = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[287], NULL, NULL, 0, 0, 0);
    codeobj_0f0dd0019052872e74c7a917113824a0 = MAKE_CODEOBJECT(module_filename_obj, 5984, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[209], mod_consts[288], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$core$_add_newdocs$$$function__1_refer_to_array_attribute(PyObject *defaults);


// The module function definitions.
static PyObject *impl_numpy$core$_add_newdocs$$$function__1_refer_to_array_attribute(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_attr = python_pars[0];
    PyObject *par_method = python_pars[1];
    struct Nuitka_FrameObject *frame_0f0dd0019052872e74c7a917113824a0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0f0dd0019052872e74c7a917113824a0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0f0dd0019052872e74c7a917113824a0)) {
        Py_XDECREF(cache_frame_0f0dd0019052872e74c7a917113824a0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0f0dd0019052872e74c7a917113824a0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0f0dd0019052872e74c7a917113824a0 = MAKE_FUNCTION_FRAME(codeobj_0f0dd0019052872e74c7a917113824a0, module_numpy$core$_add_newdocs, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0f0dd0019052872e74c7a917113824a0->m_type_description == NULL);
    frame_0f0dd0019052872e74c7a917113824a0 = cache_frame_0f0dd0019052872e74c7a917113824a0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0f0dd0019052872e74c7a917113824a0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0f0dd0019052872e74c7a917113824a0) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_attr);
        tmp_tuple_element_1 = par_attr;
        tmp_return_value = PyTuple_New(2);
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_expression_name_1;
            PyObject *tmp_args_element_name_1;
            nuitka_bool tmp_condition_result_1;
            int tmp_truth_name_1;
            PyObject *tmp_args_element_name_2;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            tmp_expression_name_1 = mod_consts[0];
            tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[1]);
            assert(!(tmp_called_name_1 == NULL));
            CHECK_OBJECT(par_method);
            tmp_truth_name_1 = CHECK_IF_TRUE(par_method);
            if (tmp_truth_name_1 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);

                exception_lineno = 5991;
                type_description_1 = "ooN";
                goto tuple_build_exception_1;
            }
            tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_1;
            } else {
                goto condexpr_false_1;
            }
            condexpr_true_1:;
            tmp_args_element_name_1 = mod_consts[2];
            goto condexpr_end_1;
            condexpr_false_1:;
            tmp_args_element_name_1 = mod_consts[3];
            condexpr_end_1:;
            CHECK_OBJECT(par_attr);
            tmp_args_element_name_2 = par_attr;
            frame_0f0dd0019052872e74c7a917113824a0->m_frame.f_lineno = 5991;
            {
                PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
                tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
            }

            Py_DECREF(tmp_called_name_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5991;
                type_description_1 = "ooN";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0f0dd0019052872e74c7a917113824a0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0f0dd0019052872e74c7a917113824a0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0f0dd0019052872e74c7a917113824a0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0f0dd0019052872e74c7a917113824a0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0f0dd0019052872e74c7a917113824a0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0f0dd0019052872e74c7a917113824a0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0f0dd0019052872e74c7a917113824a0,
        type_description_1,
        par_attr,
        par_method,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_0f0dd0019052872e74c7a917113824a0 == cache_frame_0f0dd0019052872e74c7a917113824a0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0f0dd0019052872e74c7a917113824a0);
        cache_frame_0f0dd0019052872e74c7a917113824a0 = NULL;
    }

    assertFrameObject(frame_0f0dd0019052872e74c7a917113824a0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_attr);
    par_attr = NULL;
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    par_method = NULL;
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

    Py_XDECREF(par_attr);
    par_attr = NULL;
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    par_method = NULL;
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



static PyObject *MAKE_FUNCTION_numpy$core$_add_newdocs$$$function__1_refer_to_array_attribute(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_add_newdocs$$$function__1_refer_to_array_attribute,
        mod_consts[209],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0f0dd0019052872e74c7a917113824a0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$_add_newdocs,
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

function_impl_code functable_numpy$core$_add_newdocs[] = {
    impl_numpy$core$_add_newdocs$$$function__1_refer_to_array_attribute,
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

    function_impl_code *current = functable_numpy$core$_add_newdocs;
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

    if (offset > sizeof(functable_numpy$core$_add_newdocs) || offset < 0) {
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
        functable_numpy$core$_add_newdocs[offset],
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
        module_numpy$core$_add_newdocs,
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
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "numpy.core._add_newdocs";

// Internal entry point for module code.
PyObject *modulecode_numpy$core$_add_newdocs(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_numpy$core$_add_newdocs = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 0x300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy.core._add_newdocs: Skipping module init, already done.\n");
#endif

        return module_numpy$core$_add_newdocs;
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
    PRINT_STRING("numpy.core._add_newdocs: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("numpy.core._add_newdocs: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("numpy.core._add_newdocs: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initnumpy$core$_add_newdocs\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_numpy$core$_add_newdocs = MODULE_DICT(module_numpy$core$_add_newdocs);

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
        moduledict_numpy$core$_add_newdocs,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$core$_add_newdocs,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$core$_add_newdocs,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$core$_add_newdocs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$core$_add_newdocs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$core$_add_newdocs);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_numpy$core$_add_newdocs);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_8baa49b39c388f56108927938a7b72fe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[4];
        UPDATE_STRING_DICT0(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[6];
        UPDATE_STRING_DICT0(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_8baa49b39c388f56108927938a7b72fe = MAKE_MODULE_FRAME(codeobj_8baa49b39c388f56108927938a7b72fe, module_numpy$core$_add_newdocs);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_8baa49b39c388f56108927938a7b72fe);
    assert(Py_REFCNT(frame_8baa49b39c388f56108927938a7b72fe) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[6];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[9], tmp_assattr_name_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[10], tmp_assattr_name_2);
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
        UPDATE_STRING_DICT0(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[12];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_numpy$core$_add_newdocs;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[13];
        tmp_level_name_1 = mod_consts[14];
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 12;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_numpy$core$_add_newdocs,
                mod_consts[15],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[15]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[16];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_numpy$core$_add_newdocs;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = mod_consts[17];
        tmp_level_name_2 = mod_consts[14];
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 13;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_numpy$core$_add_newdocs,
                mod_consts[18],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[18]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_5);
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 23;
        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, &PyTuple_GET_ITEM(mod_consts[19], 0));

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_call_result_2;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 68;
        tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_2, &PyTuple_GET_ITEM(mod_consts[20], 0));

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_call_result_3;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 83;
        tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_3, &PyTuple_GET_ITEM(mod_consts[21], 0));

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_call_result_4;
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 102;
        tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_4, &PyTuple_GET_ITEM(mod_consts[22], 0));

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_call_result_5;
        tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_5 == NULL)) {
            tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 121;
        tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_5, &PyTuple_GET_ITEM(mod_consts[23], 0));

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_call_result_6;
        tmp_called_name_6 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_6 == NULL)) {
            tmp_called_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 127;
        tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_6, &PyTuple_GET_ITEM(mod_consts[24], 0));

        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_call_result_7;
        tmp_called_name_7 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_7 == NULL)) {
            tmp_called_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 152;
        tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_7, &PyTuple_GET_ITEM(mod_consts[25], 0));

        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_name_8;
        PyObject *tmp_call_result_8;
        tmp_called_name_8 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_8 == NULL)) {
            tmp_called_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 420;
        tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_8, &PyTuple_GET_ITEM(mod_consts[26], 0));

        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_name_9;
        PyObject *tmp_call_result_9;
        tmp_called_name_9 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_9 == NULL)) {
            tmp_called_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 439;
        tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_9, &PyTuple_GET_ITEM(mod_consts[27], 0));

        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_name_10;
        PyObject *tmp_call_result_10;
        tmp_called_name_10 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_10 == NULL)) {
            tmp_called_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 446;
        tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_10, &PyTuple_GET_ITEM(mod_consts[28], 0));

        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_name_11;
        PyObject *tmp_call_result_11;
        tmp_called_name_11 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_11 == NULL)) {
            tmp_called_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 454;
        tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_11, &PyTuple_GET_ITEM(mod_consts[29], 0));

        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_name_12;
        PyObject *tmp_call_result_12;
        tmp_called_name_12 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_12 == NULL)) {
            tmp_called_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 464;
        tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_12, &PyTuple_GET_ITEM(mod_consts[30], 0));

        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_name_13;
        PyObject *tmp_call_result_13;
        tmp_called_name_13 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_13 == NULL)) {
            tmp_called_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 479;
        tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_13, &PyTuple_GET_ITEM(mod_consts[31], 0));

        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_name_14;
        PyObject *tmp_call_result_14;
        tmp_called_name_14 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_14 == NULL)) {
            tmp_called_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 488;
        tmp_call_result_14 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_14, &PyTuple_GET_ITEM(mod_consts[32], 0));

        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_name_15;
        PyObject *tmp_call_result_15;
        tmp_called_name_15 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_15 == NULL)) {
            tmp_called_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 497;
        tmp_call_result_15 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_15, &PyTuple_GET_ITEM(mod_consts[33], 0));

        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_name_16;
        PyObject *tmp_call_result_16;
        tmp_called_name_16 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_16 == NULL)) {
            tmp_called_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 505;
        tmp_call_result_16 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_16, &PyTuple_GET_ITEM(mod_consts[34], 0));

        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_name_17;
        PyObject *tmp_call_result_17;
        tmp_called_name_17 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_17 == NULL)) {
            tmp_called_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 565;
        tmp_call_result_17 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_17, &PyTuple_GET_ITEM(mod_consts[35], 0));

        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_name_18;
        PyObject *tmp_call_result_18;
        tmp_called_name_18 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_18 == NULL)) {
            tmp_called_name_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 587;
        tmp_call_result_18 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_18, &PyTuple_GET_ITEM(mod_consts[36], 0));

        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_name_19;
        PyObject *tmp_call_result_19;
        tmp_called_name_19 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_19 == NULL)) {
            tmp_called_name_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 637;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 637;
        tmp_call_result_19 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_19, &PyTuple_GET_ITEM(mod_consts[37], 0));

        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 637;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_called_name_20;
        PyObject *tmp_call_result_20;
        tmp_called_name_20 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_20 == NULL)) {
            tmp_called_name_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 655;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 655;
        tmp_call_result_20 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_20, &PyTuple_GET_ITEM(mod_consts[38], 0));

        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 655;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_called_name_21;
        PyObject *tmp_call_result_21;
        tmp_called_name_21 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_21 == NULL)) {
            tmp_called_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 677;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 677;
        tmp_call_result_21 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_21, &PyTuple_GET_ITEM(mod_consts[39], 0));

        if (tmp_call_result_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 677;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_called_name_22;
        PyObject *tmp_call_result_22;
        tmp_called_name_22 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_22 == NULL)) {
            tmp_called_name_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 693;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 693;
        tmp_call_result_22 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_22, &PyTuple_GET_ITEM(mod_consts[40], 0));

        if (tmp_call_result_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 693;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_called_name_23;
        PyObject *tmp_call_result_23;
        tmp_called_name_23 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_23 == NULL)) {
            tmp_called_name_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 708;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 708;
        tmp_call_result_23 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_23, &PyTuple_GET_ITEM(mod_consts[41], 0));

        if (tmp_call_result_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 708;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_called_name_24;
        PyObject *tmp_call_result_24;
        tmp_called_name_24 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_24 == NULL)) {
            tmp_called_name_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 722;
        tmp_call_result_24 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_24, &PyTuple_GET_ITEM(mod_consts[42], 0));

        if (tmp_call_result_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_24);
    }
    {
        PyObject *tmp_called_name_25;
        PyObject *tmp_call_result_25;
        tmp_called_name_25 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_25 == NULL)) {
            tmp_called_name_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 736;
        tmp_call_result_25 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_25, &PyTuple_GET_ITEM(mod_consts[43], 0));

        if (tmp_call_result_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_25);
    }
    {
        PyObject *tmp_called_name_26;
        PyObject *tmp_call_result_26;
        tmp_called_name_26 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_26 == NULL)) {
            tmp_called_name_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 750;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 750;
        tmp_call_result_26 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_26, &PyTuple_GET_ITEM(mod_consts[44], 0));

        if (tmp_call_result_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 750;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_26);
    }
    {
        PyObject *tmp_called_name_27;
        PyObject *tmp_call_result_27;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_name_28;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_called_name_27 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_27 == NULL)) {
            tmp_called_name_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 787;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = mod_consts[45];
        tmp_args_element_name_2 = mod_consts[46];
        tmp_expression_name_1 = mod_consts[47];
        tmp_called_name_28 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[48]);
        assert(!(tmp_called_name_28 == NULL));
        tmp_args_element_name_4 = mod_consts[49];
        tmp_args_element_name_5 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_args_element_name_5 == NULL)) {
            tmp_args_element_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_28);

            exception_lineno = 904;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 788;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_28, call_args);
        }

        Py_DECREF(tmp_called_name_28);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 788;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 787;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_call_result_27 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_27, call_args);
        }

        Py_DECREF(tmp_args_element_name_3);
        if (tmp_call_result_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 787;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_27);
    }
    {
        PyObject *tmp_called_name_29;
        PyObject *tmp_call_result_28;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_called_name_30;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        tmp_called_name_29 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_29 == NULL)) {
            tmp_called_name_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 907;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = mod_consts[45];
        tmp_args_element_name_7 = mod_consts[50];
        tmp_expression_name_2 = mod_consts[51];
        tmp_called_name_30 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[48]);
        assert(!(tmp_called_name_30 == NULL));
        tmp_args_element_name_9 = mod_consts[49];
        tmp_args_element_name_10 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_args_element_name_10 == NULL)) {
            tmp_args_element_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_args_element_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_30);

            exception_lineno = 961;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 908;
        {
            PyObject *call_args[] = {tmp_args_element_name_9, tmp_args_element_name_10};
            tmp_args_element_name_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_30, call_args);
        }

        Py_DECREF(tmp_called_name_30);
        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 908;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 907;
        {
            PyObject *call_args[] = {tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8};
            tmp_call_result_28 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_29, call_args);
        }

        Py_DECREF(tmp_args_element_name_8);
        if (tmp_call_result_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 907;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_28);
    }
    {
        PyObject *tmp_called_name_31;
        PyObject *tmp_call_result_29;
        tmp_called_name_31 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_31 == NULL)) {
            tmp_called_name_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 964;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 964;
        tmp_call_result_29 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_31, &PyTuple_GET_ITEM(mod_consts[52], 0));

        if (tmp_call_result_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 964;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_29);
    }
    {
        PyObject *tmp_called_name_32;
        PyObject *tmp_call_result_30;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_called_name_33;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        tmp_called_name_32 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_32 == NULL)) {
            tmp_called_name_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 978;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_11 = mod_consts[45];
        tmp_args_element_name_12 = mod_consts[53];
        tmp_expression_name_3 = mod_consts[54];
        tmp_called_name_33 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[48]);
        assert(!(tmp_called_name_33 == NULL));
        tmp_args_element_name_14 = mod_consts[49];
        tmp_args_element_name_15 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_args_element_name_15 == NULL)) {
            tmp_args_element_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_args_element_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_33);

            exception_lineno = 1034;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 979;
        {
            PyObject *call_args[] = {tmp_args_element_name_14, tmp_args_element_name_15};
            tmp_args_element_name_13 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_33, call_args);
        }

        Py_DECREF(tmp_called_name_33);
        if (tmp_args_element_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 979;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 978;
        {
            PyObject *call_args[] = {tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13};
            tmp_call_result_30 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_32, call_args);
        }

        Py_DECREF(tmp_args_element_name_13);
        if (tmp_call_result_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 978;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_30);
    }
    {
        PyObject *tmp_called_name_34;
        PyObject *tmp_call_result_31;
        tmp_called_name_34 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_34 == NULL)) {
            tmp_called_name_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1037;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 1037;
        tmp_call_result_31 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_34, &PyTuple_GET_ITEM(mod_consts[55], 0));

        if (tmp_call_result_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1037;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_31);
    }
    {
        PyObject *tmp_called_name_35;
        PyObject *tmp_call_result_32;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_called_name_36;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_args_element_name_20;
        tmp_called_name_35 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_35 == NULL)) {
            tmp_called_name_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1045;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_16 = mod_consts[45];
        tmp_args_element_name_17 = mod_consts[56];
        tmp_expression_name_4 = mod_consts[57];
        tmp_called_name_36 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[48]);
        assert(!(tmp_called_name_36 == NULL));
        tmp_args_element_name_19 = mod_consts[49];
        tmp_args_element_name_20 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_args_element_name_20 == NULL)) {
            tmp_args_element_name_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_args_element_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_36);

            exception_lineno = 1108;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 1046;
        {
            PyObject *call_args[] = {tmp_args_element_name_19, tmp_args_element_name_20};
            tmp_args_element_name_18 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_36, call_args);
        }

        Py_DECREF(tmp_called_name_36);
        if (tmp_args_element_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1046;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 1045;
        {
            PyObject *call_args[] = {tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18};
            tmp_call_result_32 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_35, call_args);
        }

        Py_DECREF(tmp_args_element_name_18);
        if (tmp_call_result_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1045;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_32);
    }
    {
        PyObject *tmp_called_name_37;
        PyObject *tmp_call_result_33;
        tmp_called_name_37 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_37 == NULL)) {
            tmp_called_name_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1111;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 1111;
        tmp_call_result_33 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_37, &PyTuple_GET_ITEM(mod_consts[58], 0));

        if (tmp_call_result_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1111;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_33);
    }
    {
        PyObject *tmp_called_name_38;
        PyObject *tmp_call_result_34;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_called_name_39;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_args_element_name_25;
        tmp_called_name_38 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_38 == NULL)) {
            tmp_called_name_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1148;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_21 = mod_consts[45];
        tmp_args_element_name_22 = mod_consts[59];
        tmp_expression_name_5 = mod_consts[60];
        tmp_called_name_39 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[48]);
        assert(!(tmp_called_name_39 == NULL));
        tmp_args_element_name_24 = mod_consts[49];
        tmp_args_element_name_25 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_args_element_name_25 == NULL)) {
            tmp_args_element_name_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_args_element_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_39);

            exception_lineno = 1185;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 1149;
        {
            PyObject *call_args[] = {tmp_args_element_name_24, tmp_args_element_name_25};
            tmp_args_element_name_23 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_39, call_args);
        }

        Py_DECREF(tmp_called_name_39);
        if (tmp_args_element_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1149;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 1148;
        {
            PyObject *call_args[] = {tmp_args_element_name_21, tmp_args_element_name_22, tmp_args_element_name_23};
            tmp_call_result_34 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_38, call_args);
        }

        Py_DECREF(tmp_args_element_name_23);
        if (tmp_call_result_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1148;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_34);
    }
    {
        PyObject *tmp_called_name_40;
        PyObject *tmp_call_result_35;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_called_name_41;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_args_element_name_30;
        tmp_called_name_40 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_40 == NULL)) {
            tmp_called_name_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1188;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_26 = mod_consts[45];
        tmp_args_element_name_27 = mod_consts[61];
        tmp_expression_name_6 = mod_consts[62];
        tmp_called_name_41 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[48]);
        assert(!(tmp_called_name_41 == NULL));
        tmp_args_element_name_29 = mod_consts[49];
        tmp_args_element_name_30 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_args_element_name_30 == NULL)) {
            tmp_args_element_name_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_args_element_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_41);

            exception_lineno = 1280;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 1189;
        {
            PyObject *call_args[] = {tmp_args_element_name_29, tmp_args_element_name_30};
            tmp_args_element_name_28 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_41, call_args);
        }

        Py_DECREF(tmp_called_name_41);
        if (tmp_args_element_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1189;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 1188;
        {
            PyObject *call_args[] = {tmp_args_element_name_26, tmp_args_element_name_27, tmp_args_element_name_28};
            tmp_call_result_35 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_40, call_args);
        }

        Py_DECREF(tmp_args_element_name_28);
        if (tmp_call_result_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1188;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_35);
    }
    {
        PyObject *tmp_called_name_42;
        PyObject *tmp_call_result_36;
        PyObject *tmp_args_element_name_31;
        PyObject *tmp_args_element_name_32;
        PyObject *tmp_args_element_name_33;
        PyObject *tmp_called_name_43;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_args_element_name_34;
        PyObject *tmp_args_element_name_35;
        tmp_called_name_42 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_42 == NULL)) {
            tmp_called_name_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1283;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_31 = mod_consts[45];
        tmp_args_element_name_32 = mod_consts[63];
        tmp_expression_name_7 = mod_consts[64];
        tmp_called_name_43 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[48]);
        assert(!(tmp_called_name_43 == NULL));
        tmp_args_element_name_34 = mod_consts[49];
        tmp_args_element_name_35 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_args_element_name_35 == NULL)) {
            tmp_args_element_name_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_args_element_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_43);

            exception_lineno = 1328;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 1284;
        {
            PyObject *call_args[] = {tmp_args_element_name_34, tmp_args_element_name_35};
            tmp_args_element_name_33 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_43, call_args);
        }

        Py_DECREF(tmp_called_name_43);
        if (tmp_args_element_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1284;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 1283;
        {
            PyObject *call_args[] = {tmp_args_element_name_31, tmp_args_element_name_32, tmp_args_element_name_33};
            tmp_call_result_36 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_42, call_args);
        }

        Py_DECREF(tmp_args_element_name_33);
        if (tmp_call_result_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1283;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_36);
    }
    {
        PyObject *tmp_called_name_44;
        PyObject *tmp_call_result_37;
        tmp_called_name_44 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_44 == NULL)) {
            tmp_called_name_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1331;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 1331;
        tmp_call_result_37 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_44, &PyTuple_GET_ITEM(mod_consts[65], 0));

        if (tmp_call_result_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1331;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_37);
    }
    {
        PyObject *tmp_called_name_45;
        PyObject *tmp_call_result_38;
        tmp_called_name_45 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_45 == NULL)) {
            tmp_called_name_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1334;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 1334;
        tmp_call_result_38 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_45, &PyTuple_GET_ITEM(mod_consts[66], 0));

        if (tmp_call_result_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1334;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_38);
    }
    {
        PyObject *tmp_called_name_46;
        PyObject *tmp_call_result_39;
        PyObject *tmp_args_element_name_36;
        PyObject *tmp_args_element_name_37;
        PyObject *tmp_args_element_name_38;
        PyObject *tmp_called_name_47;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_args_element_name_39;
        PyObject *tmp_args_element_name_40;
        tmp_called_name_46 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_46 == NULL)) {
            tmp_called_name_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1337;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_36 = mod_consts[45];
        tmp_args_element_name_37 = mod_consts[67];
        tmp_expression_name_8 = mod_consts[68];
        tmp_called_name_47 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[48]);
        assert(!(tmp_called_name_47 == NULL));
        tmp_args_element_name_39 = mod_consts[49];
        tmp_args_element_name_40 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_args_element_name_40 == NULL)) {
            tmp_args_element_name_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_args_element_name_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_47);

            exception_lineno = 1401;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 1338;
        {
            PyObject *call_args[] = {tmp_args_element_name_39, tmp_args_element_name_40};
            tmp_args_element_name_38 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_47, call_args);
        }

        Py_DECREF(tmp_called_name_47);
        if (tmp_args_element_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1338;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 1337;
        {
            PyObject *call_args[] = {tmp_args_element_name_36, tmp_args_element_name_37, tmp_args_element_name_38};
            tmp_call_result_39 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_46, call_args);
        }

        Py_DECREF(tmp_args_element_name_38);
        if (tmp_call_result_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1337;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_39);
    }
    {
        PyObject *tmp_called_name_48;
        PyObject *tmp_call_result_40;
        tmp_called_name_48 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_48 == NULL)) {
            tmp_called_name_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1404;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 1404;
        tmp_call_result_40 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_48, &PyTuple_GET_ITEM(mod_consts[69], 0));

        if (tmp_call_result_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1404;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_40);
    }
    {
        PyObject *tmp_called_name_49;
        PyObject *tmp_call_result_41;
        tmp_called_name_49 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_49 == NULL)) {
            tmp_called_name_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1411;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 1411;
        tmp_call_result_41 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_49, &PyTuple_GET_ITEM(mod_consts[70], 0));

        if (tmp_call_result_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1411;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_41);
    }
    {
        PyObject *tmp_called_name_50;
        PyObject *tmp_call_result_42;
        tmp_called_name_50 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_50 == NULL)) {
            tmp_called_name_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1419;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 1419;
        tmp_call_result_42 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_50, &PyTuple_GET_ITEM(mod_consts[71], 0));

        if (tmp_call_result_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1419;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_42);
    }
    {
        PyObject *tmp_called_name_51;
        PyObject *tmp_call_result_43;
        tmp_called_name_51 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_51 == NULL)) {
            tmp_called_name_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1427;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 1427;
        tmp_call_result_43 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_51, &PyTuple_GET_ITEM(mod_consts[72], 0));

        if (tmp_call_result_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1427;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_43);
    }
    {
        PyObject *tmp_called_name_52;
        PyObject *tmp_call_result_44;
        tmp_called_name_52 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_52 == NULL)) {
            tmp_called_name_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1477;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 1477;
        tmp_call_result_44 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_52, &PyTuple_GET_ITEM(mod_consts[73], 0));

        if (tmp_call_result_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1477;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_44);
    }
    {
        PyObject *tmp_called_name_53;
        PyObject *tmp_call_result_45;
        tmp_called_name_53 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_53 == NULL)) {
            tmp_called_name_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1537;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 1537;
        tmp_call_result_45 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_53, &PyTuple_GET_ITEM(mod_consts[74], 0));

        if (tmp_call_result_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1537;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_45);
    }
    {
        PyObject *tmp_called_name_54;
        PyObject *tmp_call_result_46;
        tmp_called_name_54 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_54 == NULL)) {
            tmp_called_name_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1856;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 1856;
        tmp_call_result_46 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_54, &PyTuple_GET_ITEM(mod_consts[75], 0));

        if (tmp_call_result_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1856;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_46);
    }
    {
        PyObject *tmp_called_name_55;
        PyObject *tmp_call_result_47;
        tmp_called_name_55 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_55 == NULL)) {
            tmp_called_name_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1985;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 1985;
        tmp_call_result_47 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_55, &PyTuple_GET_ITEM(mod_consts[76], 0));

        if (tmp_call_result_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1985;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_47);
    }
    {
        PyObject *tmp_called_name_56;
        PyObject *tmp_call_result_48;
        tmp_called_name_56 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_56 == NULL)) {
            tmp_called_name_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1989;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 1989;
        tmp_call_result_48 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_56, &PyTuple_GET_ITEM(mod_consts[77], 0));

        if (tmp_call_result_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1989;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_48);
    }
    {
        PyObject *tmp_called_name_57;
        PyObject *tmp_call_result_49;
        tmp_called_name_57 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_57 == NULL)) {
            tmp_called_name_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1993;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 1993;
        tmp_call_result_49 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_57, &PyTuple_GET_ITEM(mod_consts[78], 0));

        if (tmp_call_result_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1993;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_49);
    }
    {
        PyObject *tmp_called_name_58;
        PyObject *tmp_call_result_50;
        tmp_called_name_58 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_58 == NULL)) {
            tmp_called_name_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1997;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 1997;
        tmp_call_result_50 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_58, &PyTuple_GET_ITEM(mod_consts[79], 0));

        if (tmp_call_result_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1997;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_50);
    }
    {
        PyObject *tmp_called_name_59;
        PyObject *tmp_call_result_51;
        tmp_called_name_59 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_59 == NULL)) {
            tmp_called_name_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2001;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2001;
        tmp_call_result_51 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_59, &PyTuple_GET_ITEM(mod_consts[80], 0));

        if (tmp_call_result_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2001;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_51);
    }
    {
        PyObject *tmp_called_name_60;
        PyObject *tmp_call_result_52;
        tmp_called_name_60 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_60 == NULL)) {
            tmp_called_name_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2022;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2022;
        tmp_call_result_52 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_60, &PyTuple_GET_ITEM(mod_consts[81], 0));

        if (tmp_call_result_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2022;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_52);
    }
    {
        PyObject *tmp_called_name_61;
        PyObject *tmp_call_result_53;
        tmp_called_name_61 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_61 == NULL)) {
            tmp_called_name_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2099;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2099;
        tmp_call_result_53 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_61, &PyTuple_GET_ITEM(mod_consts[82], 0));

        if (tmp_call_result_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2099;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_53);
    }
    {
        PyObject *tmp_called_name_62;
        PyObject *tmp_call_result_54;
        tmp_called_name_62 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_62 == NULL)) {
            tmp_called_name_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2103;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2103;
        tmp_call_result_54 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_62, &PyTuple_GET_ITEM(mod_consts[83], 0));

        if (tmp_call_result_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2103;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_54);
    }
    {
        PyObject *tmp_called_name_63;
        PyObject *tmp_call_result_55;
        tmp_called_name_63 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_63 == NULL)) {
            tmp_called_name_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2132;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2132;
        tmp_call_result_55 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_63, &PyTuple_GET_ITEM(mod_consts[84], 0));

        if (tmp_call_result_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2132;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_55);
    }
    {
        PyObject *tmp_called_name_64;
        PyObject *tmp_call_result_56;
        tmp_called_name_64 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_64 == NULL)) {
            tmp_called_name_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2147;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2147;
        tmp_call_result_56 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_64, &PyTuple_GET_ITEM(mod_consts[85], 0));

        if (tmp_call_result_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2147;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_56);
    }
    {
        PyObject *tmp_called_name_65;
        PyObject *tmp_call_result_57;
        tmp_called_name_65 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_65 == NULL)) {
            tmp_called_name_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2163;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2163;
        tmp_call_result_57 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_65, &PyTuple_GET_ITEM(mod_consts[86], 0));

        if (tmp_call_result_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2163;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_57);
    }
    {
        PyObject *tmp_called_name_66;
        PyObject *tmp_call_result_58;
        tmp_called_name_66 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_66 == NULL)) {
            tmp_called_name_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2240;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2240;
        tmp_call_result_58 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_66, &PyTuple_GET_ITEM(mod_consts[87], 0));

        if (tmp_call_result_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2240;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_58);
    }
    {
        PyObject *tmp_called_name_67;
        PyObject *tmp_call_result_59;
        tmp_called_name_67 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_67 == NULL)) {
            tmp_called_name_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2282;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2282;
        tmp_call_result_59 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_67, &PyTuple_GET_ITEM(mod_consts[88], 0));

        if (tmp_call_result_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2282;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_59);
    }
    {
        PyObject *tmp_called_name_68;
        PyObject *tmp_call_result_60;
        tmp_called_name_68 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_68 == NULL)) {
            tmp_called_name_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2302;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2302;
        tmp_call_result_60 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_68, &PyTuple_GET_ITEM(mod_consts[89], 0));

        if (tmp_call_result_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2302;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_60);
    }
    {
        PyObject *tmp_called_name_69;
        PyObject *tmp_call_result_61;
        tmp_called_name_69 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_69 == NULL)) {
            tmp_called_name_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2318;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2318;
        tmp_call_result_61 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_69, &PyTuple_GET_ITEM(mod_consts[90], 0));

        if (tmp_call_result_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2318;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_61);
    }
    {
        PyObject *tmp_called_name_70;
        PyObject *tmp_call_result_62;
        tmp_called_name_70 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_70 == NULL)) {
            tmp_called_name_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2337;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2337;
        tmp_call_result_62 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_70, &PyTuple_GET_ITEM(mod_consts[91], 0));

        if (tmp_call_result_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2337;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_62);
    }
    {
        PyObject *tmp_called_name_71;
        PyObject *tmp_call_result_63;
        tmp_called_name_71 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_71 == NULL)) {
            tmp_called_name_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2379;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2379;
        tmp_call_result_63 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_71, &PyTuple_GET_ITEM(mod_consts[92], 0));

        if (tmp_call_result_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2379;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_63);
    }
    {
        PyObject *tmp_called_name_72;
        PyObject *tmp_call_result_64;
        tmp_called_name_72 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_72 == NULL)) {
            tmp_called_name_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2405;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2405;
        tmp_call_result_64 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_72, &PyTuple_GET_ITEM(mod_consts[93], 0));

        if (tmp_call_result_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2405;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_64);
    }
    {
        PyObject *tmp_called_name_73;
        PyObject *tmp_call_result_65;
        tmp_called_name_73 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_73 == NULL)) {
            tmp_called_name_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2467;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2467;
        tmp_call_result_65 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_73, &PyTuple_GET_ITEM(mod_consts[94], 0));

        if (tmp_call_result_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2467;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_65);
    }
    {
        PyObject *tmp_called_name_74;
        PyObject *tmp_call_result_66;
        tmp_called_name_74 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_74 == NULL)) {
            tmp_called_name_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2502;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2502;
        tmp_call_result_66 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_74, &PyTuple_GET_ITEM(mod_consts[95], 0));

        if (tmp_call_result_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2502;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_66);
    }
    {
        PyObject *tmp_called_name_75;
        PyObject *tmp_call_result_67;
        tmp_called_name_75 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_75 == NULL)) {
            tmp_called_name_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2512;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2512;
        tmp_call_result_67 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_75, &PyTuple_GET_ITEM(mod_consts[96], 0));

        if (tmp_call_result_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2512;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_67);
    }
    {
        PyObject *tmp_called_name_76;
        PyObject *tmp_call_result_68;
        tmp_called_name_76 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_76 == NULL)) {
            tmp_called_name_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2518;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2518;
        tmp_call_result_68 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_76, &PyTuple_GET_ITEM(mod_consts[97], 0));

        if (tmp_call_result_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2518;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_68);
    }
    {
        PyObject *tmp_called_name_77;
        PyObject *tmp_call_result_69;
        tmp_called_name_77 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_77 == NULL)) {
            tmp_called_name_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2524;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2524;
        tmp_call_result_69 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_77, &PyTuple_GET_ITEM(mod_consts[98], 0));

        if (tmp_call_result_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2524;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_69);
    }
    {
        PyObject *tmp_called_name_78;
        PyObject *tmp_call_result_70;
        tmp_called_name_78 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_78 == NULL)) {
            tmp_called_name_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2534;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2534;
        tmp_call_result_70 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_78, &PyTuple_GET_ITEM(mod_consts[99], 0));

        if (tmp_call_result_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2534;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_70);
    }
    {
        PyObject *tmp_called_name_79;
        PyObject *tmp_call_result_71;
        tmp_called_name_79 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_79 == NULL)) {
            tmp_called_name_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2542;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2542;
        tmp_call_result_71 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_79, &PyTuple_GET_ITEM(mod_consts[100], 0));

        if (tmp_call_result_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2542;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_71);
    }
    {
        PyObject *tmp_called_name_80;
        PyObject *tmp_call_result_72;
        tmp_called_name_80 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_80 == NULL)) {
            tmp_called_name_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2550;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2550;
        tmp_call_result_72 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_80, &PyTuple_GET_ITEM(mod_consts[101], 0));

        if (tmp_call_result_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2550;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_72);
    }
    {
        PyObject *tmp_called_name_81;
        PyObject *tmp_call_result_73;
        tmp_called_name_81 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_81 == NULL)) {
            tmp_called_name_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2571;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2571;
        tmp_call_result_73 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_81, &PyTuple_GET_ITEM(mod_consts[102], 0));

        if (tmp_call_result_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2571;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_73);
    }
    {
        PyObject *tmp_called_name_82;
        PyObject *tmp_call_result_74;
        tmp_called_name_82 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_82 == NULL)) {
            tmp_called_name_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2586;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2586;
        tmp_call_result_74 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_82, &PyTuple_GET_ITEM(mod_consts[103], 0));

        if (tmp_call_result_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2586;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_74);
    }
    {
        PyObject *tmp_called_name_83;
        PyObject *tmp_call_result_75;
        tmp_called_name_83 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_83 == NULL)) {
            tmp_called_name_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2601;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2601;
        tmp_call_result_75 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_83, &PyTuple_GET_ITEM(mod_consts[104], 0));

        if (tmp_call_result_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2601;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_75);
    }
    {
        PyObject *tmp_called_name_84;
        PyObject *tmp_call_result_76;
        tmp_called_name_84 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_84 == NULL)) {
            tmp_called_name_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2616;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2616;
        tmp_call_result_76 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_84, &PyTuple_GET_ITEM(mod_consts[105], 0));

        if (tmp_call_result_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2616;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_76);
    }
    {
        PyObject *tmp_called_name_85;
        PyObject *tmp_call_result_77;
        tmp_called_name_85 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_85 == NULL)) {
            tmp_called_name_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2631;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2631;
        tmp_call_result_77 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_85, &PyTuple_GET_ITEM(mod_consts[106], 0));

        if (tmp_call_result_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2631;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_77);
    }
    {
        PyObject *tmp_called_name_86;
        PyObject *tmp_call_result_78;
        tmp_called_name_86 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_86 == NULL)) {
            tmp_called_name_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2646;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2646;
        tmp_call_result_78 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_86, &PyTuple_GET_ITEM(mod_consts[107], 0));

        if (tmp_call_result_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2646;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_78);
    }
    {
        PyObject *tmp_called_name_87;
        PyObject *tmp_call_result_79;
        tmp_called_name_87 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_87 == NULL)) {
            tmp_called_name_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2663;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2663;
        tmp_call_result_79 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_87, &PyTuple_GET_ITEM(mod_consts[108], 0));

        if (tmp_call_result_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2663;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_79);
    }
    {
        PyObject *tmp_called_name_88;
        PyObject *tmp_call_result_80;
        tmp_called_name_88 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_88 == NULL)) {
            tmp_called_name_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2737;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2737;
        tmp_call_result_80 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_88, &PyTuple_GET_ITEM(mod_consts[109], 0));

        if (tmp_call_result_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2737;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_80);
    }
    {
        PyObject *tmp_called_name_89;
        PyObject *tmp_call_result_81;
        tmp_called_name_89 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_89 == NULL)) {
            tmp_called_name_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2791;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2791;
        tmp_call_result_81 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_89, &PyTuple_GET_ITEM(mod_consts[110], 0));

        if (tmp_call_result_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2791;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_81);
    }
    {
        PyObject *tmp_called_name_90;
        PyObject *tmp_call_result_82;
        tmp_called_name_90 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_90 == NULL)) {
            tmp_called_name_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2806;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2806;
        tmp_call_result_82 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_90, &PyTuple_GET_ITEM(mod_consts[111], 0));

        if (tmp_call_result_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2806;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_82);
    }
    {
        PyObject *tmp_called_name_91;
        PyObject *tmp_call_result_83;
        tmp_called_name_91 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_91 == NULL)) {
            tmp_called_name_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2822;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2822;
        tmp_call_result_83 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_91, &PyTuple_GET_ITEM(mod_consts[112], 0));

        if (tmp_call_result_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2822;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_83);
    }
    {
        PyObject *tmp_called_name_92;
        PyObject *tmp_call_result_84;
        tmp_called_name_92 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_92 == NULL)) {
            tmp_called_name_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2837;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2837;
        tmp_call_result_84 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_92, &PyTuple_GET_ITEM(mod_consts[113], 0));

        if (tmp_call_result_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2837;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_84);
    }
    {
        PyObject *tmp_called_name_93;
        PyObject *tmp_call_result_85;
        tmp_called_name_93 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_93 == NULL)) {
            tmp_called_name_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2852;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2852;
        tmp_call_result_85 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_93, &PyTuple_GET_ITEM(mod_consts[114], 0));

        if (tmp_call_result_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2852;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_85);
    }
    {
        PyObject *tmp_called_name_94;
        PyObject *tmp_call_result_86;
        tmp_called_name_94 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_94 == NULL)) {
            tmp_called_name_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2867;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2867;
        tmp_call_result_86 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_94, &PyTuple_GET_ITEM(mod_consts[115], 0));

        if (tmp_call_result_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2867;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_86);
    }
    {
        PyObject *tmp_called_name_95;
        PyObject *tmp_call_result_87;
        tmp_called_name_95 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_95 == NULL)) {
            tmp_called_name_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2910;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2910;
        tmp_call_result_87 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_95, &PyTuple_GET_ITEM(mod_consts[116], 0));

        if (tmp_call_result_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2910;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_87);
    }
    {
        PyObject *tmp_called_name_96;
        PyObject *tmp_call_result_88;
        tmp_called_name_96 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_96 == NULL)) {
            tmp_called_name_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2925;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2925;
        tmp_call_result_88 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_96, &PyTuple_GET_ITEM(mod_consts[117], 0));

        if (tmp_call_result_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2925;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_88);
    }
    {
        PyObject *tmp_called_name_97;
        PyObject *tmp_call_result_89;
        tmp_called_name_97 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_97 == NULL)) {
            tmp_called_name_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2940;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2940;
        tmp_call_result_89 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_97, &PyTuple_GET_ITEM(mod_consts[118], 0));

        if (tmp_call_result_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2940;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_89);
    }
    {
        PyObject *tmp_called_name_98;
        PyObject *tmp_call_result_90;
        tmp_called_name_98 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_98 == NULL)) {
            tmp_called_name_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2957;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2957;
        tmp_call_result_90 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_98, &PyTuple_GET_ITEM(mod_consts[119], 0));

        if (tmp_call_result_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2957;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_90);
    }
    {
        PyObject *tmp_called_name_99;
        PyObject *tmp_call_result_91;
        tmp_called_name_99 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_99 == NULL)) {
            tmp_called_name_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2986;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 2986;
        tmp_call_result_91 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_99, &PyTuple_GET_ITEM(mod_consts[120], 0));

        if (tmp_call_result_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2986;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_91);
    }
    {
        PyObject *tmp_called_name_100;
        PyObject *tmp_call_result_92;
        tmp_called_name_100 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_100 == NULL)) {
            tmp_called_name_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3003;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 3003;
        tmp_call_result_92 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_100, &PyTuple_GET_ITEM(mod_consts[121], 0));

        if (tmp_call_result_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3003;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_92);
    }
    {
        PyObject *tmp_called_name_101;
        PyObject *tmp_call_result_93;
        tmp_called_name_101 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_101 == NULL)) {
            tmp_called_name_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3017;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 3017;
        tmp_call_result_93 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_101, &PyTuple_GET_ITEM(mod_consts[122], 0));

        if (tmp_call_result_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3017;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_93);
    }
    {
        PyObject *tmp_called_name_102;
        PyObject *tmp_call_result_94;
        tmp_called_name_102 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_102 == NULL)) {
            tmp_called_name_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3042;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 3042;
        tmp_call_result_94 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_102, &PyTuple_GET_ITEM(mod_consts[123], 0));

        if (tmp_call_result_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3042;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_94);
    }
    {
        PyObject *tmp_called_name_103;
        PyObject *tmp_call_result_95;
        tmp_called_name_103 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_103 == NULL)) {
            tmp_called_name_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3080;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 3080;
        tmp_call_result_95 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_103, &PyTuple_GET_ITEM(mod_consts[124], 0));

        if (tmp_call_result_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3080;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_95);
    }
    {
        PyObject *tmp_called_name_104;
        PyObject *tmp_call_result_96;
        tmp_called_name_104 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_104 == NULL)) {
            tmp_called_name_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3122;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 3122;
        tmp_call_result_96 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_104, &PyTuple_GET_ITEM(mod_consts[125], 0));

        if (tmp_call_result_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3122;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_96);
    }
    {
        PyObject *tmp_called_name_105;
        PyObject *tmp_call_result_97;
        tmp_called_name_105 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_105 == NULL)) {
            tmp_called_name_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3181;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 3181;
        tmp_call_result_97 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_105, &PyTuple_GET_ITEM(mod_consts[126], 0));

        if (tmp_call_result_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3181;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_97);
    }
    {
        PyObject *tmp_called_name_106;
        PyObject *tmp_call_result_98;
        tmp_called_name_106 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_106 == NULL)) {
            tmp_called_name_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3228;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 3228;
        tmp_call_result_98 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_106, &PyTuple_GET_ITEM(mod_consts[127], 0));

        if (tmp_call_result_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3228;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_98);
    }
    {
        PyObject *tmp_called_name_107;
        PyObject *tmp_call_result_99;
        tmp_called_name_107 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_107 == NULL)) {
            tmp_called_name_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3243;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 3243;
        tmp_call_result_99 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_107, &PyTuple_GET_ITEM(mod_consts[128], 0));

        if (tmp_call_result_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3243;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_99);
    }
    {
        PyObject *tmp_called_name_108;
        PyObject *tmp_call_result_100;
        tmp_called_name_108 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_108 == NULL)) {
            tmp_called_name_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3258;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 3258;
        tmp_call_result_100 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_108, &PyTuple_GET_ITEM(mod_consts[129], 0));

        if (tmp_call_result_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3258;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_100);
    }
    {
        PyObject *tmp_called_name_109;
        PyObject *tmp_call_result_101;
        tmp_called_name_109 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_109 == NULL)) {
            tmp_called_name_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3273;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 3273;
        tmp_call_result_101 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_109, &PyTuple_GET_ITEM(mod_consts[130], 0));

        if (tmp_call_result_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3273;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_101);
    }
    {
        PyObject *tmp_called_name_110;
        PyObject *tmp_call_result_102;
        tmp_called_name_110 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_110 == NULL)) {
            tmp_called_name_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3313;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 3313;
        tmp_call_result_102 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_110, &PyTuple_GET_ITEM(mod_consts[131], 0));

        if (tmp_call_result_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3313;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_102);
    }
    {
        PyObject *tmp_called_name_111;
        PyObject *tmp_call_result_103;
        tmp_called_name_111 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_111 == NULL)) {
            tmp_called_name_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3328;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 3328;
        tmp_call_result_103 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_111, &PyTuple_GET_ITEM(mod_consts[132], 0));

        if (tmp_call_result_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3328;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_103);
    }
    {
        PyObject *tmp_called_name_112;
        PyObject *tmp_call_result_104;
        tmp_called_name_112 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_112 == NULL)) {
            tmp_called_name_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3343;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 3343;
        tmp_call_result_104 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_112, &PyTuple_GET_ITEM(mod_consts[133], 0));

        if (tmp_call_result_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3343;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_104);
    }
    {
        PyObject *tmp_called_name_113;
        PyObject *tmp_call_result_105;
        tmp_called_name_113 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_113 == NULL)) {
            tmp_called_name_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3358;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 3358;
        tmp_call_result_105 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_113, &PyTuple_GET_ITEM(mod_consts[134], 0));

        if (tmp_call_result_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3358;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_105);
    }
    {
        PyObject *tmp_called_name_114;
        PyObject *tmp_call_result_106;
        tmp_called_name_114 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_114 == NULL)) {
            tmp_called_name_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3373;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 3373;
        tmp_call_result_106 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_114, &PyTuple_GET_ITEM(mod_consts[135], 0));

        if (tmp_call_result_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3373;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_106);
    }
    {
        PyObject *tmp_called_name_115;
        PyObject *tmp_call_result_107;
        tmp_called_name_115 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_115 == NULL)) {
            tmp_called_name_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3390;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 3390;
        tmp_call_result_107 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_115, &PyTuple_GET_ITEM(mod_consts[136], 0));

        if (tmp_call_result_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3390;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_107);
    }
    {
        PyObject *tmp_called_name_116;
        PyObject *tmp_call_result_108;
        tmp_called_name_116 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_116 == NULL)) {
            tmp_called_name_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3405;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 3405;
        tmp_call_result_108 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_116, &PyTuple_GET_ITEM(mod_consts[137], 0));

        if (tmp_call_result_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3405;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_108);
    }
    {
        PyObject *tmp_called_name_117;
        PyObject *tmp_call_result_109;
        tmp_called_name_117 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_117 == NULL)) {
            tmp_called_name_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3427;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 3427;
        tmp_call_result_109 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_117, &PyTuple_GET_ITEM(mod_consts[138], 0));

        if (tmp_call_result_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3427;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_109);
    }
    {
        PyObject *tmp_called_name_118;
        PyObject *tmp_call_result_110;
        tmp_called_name_118 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_118 == NULL)) {
            tmp_called_name_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3519;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 3519;
        tmp_call_result_110 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_118, &PyTuple_GET_ITEM(mod_consts[139], 0));

        if (tmp_call_result_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3519;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_110);
    }
    {
        PyObject *tmp_called_name_119;
        PyObject *tmp_call_result_111;
        tmp_called_name_119 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_119 == NULL)) {
            tmp_called_name_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3534;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 3534;
        tmp_call_result_111 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_119, &PyTuple_GET_ITEM(mod_consts[140], 0));

        if (tmp_call_result_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3534;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_111);
    }
    {
        PyObject *tmp_called_name_120;
        PyObject *tmp_call_result_112;
        tmp_called_name_120 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_120 == NULL)) {
            tmp_called_name_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3549;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 3549;
        tmp_call_result_112 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_120, &PyTuple_GET_ITEM(mod_consts[141], 0));

        if (tmp_call_result_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3549;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_112);
    }
    {
        PyObject *tmp_called_name_121;
        PyObject *tmp_call_result_113;
        tmp_called_name_121 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_121 == NULL)) {
            tmp_called_name_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3600;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 3600;
        tmp_call_result_113 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_121, &PyTuple_GET_ITEM(mod_consts[142], 0));

        if (tmp_call_result_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3600;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_113);
    }
    {
        PyObject *tmp_called_name_122;
        PyObject *tmp_call_result_114;
        tmp_called_name_122 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_122 == NULL)) {
            tmp_called_name_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3680;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 3680;
        tmp_call_result_114 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_122, &PyTuple_GET_ITEM(mod_consts[143], 0));

        if (tmp_call_result_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3680;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_114);
    }
    {
        PyObject *tmp_called_name_123;
        PyObject *tmp_call_result_115;
        tmp_called_name_123 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_123 == NULL)) {
            tmp_called_name_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3743;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 3743;
        tmp_call_result_115 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_123, &PyTuple_GET_ITEM(mod_consts[144], 0));

        if (tmp_call_result_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3743;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_115);
    }
    {
        PyObject *tmp_called_name_124;
        PyObject *tmp_call_result_116;
        tmp_called_name_124 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_124 == NULL)) {
            tmp_called_name_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3799;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 3799;
        tmp_call_result_116 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_124, &PyTuple_GET_ITEM(mod_consts[145], 0));

        if (tmp_call_result_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3799;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_116);
    }
    {
        PyObject *tmp_called_name_125;
        PyObject *tmp_call_result_117;
        tmp_called_name_125 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_125 == NULL)) {
            tmp_called_name_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3814;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 3814;
        tmp_call_result_117 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_125, &PyTuple_GET_ITEM(mod_consts[146], 0));

        if (tmp_call_result_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3814;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_117);
    }
    {
        PyObject *tmp_called_name_126;
        PyObject *tmp_call_result_118;
        tmp_called_name_126 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_126 == NULL)) {
            tmp_called_name_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3829;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 3829;
        tmp_call_result_118 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_126, &PyTuple_GET_ITEM(mod_consts[147], 0));

        if (tmp_call_result_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3829;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_118);
    }
    {
        PyObject *tmp_called_name_127;
        PyObject *tmp_call_result_119;
        tmp_called_name_127 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_127 == NULL)) {
            tmp_called_name_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3844;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 3844;
        tmp_call_result_119 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_127, &PyTuple_GET_ITEM(mod_consts[148], 0));

        if (tmp_call_result_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3844;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_119);
    }
    {
        PyObject *tmp_called_name_128;
        PyObject *tmp_call_result_120;
        tmp_called_name_128 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_128 == NULL)) {
            tmp_called_name_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3859;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 3859;
        tmp_call_result_120 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_128, &PyTuple_GET_ITEM(mod_consts[149], 0));

        if (tmp_call_result_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3859;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_120);
    }
    {
        PyObject *tmp_called_name_129;
        PyObject *tmp_call_result_121;
        tmp_called_name_129 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_129 == NULL)) {
            tmp_called_name_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3874;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 3874;
        tmp_call_result_121 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_129, &PyTuple_GET_ITEM(mod_consts[150], 0));

        if (tmp_call_result_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3874;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_121);
    }
    {
        PyObject *tmp_called_name_130;
        PyObject *tmp_call_result_122;
        tmp_called_name_130 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_130 == NULL)) {
            tmp_called_name_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3918;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 3918;
        tmp_call_result_122 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_130, &PyTuple_GET_ITEM(mod_consts[151], 0));

        if (tmp_call_result_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3918;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_122);
    }
    {
        PyObject *tmp_called_name_131;
        PyObject *tmp_call_result_123;
        tmp_called_name_131 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_131 == NULL)) {
            tmp_called_name_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3982;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 3982;
        tmp_call_result_123 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_131, &PyTuple_GET_ITEM(mod_consts[152], 0));

        if (tmp_call_result_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3982;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_123);
    }
    {
        PyObject *tmp_called_name_132;
        PyObject *tmp_call_result_124;
        tmp_called_name_132 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_132 == NULL)) {
            tmp_called_name_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4018;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 4018;
        tmp_call_result_124 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_132, &PyTuple_GET_ITEM(mod_consts[153], 0));

        if (tmp_call_result_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4018;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_124);
    }
    {
        PyObject *tmp_called_name_133;
        PyObject *tmp_call_result_125;
        tmp_called_name_133 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_133 == NULL)) {
            tmp_called_name_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4029;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 4029;
        tmp_call_result_125 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_133, &PyTuple_GET_ITEM(mod_consts[154], 0));

        if (tmp_call_result_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4029;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_125);
    }
    {
        PyObject *tmp_called_name_134;
        PyObject *tmp_call_result_126;
        tmp_called_name_134 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_134 == NULL)) {
            tmp_called_name_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4044;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 4044;
        tmp_call_result_126 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_134, &PyTuple_GET_ITEM(mod_consts[155], 0));

        if (tmp_call_result_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4044;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_126);
    }
    {
        PyObject *tmp_called_name_135;
        PyObject *tmp_call_result_127;
        tmp_called_name_135 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_135 == NULL)) {
            tmp_called_name_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4101;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 4101;
        tmp_call_result_127 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_135, &PyTuple_GET_ITEM(mod_consts[156], 0));

        if (tmp_call_result_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4101;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_127);
    }
    {
        PyObject *tmp_called_name_136;
        PyObject *tmp_call_result_128;
        tmp_called_name_136 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_136 == NULL)) {
            tmp_called_name_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4116;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 4116;
        tmp_call_result_128 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_136, &PyTuple_GET_ITEM(mod_consts[157], 0));

        if (tmp_call_result_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4116;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_128);
    }
    {
        PyObject *tmp_called_name_137;
        PyObject *tmp_call_result_129;
        tmp_called_name_137 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_137 == NULL)) {
            tmp_called_name_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4227;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 4227;
        tmp_call_result_129 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_137, &PyTuple_GET_ITEM(mod_consts[158], 0));

        if (tmp_call_result_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4227;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_129);
    }
    {
        PyObject *tmp_called_name_138;
        PyObject *tmp_call_result_130;
        tmp_called_name_138 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_138 == NULL)) {
            tmp_called_name_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4277;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 4277;
        tmp_call_result_130 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_138, &PyTuple_GET_ITEM(mod_consts[159], 0));

        if (tmp_call_result_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4277;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_130);
    }
    {
        PyObject *tmp_called_name_139;
        PyObject *tmp_call_result_131;
        tmp_called_name_139 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_139 == NULL)) {
            tmp_called_name_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4341;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 4341;
        tmp_call_result_131 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_139, &PyTuple_GET_ITEM(mod_consts[160], 0));

        if (tmp_call_result_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4341;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_131);
    }
    {
        PyObject *tmp_called_name_140;
        PyObject *tmp_call_result_132;
        tmp_called_name_140 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_140 == NULL)) {
            tmp_called_name_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4407;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 4407;
        tmp_call_result_132 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_140, &PyTuple_GET_ITEM(mod_consts[161], 0));

        if (tmp_call_result_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4407;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_132);
    }
    {
        PyObject *tmp_called_name_141;
        PyObject *tmp_call_result_133;
        tmp_called_name_141 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_141 == NULL)) {
            tmp_called_name_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4417;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 4417;
        tmp_call_result_133 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_141, &PyTuple_GET_ITEM(mod_consts[162], 0));

        if (tmp_call_result_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4417;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_133);
    }
    {
        PyObject *tmp_called_name_142;
        PyObject *tmp_call_result_134;
        tmp_called_name_142 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_142 == NULL)) {
            tmp_called_name_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4443;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 4443;
        tmp_call_result_134 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_142, &PyTuple_GET_ITEM(mod_consts[163], 0));

        if (tmp_call_result_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4443;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_134);
    }
    {
        PyObject *tmp_called_name_143;
        PyObject *tmp_call_result_135;
        tmp_called_name_143 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_143 == NULL)) {
            tmp_called_name_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4452;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 4452;
        tmp_call_result_135 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_143, &PyTuple_GET_ITEM(mod_consts[164], 0));

        if (tmp_call_result_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4452;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_135);
    }
    {
        PyObject *tmp_called_name_144;
        PyObject *tmp_call_result_136;
        tmp_called_name_144 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_144 == NULL)) {
            tmp_called_name_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4497;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 4497;
        tmp_call_result_136 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_144, &PyTuple_GET_ITEM(mod_consts[165], 0));

        if (tmp_call_result_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4497;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_136);
    }
    {
        PyObject *tmp_called_name_145;
        PyObject *tmp_call_result_137;
        tmp_called_name_145 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_145 == NULL)) {
            tmp_called_name_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4555;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 4555;
        tmp_call_result_137 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_145, &PyTuple_GET_ITEM(mod_consts[166], 0));

        if (tmp_call_result_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4555;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_137);
    }
    {
        PyObject *tmp_called_name_146;
        PyObject *tmp_call_result_138;
        tmp_called_name_146 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_146 == NULL)) {
            tmp_called_name_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4574;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 4574;
        tmp_call_result_138 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_146, &PyTuple_GET_ITEM(mod_consts[167], 0));

        if (tmp_call_result_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4574;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_138);
    }
    {
        PyObject *tmp_called_name_147;
        PyObject *tmp_call_result_139;
        tmp_called_name_147 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_147 == NULL)) {
            tmp_called_name_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4598;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 4598;
        tmp_call_result_139 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_147, &PyTuple_GET_ITEM(mod_consts[168], 0));

        if (tmp_call_result_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4598;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_139);
    }
    {
        PyObject *tmp_called_name_148;
        PyObject *tmp_call_result_140;
        tmp_called_name_148 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_148 == NULL)) {
            tmp_called_name_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4616;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 4616;
        tmp_call_result_140 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_148, &PyTuple_GET_ITEM(mod_consts[169], 0));

        if (tmp_call_result_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4616;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_140);
    }
    {
        PyObject *tmp_called_name_149;
        PyObject *tmp_call_result_141;
        tmp_called_name_149 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_149 == NULL)) {
            tmp_called_name_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4639;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 4639;
        tmp_call_result_141 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_149, &PyTuple_GET_ITEM(mod_consts[170], 0));

        if (tmp_call_result_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4639;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_141);
    }
    {
        PyObject *tmp_called_name_150;
        PyObject *tmp_call_result_142;
        tmp_called_name_150 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_150 == NULL)) {
            tmp_called_name_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4665;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 4665;
        tmp_call_result_142 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_150, &PyTuple_GET_ITEM(mod_consts[171], 0));

        if (tmp_call_result_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4665;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_142);
    }
    {
        PyObject *tmp_called_name_151;
        PyObject *tmp_call_result_143;
        tmp_called_name_151 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_151 == NULL)) {
            tmp_called_name_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4702;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 4702;
        tmp_call_result_143 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_151, &PyTuple_GET_ITEM(mod_consts[172], 0));

        if (tmp_call_result_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4702;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_143);
    }
    {
        PyObject *tmp_called_name_152;
        PyObject *tmp_call_result_144;
        tmp_called_name_152 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_152 == NULL)) {
            tmp_called_name_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4739;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 4739;
        tmp_call_result_144 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_152, &PyTuple_GET_ITEM(mod_consts[173], 0));

        if (tmp_call_result_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4739;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_144);
    }
    {
        PyObject *tmp_called_name_153;
        PyObject *tmp_call_result_145;
        tmp_called_name_153 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_153 == NULL)) {
            tmp_called_name_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4869;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 4869;
        tmp_call_result_145 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_153, &PyTuple_GET_ITEM(mod_consts[174], 0));

        if (tmp_call_result_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4869;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_145);
    }
    {
        PyObject *tmp_called_name_154;
        PyObject *tmp_call_result_146;
        tmp_called_name_154 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_154 == NULL)) {
            tmp_called_name_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4948;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 4948;
        tmp_call_result_146 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_154, &PyTuple_GET_ITEM(mod_consts[175], 0));

        if (tmp_call_result_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4948;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_146);
    }
    {
        PyObject *tmp_called_name_155;
        PyObject *tmp_call_result_147;
        tmp_called_name_155 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_155 == NULL)) {
            tmp_called_name_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5056;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5056;
        tmp_call_result_147 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_155, &PyTuple_GET_ITEM(mod_consts[176], 0));

        if (tmp_call_result_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5056;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_147);
    }
    {
        PyObject *tmp_called_name_156;
        PyObject *tmp_call_result_148;
        tmp_called_name_156 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_156 == NULL)) {
            tmp_called_name_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5126;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5126;
        tmp_call_result_148 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_156, &PyTuple_GET_ITEM(mod_consts[177], 0));

        if (tmp_call_result_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5126;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_148);
    }
    {
        PyObject *tmp_called_name_157;
        PyObject *tmp_call_result_149;
        tmp_called_name_157 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_157 == NULL)) {
            tmp_called_name_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5190;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5190;
        tmp_call_result_149 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_157, &PyTuple_GET_ITEM(mod_consts[178], 0));

        if (tmp_call_result_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5190;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_149);
    }
    {
        PyObject *tmp_called_name_158;
        PyObject *tmp_call_result_150;
        tmp_called_name_158 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_158 == NULL)) {
            tmp_called_name_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5281;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5281;
        tmp_call_result_150 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_158, &PyTuple_GET_ITEM(mod_consts[179], 0));

        if (tmp_call_result_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5281;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_150);
    }
    {
        PyObject *tmp_called_name_159;
        PyObject *tmp_call_result_151;
        tmp_called_name_159 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_159 == NULL)) {
            tmp_called_name_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5300;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5300;
        tmp_call_result_151 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_159, &PyTuple_GET_ITEM(mod_consts[180], 0));

        if (tmp_call_result_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5300;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_151);
    }
    {
        PyObject *tmp_called_name_160;
        PyObject *tmp_call_result_152;
        tmp_called_name_160 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_160 == NULL)) {
            tmp_called_name_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5343;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5343;
        tmp_call_result_152 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_160, &PyTuple_GET_ITEM(mod_consts[181], 0));

        if (tmp_call_result_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5343;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_152);
    }
    {
        PyObject *tmp_called_name_161;
        PyObject *tmp_call_result_153;
        tmp_called_name_161 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_161 == NULL)) {
            tmp_called_name_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5355;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5355;
        tmp_call_result_153 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_161, &PyTuple_GET_ITEM(mod_consts[182], 0));

        if (tmp_call_result_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5355;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_153);
    }
    {
        PyObject *tmp_called_name_162;
        PyObject *tmp_call_result_154;
        tmp_called_name_162 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_162 == NULL)) {
            tmp_called_name_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5379;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5379;
        tmp_call_result_154 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_162, &PyTuple_GET_ITEM(mod_consts[183], 0));

        if (tmp_call_result_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5379;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_154);
    }
    {
        PyObject *tmp_called_name_163;
        PyObject *tmp_call_result_155;
        tmp_called_name_163 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_163 == NULL)) {
            tmp_called_name_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5407;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5407;
        tmp_call_result_155 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_163, &PyTuple_GET_ITEM(mod_consts[184], 0));

        if (tmp_call_result_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5407;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_155);
    }
    {
        PyObject *tmp_called_name_164;
        PyObject *tmp_call_result_156;
        tmp_called_name_164 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_164 == NULL)) {
            tmp_called_name_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5431;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5431;
        tmp_call_result_156 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_164, &PyTuple_GET_ITEM(mod_consts[185], 0));

        if (tmp_call_result_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5431;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_156);
    }
    {
        PyObject *tmp_called_name_165;
        PyObject *tmp_call_result_157;
        tmp_called_name_165 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_165 == NULL)) {
            tmp_called_name_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5444;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5444;
        tmp_call_result_157 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_165, &PyTuple_GET_ITEM(mod_consts[186], 0));

        if (tmp_call_result_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5444;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_157);
    }
    {
        PyObject *tmp_called_name_166;
        PyObject *tmp_call_result_158;
        tmp_called_name_166 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_166 == NULL)) {
            tmp_called_name_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5473;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5473;
        tmp_call_result_158 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_166, &PyTuple_GET_ITEM(mod_consts[187], 0));

        if (tmp_call_result_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5473;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_158);
    }
    {
        PyObject *tmp_called_name_167;
        PyObject *tmp_call_result_159;
        tmp_called_name_167 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_167 == NULL)) {
            tmp_called_name_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5480;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5480;
        tmp_call_result_159 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_167, &PyTuple_GET_ITEM(mod_consts[188], 0));

        if (tmp_call_result_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5480;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_159);
    }
    {
        PyObject *tmp_called_name_168;
        PyObject *tmp_call_result_160;
        tmp_called_name_168 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_168 == NULL)) {
            tmp_called_name_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5489;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5489;
        tmp_call_result_160 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_168, &PyTuple_GET_ITEM(mod_consts[189], 0));

        if (tmp_call_result_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5489;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_160);
    }
    {
        PyObject *tmp_called_name_169;
        PyObject *tmp_call_result_161;
        tmp_called_name_169 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_169 == NULL)) {
            tmp_called_name_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5511;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5511;
        tmp_call_result_161 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_169, &PyTuple_GET_ITEM(mod_consts[190], 0));

        if (tmp_call_result_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5511;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_161);
    }
    {
        PyObject *tmp_called_name_170;
        PyObject *tmp_call_result_162;
        tmp_called_name_170 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_170 == NULL)) {
            tmp_called_name_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5544;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5544;
        tmp_call_result_162 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_170, &PyTuple_GET_ITEM(mod_consts[191], 0));

        if (tmp_call_result_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5544;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_162);
    }
    {
        PyObject *tmp_called_name_171;
        PyObject *tmp_call_result_163;
        tmp_called_name_171 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_171 == NULL)) {
            tmp_called_name_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5583;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5583;
        tmp_call_result_163 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_171, &PyTuple_GET_ITEM(mod_consts[192], 0));

        if (tmp_call_result_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5583;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_163);
    }
    {
        PyObject *tmp_called_name_172;
        PyObject *tmp_call_result_164;
        tmp_called_name_172 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_172 == NULL)) {
            tmp_called_name_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5601;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5601;
        tmp_call_result_164 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_172, &PyTuple_GET_ITEM(mod_consts[193], 0));

        if (tmp_call_result_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5601;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_164);
    }
    {
        PyObject *tmp_called_name_173;
        PyObject *tmp_call_result_165;
        tmp_called_name_173 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_173 == NULL)) {
            tmp_called_name_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5616;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5616;
        tmp_call_result_165 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_173, &PyTuple_GET_ITEM(mod_consts[194], 0));

        if (tmp_call_result_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5616;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_165);
    }
    {
        PyObject *tmp_called_name_174;
        PyObject *tmp_call_result_166;
        tmp_called_name_174 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_174 == NULL)) {
            tmp_called_name_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5635;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5635;
        tmp_call_result_166 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_174, &PyTuple_GET_ITEM(mod_consts[195], 0));

        if (tmp_call_result_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5635;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_166);
    }
    {
        PyObject *tmp_called_name_175;
        PyObject *tmp_call_result_167;
        tmp_called_name_175 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_175 == NULL)) {
            tmp_called_name_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5653;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5653;
        tmp_call_result_167 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_175, &PyTuple_GET_ITEM(mod_consts[196], 0));

        if (tmp_call_result_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5653;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_167);
    }
    {
        PyObject *tmp_called_name_176;
        PyObject *tmp_call_result_168;
        tmp_called_name_176 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_176 == NULL)) {
            tmp_called_name_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5676;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5676;
        tmp_call_result_168 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_176, &PyTuple_GET_ITEM(mod_consts[197], 0));

        if (tmp_call_result_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5676;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_168);
    }
    {
        PyObject *tmp_called_name_177;
        PyObject *tmp_call_result_169;
        tmp_called_name_177 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_177 == NULL)) {
            tmp_called_name_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5679;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5679;
        tmp_call_result_169 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_177, &PyTuple_GET_ITEM(mod_consts[198], 0));

        if (tmp_call_result_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5679;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_169);
    }
    {
        PyObject *tmp_called_name_178;
        PyObject *tmp_call_result_170;
        tmp_called_name_178 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_178 == NULL)) {
            tmp_called_name_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5707;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5707;
        tmp_call_result_170 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_178, &PyTuple_GET_ITEM(mod_consts[199], 0));

        if (tmp_call_result_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5707;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_170);
    }
    {
        PyObject *tmp_called_name_179;
        PyObject *tmp_call_result_171;
        tmp_called_name_179 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_179 == NULL)) {
            tmp_called_name_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5728;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5728;
        tmp_call_result_171 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_179, &PyTuple_GET_ITEM(mod_consts[200], 0));

        if (tmp_call_result_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5728;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_171);
    }
    {
        PyObject *tmp_called_name_180;
        PyObject *tmp_call_result_172;
        tmp_called_name_180 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_180 == NULL)) {
            tmp_called_name_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5737;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5737;
        tmp_call_result_172 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_180, &PyTuple_GET_ITEM(mod_consts[201], 0));

        if (tmp_call_result_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5737;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_172);
    }
    {
        PyObject *tmp_called_name_181;
        PyObject *tmp_call_result_173;
        tmp_called_name_181 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_181 == NULL)) {
            tmp_called_name_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5805;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5805;
        tmp_call_result_173 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_181, &PyTuple_GET_ITEM(mod_consts[202], 0));

        if (tmp_call_result_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5805;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_173);
    }
    {
        PyObject *tmp_called_name_182;
        PyObject *tmp_call_result_174;
        tmp_called_name_182 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_182 == NULL)) {
            tmp_called_name_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5869;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5869;
        tmp_call_result_174 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_182, &PyTuple_GET_ITEM(mod_consts[203], 0));

        if (tmp_call_result_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5869;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_174);
    }
    {
        PyObject *tmp_called_name_183;
        PyObject *tmp_call_result_175;
        tmp_called_name_183 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_183 == NULL)) {
            tmp_called_name_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5872;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5872;
        tmp_call_result_175 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_183, &PyTuple_GET_ITEM(mod_consts[204], 0));

        if (tmp_call_result_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5872;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_175);
    }
    {
        PyObject *tmp_called_name_184;
        PyObject *tmp_call_result_176;
        tmp_called_name_184 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_184 == NULL)) {
            tmp_called_name_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5875;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5875;
        tmp_call_result_176 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_184, &PyTuple_GET_ITEM(mod_consts[205], 0));

        if (tmp_call_result_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5875;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_176);
    }
    {
        PyObject *tmp_called_name_185;
        PyObject *tmp_call_result_177;
        tmp_called_name_185 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_185 == NULL)) {
            tmp_called_name_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5926;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5926;
        tmp_call_result_177 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_185, &PyTuple_GET_ITEM(mod_consts[206], 0));

        if (tmp_call_result_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5926;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_177);
    }
    {
        PyObject *tmp_called_name_186;
        PyObject *tmp_call_result_178;
        tmp_called_name_186 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_186 == NULL)) {
            tmp_called_name_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5970;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5970;
        tmp_call_result_178 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_186, &PyTuple_GET_ITEM(mod_consts[207], 0));

        if (tmp_call_result_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5970;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_178);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[208];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_6 = MAKE_FUNCTION_numpy$core$_add_newdocs$$$function__1_refer_to_array_attribute(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_6);
    }
    {
        PyObject *tmp_called_name_187;
        PyObject *tmp_call_result_179;
        PyObject *tmp_args_element_name_41;
        PyObject *tmp_args_element_name_42;
        PyObject *tmp_args_element_name_43;
        PyObject *tmp_called_name_188;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kwargs_name_1;
        tmp_called_name_187 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_187 == NULL)) {
            tmp_called_name_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5994;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_41 = mod_consts[210];
        tmp_args_element_name_42 = mod_consts[211];
        tmp_called_name_188 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_188 == NULL)) {
            tmp_called_name_188 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        assert(!(tmp_called_name_188 == NULL));
        tmp_args_name_1 = mod_consts[212];
        tmp_kwargs_name_1 = PyDict_Copy(mod_consts[213]);
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5995;
        tmp_args_element_name_43 = CALL_FUNCTION(tmp_called_name_188, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_args_element_name_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5995;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5994;
        {
            PyObject *call_args[] = {tmp_args_element_name_41, tmp_args_element_name_42, tmp_args_element_name_43};
            tmp_call_result_179 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_187, call_args);
        }

        Py_DECREF(tmp_args_element_name_43);
        if (tmp_call_result_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5994;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_179);
    }
    {
        PyObject *tmp_called_name_189;
        PyObject *tmp_call_result_180;
        PyObject *tmp_args_element_name_44;
        PyObject *tmp_args_element_name_45;
        PyObject *tmp_args_element_name_46;
        PyObject *tmp_called_name_190;
        PyObject *tmp_args_name_2;
        PyObject *tmp_kwargs_name_2;
        tmp_called_name_189 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_189 == NULL)) {
            tmp_called_name_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5997;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_44 = mod_consts[210];
        tmp_args_element_name_45 = mod_consts[211];
        tmp_called_name_190 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_190 == NULL)) {
            tmp_called_name_190 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_190 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5998;

            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = mod_consts[214];
        tmp_kwargs_name_2 = PyDict_Copy(mod_consts[213]);
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5998;
        tmp_args_element_name_46 = CALL_FUNCTION(tmp_called_name_190, tmp_args_name_2, tmp_kwargs_name_2);
        Py_DECREF(tmp_kwargs_name_2);
        if (tmp_args_element_name_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5998;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 5997;
        {
            PyObject *call_args[] = {tmp_args_element_name_44, tmp_args_element_name_45, tmp_args_element_name_46};
            tmp_call_result_180 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_189, call_args);
        }

        Py_DECREF(tmp_args_element_name_46);
        if (tmp_call_result_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5997;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_180);
    }
    {
        PyObject *tmp_called_name_191;
        PyObject *tmp_call_result_181;
        tmp_called_name_191 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_191 == NULL)) {
            tmp_called_name_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_191 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6000;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6000;
        tmp_call_result_181 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_191, &PyTuple_GET_ITEM(mod_consts[215], 0));

        if (tmp_call_result_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6000;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_181);
    }
    {
        PyObject *tmp_called_name_192;
        PyObject *tmp_call_result_182;
        tmp_called_name_192 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_192 == NULL)) {
            tmp_called_name_192 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6003;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6003;
        tmp_call_result_182 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_192, &PyTuple_GET_ITEM(mod_consts[216], 0));

        if (tmp_call_result_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6003;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_182);
    }
    {
        PyObject *tmp_called_name_193;
        PyObject *tmp_call_result_183;
        tmp_called_name_193 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_193 == NULL)) {
            tmp_called_name_193 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6006;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6006;
        tmp_call_result_183 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_193, &PyTuple_GET_ITEM(mod_consts[217], 0));

        if (tmp_call_result_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6006;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_183);
    }
    {
        PyObject *tmp_called_name_194;
        PyObject *tmp_call_result_184;
        tmp_called_name_194 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_194 == NULL)) {
            tmp_called_name_194 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6009;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6009;
        tmp_call_result_184 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_194, &PyTuple_GET_ITEM(mod_consts[218], 0));

        if (tmp_call_result_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6009;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_184);
    }
    {
        PyObject *tmp_called_name_195;
        PyObject *tmp_call_result_185;
        tmp_called_name_195 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_195 == NULL)) {
            tmp_called_name_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6012;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6012;
        tmp_call_result_185 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_195, &PyTuple_GET_ITEM(mod_consts[219], 0));

        if (tmp_call_result_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6012;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_185);
    }
    {
        PyObject *tmp_called_name_196;
        PyObject *tmp_call_result_186;
        tmp_called_name_196 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_196 == NULL)) {
            tmp_called_name_196 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_196 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6015;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6015;
        tmp_call_result_186 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_196, &PyTuple_GET_ITEM(mod_consts[220], 0));

        if (tmp_call_result_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6015;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_186);
    }
    {
        PyObject *tmp_called_name_197;
        PyObject *tmp_call_result_187;
        tmp_called_name_197 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_197 == NULL)) {
            tmp_called_name_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6018;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6018;
        tmp_call_result_187 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_197, &PyTuple_GET_ITEM(mod_consts[221], 0));

        if (tmp_call_result_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6018;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_187);
    }
    {
        PyObject *tmp_called_name_198;
        PyObject *tmp_call_result_188;
        tmp_called_name_198 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_198 == NULL)) {
            tmp_called_name_198 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6021;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6021;
        tmp_call_result_188 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_198, &PyTuple_GET_ITEM(mod_consts[222], 0));

        if (tmp_call_result_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6021;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_188);
    }
    {
        PyObject *tmp_called_name_199;
        PyObject *tmp_call_result_189;
        tmp_called_name_199 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_199 == NULL)) {
            tmp_called_name_199 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_199 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6024;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6024;
        tmp_call_result_189 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_199, &PyTuple_GET_ITEM(mod_consts[223], 0));

        if (tmp_call_result_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6024;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_189);
    }
    {
        PyObject *tmp_called_name_200;
        PyObject *tmp_call_result_190;
        tmp_called_name_200 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_200 == NULL)) {
            tmp_called_name_200 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_200 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6027;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6027;
        tmp_call_result_190 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_200, &PyTuple_GET_ITEM(mod_consts[224], 0));

        if (tmp_call_result_190 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6027;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_190);
    }
    {
        PyObject *tmp_called_name_201;
        PyObject *tmp_call_result_191;
        tmp_called_name_201 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_201 == NULL)) {
            tmp_called_name_201 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6030;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6030;
        tmp_call_result_191 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_201, &PyTuple_GET_ITEM(mod_consts[225], 0));

        if (tmp_call_result_191 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6030;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_191);
    }
    {
        PyObject *tmp_called_name_202;
        PyObject *tmp_call_result_192;
        tmp_called_name_202 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_202 == NULL)) {
            tmp_called_name_202 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_202 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6033;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6033;
        tmp_call_result_192 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_202, &PyTuple_GET_ITEM(mod_consts[226], 0));

        if (tmp_call_result_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6033;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_192);
    }
    {
        PyObject *tmp_called_name_203;
        PyObject *tmp_call_result_193;
        PyObject *tmp_args_element_name_47;
        PyObject *tmp_args_element_name_48;
        PyObject *tmp_args_element_name_49;
        PyObject *tmp_called_name_204;
        tmp_called_name_203 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_203 == NULL)) {
            tmp_called_name_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_203 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6038;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_47 = mod_consts[210];
        tmp_args_element_name_48 = mod_consts[211];
        tmp_called_name_204 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_204 == NULL)) {
            tmp_called_name_204 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_204 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6039;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6039;
        tmp_args_element_name_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_204, mod_consts[227]);
        if (tmp_args_element_name_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6039;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6038;
        {
            PyObject *call_args[] = {tmp_args_element_name_47, tmp_args_element_name_48, tmp_args_element_name_49};
            tmp_call_result_193 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_203, call_args);
        }

        Py_DECREF(tmp_args_element_name_49);
        if (tmp_call_result_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6038;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_193);
    }
    {
        PyObject *tmp_called_name_205;
        PyObject *tmp_call_result_194;
        PyObject *tmp_args_element_name_50;
        PyObject *tmp_args_element_name_51;
        PyObject *tmp_args_element_name_52;
        PyObject *tmp_called_name_206;
        tmp_called_name_205 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_205 == NULL)) {
            tmp_called_name_205 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6041;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_50 = mod_consts[210];
        tmp_args_element_name_51 = mod_consts[211];
        tmp_called_name_206 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_206 == NULL)) {
            tmp_called_name_206 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6042;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6042;
        tmp_args_element_name_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_206, mod_consts[228]);
        if (tmp_args_element_name_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6042;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6041;
        {
            PyObject *call_args[] = {tmp_args_element_name_50, tmp_args_element_name_51, tmp_args_element_name_52};
            tmp_call_result_194 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_205, call_args);
        }

        Py_DECREF(tmp_args_element_name_52);
        if (tmp_call_result_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6041;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_194);
    }
    {
        PyObject *tmp_called_name_207;
        PyObject *tmp_call_result_195;
        PyObject *tmp_args_element_name_53;
        PyObject *tmp_args_element_name_54;
        PyObject *tmp_args_element_name_55;
        PyObject *tmp_called_name_208;
        tmp_called_name_207 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_207 == NULL)) {
            tmp_called_name_207 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6044;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_53 = mod_consts[210];
        tmp_args_element_name_54 = mod_consts[211];
        tmp_called_name_208 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_208 == NULL)) {
            tmp_called_name_208 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_208 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6045;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6045;
        tmp_args_element_name_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_208, mod_consts[229]);
        if (tmp_args_element_name_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6045;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6044;
        {
            PyObject *call_args[] = {tmp_args_element_name_53, tmp_args_element_name_54, tmp_args_element_name_55};
            tmp_call_result_195 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_207, call_args);
        }

        Py_DECREF(tmp_args_element_name_55);
        if (tmp_call_result_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6044;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_195);
    }
    {
        PyObject *tmp_called_name_209;
        PyObject *tmp_call_result_196;
        PyObject *tmp_args_element_name_56;
        PyObject *tmp_args_element_name_57;
        PyObject *tmp_args_element_name_58;
        PyObject *tmp_called_name_210;
        tmp_called_name_209 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_209 == NULL)) {
            tmp_called_name_209 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6047;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_56 = mod_consts[210];
        tmp_args_element_name_57 = mod_consts[211];
        tmp_called_name_210 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_210 == NULL)) {
            tmp_called_name_210 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_210 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6048;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6048;
        tmp_args_element_name_58 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_210, mod_consts[230]);
        if (tmp_args_element_name_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6048;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6047;
        {
            PyObject *call_args[] = {tmp_args_element_name_56, tmp_args_element_name_57, tmp_args_element_name_58};
            tmp_call_result_196 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_209, call_args);
        }

        Py_DECREF(tmp_args_element_name_58);
        if (tmp_call_result_196 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6047;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_196);
    }
    {
        PyObject *tmp_called_name_211;
        PyObject *tmp_call_result_197;
        PyObject *tmp_args_element_name_59;
        PyObject *tmp_args_element_name_60;
        PyObject *tmp_args_element_name_61;
        PyObject *tmp_called_name_212;
        tmp_called_name_211 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_211 == NULL)) {
            tmp_called_name_211 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_211 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6050;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_59 = mod_consts[210];
        tmp_args_element_name_60 = mod_consts[211];
        tmp_called_name_212 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_212 == NULL)) {
            tmp_called_name_212 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_212 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6051;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6051;
        tmp_args_element_name_61 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_212, mod_consts[231]);
        if (tmp_args_element_name_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6051;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6050;
        {
            PyObject *call_args[] = {tmp_args_element_name_59, tmp_args_element_name_60, tmp_args_element_name_61};
            tmp_call_result_197 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_211, call_args);
        }

        Py_DECREF(tmp_args_element_name_61);
        if (tmp_call_result_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6050;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_197);
    }
    {
        PyObject *tmp_called_name_213;
        PyObject *tmp_call_result_198;
        PyObject *tmp_args_element_name_62;
        PyObject *tmp_args_element_name_63;
        PyObject *tmp_args_element_name_64;
        PyObject *tmp_called_name_214;
        tmp_called_name_213 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_213 == NULL)) {
            tmp_called_name_213 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6053;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_62 = mod_consts[210];
        tmp_args_element_name_63 = mod_consts[211];
        tmp_called_name_214 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_214 == NULL)) {
            tmp_called_name_214 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_214 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6054;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6054;
        tmp_args_element_name_64 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_214, mod_consts[232]);
        if (tmp_args_element_name_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6054;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6053;
        {
            PyObject *call_args[] = {tmp_args_element_name_62, tmp_args_element_name_63, tmp_args_element_name_64};
            tmp_call_result_198 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_213, call_args);
        }

        Py_DECREF(tmp_args_element_name_64);
        if (tmp_call_result_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6053;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_198);
    }
    {
        PyObject *tmp_called_name_215;
        PyObject *tmp_call_result_199;
        PyObject *tmp_args_element_name_65;
        PyObject *tmp_args_element_name_66;
        PyObject *tmp_args_element_name_67;
        PyObject *tmp_called_name_216;
        tmp_called_name_215 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_215 == NULL)) {
            tmp_called_name_215 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_215 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6056;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_65 = mod_consts[210];
        tmp_args_element_name_66 = mod_consts[211];
        tmp_called_name_216 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_216 == NULL)) {
            tmp_called_name_216 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_216 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6057;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6057;
        tmp_args_element_name_67 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_216, mod_consts[233]);
        if (tmp_args_element_name_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6057;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6056;
        {
            PyObject *call_args[] = {tmp_args_element_name_65, tmp_args_element_name_66, tmp_args_element_name_67};
            tmp_call_result_199 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_215, call_args);
        }

        Py_DECREF(tmp_args_element_name_67);
        if (tmp_call_result_199 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6056;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_199);
    }
    {
        PyObject *tmp_called_name_217;
        PyObject *tmp_call_result_200;
        PyObject *tmp_args_element_name_68;
        PyObject *tmp_args_element_name_69;
        PyObject *tmp_args_element_name_70;
        PyObject *tmp_called_name_218;
        tmp_called_name_217 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_217 == NULL)) {
            tmp_called_name_217 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_217 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6059;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_68 = mod_consts[210];
        tmp_args_element_name_69 = mod_consts[211];
        tmp_called_name_218 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_218 == NULL)) {
            tmp_called_name_218 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_218 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6060;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6060;
        tmp_args_element_name_70 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_218, mod_consts[234]);
        if (tmp_args_element_name_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6060;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6059;
        {
            PyObject *call_args[] = {tmp_args_element_name_68, tmp_args_element_name_69, tmp_args_element_name_70};
            tmp_call_result_200 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_217, call_args);
        }

        Py_DECREF(tmp_args_element_name_70);
        if (tmp_call_result_200 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6059;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_200);
    }
    {
        PyObject *tmp_called_name_219;
        PyObject *tmp_call_result_201;
        PyObject *tmp_args_element_name_71;
        PyObject *tmp_args_element_name_72;
        PyObject *tmp_args_element_name_73;
        PyObject *tmp_called_name_220;
        tmp_called_name_219 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_219 == NULL)) {
            tmp_called_name_219 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_219 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6062;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_71 = mod_consts[210];
        tmp_args_element_name_72 = mod_consts[211];
        tmp_called_name_220 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_220 == NULL)) {
            tmp_called_name_220 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_220 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6063;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6063;
        tmp_args_element_name_73 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_220, mod_consts[235]);
        if (tmp_args_element_name_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6063;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6062;
        {
            PyObject *call_args[] = {tmp_args_element_name_71, tmp_args_element_name_72, tmp_args_element_name_73};
            tmp_call_result_201 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_219, call_args);
        }

        Py_DECREF(tmp_args_element_name_73);
        if (tmp_call_result_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6062;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_201);
    }
    {
        PyObject *tmp_called_name_221;
        PyObject *tmp_call_result_202;
        PyObject *tmp_args_element_name_74;
        PyObject *tmp_args_element_name_75;
        PyObject *tmp_args_element_name_76;
        PyObject *tmp_called_name_222;
        tmp_called_name_221 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_221 == NULL)) {
            tmp_called_name_221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_221 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6065;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_74 = mod_consts[210];
        tmp_args_element_name_75 = mod_consts[211];
        tmp_called_name_222 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_222 == NULL)) {
            tmp_called_name_222 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_222 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6066;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6066;
        tmp_args_element_name_76 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_222, mod_consts[236]);
        if (tmp_args_element_name_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6066;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6065;
        {
            PyObject *call_args[] = {tmp_args_element_name_74, tmp_args_element_name_75, tmp_args_element_name_76};
            tmp_call_result_202 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_221, call_args);
        }

        Py_DECREF(tmp_args_element_name_76);
        if (tmp_call_result_202 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6065;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_202);
    }
    {
        PyObject *tmp_called_name_223;
        PyObject *tmp_call_result_203;
        PyObject *tmp_args_element_name_77;
        PyObject *tmp_args_element_name_78;
        PyObject *tmp_args_element_name_79;
        PyObject *tmp_called_name_224;
        tmp_called_name_223 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_223 == NULL)) {
            tmp_called_name_223 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_223 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6068;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_77 = mod_consts[210];
        tmp_args_element_name_78 = mod_consts[211];
        tmp_called_name_224 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_224 == NULL)) {
            tmp_called_name_224 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_224 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6069;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6069;
        tmp_args_element_name_79 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_224, mod_consts[237]);
        if (tmp_args_element_name_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6069;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6068;
        {
            PyObject *call_args[] = {tmp_args_element_name_77, tmp_args_element_name_78, tmp_args_element_name_79};
            tmp_call_result_203 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_223, call_args);
        }

        Py_DECREF(tmp_args_element_name_79);
        if (tmp_call_result_203 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6068;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_203);
    }
    {
        PyObject *tmp_called_name_225;
        PyObject *tmp_call_result_204;
        PyObject *tmp_args_element_name_80;
        PyObject *tmp_args_element_name_81;
        PyObject *tmp_args_element_name_82;
        PyObject *tmp_called_name_226;
        tmp_called_name_225 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_225 == NULL)) {
            tmp_called_name_225 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_225 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6071;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_80 = mod_consts[210];
        tmp_args_element_name_81 = mod_consts[211];
        tmp_called_name_226 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_226 == NULL)) {
            tmp_called_name_226 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_226 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6072;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6072;
        tmp_args_element_name_82 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_226, mod_consts[238]);
        if (tmp_args_element_name_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6072;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6071;
        {
            PyObject *call_args[] = {tmp_args_element_name_80, tmp_args_element_name_81, tmp_args_element_name_82};
            tmp_call_result_204 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_225, call_args);
        }

        Py_DECREF(tmp_args_element_name_82);
        if (tmp_call_result_204 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6071;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_204);
    }
    {
        PyObject *tmp_called_name_227;
        PyObject *tmp_call_result_205;
        PyObject *tmp_args_element_name_83;
        PyObject *tmp_args_element_name_84;
        PyObject *tmp_args_element_name_85;
        PyObject *tmp_called_name_228;
        tmp_called_name_227 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_227 == NULL)) {
            tmp_called_name_227 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_227 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6074;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_83 = mod_consts[210];
        tmp_args_element_name_84 = mod_consts[211];
        tmp_called_name_228 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_228 == NULL)) {
            tmp_called_name_228 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_228 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6075;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6075;
        tmp_args_element_name_85 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_228, mod_consts[239]);
        if (tmp_args_element_name_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6075;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6074;
        {
            PyObject *call_args[] = {tmp_args_element_name_83, tmp_args_element_name_84, tmp_args_element_name_85};
            tmp_call_result_205 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_227, call_args);
        }

        Py_DECREF(tmp_args_element_name_85);
        if (tmp_call_result_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6074;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_205);
    }
    {
        PyObject *tmp_called_name_229;
        PyObject *tmp_call_result_206;
        PyObject *tmp_args_element_name_86;
        PyObject *tmp_args_element_name_87;
        PyObject *tmp_args_element_name_88;
        PyObject *tmp_called_name_230;
        tmp_called_name_229 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_229 == NULL)) {
            tmp_called_name_229 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_229 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6077;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_86 = mod_consts[210];
        tmp_args_element_name_87 = mod_consts[211];
        tmp_called_name_230 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_230 == NULL)) {
            tmp_called_name_230 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_230 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6078;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6078;
        tmp_args_element_name_88 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_230, mod_consts[240]);
        if (tmp_args_element_name_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6078;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6077;
        {
            PyObject *call_args[] = {tmp_args_element_name_86, tmp_args_element_name_87, tmp_args_element_name_88};
            tmp_call_result_206 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_229, call_args);
        }

        Py_DECREF(tmp_args_element_name_88);
        if (tmp_call_result_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6077;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_206);
    }
    {
        PyObject *tmp_called_name_231;
        PyObject *tmp_call_result_207;
        PyObject *tmp_args_element_name_89;
        PyObject *tmp_args_element_name_90;
        PyObject *tmp_args_element_name_91;
        PyObject *tmp_called_name_232;
        tmp_called_name_231 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_231 == NULL)) {
            tmp_called_name_231 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_231 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6080;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_89 = mod_consts[210];
        tmp_args_element_name_90 = mod_consts[211];
        tmp_called_name_232 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_232 == NULL)) {
            tmp_called_name_232 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_232 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6081;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6081;
        tmp_args_element_name_91 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_232, mod_consts[241]);
        if (tmp_args_element_name_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6081;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6080;
        {
            PyObject *call_args[] = {tmp_args_element_name_89, tmp_args_element_name_90, tmp_args_element_name_91};
            tmp_call_result_207 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_231, call_args);
        }

        Py_DECREF(tmp_args_element_name_91);
        if (tmp_call_result_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6080;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_207);
    }
    {
        PyObject *tmp_called_name_233;
        PyObject *tmp_call_result_208;
        PyObject *tmp_args_element_name_92;
        PyObject *tmp_args_element_name_93;
        PyObject *tmp_args_element_name_94;
        PyObject *tmp_called_name_234;
        tmp_called_name_233 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_233 == NULL)) {
            tmp_called_name_233 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_233 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6083;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_92 = mod_consts[210];
        tmp_args_element_name_93 = mod_consts[211];
        tmp_called_name_234 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_234 == NULL)) {
            tmp_called_name_234 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_234 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6084;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6084;
        tmp_args_element_name_94 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_234, mod_consts[242]);
        if (tmp_args_element_name_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6084;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6083;
        {
            PyObject *call_args[] = {tmp_args_element_name_92, tmp_args_element_name_93, tmp_args_element_name_94};
            tmp_call_result_208 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_233, call_args);
        }

        Py_DECREF(tmp_args_element_name_94);
        if (tmp_call_result_208 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6083;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_208);
    }
    {
        PyObject *tmp_called_name_235;
        PyObject *tmp_call_result_209;
        PyObject *tmp_args_element_name_95;
        PyObject *tmp_args_element_name_96;
        PyObject *tmp_args_element_name_97;
        PyObject *tmp_called_name_236;
        tmp_called_name_235 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_235 == NULL)) {
            tmp_called_name_235 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_235 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6086;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_95 = mod_consts[210];
        tmp_args_element_name_96 = mod_consts[211];
        tmp_called_name_236 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_236 == NULL)) {
            tmp_called_name_236 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_236 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6087;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6087;
        tmp_args_element_name_97 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_236, mod_consts[243]);
        if (tmp_args_element_name_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6087;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6086;
        {
            PyObject *call_args[] = {tmp_args_element_name_95, tmp_args_element_name_96, tmp_args_element_name_97};
            tmp_call_result_209 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_235, call_args);
        }

        Py_DECREF(tmp_args_element_name_97);
        if (tmp_call_result_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6086;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_209);
    }
    {
        PyObject *tmp_called_name_237;
        PyObject *tmp_call_result_210;
        PyObject *tmp_args_element_name_98;
        PyObject *tmp_args_element_name_99;
        PyObject *tmp_args_element_name_100;
        PyObject *tmp_called_name_238;
        tmp_called_name_237 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_237 == NULL)) {
            tmp_called_name_237 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_237 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6089;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_98 = mod_consts[210];
        tmp_args_element_name_99 = mod_consts[211];
        tmp_called_name_238 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_238 == NULL)) {
            tmp_called_name_238 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_238 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6090;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6090;
        tmp_args_element_name_100 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_238, mod_consts[244]);
        if (tmp_args_element_name_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6090;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6089;
        {
            PyObject *call_args[] = {tmp_args_element_name_98, tmp_args_element_name_99, tmp_args_element_name_100};
            tmp_call_result_210 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_237, call_args);
        }

        Py_DECREF(tmp_args_element_name_100);
        if (tmp_call_result_210 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6089;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_210);
    }
    {
        PyObject *tmp_called_name_239;
        PyObject *tmp_call_result_211;
        PyObject *tmp_args_element_name_101;
        PyObject *tmp_args_element_name_102;
        PyObject *tmp_args_element_name_103;
        PyObject *tmp_called_name_240;
        tmp_called_name_239 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_239 == NULL)) {
            tmp_called_name_239 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_239 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6092;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_101 = mod_consts[210];
        tmp_args_element_name_102 = mod_consts[211];
        tmp_called_name_240 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_240 == NULL)) {
            tmp_called_name_240 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_240 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6093;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6093;
        tmp_args_element_name_103 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_240, mod_consts[245]);
        if (tmp_args_element_name_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6093;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6092;
        {
            PyObject *call_args[] = {tmp_args_element_name_101, tmp_args_element_name_102, tmp_args_element_name_103};
            tmp_call_result_211 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_239, call_args);
        }

        Py_DECREF(tmp_args_element_name_103);
        if (tmp_call_result_211 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6092;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_211);
    }
    {
        PyObject *tmp_called_name_241;
        PyObject *tmp_call_result_212;
        PyObject *tmp_args_element_name_104;
        PyObject *tmp_args_element_name_105;
        PyObject *tmp_args_element_name_106;
        PyObject *tmp_called_name_242;
        tmp_called_name_241 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_241 == NULL)) {
            tmp_called_name_241 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_241 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6095;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_104 = mod_consts[210];
        tmp_args_element_name_105 = mod_consts[211];
        tmp_called_name_242 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_242 == NULL)) {
            tmp_called_name_242 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_242 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6096;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6096;
        tmp_args_element_name_106 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_242, mod_consts[246]);
        if (tmp_args_element_name_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6096;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6095;
        {
            PyObject *call_args[] = {tmp_args_element_name_104, tmp_args_element_name_105, tmp_args_element_name_106};
            tmp_call_result_212 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_241, call_args);
        }

        Py_DECREF(tmp_args_element_name_106);
        if (tmp_call_result_212 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6095;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_212);
    }
    {
        PyObject *tmp_called_name_243;
        PyObject *tmp_call_result_213;
        PyObject *tmp_args_element_name_107;
        PyObject *tmp_args_element_name_108;
        PyObject *tmp_args_element_name_109;
        PyObject *tmp_called_name_244;
        tmp_called_name_243 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_243 == NULL)) {
            tmp_called_name_243 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_243 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6098;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_107 = mod_consts[210];
        tmp_args_element_name_108 = mod_consts[211];
        tmp_called_name_244 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_244 == NULL)) {
            tmp_called_name_244 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_244 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6099;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6099;
        tmp_args_element_name_109 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_244, mod_consts[247]);
        if (tmp_args_element_name_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6099;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6098;
        {
            PyObject *call_args[] = {tmp_args_element_name_107, tmp_args_element_name_108, tmp_args_element_name_109};
            tmp_call_result_213 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_243, call_args);
        }

        Py_DECREF(tmp_args_element_name_109);
        if (tmp_call_result_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6098;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_213);
    }
    {
        PyObject *tmp_called_name_245;
        PyObject *tmp_call_result_214;
        PyObject *tmp_args_element_name_110;
        PyObject *tmp_args_element_name_111;
        PyObject *tmp_args_element_name_112;
        PyObject *tmp_called_name_246;
        tmp_called_name_245 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_245 == NULL)) {
            tmp_called_name_245 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_245 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6101;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_110 = mod_consts[210];
        tmp_args_element_name_111 = mod_consts[211];
        tmp_called_name_246 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_246 == NULL)) {
            tmp_called_name_246 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_246 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6102;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6102;
        tmp_args_element_name_112 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_246, mod_consts[248]);
        if (tmp_args_element_name_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6102;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6101;
        {
            PyObject *call_args[] = {tmp_args_element_name_110, tmp_args_element_name_111, tmp_args_element_name_112};
            tmp_call_result_214 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_245, call_args);
        }

        Py_DECREF(tmp_args_element_name_112);
        if (tmp_call_result_214 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6101;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_214);
    }
    {
        PyObject *tmp_called_name_247;
        PyObject *tmp_call_result_215;
        PyObject *tmp_args_element_name_113;
        PyObject *tmp_args_element_name_114;
        PyObject *tmp_args_element_name_115;
        PyObject *tmp_called_name_248;
        tmp_called_name_247 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_247 == NULL)) {
            tmp_called_name_247 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_247 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6104;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_113 = mod_consts[210];
        tmp_args_element_name_114 = mod_consts[211];
        tmp_called_name_248 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_248 == NULL)) {
            tmp_called_name_248 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_248 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6105;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6105;
        tmp_args_element_name_115 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_248, mod_consts[249]);
        if (tmp_args_element_name_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6105;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6104;
        {
            PyObject *call_args[] = {tmp_args_element_name_113, tmp_args_element_name_114, tmp_args_element_name_115};
            tmp_call_result_215 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_247, call_args);
        }

        Py_DECREF(tmp_args_element_name_115);
        if (tmp_call_result_215 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6104;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_215);
    }
    {
        PyObject *tmp_called_name_249;
        PyObject *tmp_call_result_216;
        PyObject *tmp_args_element_name_116;
        PyObject *tmp_args_element_name_117;
        PyObject *tmp_args_element_name_118;
        PyObject *tmp_called_name_250;
        tmp_called_name_249 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_249 == NULL)) {
            tmp_called_name_249 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_249 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6107;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_116 = mod_consts[210];
        tmp_args_element_name_117 = mod_consts[211];
        tmp_called_name_250 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_250 == NULL)) {
            tmp_called_name_250 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_250 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6108;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6108;
        tmp_args_element_name_118 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_250, mod_consts[250]);
        if (tmp_args_element_name_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6108;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6107;
        {
            PyObject *call_args[] = {tmp_args_element_name_116, tmp_args_element_name_117, tmp_args_element_name_118};
            tmp_call_result_216 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_249, call_args);
        }

        Py_DECREF(tmp_args_element_name_118);
        if (tmp_call_result_216 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6107;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_216);
    }
    {
        PyObject *tmp_called_name_251;
        PyObject *tmp_call_result_217;
        PyObject *tmp_args_element_name_119;
        PyObject *tmp_args_element_name_120;
        PyObject *tmp_args_element_name_121;
        PyObject *tmp_called_name_252;
        tmp_called_name_251 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_251 == NULL)) {
            tmp_called_name_251 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_251 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6110;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_119 = mod_consts[210];
        tmp_args_element_name_120 = mod_consts[211];
        tmp_called_name_252 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_252 == NULL)) {
            tmp_called_name_252 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_252 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6111;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6111;
        tmp_args_element_name_121 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_252, mod_consts[251]);
        if (tmp_args_element_name_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6111;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6110;
        {
            PyObject *call_args[] = {tmp_args_element_name_119, tmp_args_element_name_120, tmp_args_element_name_121};
            tmp_call_result_217 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_251, call_args);
        }

        Py_DECREF(tmp_args_element_name_121);
        if (tmp_call_result_217 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6110;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_217);
    }
    {
        PyObject *tmp_called_name_253;
        PyObject *tmp_call_result_218;
        tmp_called_name_253 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_253 == NULL)) {
            tmp_called_name_253 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_253 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6113;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6113;
        tmp_call_result_218 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_253, &PyTuple_GET_ITEM(mod_consts[252], 0));

        if (tmp_call_result_218 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6113;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_218);
    }
    {
        PyObject *tmp_called_name_254;
        PyObject *tmp_call_result_219;
        PyObject *tmp_args_element_name_122;
        PyObject *tmp_args_element_name_123;
        PyObject *tmp_args_element_name_124;
        PyObject *tmp_called_name_255;
        tmp_called_name_254 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_254 == NULL)) {
            tmp_called_name_254 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_254 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6144;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_122 = mod_consts[210];
        tmp_args_element_name_123 = mod_consts[211];
        tmp_called_name_255 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_255 == NULL)) {
            tmp_called_name_255 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_255 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6145;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6145;
        tmp_args_element_name_124 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_255, mod_consts[253]);
        if (tmp_args_element_name_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6145;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6144;
        {
            PyObject *call_args[] = {tmp_args_element_name_122, tmp_args_element_name_123, tmp_args_element_name_124};
            tmp_call_result_219 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_254, call_args);
        }

        Py_DECREF(tmp_args_element_name_124);
        if (tmp_call_result_219 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6144;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_219);
    }
    {
        PyObject *tmp_called_name_256;
        PyObject *tmp_call_result_220;
        PyObject *tmp_args_element_name_125;
        PyObject *tmp_args_element_name_126;
        PyObject *tmp_args_element_name_127;
        PyObject *tmp_called_name_257;
        tmp_called_name_256 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_256 == NULL)) {
            tmp_called_name_256 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_256 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6147;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_125 = mod_consts[210];
        tmp_args_element_name_126 = mod_consts[211];
        tmp_called_name_257 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_257 == NULL)) {
            tmp_called_name_257 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_257 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6148;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6148;
        tmp_args_element_name_127 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_257, mod_consts[254]);
        if (tmp_args_element_name_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6148;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6147;
        {
            PyObject *call_args[] = {tmp_args_element_name_125, tmp_args_element_name_126, tmp_args_element_name_127};
            tmp_call_result_220 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_256, call_args);
        }

        Py_DECREF(tmp_args_element_name_127);
        if (tmp_call_result_220 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6147;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_220);
    }
    {
        PyObject *tmp_called_name_258;
        PyObject *tmp_call_result_221;
        PyObject *tmp_args_element_name_128;
        PyObject *tmp_args_element_name_129;
        PyObject *tmp_args_element_name_130;
        PyObject *tmp_called_name_259;
        tmp_called_name_258 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_258 == NULL)) {
            tmp_called_name_258 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_258 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6150;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_128 = mod_consts[210];
        tmp_args_element_name_129 = mod_consts[211];
        tmp_called_name_259 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_259 == NULL)) {
            tmp_called_name_259 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_259 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6151;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6151;
        tmp_args_element_name_130 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_259, mod_consts[255]);
        if (tmp_args_element_name_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6151;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6150;
        {
            PyObject *call_args[] = {tmp_args_element_name_128, tmp_args_element_name_129, tmp_args_element_name_130};
            tmp_call_result_221 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_258, call_args);
        }

        Py_DECREF(tmp_args_element_name_130);
        if (tmp_call_result_221 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6150;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_221);
    }
    {
        PyObject *tmp_called_name_260;
        PyObject *tmp_call_result_222;
        PyObject *tmp_args_element_name_131;
        PyObject *tmp_args_element_name_132;
        PyObject *tmp_args_element_name_133;
        PyObject *tmp_called_name_261;
        tmp_called_name_260 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_260 == NULL)) {
            tmp_called_name_260 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_260 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6153;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_131 = mod_consts[210];
        tmp_args_element_name_132 = mod_consts[211];
        tmp_called_name_261 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_261 == NULL)) {
            tmp_called_name_261 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_261 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6154;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6154;
        tmp_args_element_name_133 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_261, mod_consts[256]);
        if (tmp_args_element_name_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6154;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6153;
        {
            PyObject *call_args[] = {tmp_args_element_name_131, tmp_args_element_name_132, tmp_args_element_name_133};
            tmp_call_result_222 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_260, call_args);
        }

        Py_DECREF(tmp_args_element_name_133);
        if (tmp_call_result_222 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6153;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_222);
    }
    {
        PyObject *tmp_called_name_262;
        PyObject *tmp_call_result_223;
        PyObject *tmp_args_element_name_134;
        PyObject *tmp_args_element_name_135;
        PyObject *tmp_args_element_name_136;
        PyObject *tmp_called_name_263;
        tmp_called_name_262 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_262 == NULL)) {
            tmp_called_name_262 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_262 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6156;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_134 = mod_consts[210];
        tmp_args_element_name_135 = mod_consts[211];
        tmp_called_name_263 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_263 == NULL)) {
            tmp_called_name_263 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_263 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6157;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6157;
        tmp_args_element_name_136 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_263, mod_consts[257]);
        if (tmp_args_element_name_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6157;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6156;
        {
            PyObject *call_args[] = {tmp_args_element_name_134, tmp_args_element_name_135, tmp_args_element_name_136};
            tmp_call_result_223 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_262, call_args);
        }

        Py_DECREF(tmp_args_element_name_136);
        if (tmp_call_result_223 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6156;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_223);
    }
    {
        PyObject *tmp_called_name_264;
        PyObject *tmp_call_result_224;
        PyObject *tmp_args_element_name_137;
        PyObject *tmp_args_element_name_138;
        PyObject *tmp_args_element_name_139;
        PyObject *tmp_called_name_265;
        tmp_called_name_264 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_264 == NULL)) {
            tmp_called_name_264 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_264 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6159;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_137 = mod_consts[210];
        tmp_args_element_name_138 = mod_consts[211];
        tmp_called_name_265 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_265 == NULL)) {
            tmp_called_name_265 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_265 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6160;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6160;
        tmp_args_element_name_139 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_265, mod_consts[258]);
        if (tmp_args_element_name_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6160;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6159;
        {
            PyObject *call_args[] = {tmp_args_element_name_137, tmp_args_element_name_138, tmp_args_element_name_139};
            tmp_call_result_224 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_264, call_args);
        }

        Py_DECREF(tmp_args_element_name_139);
        if (tmp_call_result_224 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6159;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_224);
    }
    {
        PyObject *tmp_called_name_266;
        PyObject *tmp_call_result_225;
        PyObject *tmp_args_element_name_140;
        PyObject *tmp_args_element_name_141;
        PyObject *tmp_args_element_name_142;
        PyObject *tmp_called_name_267;
        tmp_called_name_266 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_266 == NULL)) {
            tmp_called_name_266 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_266 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6162;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_140 = mod_consts[210];
        tmp_args_element_name_141 = mod_consts[211];
        tmp_called_name_267 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_267 == NULL)) {
            tmp_called_name_267 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_267 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6163;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6163;
        tmp_args_element_name_142 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_267, mod_consts[259]);
        if (tmp_args_element_name_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6163;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6162;
        {
            PyObject *call_args[] = {tmp_args_element_name_140, tmp_args_element_name_141, tmp_args_element_name_142};
            tmp_call_result_225 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_266, call_args);
        }

        Py_DECREF(tmp_args_element_name_142);
        if (tmp_call_result_225 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6162;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_225);
    }
    {
        PyObject *tmp_called_name_268;
        PyObject *tmp_call_result_226;
        PyObject *tmp_args_element_name_143;
        PyObject *tmp_args_element_name_144;
        PyObject *tmp_args_element_name_145;
        PyObject *tmp_called_name_269;
        tmp_called_name_268 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_268 == NULL)) {
            tmp_called_name_268 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_268 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6165;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_143 = mod_consts[210];
        tmp_args_element_name_144 = mod_consts[211];
        tmp_called_name_269 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_269 == NULL)) {
            tmp_called_name_269 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_269 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6166;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6166;
        tmp_args_element_name_145 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_269, mod_consts[260]);
        if (tmp_args_element_name_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6166;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6165;
        {
            PyObject *call_args[] = {tmp_args_element_name_143, tmp_args_element_name_144, tmp_args_element_name_145};
            tmp_call_result_226 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_268, call_args);
        }

        Py_DECREF(tmp_args_element_name_145);
        if (tmp_call_result_226 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6165;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_226);
    }
    {
        PyObject *tmp_called_name_270;
        PyObject *tmp_call_result_227;
        PyObject *tmp_args_element_name_146;
        PyObject *tmp_args_element_name_147;
        PyObject *tmp_args_element_name_148;
        PyObject *tmp_called_name_271;
        tmp_called_name_270 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_270 == NULL)) {
            tmp_called_name_270 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_270 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6168;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_146 = mod_consts[210];
        tmp_args_element_name_147 = mod_consts[211];
        tmp_called_name_271 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_271 == NULL)) {
            tmp_called_name_271 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_271 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6169;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6169;
        tmp_args_element_name_148 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_271, mod_consts[261]);
        if (tmp_args_element_name_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6169;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6168;
        {
            PyObject *call_args[] = {tmp_args_element_name_146, tmp_args_element_name_147, tmp_args_element_name_148};
            tmp_call_result_227 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_270, call_args);
        }

        Py_DECREF(tmp_args_element_name_148);
        if (tmp_call_result_227 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6168;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_227);
    }
    {
        PyObject *tmp_called_name_272;
        PyObject *tmp_call_result_228;
        PyObject *tmp_args_element_name_149;
        PyObject *tmp_args_element_name_150;
        PyObject *tmp_args_element_name_151;
        PyObject *tmp_called_name_273;
        tmp_called_name_272 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_272 == NULL)) {
            tmp_called_name_272 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_272 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6171;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_149 = mod_consts[210];
        tmp_args_element_name_150 = mod_consts[211];
        tmp_called_name_273 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_273 == NULL)) {
            tmp_called_name_273 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_273 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6172;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6172;
        tmp_args_element_name_151 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_273, mod_consts[262]);
        if (tmp_args_element_name_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6172;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6171;
        {
            PyObject *call_args[] = {tmp_args_element_name_149, tmp_args_element_name_150, tmp_args_element_name_151};
            tmp_call_result_228 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_272, call_args);
        }

        Py_DECREF(tmp_args_element_name_151);
        if (tmp_call_result_228 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6171;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_228);
    }
    {
        PyObject *tmp_called_name_274;
        PyObject *tmp_call_result_229;
        PyObject *tmp_args_element_name_152;
        PyObject *tmp_args_element_name_153;
        PyObject *tmp_args_element_name_154;
        PyObject *tmp_called_name_275;
        tmp_called_name_274 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_274 == NULL)) {
            tmp_called_name_274 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_274 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6174;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_152 = mod_consts[210];
        tmp_args_element_name_153 = mod_consts[211];
        tmp_called_name_275 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_275 == NULL)) {
            tmp_called_name_275 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_275 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6175;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6175;
        tmp_args_element_name_154 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_275, mod_consts[263]);
        if (tmp_args_element_name_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6175;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6174;
        {
            PyObject *call_args[] = {tmp_args_element_name_152, tmp_args_element_name_153, tmp_args_element_name_154};
            tmp_call_result_229 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_274, call_args);
        }

        Py_DECREF(tmp_args_element_name_154);
        if (tmp_call_result_229 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6174;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_229);
    }
    {
        PyObject *tmp_called_name_276;
        PyObject *tmp_call_result_230;
        PyObject *tmp_args_element_name_155;
        PyObject *tmp_args_element_name_156;
        PyObject *tmp_args_element_name_157;
        PyObject *tmp_called_name_277;
        tmp_called_name_276 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_276 == NULL)) {
            tmp_called_name_276 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_276 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6177;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_155 = mod_consts[210];
        tmp_args_element_name_156 = mod_consts[211];
        tmp_called_name_277 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_277 == NULL)) {
            tmp_called_name_277 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_277 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6178;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6178;
        tmp_args_element_name_157 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_277, mod_consts[264]);
        if (tmp_args_element_name_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6178;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6177;
        {
            PyObject *call_args[] = {tmp_args_element_name_155, tmp_args_element_name_156, tmp_args_element_name_157};
            tmp_call_result_230 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_276, call_args);
        }

        Py_DECREF(tmp_args_element_name_157);
        if (tmp_call_result_230 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6177;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_230);
    }
    {
        PyObject *tmp_called_name_278;
        PyObject *tmp_call_result_231;
        PyObject *tmp_args_element_name_158;
        PyObject *tmp_args_element_name_159;
        PyObject *tmp_args_element_name_160;
        PyObject *tmp_called_name_279;
        tmp_called_name_278 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_278 == NULL)) {
            tmp_called_name_278 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_278 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6180;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_158 = mod_consts[210];
        tmp_args_element_name_159 = mod_consts[211];
        tmp_called_name_279 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_279 == NULL)) {
            tmp_called_name_279 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_279 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6181;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6181;
        tmp_args_element_name_160 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_279, mod_consts[265]);
        if (tmp_args_element_name_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6181;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6180;
        {
            PyObject *call_args[] = {tmp_args_element_name_158, tmp_args_element_name_159, tmp_args_element_name_160};
            tmp_call_result_231 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_278, call_args);
        }

        Py_DECREF(tmp_args_element_name_160);
        if (tmp_call_result_231 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6180;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_231);
    }
    {
        PyObject *tmp_called_name_280;
        PyObject *tmp_call_result_232;
        PyObject *tmp_args_element_name_161;
        PyObject *tmp_args_element_name_162;
        PyObject *tmp_args_element_name_163;
        PyObject *tmp_called_name_281;
        tmp_called_name_280 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_280 == NULL)) {
            tmp_called_name_280 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_280 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6183;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_161 = mod_consts[210];
        tmp_args_element_name_162 = mod_consts[211];
        tmp_called_name_281 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_281 == NULL)) {
            tmp_called_name_281 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_281 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6184;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6184;
        tmp_args_element_name_163 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_281, mod_consts[266]);
        if (tmp_args_element_name_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6184;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6183;
        {
            PyObject *call_args[] = {tmp_args_element_name_161, tmp_args_element_name_162, tmp_args_element_name_163};
            tmp_call_result_232 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_280, call_args);
        }

        Py_DECREF(tmp_args_element_name_163);
        if (tmp_call_result_232 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6183;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_232);
    }
    {
        PyObject *tmp_called_name_282;
        PyObject *tmp_call_result_233;
        PyObject *tmp_args_element_name_164;
        PyObject *tmp_args_element_name_165;
        PyObject *tmp_args_element_name_166;
        PyObject *tmp_called_name_283;
        tmp_called_name_282 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_282 == NULL)) {
            tmp_called_name_282 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_282 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6186;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_164 = mod_consts[210];
        tmp_args_element_name_165 = mod_consts[211];
        tmp_called_name_283 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_283 == NULL)) {
            tmp_called_name_283 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_283 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6187;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6187;
        tmp_args_element_name_166 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_283, mod_consts[267]);
        if (tmp_args_element_name_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6187;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6186;
        {
            PyObject *call_args[] = {tmp_args_element_name_164, tmp_args_element_name_165, tmp_args_element_name_166};
            tmp_call_result_233 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_282, call_args);
        }

        Py_DECREF(tmp_args_element_name_166);
        if (tmp_call_result_233 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6186;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_233);
    }
    {
        PyObject *tmp_called_name_284;
        PyObject *tmp_call_result_234;
        PyObject *tmp_args_element_name_167;
        PyObject *tmp_args_element_name_168;
        PyObject *tmp_args_element_name_169;
        PyObject *tmp_called_name_285;
        tmp_called_name_284 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_284 == NULL)) {
            tmp_called_name_284 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_284 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6189;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_167 = mod_consts[210];
        tmp_args_element_name_168 = mod_consts[211];
        tmp_called_name_285 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_285 == NULL)) {
            tmp_called_name_285 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_285 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6190;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6190;
        tmp_args_element_name_169 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_285, mod_consts[268]);
        if (tmp_args_element_name_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6190;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6189;
        {
            PyObject *call_args[] = {tmp_args_element_name_167, tmp_args_element_name_168, tmp_args_element_name_169};
            tmp_call_result_234 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_284, call_args);
        }

        Py_DECREF(tmp_args_element_name_169);
        if (tmp_call_result_234 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6189;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_234);
    }
    {
        PyObject *tmp_called_name_286;
        PyObject *tmp_call_result_235;
        PyObject *tmp_args_element_name_170;
        PyObject *tmp_args_element_name_171;
        PyObject *tmp_args_element_name_172;
        PyObject *tmp_called_name_287;
        tmp_called_name_286 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_286 == NULL)) {
            tmp_called_name_286 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_286 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6192;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_170 = mod_consts[210];
        tmp_args_element_name_171 = mod_consts[211];
        tmp_called_name_287 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_287 == NULL)) {
            tmp_called_name_287 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_287 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6193;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6193;
        tmp_args_element_name_172 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_287, mod_consts[269]);
        if (tmp_args_element_name_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6193;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6192;
        {
            PyObject *call_args[] = {tmp_args_element_name_170, tmp_args_element_name_171, tmp_args_element_name_172};
            tmp_call_result_235 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_286, call_args);
        }

        Py_DECREF(tmp_args_element_name_172);
        if (tmp_call_result_235 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6192;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_235);
    }
    {
        PyObject *tmp_called_name_288;
        PyObject *tmp_call_result_236;
        PyObject *tmp_args_element_name_173;
        PyObject *tmp_args_element_name_174;
        PyObject *tmp_args_element_name_175;
        PyObject *tmp_called_name_289;
        tmp_called_name_288 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_288 == NULL)) {
            tmp_called_name_288 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_288 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6195;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_173 = mod_consts[210];
        tmp_args_element_name_174 = mod_consts[211];
        tmp_called_name_289 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_289 == NULL)) {
            tmp_called_name_289 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_289 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6196;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6196;
        tmp_args_element_name_175 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_289, mod_consts[270]);
        if (tmp_args_element_name_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6196;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6195;
        {
            PyObject *call_args[] = {tmp_args_element_name_173, tmp_args_element_name_174, tmp_args_element_name_175};
            tmp_call_result_236 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_288, call_args);
        }

        Py_DECREF(tmp_args_element_name_175);
        if (tmp_call_result_236 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6195;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_236);
    }
    {
        PyObject *tmp_called_name_290;
        PyObject *tmp_call_result_237;
        PyObject *tmp_args_element_name_176;
        PyObject *tmp_args_element_name_177;
        PyObject *tmp_args_element_name_178;
        PyObject *tmp_called_name_291;
        tmp_called_name_290 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_290 == NULL)) {
            tmp_called_name_290 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_290 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6198;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_176 = mod_consts[210];
        tmp_args_element_name_177 = mod_consts[211];
        tmp_called_name_291 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_291 == NULL)) {
            tmp_called_name_291 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_291 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6199;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6199;
        tmp_args_element_name_178 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_291, mod_consts[271]);
        if (tmp_args_element_name_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6199;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6198;
        {
            PyObject *call_args[] = {tmp_args_element_name_176, tmp_args_element_name_177, tmp_args_element_name_178};
            tmp_call_result_237 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_290, call_args);
        }

        Py_DECREF(tmp_args_element_name_178);
        if (tmp_call_result_237 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6198;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_237);
    }
    {
        PyObject *tmp_called_name_292;
        PyObject *tmp_call_result_238;
        PyObject *tmp_args_element_name_179;
        PyObject *tmp_args_element_name_180;
        PyObject *tmp_args_element_name_181;
        PyObject *tmp_called_name_293;
        tmp_called_name_292 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_292 == NULL)) {
            tmp_called_name_292 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_292 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6201;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_179 = mod_consts[210];
        tmp_args_element_name_180 = mod_consts[211];
        tmp_called_name_293 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_293 == NULL)) {
            tmp_called_name_293 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_293 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6202;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6202;
        tmp_args_element_name_181 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_293, mod_consts[272]);
        if (tmp_args_element_name_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6202;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6201;
        {
            PyObject *call_args[] = {tmp_args_element_name_179, tmp_args_element_name_180, tmp_args_element_name_181};
            tmp_call_result_238 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_292, call_args);
        }

        Py_DECREF(tmp_args_element_name_181);
        if (tmp_call_result_238 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6201;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_238);
    }
    {
        PyObject *tmp_called_name_294;
        PyObject *tmp_call_result_239;
        PyObject *tmp_args_element_name_182;
        PyObject *tmp_args_element_name_183;
        PyObject *tmp_args_element_name_184;
        PyObject *tmp_called_name_295;
        tmp_called_name_294 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_294 == NULL)) {
            tmp_called_name_294 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_294 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6204;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_182 = mod_consts[210];
        tmp_args_element_name_183 = mod_consts[211];
        tmp_called_name_295 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_295 == NULL)) {
            tmp_called_name_295 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_295 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6205;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6205;
        tmp_args_element_name_184 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_295, mod_consts[273]);
        if (tmp_args_element_name_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6205;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6204;
        {
            PyObject *call_args[] = {tmp_args_element_name_182, tmp_args_element_name_183, tmp_args_element_name_184};
            tmp_call_result_239 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_294, call_args);
        }

        Py_DECREF(tmp_args_element_name_184);
        if (tmp_call_result_239 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6204;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_239);
    }
    {
        PyObject *tmp_called_name_296;
        PyObject *tmp_call_result_240;
        PyObject *tmp_args_element_name_185;
        PyObject *tmp_args_element_name_186;
        PyObject *tmp_args_element_name_187;
        PyObject *tmp_called_name_297;
        tmp_called_name_296 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_296 == NULL)) {
            tmp_called_name_296 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_296 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6207;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_185 = mod_consts[210];
        tmp_args_element_name_186 = mod_consts[211];
        tmp_called_name_297 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_297 == NULL)) {
            tmp_called_name_297 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_297 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6208;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6208;
        tmp_args_element_name_187 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_297, mod_consts[274]);
        if (tmp_args_element_name_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6208;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6207;
        {
            PyObject *call_args[] = {tmp_args_element_name_185, tmp_args_element_name_186, tmp_args_element_name_187};
            tmp_call_result_240 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_296, call_args);
        }

        Py_DECREF(tmp_args_element_name_187);
        if (tmp_call_result_240 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6207;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_240);
    }
    {
        PyObject *tmp_called_name_298;
        PyObject *tmp_call_result_241;
        PyObject *tmp_args_element_name_188;
        PyObject *tmp_args_element_name_189;
        PyObject *tmp_args_element_name_190;
        PyObject *tmp_called_name_299;
        tmp_called_name_298 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_298 == NULL)) {
            tmp_called_name_298 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_298 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6210;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_188 = mod_consts[210];
        tmp_args_element_name_189 = mod_consts[211];
        tmp_called_name_299 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_299 == NULL)) {
            tmp_called_name_299 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_299 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6211;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6211;
        tmp_args_element_name_190 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_299, mod_consts[275]);
        if (tmp_args_element_name_190 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6211;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6210;
        {
            PyObject *call_args[] = {tmp_args_element_name_188, tmp_args_element_name_189, tmp_args_element_name_190};
            tmp_call_result_241 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_298, call_args);
        }

        Py_DECREF(tmp_args_element_name_190);
        if (tmp_call_result_241 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6210;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_241);
    }
    {
        PyObject *tmp_called_name_300;
        PyObject *tmp_call_result_242;
        PyObject *tmp_args_element_name_191;
        PyObject *tmp_args_element_name_192;
        PyObject *tmp_args_element_name_193;
        PyObject *tmp_called_name_301;
        tmp_called_name_300 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_300 == NULL)) {
            tmp_called_name_300 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_300 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6213;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_191 = mod_consts[210];
        tmp_args_element_name_192 = mod_consts[211];
        tmp_called_name_301 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_301 == NULL)) {
            tmp_called_name_301 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_301 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6214;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6214;
        tmp_args_element_name_193 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_301, mod_consts[276]);
        if (tmp_args_element_name_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6214;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6213;
        {
            PyObject *call_args[] = {tmp_args_element_name_191, tmp_args_element_name_192, tmp_args_element_name_193};
            tmp_call_result_242 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_300, call_args);
        }

        Py_DECREF(tmp_args_element_name_193);
        if (tmp_call_result_242 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6213;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_242);
    }
    {
        PyObject *tmp_called_name_302;
        PyObject *tmp_call_result_243;
        PyObject *tmp_args_element_name_194;
        PyObject *tmp_args_element_name_195;
        PyObject *tmp_args_element_name_196;
        PyObject *tmp_called_name_303;
        tmp_called_name_302 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_302 == NULL)) {
            tmp_called_name_302 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_302 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6216;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_194 = mod_consts[210];
        tmp_args_element_name_195 = mod_consts[211];
        tmp_called_name_303 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_called_name_303 == NULL)) {
            tmp_called_name_303 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_called_name_303 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6217;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6217;
        tmp_args_element_name_196 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_303, mod_consts[277]);
        if (tmp_args_element_name_196 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6217;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6216;
        {
            PyObject *call_args[] = {tmp_args_element_name_194, tmp_args_element_name_195, tmp_args_element_name_196};
            tmp_call_result_243 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_302, call_args);
        }

        Py_DECREF(tmp_args_element_name_196);
        if (tmp_call_result_243 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6216;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_243);
    }
    {
        PyObject *tmp_called_name_304;
        PyObject *tmp_call_result_244;
        tmp_called_name_304 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_304 == NULL)) {
            tmp_called_name_304 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_304 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6227;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6227;
        tmp_call_result_244 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_304, &PyTuple_GET_ITEM(mod_consts[278], 0));

        if (tmp_call_result_244 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6227;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_244);
    }
    {
        PyObject *tmp_called_name_305;
        PyObject *tmp_call_result_245;
        tmp_called_name_305 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_305 == NULL)) {
            tmp_called_name_305 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_305 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6233;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6233;
        tmp_call_result_245 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_305, &PyTuple_GET_ITEM(mod_consts[279], 0));

        if (tmp_call_result_245 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6233;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_245);
    }
    {
        PyObject *tmp_called_name_306;
        PyObject *tmp_call_result_246;
        tmp_called_name_306 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_306 == NULL)) {
            tmp_called_name_306 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_306 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6239;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6239;
        tmp_call_result_246 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_306, &PyTuple_GET_ITEM(mod_consts[280], 0));

        if (tmp_call_result_246 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6239;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_246);
    }
    {
        PyObject *tmp_called_name_307;
        PyObject *tmp_call_result_247;
        tmp_called_name_307 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_307 == NULL)) {
            tmp_called_name_307 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_307 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6245;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6245;
        tmp_call_result_247 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_307, &PyTuple_GET_ITEM(mod_consts[281], 0));

        if (tmp_call_result_247 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6245;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_247);
    }
    {
        PyObject *tmp_called_name_308;
        PyObject *tmp_call_result_248;
        tmp_called_name_308 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_308 == NULL)) {
            tmp_called_name_308 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_308 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6251;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6251;
        tmp_call_result_248 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_308, &PyTuple_GET_ITEM(mod_consts[282], 0));

        if (tmp_call_result_248 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6251;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_248);
    }
    {
        PyObject *tmp_called_name_309;
        PyObject *tmp_call_result_249;
        tmp_called_name_309 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_309 == NULL)) {
            tmp_called_name_309 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_309 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6259;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6259;
        tmp_call_result_249 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_309, &PyTuple_GET_ITEM(mod_consts[283], 0));

        if (tmp_call_result_249 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6259;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_249);
    }
    {
        PyObject *tmp_called_name_310;
        PyObject *tmp_call_result_250;
        tmp_called_name_310 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_310 == NULL)) {
            tmp_called_name_310 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_310 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6265;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6265;
        tmp_call_result_250 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_310, &PyTuple_GET_ITEM(mod_consts[284], 0));

        if (tmp_call_result_250 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6265;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_250);
    }
    {
        PyObject *tmp_called_name_311;
        PyObject *tmp_call_result_251;
        tmp_called_name_311 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_311 == NULL)) {
            tmp_called_name_311 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_311 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6272;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6272;
        tmp_call_result_251 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_311, &PyTuple_GET_ITEM(mod_consts[285], 0));

        if (tmp_call_result_251 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6272;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_251);
    }
    {
        PyObject *tmp_called_name_312;
        PyObject *tmp_call_result_252;
        tmp_called_name_312 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_add_newdocs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_312 == NULL)) {
            tmp_called_name_312 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_312 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6280;

            goto frame_exception_exit_1;
        }
        frame_8baa49b39c388f56108927938a7b72fe->m_frame.f_lineno = 6280;
        tmp_call_result_252 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_312, &PyTuple_GET_ITEM(mod_consts[286], 0));

        if (tmp_call_result_252 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6280;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_252);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8baa49b39c388f56108927938a7b72fe);
#endif
    popFrameStack();

    assertFrameObject(frame_8baa49b39c388f56108927938a7b72fe);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8baa49b39c388f56108927938a7b72fe);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8baa49b39c388f56108927938a7b72fe, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8baa49b39c388f56108927938a7b72fe->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8baa49b39c388f56108927938a7b72fe, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return module_numpy$core$_add_newdocs;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

