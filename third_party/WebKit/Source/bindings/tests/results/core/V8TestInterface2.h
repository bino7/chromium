// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef V8TestInterface2_h
#define V8TestInterface2_h

#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/ScriptWrappable.h"
#include "bindings/core/v8/ToV8.h"
#include "bindings/core/v8/V8Binding.h"
#include "bindings/core/v8/V8DOMWrapper.h"
#include "bindings/core/v8/WrapperTypeInfo.h"
#include "bindings/tests/idls/core/TestInterface2.h"
#include "core/CoreExport.h"
#include "platform/heap/Handle.h"

namespace blink {

class V8TestInterface2 {
    STATIC_ONLY(V8TestInterface2);
public:
    CORE_EXPORT static bool hasInstance(v8::Local<v8::Value>, v8::Isolate*);
    static v8::Local<v8::Object> findInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
    CORE_EXPORT static v8::Local<v8::FunctionTemplate> domTemplate(v8::Isolate*, const DOMWrapperWorld&);
    static TestInterface2* toImpl(v8::Local<v8::Object> object)
    {
        return toScriptWrappable(object)->toImpl<TestInterface2>();
    }
    CORE_EXPORT static TestInterface2* toImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);
    CORE_EXPORT static WrapperTypeInfo wrapperTypeInfo;
    template<typename VisitorDispatcher>
    static void trace(VisitorDispatcher visitor, ScriptWrappable* scriptWrappable)
    {
        visitor->trace(scriptWrappable->toImpl<TestInterface2>());
    }
    static void traceWrappers(WrapperVisitor* visitor, ScriptWrappable* scriptWrappable)
    {
        visitor->traceWrappers(scriptWrappable->toImpl<TestInterface2>());
    }
    static void visitDOMWrapper(v8::Isolate*, ScriptWrappable*, const v8::Persistent<v8::Object>&);
    static void constructorCallback(const v8::FunctionCallbackInfo<v8::Value>&);
    static const int internalFieldCount = v8DefaultWrapperInternalFieldCount + 0;
    CORE_EXPORT static void updateWrapperTypeInfo(InstallTemplateFunction, PreparePrototypeAndInterfaceObjectFunction);
    CORE_EXPORT static void installV8TestInterface2Template(v8::Isolate*, const DOMWrapperWorld&, v8::Local<v8::FunctionTemplate> interfaceTemplate);

private:
    static InstallTemplateFunction installV8TestInterface2TemplateFunction;
};

template <>
struct V8TypeOf<TestInterface2> {
    typedef V8TestInterface2 Type;
};

} // namespace blink

#endif // V8TestInterface2_h