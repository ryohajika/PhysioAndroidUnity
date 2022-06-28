#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1Invoker;
template <typename R, typename T1>
struct VirtualFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4Invoker;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4Invoker<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0Invoker
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1, T2*, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3 p3, T4 p4)
	{
		void* params[4] = { &p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2*, T3, T4, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4, T5* p5)
	{
		void* params[5] = { p1, p2, &p3, &p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, params[4]);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		R ret;
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { &p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1, T2*, T3*, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3, T4 p4)
	{
		R ret;
		void* params[4] = { &p1, p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3*, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2, T3, T4*, T5*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4, T5* p5)
	{
		R ret;
		void* params[5] = { p1, &p2, &p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
struct ConstrainedActionInvoker0
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, NULL);
	}
};
template <typename T1>
struct ConstrainedActionInvoker1;
template <typename T1>
struct ConstrainedActionInvoker1<T1*>
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, params[0]);
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1;
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct ConstrainedFuncInvoker2;
template <typename R, typename T1, typename T2>
struct ConstrainedFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// System.Comparison`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49;
// System.Converter`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Converter_2_t492BE36BDB9ACE2595DC3BFC0172171D1510E4CB;
// System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.Type,System.String>,System.Runtime.InteropServices.ICustomMarshaler>
struct Dictionary_2_t4CE53C8BCD6558009650AFE413B37A773593BC7B;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Boolean>
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
// System.Func`3<System.Type,System.Type[],System.Type>
struct Func_3_t0787D839A577CB564A3192D4164941D5F3DCFBB5;
// System.Reflection.RuntimePropertyInfo/Getter`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8;
// System.Collections.Generic.IComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA;
// System.Collections.Generic.IEnumerable`1<System.Attribute>
struct IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
// System.Collections.Generic.IEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
// System.Collections.Generic.IEqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_t09217E1EDF7CCAED72B667F406AAC92AB64B8790;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t1E95A05AFA88C09BA96A40B431F7D5867BD0D622;
// System.Collections.Generic.IList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IList_1_t8AC59FFD0F90EC2DAD4C3FA39B2A5851F9D2987A;
// System.Collections.Generic.IReadOnlyDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IReadOnlyDictionary_2_tAAE73DD0F1693587789EB2283CCA3AEA0DFB6839;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Predicate`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8;
// System.Buffers.SpanAction`2<System.Char,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A;
// System.Reflection.RuntimePropertyInfo/StaticGetter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct StaticGetter_1_t5C0B26D3ABAE6F5762F45AD85D572BDF5BDB1302;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9;
// System.Collections.Generic.Dictionary`2/Entry<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>[]
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
// System.Threading.Tasks.Task`1<System.Int32>[]
struct Task_1U5BU5D_t54E2C15C8F3B98F79512798949C26C8A752440F8;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.DisallowMultipleComponent[]
struct DisallowMultipleComponentU5BU5D_tEA69AEA10483E24EB99D75210593E7C9452FD283;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// UnityEngine.ExecuteInEditMode[]
struct ExecuteInEditModeU5BU5D_t57196F1483600AD3B95D1452158E1E10864B12A2;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RequireComponent[]
struct RequireComponentU5BU5D_t29B8922A4CC605C50E015637033A7A4B0EF564E9;
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Reflection.Assembly
struct Assembly_t;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MissingMemberException
struct MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211;
// System.MissingMethodException
struct MissingMethodException_t3D861B41F6520C32A7994A884343802925703155;
// System.MonoTypeInfo
struct MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.RankException
struct RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA;
// System.Reflection.RuntimeConstructorInfo
struct RuntimeConstructorInfo_tB41E49C7CFA74A03CCC986E78ABB0C0BD331A5AE;
// System.RuntimeType
struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner
struct MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E;
// System.Reflection.CustomAttributeData/LazyCAttrData
struct LazyCAttrData_t4F8036F83C070762609DB213B69F7FAA2D34ACA3;
// System.Reflection.RuntimePropertyInfo/GetterAdapter
struct GetterAdapter_t03939DF178051A4B282ADA9CC4395C34B86D9D2E;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeArray_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00BA133FF3D84EAB4FB7DB5FB38F235C4E108ED9;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral0FDD716E74C52D972A9997C1B342B1A650D1D139;
IL2CPP_EXTERN_C String_t* _stringLiteral110D1733D85BF5EFB139B95FF286BB627337195E;
IL2CPP_EXTERN_C String_t* _stringLiteral12D34C4D5361DBE1804B6F49EDED3C800B442095;
IL2CPP_EXTERN_C String_t* _stringLiteral1D86DE1FC0445C55F712ED0F6D3E32FED0A1E724;
IL2CPP_EXTERN_C String_t* _stringLiteral24CC8D396132365E532646F936DFC8579E2299B2;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92;
IL2CPP_EXTERN_C String_t* _stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25;
IL2CPP_EXTERN_C String_t* _stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599;
IL2CPP_EXTERN_C String_t* _stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C;
IL2CPP_EXTERN_C String_t* _stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4;
IL2CPP_EXTERN_C String_t* _stringLiteral5E8864981A1D9D7DF38E3ABBDE863B7C527DFF86;
IL2CPP_EXTERN_C String_t* _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5;
IL2CPP_EXTERN_C String_t* _stringLiteral738AE0A86F3C2783715FD77C8D9C55D1C19F9699;
IL2CPP_EXTERN_C String_t* _stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628;
IL2CPP_EXTERN_C String_t* _stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8;
IL2CPP_EXTERN_C String_t* _stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1;
IL2CPP_EXTERN_C String_t* _stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03;
IL2CPP_EXTERN_C String_t* _stringLiteralAE7FC72C0A8144676E285C7A23FCC75766669858;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E;
IL2CPP_EXTERN_C String_t* _stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8;
IL2CPP_EXTERN_C String_t* _stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775;
IL2CPP_EXTERN_C String_t* _stringLiteralC61356ECF43F815CADD86943C995264057299D08;
IL2CPP_EXTERN_C String_t* _stringLiteralC70965A7D491520CA8D04D4EA01613EFED3309E0;
IL2CPP_EXTERN_C String_t* _stringLiteralD06FDE4FC2CBD6E5FAFE1400B04AC8E4F3001D0C;
IL2CPP_EXTERN_C String_t* _stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D;
IL2CPP_EXTERN_C String_t* _stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C;
IL2CPP_EXTERN_C String_t* _stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B;
IL2CPP_EXTERN_C String_t* _stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralE958A63C0675D65C92182FC45CE3E78A8DD48061;
IL2CPP_EXTERN_C String_t* _stringLiteralEE79E0ED75285085B891F475FE68B37575CE1220;
IL2CPP_EXTERN_C String_t* _stringLiteralF7736367EB5597A368928D1011CEA2283AF9B94D;
IL2CPP_EXTERN_C String_t* _stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267;
IL2CPP_EXTERN_C const RuntimeMethod* Activator_CreateInstance_TisIl2CppFullySharedGenericAny_m14D80FDF8E3800A401870ED67223DFC056891652_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__CallStatic_TisIl2CppFullySharedGenericAny_mA069934E49E8EFEB980CA5EED2B1DE810C150A68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__Call_TisIl2CppFullySharedGenericAny_mA1A866611778FF72A2067F7E30B32913C4EB4904_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__GetStatic_TisIl2CppFullySharedGenericAny_m5FA6F86B221B6AD76DDD71818F721187D59BFC38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__Get_TisIl2CppFullySharedGenericAny_m6AA7C8A5BE069836640026CB6EDA5D93B3246683_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__SetStatic_TisIl2CppFullySharedGenericAny_mA923EF05918D13946E2452B81B496229D8B952FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__Set_TisIl2CppFullySharedGenericAny_m1AF6344C2EF172B8799D007F4BAC3ECDC182BC22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_AsReadOnly_TisIl2CppFullySharedGenericAny_mD4D9E3C60B063B18E64A31B902FBC272C440191F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_BinarySearch_TisIl2CppFullySharedGenericAny_m097F3FA5AC11EA434358B2A6E13EFFFCEBE1F265_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_BinarySearch_TisIl2CppFullySharedGenericAny_m9E6BE2AF7A26F30046A9E541B201A03444F19417_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_BinarySearch_TisIl2CppFullySharedGenericAny_mE95A472EFCA90132EA7828986D323FCFCF1C3B47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_ConvertAll_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m14A96DEEDA95901276FC4F307571F8E274241A66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Fill_TisIl2CppFullySharedGenericAny_mD37D3936659B9DF8F738A5A5640333172684873D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Fill_TisIl2CppFullySharedGenericAny_mE47876CE06B32416B6D5980C8AB2ABD8DB4CA793_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_FindAll_TisIl2CppFullySharedGenericAny_m35C679597BB747106A913E8219EF3CA09B745BC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_FindIndex_TisIl2CppFullySharedGenericAny_m0AD465741D851473A26905099BD2163C65118A94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_FindIndex_TisIl2CppFullySharedGenericAny_m293A3BED2CB34E68D3E80A3A1980E9CFD47C03AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_FindIndex_TisIl2CppFullySharedGenericAny_m97FB12E7DE53FF350C15A731A4E54C2F34C71AC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_FindLastIndex_TisIl2CppFullySharedGenericAny_m01496B77179BE1C110853ECB66557D2B6E187544_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_FindLastIndex_TisIl2CppFullySharedGenericAny_m2259A91FC00083836B0D6145D6DAC2682C7BA76A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_FindLastIndex_TisIl2CppFullySharedGenericAny_m80BA42F6E66073F509576CBA4739D25E4D6F5368_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_FindLast_TisIl2CppFullySharedGenericAny_mADE239C9C92FDD295E1C3753AA26B61B0D022567_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Find_TisIl2CppFullySharedGenericAny_m9ABD2EF24DCD19493954D0A57D724249A025E77C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_ForEach_TisIl2CppFullySharedGenericAny_m25BD91772E610CC8AEC0E7A7EF2F21D6290B32B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisIl2CppFullySharedGenericAny_mC56A9F88FF67ED34DC6749E314512E1D97C75391_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisIl2CppFullySharedGenericAny_mD538B12AD0FED2DB5A3FBA24A70B2676E9EA7157_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisIl2CppFullySharedGenericAny_mE10413A6B3EE04819938D4BFE4364AEB0815D0D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisIl2CppFullySharedGenericAny_m00E64208BE3C0C176112F301AF7AC52AC9327277_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Contains_TisIl2CppFullySharedGenericAny_m148347D7A91B363E18C6B2BCDCDB9CE43122A494_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Remove_TisIl2CppFullySharedGenericAny_m37EA518CE48D4DE94B4E12A148B99ACB9E204B05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisIl2CppFullySharedGenericAny_m40A65D3F3DFE5723870F874E158F731A1AE5BDE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__IndexOf_TisIl2CppFullySharedGenericAny_m8B7CCAC86F27AB5C27D0AB84D823D11D11013D25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__Insert_TisIl2CppFullySharedGenericAny_m074A30526A4287820EDB8AAD615A1460C9324E3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisIl2CppFullySharedGenericAny_m6EC3E2950317C876E17CCAC89B0354BF24E992B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__set_Item_TisIl2CppFullySharedGenericAny_m8EA7B18F43851A117DD67D8A4C620C2D1456A951_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_LastIndexOf_TisIl2CppFullySharedGenericAny_m42124E8F60C427C896F449A94F08FC8065F1A0F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_LastIndexOf_TisIl2CppFullySharedGenericAny_mE8071C885BB0D76F2E003AD9147C4EC3FED03BF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_LastIndexOf_TisIl2CppFullySharedGenericAny_mEBF4468468DE981CF85609DB10A53052DDF4BDDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisIl2CppFullySharedGenericAny_m7058C1672A90EFDC4E47F788127BE9FA28C96906_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Reverse_TisIl2CppFullySharedGenericAny_m9675346CBC4932648FC9B8AC786541FCC7734FBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Reverse_TisIl2CppFullySharedGenericAny_mD735AEE41EA85850B64EC3ACBD09E814D01F8ED7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m1BA26265737C3B511F3B65217370E9F263B0FF00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mA1450C5CDA34892A342642C7235ACCC3CBCAF0F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mF45A7C3B43CED034AADD9027C19E21D6B30243C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisIl2CppFullySharedGenericAny_mA37FC21106E178525D9E79D670E383E9FAE986B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisIl2CppFullySharedGenericAny_mA5072810D1FBEFAAB48BD4397D1A971DD2EC6BC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisIl2CppFullySharedGenericAny_mBB2E34F0F908431CBE87584E7729449B9E68C01E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisIl2CppFullySharedGenericAny_mF006305D6998E5D252D8E814693F406EE4A87BCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_TrueForAll_TisIl2CppFullySharedGenericAny_mA231610DE6AEEFB9713078176E4809C196029A7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisIl2CppFullySharedGenericAny_m81177143E3D9118AF316E4C8E5D2AB2BF16C4E80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseInvokableCall_ThrowOnInvalidArg_TisIl2CppFullySharedGenericAny_mA0FE27F106298CD7F71EA734F52423956AA72964_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionExtensions_GetValueOrDefault_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD1145EF5C22064F86AAB59693033CCB1EC3FA396_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Contract_ForAll_TisIl2CppFullySharedGenericAny_m5C22D043CD9C91BC3B6E7517AE83A291B985131B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisIl2CppFullySharedGenericAny_m95E51621356921A0181988D33DE227D27B1D8B8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisIl2CppFullySharedGenericAny_mF4783EEAF4B6A07CECDADF5E9051221F68763764_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisIl2CppFullySharedGenericAny_m4CB55BD0B06B8B382432EFDEA83AB8E2362CFD3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SingleOrDefault_TisIl2CppFullySharedGenericAny_m02E59284132F2046A0CEA29500C78B0A9579F030_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToDictionary_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mFC4963FADE05082EA901CD1C8FDE2685C1B24FE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisIl2CppFullySharedGenericAny_mAD7ADD5EE3D6E0A30271EDC31500BCE6301A256D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisIl2CppFullySharedGenericAny_m6A43D6AC77D4100C26E5A69DDE1FFAF0E52A75F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m65D0E9F280589B949454E7209A0D8F86C0543685_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m679BC27AA6229AC0511525395F94E7A89B6977F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_GetFunctionPointerForDelegate_TisIl2CppFullySharedGenericAny_mF790D90180648964D7AAB20C0C408558C02595F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Math_ThrowMinMaxException_TisIl2CppFullySharedGenericAny_m9A96CFD97AB1E37EBC18DA9343092F08770E38E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_AsBytes_TisIl2CppFullySharedGenericStruct_m29EB0D577FBD057543C0B5C910EED089BE9610EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_AsBytes_TisIl2CppFullySharedGenericStruct_m36406DDF19CB65616FB43D2C1C74451EE0F4BD48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_Create_TisIl2CppFullySharedGenericAny_mC571D61AA789807D59CAE43CB15AE8779FB56E65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromCancellation_TisIl2CppFullySharedGenericAny_mB636433E6C3D31528DE7523373943D4417E75057_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppFullySharedGenericAny_mCA7EA6586E1C7C8B358B9FD1F058915BA583D905_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeArray_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable/<>c__DisplayClass6_0`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct U3CU3Ec__DisplayClass6_0_1_tE55BAA8F710B52E70FD7088CD314B782A20EA879  : public RuntimeObject
{
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/<>c__DisplayClass6_0`1::predicate1
	Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate1_0;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/<>c__DisplayClass6_0`1::predicate2
	Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate2_1;
};

// System.Collections.Generic.ArraySortHelper`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ArraySortHelper_1_tA28E8AFAF0DFEB53C13A065091BF6C9E58743967  : public RuntimeObject
{
};

struct ArraySortHelper_1_tA28E8AFAF0DFEB53C13A065091BF6C9E58743967_StaticFields
{
	// System.Collections.Generic.ArraySortHelper`1<T> System.Collections.Generic.ArraySortHelper`1::s_defaultArraySortHelper
	ArraySortHelper_1_tA28E8AFAF0DFEB53C13A065091BF6C9E58743967* ___s_defaultArraySortHelper_0;
};

// System.Collections.Generic.ArraySortHelper`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3  : public RuntimeObject
{
};

struct ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3_StaticFields
{
	// System.Collections.Generic.ArraySortHelper`2<TKey,TValue> System.Collections.Generic.ArraySortHelper`2::s_defaultArraySortHelper
	ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3* ___s_defaultArraySortHelper_0;
};

// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_7;
};

// System.EmptyArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80  : public RuntimeObject
{
};

struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields
{
	// T[] System.EmptyArray`1::Value
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___Value_0;
};

// System.Array/EmptyInternalEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EmptyInternalEnumerator_1_t607720486C47065AFF0B11BB349CAC85DEBCE543  : public RuntimeObject
{
};

struct EmptyInternalEnumerator_1_t607720486C47065AFF0B11BB349CAC85DEBCE543_StaticFields
{
	// System.Array/EmptyInternalEnumerator`1<T> System.Array/EmptyInternalEnumerator`1::Value
	EmptyInternalEnumerator_1_t607720486C47065AFF0B11BB349CAC85DEBCE543* ___Value_0;
};

// System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};

struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer_0;
};

// System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0 : public RuntimeObject {};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.ObjectModel.ReadOnlyCollection`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Activator
struct Activator_tB31D4E2D282C5AA90D61D6EB0A297A5D3D41DA24  : public RuntimeObject
{
};

// UnityEngine.AndroidJNIHelper
struct AndroidJNIHelper_t2C1AB9F6B2295C20B24108936A003F65F02D71DD  : public RuntimeObject
{
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};
struct Il2CppArrayBounds;

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// System.Runtime.CompilerServices.AsyncTaskCache
struct AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09  : public RuntimeObject
{
};

struct AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Boolean> System.Runtime.CompilerServices.AsyncTaskCache::TrueTask
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___TrueTask_0;
	// System.Threading.Tasks.Task`1<System.Boolean> System.Runtime.CompilerServices.AsyncTaskCache::FalseTask
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___FalseTask_1;
	// System.Threading.Tasks.Task`1<System.Int32>[] System.Runtime.CompilerServices.AsyncTaskCache::Int32Tasks
	Task_1U5BU5D_t54E2C15C8F3B98F79512798949C26C8A752440F8* ___Int32Tasks_2;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// UnityEngine.AttributeHelperEngine
struct AttributeHelperEngine_t6B3D8969EF52C428F6DD05AB6A788FB43FD69520  : public RuntimeObject
{
};

struct AttributeHelperEngine_t6B3D8969EF52C428F6DD05AB6A788FB43FD69520_StaticFields
{
	// UnityEngine.DisallowMultipleComponent[] UnityEngine.AttributeHelperEngine::_disallowMultipleComponentArray
	DisallowMultipleComponentU5BU5D_tEA69AEA10483E24EB99D75210593E7C9452FD283* ____disallowMultipleComponentArray_0;
	// UnityEngine.ExecuteInEditMode[] UnityEngine.AttributeHelperEngine::_executeInEditModeArray
	ExecuteInEditModeU5BU5D_t57196F1483600AD3B95D1452158E1E10864B12A2* ____executeInEditModeArray_1;
	// UnityEngine.RequireComponent[] UnityEngine.AttributeHelperEngine::_requireComponentArray
	RequireComponentU5BU5D_t29B8922A4CC605C50E015637033A7A4B0EF564E9* ____requireComponentArray_2;
};

// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339  : public RuntimeObject
{
};

// System.Buffer
struct Buffer_tF5DDA52AA39735125D710A126AC80BADEB900CD4  : public RuntimeObject
{
};

// System.Collections.Generic.CollectionExtensions
struct CollectionExtensions_t182A00BC503C9791010A3F71F412C76ABDD4D10D  : public RuntimeObject
{
};

// System.Diagnostics.Contracts.Contract
struct Contract_tD9FCC48E522DA4471B12BD7298721B5814BF91A6  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Reflection.CustomAttributeData
struct CustomAttributeData_tC851BE158358D5CFB283E630148B10B7685DDC95  : public RuntimeObject
{
	// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::ctorInfo
	ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___ctorInfo_0;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::ctorArgs
	RuntimeObject* ___ctorArgs_1;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::namedArgs
	RuntimeObject* ___namedArgs_2;
	// System.Reflection.CustomAttributeData/LazyCAttrData System.Reflection.CustomAttributeData::lazyData
	LazyCAttrData_t4F8036F83C070762609DB213B69F7FAA2D34ACA3* ___lazyData_3;
};

// System.Reflection.CustomAttributeExtensions
struct CustomAttributeExtensions_t8BE4B68F928B20AC1E02ABD129534DB9004FB0FA  : public RuntimeObject
{
};

// System.Linq.Enumerable
struct Enumerable_t372195206D92B3F390693F9449282C31FD564C09  : public RuntimeObject
{
};

// System.Threading.Interlocked
struct Interlocked_t8A60F2549BC4FF402BA876880E6C60D20E782B0D  : public RuntimeObject
{
};

// System.Runtime.CompilerServices.JitHelpers
struct JitHelpers_t15439654973DBC6512239BD04D2E0A3E0EDCCE62  : public RuntimeObject
{
};

// System.Threading.LazyInitializer
struct LazyInitializer_t81FC47D75907B87D08CFBF24B41FB06B968BC948  : public RuntimeObject
{
};

// System.Runtime.InteropServices.Marshal
struct Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7  : public RuntimeObject
{
};

struct Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticFields
{
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemMaxDBCSCharSize
	int32_t ___SystemMaxDBCSCharSize_0;
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemDefaultCharSize
	int32_t ___SystemDefaultCharSize_1;
	// System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.Type,System.String>,System.Runtime.InteropServices.ICustomMarshaler> System.Runtime.InteropServices.Marshal::MarshalerInstanceCache
	Dictionary_2_t4CE53C8BCD6558009650AFE413B37A773593BC7B* ___MarshalerInstanceCache_2;
	// System.Object System.Runtime.InteropServices.Marshal::MarshalerInstanceCacheLock
	RuntimeObject* ___MarshalerInstanceCacheLock_3;
};

// System.Math
struct Math_tEB65DE7CA8B083C412C969C92981C030865486CE  : public RuntimeObject
{
};

struct Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticFields
{
	// System.Double System.Math::doubleRoundLimit
	double ___doubleRoundLimit_0;
	// System.Double[] System.Math::roundPower10Double
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___roundPower10Double_1;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.MemoryExtensions
struct MemoryExtensions_t2DC3604DB167FA4473786CD400C718D98E20C6D7  : public RuntimeObject
{
};

// System.Runtime.InteropServices.MemoryMarshal
struct MemoryMarshal_t0208DBB300D970EB22EDC8C08FB57418DE91D026  : public RuntimeObject
{
};

// Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility
struct NativeArrayUnsafeUtility_tB4D8A974D44EE6F4B2C32D5D19861FB081F88FCE  : public RuntimeObject
{
};

// System.Runtime.CompilerServices.RuntimeHelpers
struct RuntimeHelpers_t9E6C71E90FD7CAB0987E101A77FBDA52EFDE284C  : public RuntimeObject
{
};

// System.SpanHelpers
struct SpanHelpers_tCA85E2BE495D0EC31B7D20D20E9FC3309265176A  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0  : public RuntimeObject
{
	// System.Threading.SynchronizationContextProperties System.Threading.SynchronizationContext::_props
	int32_t ____props_0;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// System.ThrowHelper
struct ThrowHelper_tDAFF1075E5B21B120EF09F3F2EAD51037DAB6F73  : public RuntimeObject
{
};

// System.Runtime.CompilerServices.Unsafe
struct Unsafe_t013486CBD5A88F5F394651AB34F2AC5AE97E71E4  : public RuntimeObject
{
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility
struct UnsafeUtility_tC3E6B7D52A973A81739E8BD97D6E757BA8371D46  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Numerics.Vector
struct Vector_t246EF05F1CA5F494FB8B48AB2724DFCD2C2C5A9A  : public RuntimeObject
{
};

// System.Threading.Volatile
struct Volatile_tC26FEDFD254742AD25E4B908FA81293FBBF4ECB0  : public RuntimeObject
{
};

// UnityEngine._AndroidJNIHelper
struct _AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3  : public RuntimeObject
{
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner
struct MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E  : public RuntimeObject
{
	// System.Threading.ExecutionContext System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner::m_context
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_context_0;
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner::m_stateMachine
	RuntimeObject* ___m_stateMachine_1;
};

struct MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E_StaticFields
{
	// System.Threading.ContextCallback System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner::s_invokeMoveNext
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_invokeMoveNext_2;
};

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;

// System.Array/InternalEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct InternalEnumerator_1_tB0830DCD68C540731416F628C5756C5DB4143FC9 
{
	// System.Array System.Array/InternalEnumerator`1::array
	RuntimeArray* ___array_0;
	// System.Int32 System.Array/InternalEnumerator`1::idx
	int32_t ___idx_1;
};
// Native definition for P/Invoke marshalling of System.Array/InternalEnumerator`1
#ifndef InternalEnumerator_1_t49A7316D05D91CFDD11253B1ADFDB8558ADC0D5C_marshaled_pinvoke_define
#define InternalEnumerator_1_t49A7316D05D91CFDD11253B1ADFDB8558ADC0D5C_marshaled_pinvoke_define
struct InternalEnumerator_1_t49A7316D05D91CFDD11253B1ADFDB8558ADC0D5C_marshaled_pinvoke
{
	RuntimeArray* ___array_0;
	int32_t ___idx_1;
};
#endif
// Native definition for COM marshalling of System.Array/InternalEnumerator`1
#ifndef InternalEnumerator_1_t49A7316D05D91CFDD11253B1ADFDB8558ADC0D5C_marshaled_com_define
#define InternalEnumerator_1_t49A7316D05D91CFDD11253B1ADFDB8558ADC0D5C_marshaled_com_define
struct InternalEnumerator_1_t49A7316D05D91CFDD11253B1ADFDB8558ADC0D5C_marshaled_com
{
	RuntimeArray* ___array_0;
	int32_t ___idx_1;
};
#endif

// Unity.Collections.NativeArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};

// System.Linq.Enumerable/WhereArrayIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6 : public RuntimeObject {};

// System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B : public RuntimeObject {};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C 
{
	// System.Type System.Reflection.MonoPropertyInfo::parent
	Type_t* ___parent_0;
	// System.Type System.Reflection.MonoPropertyInfo::declaring_type
	Type_t* ___declaring_type_1;
	// System.String System.Reflection.MonoPropertyInfo::name
	String_t* ___name_2;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::get_method
	MethodInfo_t* ___get_method_3;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::set_method
	MethodInfo_t* ___set_method_4;
	// System.Reflection.PropertyAttributes System.Reflection.MonoPropertyInfo::attrs
	int32_t ___attrs_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshaled_pinvoke
{
	Type_t* ___parent_0;
	Type_t* ___declaring_type_1;
	char* ___name_2;
	MethodInfo_t* ___get_method_3;
	MethodInfo_t* ___set_method_4;
	int32_t ___attrs_5;
};
// Native definition for COM marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshaled_com
{
	Type_t* ___parent_0;
	Type_t* ___declaring_type_1;
	Il2CppChar* ___name_2;
	MethodInfo_t* ___get_method_3;
	MethodInfo_t* ___set_method_4;
	int32_t ___attrs_5;
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// System.Numerics.Register
struct Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte System.Numerics.Register::byte_0
			uint8_t ___byte_0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byte_0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_1_1_OffsetPadding[1];
			// System.Byte System.Numerics.Register::byte_1
			uint8_t ___byte_1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___byte_1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_2_2_OffsetPadding[2];
			// System.Byte System.Numerics.Register::byte_2
			uint8_t ___byte_2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___byte_2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_3_3_OffsetPadding[3];
			// System.Byte System.Numerics.Register::byte_3
			uint8_t ___byte_3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___byte_3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_4_4_OffsetPadding[4];
			// System.Byte System.Numerics.Register::byte_4
			uint8_t ___byte_4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___byte_4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_5_5_OffsetPadding[5];
			// System.Byte System.Numerics.Register::byte_5
			uint8_t ___byte_5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___byte_5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_6_6_OffsetPadding[6];
			// System.Byte System.Numerics.Register::byte_6
			uint8_t ___byte_6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___byte_6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_7_7_OffsetPadding[7];
			// System.Byte System.Numerics.Register::byte_7
			uint8_t ___byte_7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___byte_7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_8_8_OffsetPadding[8];
			// System.Byte System.Numerics.Register::byte_8
			uint8_t ___byte_8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___byte_8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_9_9_OffsetPadding[9];
			// System.Byte System.Numerics.Register::byte_9
			uint8_t ___byte_9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___byte_9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_10_10_OffsetPadding[10];
			// System.Byte System.Numerics.Register::byte_10
			uint8_t ___byte_10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___byte_10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_11_11_OffsetPadding[11];
			// System.Byte System.Numerics.Register::byte_11
			uint8_t ___byte_11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___byte_11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_12_12_OffsetPadding[12];
			// System.Byte System.Numerics.Register::byte_12
			uint8_t ___byte_12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___byte_12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_13_13_OffsetPadding[13];
			// System.Byte System.Numerics.Register::byte_13
			uint8_t ___byte_13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___byte_13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_14_14_OffsetPadding[14];
			// System.Byte System.Numerics.Register::byte_14
			uint8_t ___byte_14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___byte_14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_15_15_OffsetPadding[15];
			// System.Byte System.Numerics.Register::byte_15
			uint8_t ___byte_15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___byte_15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte System.Numerics.Register::sbyte_0
			int8_t ___sbyte_0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___sbyte_0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_1_17_OffsetPadding[1];
			// System.SByte System.Numerics.Register::sbyte_1
			int8_t ___sbyte_1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_1_17_OffsetPadding_forAlignmentOnly[1];
			int8_t ___sbyte_1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_2_18_OffsetPadding[2];
			// System.SByte System.Numerics.Register::sbyte_2
			int8_t ___sbyte_2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_2_18_OffsetPadding_forAlignmentOnly[2];
			int8_t ___sbyte_2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_3_19_OffsetPadding[3];
			// System.SByte System.Numerics.Register::sbyte_3
			int8_t ___sbyte_3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_3_19_OffsetPadding_forAlignmentOnly[3];
			int8_t ___sbyte_3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_4_20_OffsetPadding[4];
			// System.SByte System.Numerics.Register::sbyte_4
			int8_t ___sbyte_4_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_4_20_OffsetPadding_forAlignmentOnly[4];
			int8_t ___sbyte_4_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_5_21_OffsetPadding[5];
			// System.SByte System.Numerics.Register::sbyte_5
			int8_t ___sbyte_5_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_5_21_OffsetPadding_forAlignmentOnly[5];
			int8_t ___sbyte_5_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_6_22_OffsetPadding[6];
			// System.SByte System.Numerics.Register::sbyte_6
			int8_t ___sbyte_6_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_6_22_OffsetPadding_forAlignmentOnly[6];
			int8_t ___sbyte_6_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_7_23_OffsetPadding[7];
			// System.SByte System.Numerics.Register::sbyte_7
			int8_t ___sbyte_7_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_7_23_OffsetPadding_forAlignmentOnly[7];
			int8_t ___sbyte_7_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_8_24_OffsetPadding[8];
			// System.SByte System.Numerics.Register::sbyte_8
			int8_t ___sbyte_8_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_8_24_OffsetPadding_forAlignmentOnly[8];
			int8_t ___sbyte_8_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_9_25_OffsetPadding[9];
			// System.SByte System.Numerics.Register::sbyte_9
			int8_t ___sbyte_9_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_9_25_OffsetPadding_forAlignmentOnly[9];
			int8_t ___sbyte_9_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_10_26_OffsetPadding[10];
			// System.SByte System.Numerics.Register::sbyte_10
			int8_t ___sbyte_10_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_10_26_OffsetPadding_forAlignmentOnly[10];
			int8_t ___sbyte_10_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_11_27_OffsetPadding[11];
			// System.SByte System.Numerics.Register::sbyte_11
			int8_t ___sbyte_11_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_11_27_OffsetPadding_forAlignmentOnly[11];
			int8_t ___sbyte_11_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_12_28_OffsetPadding[12];
			// System.SByte System.Numerics.Register::sbyte_12
			int8_t ___sbyte_12_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_12_28_OffsetPadding_forAlignmentOnly[12];
			int8_t ___sbyte_12_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_13_29_OffsetPadding[13];
			// System.SByte System.Numerics.Register::sbyte_13
			int8_t ___sbyte_13_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_13_29_OffsetPadding_forAlignmentOnly[13];
			int8_t ___sbyte_13_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_14_30_OffsetPadding[14];
			// System.SByte System.Numerics.Register::sbyte_14
			int8_t ___sbyte_14_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_14_30_OffsetPadding_forAlignmentOnly[14];
			int8_t ___sbyte_14_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_15_31_OffsetPadding[15];
			// System.SByte System.Numerics.Register::sbyte_15
			int8_t ___sbyte_15_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_15_31_OffsetPadding_forAlignmentOnly[15];
			int8_t ___sbyte_15_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 System.Numerics.Register::uint16_0
			uint16_t ___uint16_0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___uint16_0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_1_33_OffsetPadding[2];
			// System.UInt16 System.Numerics.Register::uint16_1
			uint16_t ___uint16_1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_1_33_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___uint16_1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_2_34_OffsetPadding[4];
			// System.UInt16 System.Numerics.Register::uint16_2
			uint16_t ___uint16_2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_2_34_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___uint16_2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_3_35_OffsetPadding[6];
			// System.UInt16 System.Numerics.Register::uint16_3
			uint16_t ___uint16_3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_3_35_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___uint16_3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_4_36_OffsetPadding[8];
			// System.UInt16 System.Numerics.Register::uint16_4
			uint16_t ___uint16_4_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_4_36_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uint16_4_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_5_37_OffsetPadding[10];
			// System.UInt16 System.Numerics.Register::uint16_5
			uint16_t ___uint16_5_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_5_37_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___uint16_5_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_6_38_OffsetPadding[12];
			// System.UInt16 System.Numerics.Register::uint16_6
			uint16_t ___uint16_6_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_6_38_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___uint16_6_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_7_39_OffsetPadding[14];
			// System.UInt16 System.Numerics.Register::uint16_7
			uint16_t ___uint16_7_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_7_39_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___uint16_7_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 System.Numerics.Register::int16_0
			int16_t ___int16_0_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___int16_0_40_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_1_41_OffsetPadding[2];
			// System.Int16 System.Numerics.Register::int16_1
			int16_t ___int16_1_41;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_1_41_OffsetPadding_forAlignmentOnly[2];
			int16_t ___int16_1_41_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_2_42_OffsetPadding[4];
			// System.Int16 System.Numerics.Register::int16_2
			int16_t ___int16_2_42;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_2_42_OffsetPadding_forAlignmentOnly[4];
			int16_t ___int16_2_42_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_3_43_OffsetPadding[6];
			// System.Int16 System.Numerics.Register::int16_3
			int16_t ___int16_3_43;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_3_43_OffsetPadding_forAlignmentOnly[6];
			int16_t ___int16_3_43_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_4_44_OffsetPadding[8];
			// System.Int16 System.Numerics.Register::int16_4
			int16_t ___int16_4_44;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_4_44_OffsetPadding_forAlignmentOnly[8];
			int16_t ___int16_4_44_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_5_45_OffsetPadding[10];
			// System.Int16 System.Numerics.Register::int16_5
			int16_t ___int16_5_45;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_5_45_OffsetPadding_forAlignmentOnly[10];
			int16_t ___int16_5_45_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_6_46_OffsetPadding[12];
			// System.Int16 System.Numerics.Register::int16_6
			int16_t ___int16_6_46;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_6_46_OffsetPadding_forAlignmentOnly[12];
			int16_t ___int16_6_46_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_7_47_OffsetPadding[14];
			// System.Int16 System.Numerics.Register::int16_7
			int16_t ___int16_7_47;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_7_47_OffsetPadding_forAlignmentOnly[14];
			int16_t ___int16_7_47_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 System.Numerics.Register::uint32_0
			uint32_t ___uint32_0_48;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uint32_0_48_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_1_49_OffsetPadding[4];
			// System.UInt32 System.Numerics.Register::uint32_1
			uint32_t ___uint32_1_49;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_1_49_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uint32_1_49_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_2_50_OffsetPadding[8];
			// System.UInt32 System.Numerics.Register::uint32_2
			uint32_t ___uint32_2_50;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_2_50_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uint32_2_50_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_3_51_OffsetPadding[12];
			// System.UInt32 System.Numerics.Register::uint32_3
			uint32_t ___uint32_3_51;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_3_51_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___uint32_3_51_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Numerics.Register::int32_0
			int32_t ___int32_0_52;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___int32_0_52_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_1_53_OffsetPadding[4];
			// System.Int32 System.Numerics.Register::int32_1
			int32_t ___int32_1_53;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_1_53_OffsetPadding_forAlignmentOnly[4];
			int32_t ___int32_1_53_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_2_54_OffsetPadding[8];
			// System.Int32 System.Numerics.Register::int32_2
			int32_t ___int32_2_54;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_2_54_OffsetPadding_forAlignmentOnly[8];
			int32_t ___int32_2_54_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_3_55_OffsetPadding[12];
			// System.Int32 System.Numerics.Register::int32_3
			int32_t ___int32_3_55;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_3_55_OffsetPadding_forAlignmentOnly[12];
			int32_t ___int32_3_55_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 System.Numerics.Register::uint64_0
			uint64_t ___uint64_0_56;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___uint64_0_56_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint64_1_57_OffsetPadding[8];
			// System.UInt64 System.Numerics.Register::uint64_1
			uint64_t ___uint64_1_57;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint64_1_57_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___uint64_1_57_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 System.Numerics.Register::int64_0
			int64_t ___int64_0_58;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___int64_0_58_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int64_1_59_OffsetPadding[8];
			// System.Int64 System.Numerics.Register::int64_1
			int64_t ___int64_1_59;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int64_1_59_OffsetPadding_forAlignmentOnly[8];
			int64_t ___int64_1_59_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single System.Numerics.Register::single_0
			float ___single_0_60;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___single_0_60_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_1_61_OffsetPadding[4];
			// System.Single System.Numerics.Register::single_1
			float ___single_1_61;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_1_61_OffsetPadding_forAlignmentOnly[4];
			float ___single_1_61_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_2_62_OffsetPadding[8];
			// System.Single System.Numerics.Register::single_2
			float ___single_2_62;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_2_62_OffsetPadding_forAlignmentOnly[8];
			float ___single_2_62_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_3_63_OffsetPadding[12];
			// System.Single System.Numerics.Register::single_3
			float ___single_3_63;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_3_63_OffsetPadding_forAlignmentOnly[12];
			float ___single_3_63_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double System.Numerics.Register::double_0
			double ___double_0_64;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___double_0_64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___double_1_65_OffsetPadding[8];
			// System.Double System.Numerics.Register::double_1
			double ___double_1_65;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___double_1_65_OffsetPadding_forAlignmentOnly[8];
			double ___double_1_65_forAlignmentOnly;
		};
	};
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Threading.ExecutionContext/Reader
struct Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E 
{
	// System.Threading.ExecutionContext System.Threading.ExecutionContext/Reader::m_ec
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ec_0;
};
// Native definition for P/Invoke marshalling of System.Threading.ExecutionContext/Reader
struct Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshaled_pinvoke
{
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ec_0;
};
// Native definition for COM marshalling of System.Threading.ExecutionContext/Reader
struct Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshaled_com
{
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ec_0;
};

// System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99 
{
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Volatile/VolatileObject::Value
	RuntimeObject* ___Value_0;
};
// Native definition for P/Invoke marshalling of System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_pinvoke
{
	RuntimeObject* ___Value_0;
};
// Native definition for COM marshalling of System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_com
{
	RuntimeObject* ___Value_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___s_defaultResultTask_0;
};

// System.ByReference`1<System.Byte>
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.ByReference`1<System.Char>
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.ByReference`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.ByReference`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.Numerics.Vector`1<System.UInt64>
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A 
{
	// System.Numerics.Register System.Numerics.Vector`1::register
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register_0;
};

struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields
{
	// System.Int32 System.Numerics.Vector`1::s_count
	int32_t ___s_count_1;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_zero
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_zero_2;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_one
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_one_3;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_allOnes
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_allOnes_4;
};

// System.Numerics.Vector`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 
{
	// System.Numerics.Register System.Numerics.Vector`1::register
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register_0;
};

struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2_StaticFields
{
	// System.Int32 System.Numerics.Vector`1::s_count
	int32_t ___s_count_1;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_zero
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_zero_2;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_one
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_one_3;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_allOnes
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_allOnes_4;
};

// System.Linq.Enumerable/WhereListIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0 : public RuntimeObject {};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Threading.ExecutionContextSwitcher
struct ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708 
{
	// System.Threading.ExecutionContext/Reader System.Threading.ExecutionContextSwitcher::outerEC
	Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E ___outerEC_0;
	// System.Boolean System.Threading.ExecutionContextSwitcher::outerECBelongsToScope
	bool ___outerECBelongsToScope_1;
	// System.Object System.Threading.ExecutionContextSwitcher::hecsw
	RuntimeObject* ___hecsw_2;
	// System.Threading.Thread System.Threading.ExecutionContextSwitcher::thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___thread_3;
};
// Native definition for P/Invoke marshalling of System.Threading.ExecutionContextSwitcher
struct ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_marshaled_pinvoke
{
	Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshaled_pinvoke ___outerEC_0;
	int32_t ___outerECBelongsToScope_1;
	Il2CppIUnknown* ___hecsw_2;
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___thread_3;
};
// Native definition for COM marshalling of System.Threading.ExecutionContextSwitcher
struct ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_marshaled_com
{
	Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshaled_com ___outerEC_0;
	int32_t ___outerECBelongsToScope_1;
	Il2CppIUnknown* ___hecsw_2;
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___thread_3;
};

// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8  : public RuntimeObject
{
	// System.Boolean UnityEngine.GlobalJavaObjectRef::m_disposed
	bool ___m_disposed_0;
	// System.IntPtr UnityEngine.GlobalJavaObjectRef::m_jobject
	intptr_t ___m_jobject_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.Reflection.RuntimePropertyInfo
struct RuntimePropertyInfo_t5F54C4304A36C216127C93BF1553920A8685537D  : public PropertyInfo_t
{
	// System.IntPtr System.Reflection.RuntimePropertyInfo::klass
	intptr_t ___klass_0;
	// System.IntPtr System.Reflection.RuntimePropertyInfo::prop
	intptr_t ___prop_1;
	// System.Reflection.MonoPropertyInfo System.Reflection.RuntimePropertyInfo::info
	MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C ___info_2;
	// System.Reflection.PInfo System.Reflection.RuntimePropertyInfo::cached
	int32_t ___cached_3;
	// System.Reflection.RuntimePropertyInfo/GetterAdapter System.Reflection.RuntimePropertyInfo::cached_getter
	GetterAdapter_t03939DF178051A4B282ADA9CC4395C34B86D9D2E* ___cached_getter_4;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.jvalue
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Boolean UnityEngine.jvalue::z
			bool ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte UnityEngine.jvalue::b
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Char UnityEngine.jvalue::c
			Il2CppChar ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppChar ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 UnityEngine.jvalue::s
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.jvalue::i
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 UnityEngine.jvalue::j
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single UnityEngine.jvalue::f
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double UnityEngine.jvalue::d
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr UnityEngine.jvalue::l
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.jvalue
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.jvalue
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};

// System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	// System.IntPtr System.Array/RawData::Bounds
	intptr_t ___Bounds_0;
	// System.IntPtr System.Array/RawData::Count
	intptr_t ___Count_1;
	// System.Byte System.Array/RawData::Data
	uint8_t ___Data_2;
};
// Native definition for P/Invoke marshalling of System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds_0;
	intptr_t ___Count_1;
	uint8_t ___Data_2;
};
// Native definition for COM marshalling of System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds_0;
	intptr_t ___Count_1;
	uint8_t ___Data_2;
};

// System.ReadOnlySpan`1<System.Byte>
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.ReadOnlySpan`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.ReadOnlySpan`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.Span`1<System.Byte>
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// System.Span`1<System.Char>
struct Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// System.Span`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// System.Span`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_7;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};

// System.Comparison`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49  : public MulticastDelegate_t
{
};

// System.Converter`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Converter_2_t492BE36BDB9ACE2595DC3BFC0172171D1510E4CB  : public MulticastDelegate_t
{
};

// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Boolean>
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};

// System.Reflection.RuntimePropertyInfo/Getter`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8  : public MulticastDelegate_t
{
};

// System.Predicate`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107  : public MulticastDelegate_t
{
};

// System.Buffers.SpanAction`2<System.Char,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A  : public MulticastDelegate_t
{
};

// System.Reflection.RuntimePropertyInfo/StaticGetter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct StaticGetter_1_t5C0B26D3ABAE6F5762F45AD85D572BDF5BDB1302  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.MemberAccessException
struct MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.RankException
struct RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D  : public Type_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.MissingMemberException
struct MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211  : public MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC
{
	// System.String System.MissingMemberException::ClassName
	String_t* ___ClassName_18;
	// System.String System.MissingMemberException::MemberName
	String_t* ___MemberName_19;
	// System.Byte[] System.MissingMemberException::Signature
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Signature_20;
};

// System.RuntimeType
struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1  : public TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D
{
	// System.MonoTypeInfo System.RuntimeType::type_info
	MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501* ___type_info_25;
	// System.Object System.RuntimeType::GenericCache
	RuntimeObject* ___GenericCache_26;
	// System.Reflection.RuntimeConstructorInfo System.RuntimeType::m_serializationCtor
	RuntimeConstructorInfo_tB41E49C7CFA74A03CCC986E78ABB0C0BD331A5AE* ___m_serializationCtor_27;
};

struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_StaticFields
{
	// System.RuntimeType System.RuntimeType::ValueType
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___ValueType_8;
	// System.RuntimeType System.RuntimeType::EnumType
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___EnumType_9;
	// System.RuntimeType System.RuntimeType::ObjectType
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___ObjectType_10;
	// System.RuntimeType System.RuntimeType::StringType
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___StringType_11;
	// System.RuntimeType System.RuntimeType::DelegateType
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___DelegateType_12;
	// System.Type[] System.RuntimeType::s_SICtorParamTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___s_SICtorParamTypes_13;
	// System.Func`3<System.Type,System.Type[],System.Type> System.RuntimeType::MakeTypeBuilderInstantiation
	Func_3_t0787D839A577CB564A3192D4164941D5F3DCFBB5* ___MakeTypeBuilderInstantiation_14;
	// System.RuntimeType System.RuntimeType::s_typedRef
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___s_typedRef_24;
};

// System.MissingMethodException
struct MissingMethodException_t3D861B41F6520C32A7994A884343802925703155  : public MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F  : public RuntimeArray
{
	ALIGN_FIELD (8) jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 m_Items[1];

	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001  : public RuntimeArray
{
	ALIGN_FIELD (8) AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* m_Items[1];

	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::AwaitUnsafeOnCompleted<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m0B984271E33D944D547FB29917733016C411E5EB_gshared (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___awaiter0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Start<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisIl2CppFullySharedGenericAny_m81177143E3D9118AF316E4C8E5D2AB2BF16C4E80_gshared (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Array/InternalEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalEnumerator_1__ctor_m464A908F35C335E4B3A17DE886808274C7745493_gshared (InternalEnumerator_1_tB0830DCD68C540731416F628C5756C5DB4143FC9* __this, RuntimeArray* ___array0, const RuntimeMethod* method) ;
// System.Void System.Span`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Span`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;

// System.Boolean System.Threading.Tasks.AsyncCausalityTracer::get_LoggingOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncCausalityTracer_get_LoggingOn_mD7BBE05F2E56311D17B2F144B65031514C09D712 (const RuntimeMethod* method) ;
// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::GetCompletionAction(System.Threading.Tasks.Task,System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* AsyncMethodBuilderCore_GetCompletionAction_mC8FA54136A05CD45BA09560748F864AF93DDFDFD (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___taskForTracing0, MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E** ___runnerToInitialize1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncMethodBuilderCore::PostBoxInitialization(System.Runtime.CompilerServices.IAsyncStateMachine,System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner,System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncMethodBuilderCore_PostBoxInitialization_mB531930E3F2FE5A9D31E4233429FAD0AFA6E8E9A (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* __this, RuntimeObject* ___stateMachine0, MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* ___runner1, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___builtTask2, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncMethodBuilderCore::ThrowAsync(System.Exception,System.Threading.SynchronizationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncMethodBuilderCore_ThrowAsync_m63A3A3C10D59EE2B80EE18C65A87F33BB832E219 (Exception_t* ___exception0, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___targetContext1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::AwaitUnsafeOnCompleted<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m0B984271E33D944D547FB29917733016C411E5EB (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___awaiter0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m0B984271E33D944D547FB29917733016C411E5EB_gshared)((AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*)__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::PrepareConstrainedRegions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_PrepareConstrainedRegions_mFBA19C2214C42A60604E5D9535B09D6D46F9143B (const RuntimeMethod* method) ;
// System.Void System.Threading.ExecutionContextSwitcher::Undo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContextSwitcher_Undo_m683D21973AF9E2E19D0662BBC9F266D79EC53886 (ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.ExecutionContext::EstablishCopyOnWriteScope(System.Threading.ExecutionContextSwitcher&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_EstablishCopyOnWriteScope_m574194DCDCF18A35B4640E775C249A5D61132ED9 (ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708* ___ecsw0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Start<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisIl2CppFullySharedGenericAny_m81177143E3D9118AF316E4C8E5D2AB2BF16C4E80 (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisIl2CppFullySharedGenericAny_m81177143E3D9118AF316E4C8E5D2AB2BF16C4E80_gshared)((AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*)__this, ___stateMachine0, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_HasElementType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE (Type_t* __this, const RuntimeMethod* method) ;
// System.String System.Environment::GetResourceString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetResourceString_mFEC4B5F893033F1B038B99CA6C7A72696AE801DC (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void System.MissingMethodException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838 (MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Object System.RuntimeType::CreateInstanceDefaultCtor(System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Threading.StackCrawlMark&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RuntimeType_CreateInstanceDefaultCtor_m049DF408DA0C9B09F8964B90B62456E3A1F135C6 (RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* __this, bool ___publicOnly0, bool ___skipCheckThis1, bool ___fillCache2, bool ___wrapExceptions3, int32_t* ___stackMark4, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::_Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Call_m4C4D7D7287030773175BDF47681EA018DFA4DF1A (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::_CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__CallStatic_mD63902D30CD5626DAEAD1D6484AF7A9ACA85590E (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::DeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D (intptr_t ___localref0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.GlobalJavaObjectRef::op_Implicit(UnityEngine.GlobalJavaObjectRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___obj0, const RuntimeMethod* method) ;
// UnityEngine.jvalue[] UnityEngine.AndroidJNIHelper::CreateJNIArgArray(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* AndroidJNIHelper_CreateJNIArgArray_mCA21BB6EB162E1E77E8F95812BD662EA078EDDBF (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNIHelper::DeleteJNIArgArray(System.Object[],UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNIHelper_DeleteJNIArgArray_m287B584251A89771CD7C767119A350BD6DDACCAB (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___jniArgs1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AndroidReflection::IsPrimitive(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsPrimitive_m48ED73958206D552B937EEC7560184C6C4228F3D (Type_t* ___t0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNISafe::CallIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_CallIntMethod_m1C01B0148542E93B661401AB695295F4DFB334A8 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AndroidJNISafe::CallBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_CallBooleanMethod_m9B26AA2F5828D29D1F1BC3315BABE97F3614EE08 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.SByte UnityEngine.AndroidJNISafe::CallSByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_CallSByteMethod_mA5011FBB030ABC0A47C34052A49A7BEBC1F9EDC0 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Int16 UnityEngine.AndroidJNISafe::CallShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_CallShortMethod_mDA06E47602A9F365C91DB7D3B78A699D8A48F861 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.AndroidJNISafe::CallLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_CallLongMethod_m6F9F122D99AB7C95774CE395A98153B705D07931 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Single UnityEngine.AndroidJNISafe::CallFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_CallFloatMethod_m95871A924AA515B19EEFD76FC5DABE3E2FAE4909 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Double UnityEngine.AndroidJNISafe::CallDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_CallDoubleMethod_m53CDFD6982DECEB5F155858B4D0B8D7A06B426DD (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Char UnityEngine.AndroidJNISafe::CallCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_CallCharMethod_m4A39264614C8E7A9E2645F7C0E208062990A9D90 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.String UnityEngine.AndroidJNISafe::CallStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_CallStringMethod_mABFAE9A418A989676CB15D01E5971E431BFD4579 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::CallObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_CallObjectMethod_m220EBB62A14A40DD5693A48E5787DE4636D051EA (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaObject::AndroidJavaClassDeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m54CF986C577935C4B4FDC72612CCE0F13079AD08 (intptr_t ___jclass0, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaObject::AndroidJavaObjectDeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_mB1EEE323CA333E5DB2871794F1E9094E488682E2 (intptr_t ___jobject0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AndroidReflection::IsAssignableFrom(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsAssignableFrom_mE4CCA11A87A7E49591786C98FFE239D6EA66F8C5 (Type_t* ___t0, Type_t* ___from1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNISafe::CallStaticIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_CallStaticIntMethod_mE174E036EAB1034BA4DC107F534F0F7B6DA8FBC6 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AndroidJNISafe::CallStaticBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_CallStaticBooleanMethod_mF980739844CAA33E0E0ADA82F5177F91E39CCB75 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.SByte UnityEngine.AndroidJNISafe::CallStaticSByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_CallStaticSByteMethod_mC9057F28DC0C675701810414D19C7168A68F026D (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Int16 UnityEngine.AndroidJNISafe::CallStaticShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_CallStaticShortMethod_m134B1C6791FD9A09180ADF481475880F4F8B79A4 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.AndroidJNISafe::CallStaticLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_CallStaticLongMethod_mA98EE656033866FC4DE05F3F815F76594FA18D84 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Single UnityEngine.AndroidJNISafe::CallStaticFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_CallStaticFloatMethod_mCEF7855DF0530B27B6E0B4B1C1E78667FD80B2B6 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Double UnityEngine.AndroidJNISafe::CallStaticDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_CallStaticDoubleMethod_mDCA07255A15D31B20FFD77A795A7FD47C8661D1D (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Char UnityEngine.AndroidJNISafe::CallStaticCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_CallStaticCharMethod_m435C3A57BC14CCA2F459E1CE9D3E9F084353634C (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.String UnityEngine.AndroidJNISafe::CallStaticStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_CallStaticStringMethod_mC5449583711986CFF9CCDAD3F8058D9842229B88 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::CallStaticObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_CallStaticObjectMethod_mFF379E5F210AF38781F1FB59667AC39C4CFA5966 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNISafe::GetIntField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetIntField_m61F97AAEAE3410AB91489B59E2B9F1714D686724 (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AndroidJNISafe::GetBooleanField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_GetBooleanField_mB1CE25A87F17492A866F2FB302D69532A50ED114 (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.SByte UnityEngine.AndroidJNISafe::GetSByteField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_GetSByteField_mBFC442E1921CD7542D2705337A7E1A8D806EC42C (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.Int16 UnityEngine.AndroidJNISafe::GetShortField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_GetShortField_m835A602FF3722BA91111A36120C09DC16F58BF69 (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.AndroidJNISafe::GetLongField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_GetLongField_m31E20FF52A23F3928BC3576173FCF435076A45A0 (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.Single UnityEngine.AndroidJNISafe::GetFloatField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_GetFloatField_m86A2AE1F0D2D81BA1587FDF2EA10693786BA0BBB (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.Double UnityEngine.AndroidJNISafe::GetDoubleField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_GetDoubleField_m5E7778FD959CAA9256AB3E6ADCAC024B5A8D1CC3 (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.Char UnityEngine.AndroidJNISafe::GetCharField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_GetCharField_mE1C213483F3E07366C8FAE114648538E446202B9 (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.String UnityEngine.AndroidJNISafe::GetStringField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStringField_m65B73D43D6FA6A76E18AA78FB566A123FC832381 (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::GetObjectField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetObjectField_mD645E1D470CF975C1285EFF0A28C66FC37EFA520 (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNISafe::GetStaticIntField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetStaticIntField_m8C4987D43981A1740AEFDA7B4B9A6A2C512E5AC4 (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AndroidJNISafe::GetStaticBooleanField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_GetStaticBooleanField_m5EE57D854FD22446DB1BD1A24019958B8FC9B4F2 (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.SByte UnityEngine.AndroidJNISafe::GetStaticSByteField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_GetStaticSByteField_m0C17CA332A1C79E8AFB20119E9FC54301D40A847 (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.Int16 UnityEngine.AndroidJNISafe::GetStaticShortField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_GetStaticShortField_m84E78B16341CC92D47C97D5EBBEE157C24B3845A (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.AndroidJNISafe::GetStaticLongField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_GetStaticLongField_mF93D2C6310F4BAE072E311010A87C76F1E729379 (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.Single UnityEngine.AndroidJNISafe::GetStaticFloatField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_GetStaticFloatField_mC947331D47B4102982F809E8A27FF05114E5321A (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.Double UnityEngine.AndroidJNISafe::GetStaticDoubleField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_GetStaticDoubleField_mB0B0EC3DB652C45C177D663F71D63352CF31989E (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.Char UnityEngine.AndroidJNISafe::GetStaticCharField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_GetStaticCharField_m4FDBF70F20C8A63D61CBE1DB322231C8D7CE2FF6 (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.String UnityEngine.AndroidJNISafe::GetStaticStringField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStaticStringField_mD0DC3837F26C82A38BFC42C8450823D53B0326EF (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::GetStaticObjectField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetStaticObjectField_m7A3E277AE5003C9ADB2B184739736F86A0A03AD4 (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::SetIntField(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetIntField_mA25D81AEE8AB2AA562EA8B03BF7F81D9202C368C (intptr_t ___obj0, intptr_t ___fieldID1, int32_t ___val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::SetBooleanField(System.IntPtr,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetBooleanField_mE88CEE9AAF0B56AD5A1A1741C7612EEA6E0521F1 (intptr_t ___obj0, intptr_t ___fieldID1, bool ___val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::SetSByteField(System.IntPtr,System.IntPtr,System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetSByteField_m52A563214F0AB2027CB4124311F147F789AE52CB (intptr_t ___obj0, intptr_t ___fieldID1, int8_t ___val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::SetShortField(System.IntPtr,System.IntPtr,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetShortField_m8626A5FBFCE546B5C17834F06326A2B7938E70B5 (intptr_t ___obj0, intptr_t ___fieldID1, int16_t ___val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::SetLongField(System.IntPtr,System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetLongField_m6F65BE8E3095D1344FD77A9E7D039A7E3D94A925 (intptr_t ___obj0, intptr_t ___fieldID1, int64_t ___val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::SetFloatField(System.IntPtr,System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetFloatField_m84552EDFC955EB994071C5E2B03A955B169D2842 (intptr_t ___obj0, intptr_t ___fieldID1, float ___val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::SetDoubleField(System.IntPtr,System.IntPtr,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetDoubleField_m0F9363465DDCE31EAD4F86867549A85AA5C3A09B (intptr_t ___obj0, intptr_t ___fieldID1, double ___val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::SetCharField(System.IntPtr,System.IntPtr,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetCharField_m1BC58426F7753388A053FEA0137561854AB919F8 (intptr_t ___obj0, intptr_t ___fieldID1, Il2CppChar ___val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::SetStringField(System.IntPtr,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStringField_m7AC7481678855A9DFFFBAED8D5C095AA6D3D8C79 (intptr_t ___obj0, intptr_t ___fieldID1, String_t* ___val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::SetObjectField(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetObjectField_mB37CDFD1291DC6BC7D73668AED11A3B59E1C2B10 (intptr_t ___obj0, intptr_t ___fieldID1, intptr_t ___val2, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::ConvertToJNIArray(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_ConvertToJNIArray_m0561DD17E7D4E7F598504ADFBEF8EC85F3B3A8E7 (RuntimeArray* ___array0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::SetStaticIntField(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticIntField_mE36FEAE2FEB2D1B231F31D52EAEE2C956B496CB7 (intptr_t ___clazz0, intptr_t ___fieldID1, int32_t ___val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::SetStaticBooleanField(System.IntPtr,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticBooleanField_m4DCD279423F848CE0884BACEF2ABBECC5B21BB37 (intptr_t ___clazz0, intptr_t ___fieldID1, bool ___val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::SetStaticSByteField(System.IntPtr,System.IntPtr,System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticSByteField_m05DB36918BF549ED3783179BB25BD2BB434400F0 (intptr_t ___clazz0, intptr_t ___fieldID1, int8_t ___val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::SetStaticShortField(System.IntPtr,System.IntPtr,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticShortField_m4EC080E45ACC7D82F242F68EBC2C7ACDA3CB8D1C (intptr_t ___clazz0, intptr_t ___fieldID1, int16_t ___val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::SetStaticLongField(System.IntPtr,System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticLongField_m217087BFC4296606744CEB69506C4C0B9F49521F (intptr_t ___clazz0, intptr_t ___fieldID1, int64_t ___val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::SetStaticFloatField(System.IntPtr,System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticFloatField_mBBCC8840D96B2965206D6448B6B2EDAE3CDC2339 (intptr_t ___clazz0, intptr_t ___fieldID1, float ___val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::SetStaticDoubleField(System.IntPtr,System.IntPtr,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticDoubleField_m94C4E9C749D081B785F5D24532B544D59E4096A6 (intptr_t ___clazz0, intptr_t ___fieldID1, double ___val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::SetStaticCharField(System.IntPtr,System.IntPtr,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticCharField_m73E7E7D9BE1A738206FAC4F90C26D5B316D07214 (intptr_t ___clazz0, intptr_t ___fieldID1, Il2CppChar ___val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::SetStaticStringField(System.IntPtr,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticStringField_m509E182615D4C2F7B753B225A04A8BFBA126FFA0 (intptr_t ___clazz0, intptr_t ___fieldID1, String_t* ___val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::SetStaticObjectField(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticObjectField_mE4688623E6BD1DD91127F4958DC4712290380DBA (intptr_t ___clazz0, intptr_t ___fieldID1, intptr_t ___val2, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Rank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void System.RankException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Int32 System.Array::GetLowerBound(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___dimension0, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Void System.Array/InternalEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Array)
inline void InternalEnumerator_1__ctor_m464A908F35C335E4B3A17DE886808274C7745493 (InternalEnumerator_1_tB0830DCD68C540731416F628C5756C5DB4143FC9* __this, RuntimeArray* ___array0, const RuntimeMethod* method)
{
	((  void (*) (InternalEnumerator_1_tB0830DCD68C540731416F628C5756C5DB4143FC9*, RuntimeArray*, const RuntimeMethod*))InternalEnumerator_1__ctor_m464A908F35C335E4B3A17DE886808274C7745493_gshared)((InternalEnumerator_1_tB0830DCD68C540731416F628C5756C5DB4143FC9*)__this, ___array0, method);
}
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Byte& System.Array::GetRawSzArrayData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityString_Format_m560566B98CA1AC19A6C2B424AE640F6E95D3B9B0 (String_t* ___fmt0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Buffer::Memmove(System.Byte*,System.Byte*,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_mE2FD779AEAE4F226AFCAF27575AF93D7C56BF5B0 (uint8_t* ___dest0, uint8_t* ___src1, uint32_t ___len2, const RuntimeMethod* method) ;
// System.IntPtr System.RuntimeTypeHandle::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.RuntimeImports::Memmove_wbarrier(System.Byte*,System.Byte*,System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeImports_Memmove_wbarrier_mC563385425BC68BD59B96AD2FFEDCBC482A31BBA (uint8_t* ___dest0, uint8_t* ___src1, uint32_t ___len2, intptr_t ___type_handle3, const RuntimeMethod* method) ;
// System.Attribute System.Reflection.CustomAttributeExtensions::GetCustomAttribute(System.Reflection.Assembly,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* CustomAttributeExtensions_GetCustomAttribute_m056785B4C31CED65B0F38986EE830315551CE030 (Assembly_t* ___element0, Type_t* ___attributeType1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Attribute> System.Reflection.CustomAttributeExtensions::GetCustomAttributes(System.Reflection.MemberInfo,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CustomAttributeExtensions_GetCustomAttributes_m518D9E8FE83EAB9D1A5B5565ABA49B2B2744E815 (MemberInfo_t* ___element0, Type_t* ___attributeType1, const RuntimeMethod* method) ;
// System.Exception System.Linq.Error::ArgumentNull(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_ArgumentNull_m9157523765DB73FC9F7B984F2F740F2B5EDB7337 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Exception System.Linq.Error::MoreThanOneMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_MoreThanOneMatch_mADF388C1E5EACA4BA8E0CDAAA0834C595544BFAF (const RuntimeMethod* method) ;
// System.Void System.MissingMemberException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissingMemberException__ctor_m6292C676754200C455A390D36BFEBD8F8775628C (MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegateInternal(System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_GetFunctionPointerForDelegateInternal_m052129C4ECA08E9409313F02486CE3DF23491DDE (Delegate_t* ___d0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr(System.Object,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToPtr_mE014A5139B79EC0CCF27EBA41031702B7BC63F69 (RuntimeObject* ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method) ;
// System.String SR::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mCBC2E13309DB2E03F48F50E5189DD215B5BA7186 (String_t* ___resourceFormat0, RuntimeObject* ___p11, RuntimeObject* ___p22, const RuntimeMethod* method) ;
// System.Void System.Span`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T[],System.Int32,System.Int32)
inline void Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_gshared_inline)((Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)__this, ___array0, ___start1, ___length2, method);
}
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Int32 System.SpanHelpers::IndexOf(System.Byte&,System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_m0A829BB99BDEEEB5A92884FA139590B6E4EA7835 (uint8_t* ___searchSpace0, uint8_t ___value1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Int32 System.SpanHelpers::IndexOf(System.Char&,System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_mDE4E5FB8BEEEF1D365113B434C8A6A09E9EA3B20 (Il2CppChar* ___searchSpace0, Il2CppChar ___value1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Boolean System.SpanHelpers::SequenceEqual(System.Byte&,System.Byte&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_SequenceEqual_m1E48A72FE6321C8B208D7CB9368C2CB6416589E9 (uint8_t* ___first0, uint8_t* ___second1, uint64_t ___length2, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowInvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m6A58AD8706EDDB4CE9C309A6085249B6377C8CB5 (Type_t* ___targetType0, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T&,System.Int32)
inline void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_gshared_inline)((ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*)__this, (Il2CppFullySharedGenericAny*)___ptr0, ___length1, method);
}
// System.Void System.Span`1<System.Byte>::.ctor(T&,System.Int32)
inline void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_gshared_inline)((Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)__this, (Il2CppFullySharedGenericAny*)___ptr0, ___length1, method);
}
// System.Void System.ReadOnlySpan`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T&,System.Int32)
inline void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_gshared_inline)((ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*)__this, ___ptr0, ___length1, method);
}
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.RuntimeTypeHandle::HasReferences(System.RuntimeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeTypeHandle_HasReferences_mF2DFD49F0F9970F97178FBC419BDFB6509346D2C (RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___type0, const RuntimeMethod* method) ;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* ScriptableObject_CreateInstance_m986453A5542E9241E445F5F525212CF0C0BCCCBC (Type_t* ___type0, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mB06D1B6CFBA72B5C55FBEC1BA3BC25958AB60EB1 (int32_t ___value0, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Addition(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE (intptr_t ___pointer0, int32_t ___offset1, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294 (intptr_t ___value0, const RuntimeMethod* method) ;
// System.String System.String::FastAllocateString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_FastAllocateString_mF8E983B7ABC42CA6EB80C5052243D21E81CC2112 (int32_t ___length0, const RuntimeMethod* method) ;
// System.Char& System.String::GetRawStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Char>::.ctor(T&,System.Int32)
inline void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_gshared_inline)((Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)__this, (Il2CppFullySharedGenericAny*)___ptr0, ___length1, method);
}
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522 (const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF (int32_t ___argument0, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE (void* ___value0, const RuntimeMethod* method) ;
// System.Int32[] UnityEngine.AndroidJNISafe::FromIntArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* AndroidJNISafe_FromIntArray_m899EDC375E4983DCF33B5B72E2131DC06AA4B5F0 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Boolean[] UnityEngine.AndroidJNISafe::FromBooleanArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* AndroidJNISafe_FromBooleanArray_m3F57F10FDDBA3DC358BEF7296F58D819C9EC3BDE (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.AndroidJNISafe::FromByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AndroidJNISafe_FromByteArray_mAED5B8EEF34E268BB146A277842089C7FD8A06BB (intptr_t ___array0, const RuntimeMethod* method) ;
// System.SByte[] UnityEngine.AndroidJNISafe::FromSByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* AndroidJNISafe_FromSByteArray_m5825C71BA6941CDF25627AD77CDBE648CB322476 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Int16[] UnityEngine.AndroidJNISafe::FromShortArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* AndroidJNISafe_FromShortArray_m227116D8E01EE3568936FB93C97CAEE9062A0A35 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Int64[] UnityEngine.AndroidJNISafe::FromLongArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* AndroidJNISafe_FromLongArray_m687FC548BFA4DC440379619E5C7CB56354E30D59 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Single[] UnityEngine.AndroidJNISafe::FromFloatArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* AndroidJNISafe_FromFloatArray_m97B7BC8546EC3F9CF0784D434D4AA41FBB409892 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Double[] UnityEngine.AndroidJNISafe::FromDoubleArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* AndroidJNISafe_FromDoubleArray_mB752FB522CD25191E5C6AF8CEFA4553593F784A7 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Char[] UnityEngine.AndroidJNISafe::FromCharArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* AndroidJNISafe_FromCharArray_mC1C728B67330FD610542B4C2D6B9759F78B2BD17 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNISafe::GetArrayLength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetArrayLength_mB5F7260E652BE95FE9237A47C1E1597306B462C3 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectArrayElement_mDD7F2DC202FA14B8E5889755FB02B401C1127AD0 (intptr_t ___array0, int32_t ___index1, const RuntimeMethod* method) ;
// System.String UnityEngine.AndroidJNISafe::GetStringChars(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStringChars_m21A07825755C0A9AF91F8248A1C98F861E26928F (intptr_t ___str0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___jobject0, const RuntimeMethod* method) ;
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetFieldID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_mC795891C3B70C0E8F98D9E8AD2A85103761A0C75 (intptr_t ___javaClass0, String_t* ___fieldName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_m5F33E127418D5DA40590E4AE3814D7ACF7810F6E (intptr_t ___javaClass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353 (const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArrayTypeMismatchException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArrayTypeMismatchException_mDF51E7FDFA74ADCDDB1E43CFC4A3A3083692B010 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::AwaitUnsafeOnCompleted<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m0B984271E33D944D547FB29917733016C411E5EB_gshared (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___awaiter0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___stateMachine1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(TStateMachine)
	const uint32_t SizeOf_TStateMachine_tBE29CD66C0196882F89D90FFE58B8D4AF07E1C18 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	void* L_15 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	// TStateMachine
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TStateMachine_tBE29CD66C0196882F89D90FFE58B8D4AF07E1C18);
	MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B2_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B1_0 = NULL;
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* G_B3_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B3_1 = NULL;
	try
	{// begin try (depth: 1)
		{
			V_0 = (MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E*)NULL;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_0 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState_1);
			bool L_1;
			L_1 = AsyncCausalityTracer_get_LoggingOn_mD7BBE05F2E56311D17B2F144B65031514C09D712(NULL);
			G_B1_0 = L_0;
			if (L_1)
			{
				G_B2_0 = L_0;
				goto IL_0012_1;
			}
		}
		{
			G_B3_0 = ((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)(NULL));
			G_B3_1 = G_B1_0;
			goto IL_0018_1;
		}

IL_0012_1:
		{
			Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_2;
			L_2 = InvokerFuncInvoker0< Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1), __this);
			G_B3_0 = ((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)L_2);
			G_B3_1 = G_B2_0;
		}

IL_0018_1:
		{
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
			L_3 = AsyncMethodBuilderCore_GetCompletionAction_mC8FA54136A05CD45BA09560748F864AF93DDFDFD(G_B3_1, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)G_B3_0, (&V_0), NULL);
			V_1 = L_3;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_4 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState_1);
			RuntimeObject* L_5 = (RuntimeObject*)L_4->___m_stateMachine_0;
			if (L_5)
			{
				goto IL_004c_1;
			}
		}
		{
			Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_6;
			L_6 = InvokerFuncInvoker0< Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1), __this);
			V_2 = L_6;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_7 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState_1);
			Il2CppFullySharedGenericAny* L_8 = ___stateMachine1;
			il2cpp_codegen_memcpy(L_9, L_8, SizeOf_TStateMachine_tBE29CD66C0196882F89D90FFE58B8D4AF07E1C18);
			RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), L_9);
			MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* L_11 = V_0;
			Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_12 = V_2;
			AsyncMethodBuilderCore_PostBoxInitialization_mB531930E3F2FE5A9D31E4233429FAD0AFA6E8E9A(L_7, (RuntimeObject*)L_10, L_11, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_12, NULL);
		}

IL_004c_1:
		{
			Il2CppFullySharedGenericAny* L_13 = ___awaiter0;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_14 = V_1;
			ConstrainedActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 4), L_15, (void*)L_13, L_14);
			goto IL_0063;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005b;
		}
		throw e;
	}

CATCH_005b:
	{// begin catch(System.Exception)
		AsyncMethodBuilderCore_ThrowAsync_m63A3A3C10D59EE2B80EE18C65A87F33BB832E219(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)NULL, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0063;
	}// end catch (depth: 1)

IL_0063:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m0B984271E33D944D547FB29917733016C411E5EB_AdjustorThunk (RuntimeObject* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___awaiter0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___stateMachine1, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*>(__this + _offset);
	AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m0B984271E33D944D547FB29917733016C411E5EB(_thisAdjusted, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Start<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisIl2CppFullySharedGenericAny_m81177143E3D9118AF316E4C8E5D2AB2BF16C4E80_gshared (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___stateMachine0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(TStateMachine)
	const uint32_t SizeOf_TStateMachine_tE9E4DE29A0AB41247C1DFEBB056BB96E3128CF81 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	// TStateMachine
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TStateMachine_tE9E4DE29A0AB41247C1DFEBB056BB96E3128CF81);
	ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppFullySharedGenericAny* L_0 = ___stateMachine0;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TStateMachine_tE9E4DE29A0AB41247C1DFEBB056BB96E3128CF81);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 1), L_1);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC70965A7D491520CA8D04D4EA01613EFED3309E0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisIl2CppFullySharedGenericAny_m81177143E3D9118AF316E4C8E5D2AB2BF16C4E80_RuntimeMethod_var)));
	}

IL_0018:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708));
		RuntimeHelpers_PrepareConstrainedRegions_mFBA19C2214C42A60604E5D9535B09D6D46F9143B(NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{// begin finally (depth: 1)
				ExecutionContextSwitcher_Undo_m683D21973AF9E2E19D0662BBC9F266D79EC53886((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			il2cpp_codegen_runtime_class_init_inline(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
			ExecutionContext_EstablishCopyOnWriteScope_m574194DCDCF18A35B4640E775C249A5D61132ED9((&V_0), NULL);
			Il2CppFullySharedGenericAny* L_4 = ___stateMachine0;
			ConstrainedActionInvoker0::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_5, (void*)L_4);
			goto IL_0042;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_Start_TisIl2CppFullySharedGenericAny_m81177143E3D9118AF316E4C8E5D2AB2BF16C4E80_AdjustorThunk (RuntimeObject* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___stateMachine0, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*>(__this + _offset);
	AsyncTaskMethodBuilder_1_Start_TisIl2CppFullySharedGenericAny_m81177143E3D9118AF316E4C8E5D2AB2BF16C4E80(_thisAdjusted, ___stateMachine0, method);
}
// T System.Activator::CreateInstance<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Activator_CreateInstance_TisIl2CppFullySharedGenericAny_m14D80FDF8E3800A401870ED67223DFC056891652_gshared (Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_tA72A963EB22DE62285B12191B4C179CA2569E0C7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_tA72A963EB22DE62285B12191B4C179CA2569E0C7);
	int32_t V_0 = 0;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B2_0 = NULL;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B1_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_2 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_1, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		NullCheck((Type_t*)L_2);
		bool L_3;
		L_3 = Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE((Type_t*)L_2, NULL);
		G_B1_0 = L_2;
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0027;
		}
	}
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_mFEC4B5F893033F1B038B99CA6C7A72696AE801DC(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD06FDE4FC2CBD6E5FAFE1400B04AC8E4F3001D0C)), NULL);
		MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* L_5 = (MissingMethodException_t3D861B41F6520C32A7994A884343802925703155*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Activator_CreateInstance_TisIl2CppFullySharedGenericAny_m14D80FDF8E3800A401870ED67223DFC056891652_RuntimeMethod_var)));
	}

IL_0027:
	{
		V_0 = (int32_t)1;
		NullCheck(G_B2_0);
		RuntimeObject* L_6;
		L_6 = RuntimeType_CreateInstanceDefaultCtor_m049DF408DA0C9B09F8964B90B62456E3A1F135C6(G_B2_0, (bool)1, (bool)1, (bool)1, (bool)1, (&V_0), NULL);
		void* L_8 = UnBox_Any(L_6, il2cpp_rgctx_data(method->rgctx_data, 1), L_7);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_8))), SizeOf_T_tA72A963EB22DE62285B12191B4C179CA2569E0C7);
		return;
	}
}
// ArrayType UnityEngine.AndroidJNIHelper::ConvertFromJNIArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppFullySharedGenericAny_m6C851BCE353831DBD8C0AA34D8552E050F1B34E7_gshared (intptr_t ___array0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(ArrayType)
	const uint32_t SizeOf_ArrayType_t4E16470C69F824CCEAFF1C35E3BD65E700433C8D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// ArrayType
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_ArrayType_t4E16470C69F824CCEAFF1C35E3BD65E700433C8D);
	const Il2CppFullySharedGenericAny L_2 = L_1;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_ArrayType_t4E16470C69F824CCEAFF1C35E3BD65E700433C8D);
	memset(V_0, 0, SizeOf_ArrayType_t4E16470C69F824CCEAFF1C35E3BD65E700433C8D);
	{
		intptr_t L_0 = ___array0;
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_ArrayType_t4E16470C69F824CCEAFF1C35E3BD65E700433C8D);
		goto IL_000a;
	}

IL_000a:
	{
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_ArrayType_t4E16470C69F824CCEAFF1C35E3BD65E700433C8D);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_ArrayType_t4E16470C69F824CCEAFF1C35E3BD65E700433C8D);
		return;
	}
}
// System.IntPtr UnityEngine.AndroidJNIHelper::GetFieldID<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.IntPtr,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_TisIl2CppFullySharedGenericAny_m0D715F3686EE731031AA2156510E89B61EE1CC45_gshared (intptr_t ___jclass0, String_t* ___fieldName1, bool ___isStatic2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___fieldName1;
		bool L_2 = ___isStatic2;
		intptr_t L_3;
		L_3 = InvokerFuncInvoker3< intptr_t, intptr_t, String_t*, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, L_1, L_2);
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisIl2CppFullySharedGenericAny_m06F167693F61B6F3BF5FC56208C0769A06D71D2D_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		bool L_3 = ___isStatic3;
		intptr_t L_4;
		L_4 = InvokerFuncInvoker4< intptr_t, intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, L_1, L_2, L_3);
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
// System.String UnityEngine.AndroidJNIHelper::GetSignature<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNIHelper_GetSignature_TisIl2CppFullySharedGenericAny_mC6F94610783286F7933475D1C121B91EABCA8890_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args0;
		String_t* L_1;
		L_1 = InvokerFuncInvoker1< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::Call<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mCA7EED8FFBB862858FF426BD7D6B191F9C24234B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(ReturnType)
	const uint32_t SizeOf_ReturnType_t7C9CEFF53F7F785E3B0A2AA52BF0599DB9E4C7A7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// ReturnType
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_ReturnType_t7C9CEFF53F7F785E3B0A2AA52BF0599DB9E4C7A7);
	const Il2CppFullySharedGenericAny L_3 = L_2;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_ReturnType_t7C9CEFF53F7F785E3B0A2AA52BF0599DB9E4C7A7);
	memset(V_0, 0, SizeOf_ReturnType_t7C9CEFF53F7F785E3B0A2AA52BF0599DB9E4C7A7);
	{
		String_t* L_0 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args1;
		InvokerActionInvoker3< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_ReturnType_t7C9CEFF53F7F785E3B0A2AA52BF0599DB9E4C7A7);
		goto IL_000c;
	}

IL_000c:
	{
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_ReturnType_t7C9CEFF53F7F785E3B0A2AA52BF0599DB9E4C7A7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_ReturnType_t7C9CEFF53F7F785E3B0A2AA52BF0599DB9E4C7A7);
		return;
	}
}
// System.Void UnityEngine.AndroidJavaObject::Call<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mF7CDE80510F82B3C335324838828B788E1F0FAD4_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___args1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		String_t* L_0 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___args1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		AndroidJavaObject__Call_m4C4D7D7287030773175BDF47681EA018DFA4DF1A(__this, L_0, L_2, NULL);
		return;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::Call<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m584BD08D664D1371FF995E37EDD37FD6AA861406_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___args1, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(ReturnType)
	const uint32_t SizeOf_ReturnType_t6A981EFC55AACA8DB2914A6B9C24AF2C1F0D86E3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// ReturnType
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_ReturnType_t6A981EFC55AACA8DB2914A6B9C24AF2C1F0D86E3);
	const Il2CppFullySharedGenericAny L_5 = L_4;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_ReturnType_t6A981EFC55AACA8DB2914A6B9C24AF2C1F0D86E3);
	memset(V_0, 0, SizeOf_ReturnType_t6A981EFC55AACA8DB2914A6B9C24AF2C1F0D86E3);
	{
		String_t* L_0 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___args1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		InvokerActionInvoker3< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, L_2, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_ReturnType_t6A981EFC55AACA8DB2914A6B9C24AF2C1F0D86E3);
		goto IL_0015;
	}

IL_0015:
	{
		il2cpp_codegen_memcpy(L_5, V_0, SizeOf_ReturnType_t6A981EFC55AACA8DB2914A6B9C24AF2C1F0D86E3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_ReturnType_t6A981EFC55AACA8DB2914A6B9C24AF2C1F0D86E3);
		return;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_m7843D14A0537A1190C739261EF49C05B1FF2ED90_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(ReturnType)
	const uint32_t SizeOf_ReturnType_t94E13999E45FF70AA5DA5E427955FC4E439412B2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// ReturnType
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_ReturnType_t94E13999E45FF70AA5DA5E427955FC4E439412B2);
	const Il2CppFullySharedGenericAny L_3 = L_2;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_ReturnType_t94E13999E45FF70AA5DA5E427955FC4E439412B2);
	memset(V_0, 0, SizeOf_ReturnType_t94E13999E45FF70AA5DA5E427955FC4E439412B2);
	{
		String_t* L_0 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args1;
		InvokerActionInvoker3< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_ReturnType_t94E13999E45FF70AA5DA5E427955FC4E439412B2);
		goto IL_000c;
	}

IL_000c:
	{
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_ReturnType_t94E13999E45FF70AA5DA5E427955FC4E439412B2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_ReturnType_t94E13999E45FF70AA5DA5E427955FC4E439412B2);
		return;
	}
}
// System.Void UnityEngine.AndroidJavaObject::CallStatic<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_mB35C0A4F3C829AF99001B27BC0E99CD64736EE1A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___args1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		String_t* L_0 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___args1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		AndroidJavaObject__CallStatic_mD63902D30CD5626DAEAD1D6484AF7A9ACA85590E(__this, L_0, L_2, NULL);
		return;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m9E8D43F22F21BB581F9478C8CF9B3A8059B3B8CD_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___args1, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(ReturnType)
	const uint32_t SizeOf_ReturnType_t41223B870DEBD9DC66C7F3F6FDDF2CF6D061E4EB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// ReturnType
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_ReturnType_t41223B870DEBD9DC66C7F3F6FDDF2CF6D061E4EB);
	const Il2CppFullySharedGenericAny L_5 = L_4;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_ReturnType_t41223B870DEBD9DC66C7F3F6FDDF2CF6D061E4EB);
	memset(V_0, 0, SizeOf_ReturnType_t41223B870DEBD9DC66C7F3F6FDDF2CF6D061E4EB);
	{
		String_t* L_0 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___args1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		InvokerActionInvoker3< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, L_2, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_ReturnType_t41223B870DEBD9DC66C7F3F6FDDF2CF6D061E4EB);
		goto IL_0015;
	}

IL_0015:
	{
		il2cpp_codegen_memcpy(L_5, V_0, SizeOf_ReturnType_t41223B870DEBD9DC66C7F3F6FDDF2CF6D061E4EB);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_ReturnType_t41223B870DEBD9DC66C7F3F6FDDF2CF6D061E4EB);
		return;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::FromJavaArrayDeleteLocalRef<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisIl2CppFullySharedGenericAny_mC507F718B874B0FD55D11CA1B77730AEB5E601D9_gshared (intptr_t ___jobject0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(ReturnType)
	const uint32_t SizeOf_ReturnType_t6F6A8AAD1934478A88473188C291F7CEEE555E73 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// ReturnType
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_ReturnType_t6F6A8AAD1934478A88473188C291F7CEEE555E73);
	const Il2CppFullySharedGenericAny L_6 = L_3;
	const Il2CppFullySharedGenericAny L_10 = L_3;
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_ReturnType_t6F6A8AAD1934478A88473188C291F7CEEE555E73);
	bool V_0 = false;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_ReturnType_t6F6A8AAD1934478A88473188C291F7CEEE555E73);
	memset(V_1, 0, SizeOf_ReturnType_t6F6A8AAD1934478A88473188C291F7CEEE555E73);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_ReturnType_t6F6A8AAD1934478A88473188C291F7CEEE555E73);
	memset(V_2, 0, SizeOf_ReturnType_t6F6A8AAD1934478A88473188C291F7CEEE555E73);
	{
		intptr_t L_0 = ___jobject0;
		bool L_1;
		L_1 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_0, (0), NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_ReturnType_t6F6A8AAD1934478A88473188C291F7CEEE555E73);
		il2cpp_codegen_memcpy(L_3, V_1, SizeOf_ReturnType_t6F6A8AAD1934478A88473188C291F7CEEE555E73);
		il2cpp_codegen_memcpy(V_2, L_3, SizeOf_ReturnType_t6F6A8AAD1934478A88473188C291F7CEEE555E73);
		goto IL_003b;
	}

IL_001c:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				intptr_t L_4 = ___jobject0;
				AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_4, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_5 = ___jobject0;
			InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_5, (Il2CppFullySharedGenericAny*)L_6);
			RuntimeObject* L_7 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), L_6);
			void* L_9 = UnBox_Any(L_7, il2cpp_rgctx_data(method->rgctx_data, 0), L_8);
			il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_9))), SizeOf_ReturnType_t6F6A8AAD1934478A88473188C291F7CEEE555E73);
			goto IL_003b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		il2cpp_codegen_memcpy(L_10, V_2, SizeOf_ReturnType_t6F6A8AAD1934478A88473188C291F7CEEE555E73);
		il2cpp_codegen_memcpy(il2cppRetVal, L_10, SizeOf_ReturnType_t6F6A8AAD1934478A88473188C291F7CEEE555E73);
		return;
	}
}
// FieldType UnityEngine.AndroidJavaObject::Get<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Get_TisIl2CppFullySharedGenericAny_m390E9396B06E7DB37AB22F9F94EF31B456F01185_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(FieldType)
	const uint32_t SizeOf_FieldType_tE541E61DC1EE486A3DDC10DCA2A2DD9A2A3BADE8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// FieldType
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_tE541E61DC1EE486A3DDC10DCA2A2DD9A2A3BADE8);
	const Il2CppFullySharedGenericAny L_2 = L_1;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_FieldType_tE541E61DC1EE486A3DDC10DCA2A2DD9A2A3BADE8);
	memset(V_0, 0, SizeOf_FieldType_tE541E61DC1EE486A3DDC10DCA2A2DD9A2A3BADE8);
	{
		String_t* L_0 = ___fieldName0;
		InvokerActionInvoker2< String_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_FieldType_tE541E61DC1EE486A3DDC10DCA2A2DD9A2A3BADE8);
		goto IL_000b;
	}

IL_000b:
	{
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_FieldType_tE541E61DC1EE486A3DDC10DCA2A2DD9A2A3BADE8);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_FieldType_tE541E61DC1EE486A3DDC10DCA2A2DD9A2A3BADE8);
		return;
	}
}
// FieldType UnityEngine.AndroidJavaObject::GetStatic<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_GetStatic_TisIl2CppFullySharedGenericAny_mDD5B83921F6078373B85EB4F803492A68545BA7E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(FieldType)
	const uint32_t SizeOf_FieldType_tBB418E296327456981AAF34C2BEB510AEC3C4E4D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// FieldType
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_tBB418E296327456981AAF34C2BEB510AEC3C4E4D);
	const Il2CppFullySharedGenericAny L_2 = L_1;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_FieldType_tBB418E296327456981AAF34C2BEB510AEC3C4E4D);
	memset(V_0, 0, SizeOf_FieldType_tBB418E296327456981AAF34C2BEB510AEC3C4E4D);
	{
		String_t* L_0 = ___fieldName0;
		InvokerActionInvoker2< String_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_FieldType_tBB418E296327456981AAF34C2BEB510AEC3C4E4D);
		goto IL_000b;
	}

IL_000b:
	{
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_FieldType_tBB418E296327456981AAF34C2BEB510AEC3C4E4D);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_FieldType_tBB418E296327456981AAF34C2BEB510AEC3C4E4D);
		return;
	}
}
// System.Void UnityEngine.AndroidJavaObject::Set<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,FieldType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Set_TisIl2CppFullySharedGenericAny_m7286B3F15DA02D0B999CE939F20412740B22945E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___val1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(FieldType)
	const uint32_t SizeOf_FieldType_t5C6F84F3CFFB0874A4DA0D1C58053A25B835551E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// FieldType
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_t5C6F84F3CFFB0874A4DA0D1C58053A25B835551E);
	{
		String_t* L_0 = ___fieldName0;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___val1 : &___val1), SizeOf_FieldType_t5C6F84F3CFFB0874A4DA0D1C58053A25B835551E);
		InvokerActionInvoker2< String_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_1: *(void**)L_1));
		return;
	}
}
// System.Void UnityEngine.AndroidJavaObject::SetStatic<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,FieldType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_SetStatic_TisIl2CppFullySharedGenericAny_mF354DBF45CBF7D251BCCAB27BAB86047439CC292_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___val1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(FieldType)
	const uint32_t SizeOf_FieldType_t6076CC06F19BCC0301AE8C734F26CA429D2DB469 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// FieldType
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_t6076CC06F19BCC0301AE8C734F26CA429D2DB469);
	{
		String_t* L_0 = ___fieldName0;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___val1 : &___val1), SizeOf_FieldType_t6076CC06F19BCC0301AE8C734F26CA429D2DB469);
		InvokerActionInvoker2< String_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_1: *(void**)L_1));
		return;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::_Call<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Call_TisIl2CppFullySharedGenericAny_mA1A866611778FF72A2067F7E30B32913C4EB4904_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(ReturnType)
	const uint32_t SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// ReturnType
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
	const Il2CppFullySharedGenericAny L_42 = L_28;
	const Il2CppFullySharedGenericAny L_56 = L_28;
	const Il2CppFullySharedGenericAny L_70 = L_28;
	const Il2CppFullySharedGenericAny L_84 = L_28;
	const Il2CppFullySharedGenericAny L_98 = L_28;
	const Il2CppFullySharedGenericAny L_112 = L_28;
	const Il2CppFullySharedGenericAny L_126 = L_28;
	const Il2CppFullySharedGenericAny L_140 = L_28;
	const Il2CppFullySharedGenericAny L_152 = L_28;
	const Il2CppFullySharedGenericAny L_168 = L_28;
	const Il2CppFullySharedGenericAny L_170 = L_28;
	const Il2CppFullySharedGenericAny L_185 = L_28;
	const Il2CppFullySharedGenericAny L_187 = L_28;
	const Il2CppFullySharedGenericAny L_200 = L_28;
	const Il2CppFullySharedGenericAny L_207 = L_28;
	const Il2CppFullySharedGenericAny L_208 = L_28;
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
	memset(V_5, 0, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	Il2CppFullySharedGenericAny V_17 = alloca(SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
	memset(V_17, 0, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
	bool V_18 = false;
	intptr_t V_19;
	memset((&V_19), 0, sizeof(V_19));
	bool V_20 = false;
	intptr_t V_21;
	memset((&V_21), 0, sizeof(V_21));
	Il2CppFullySharedGenericAny G_B29_0 = alloca(SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
	memset(G_B29_0, 0, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
	Il2CppFullySharedGenericAny G_B34_0 = alloca(SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
	memset(G_B34_0, 0, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	Type_t* G_B38_0 = NULL;
	String_t* G_B38_1 = NULL;
	String_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args1;
		V_2 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		___args1 = L_2;
	}

IL_0011:
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_3 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_4;
		L_4 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_3, NULL);
		String_t* L_5 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___args1;
		intptr_t L_7;
		L_7 = InvokerFuncInvoker4< intptr_t, intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_4, L_5, L_6, (bool)0);
		V_0 = L_7;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = ___args1;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_9;
		L_9 = AndroidJNIHelper_CreateJNIArgArray_mCA21BB6EB162E1E77E8F95812BD662EA078EDDBF(L_8, NULL);
		V_1 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03fd:
			{// begin finally (depth: 1)
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___args1;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_11 = V_1;
				AndroidJNIHelper_DeleteJNIArgArray_m287B584251A89771CD7C767119A350BD6DDACCAB(L_10, L_11, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_12, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_14;
				L_14 = AndroidReflection_IsPrimitive_m48ED73958206D552B937EEC7560184C6C4228F3D(L_13, NULL);
				V_3 = L_14;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_028e_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_17;
				L_17 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_16, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				Type_t* L_19;
				L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
				V_4 = (bool)((((RuntimeObject*)(Type_t*)L_17) == ((RuntimeObject*)(Type_t*)L_19))? 1 : 0);
				bool L_20 = V_4;
				if (!L_20)
				{
					goto IL_0083_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_21 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_22;
				L_22 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_21, NULL);
				intptr_t L_23 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_24 = V_1;
				int32_t L_25;
				L_25 = AndroidJNISafe_CallIntMethod_m1C01B0148542E93B661401AB695295F4DFB334A8(L_22, L_23, L_24, NULL);
				int32_t L_26 = L_25;
				RuntimeObject* L_27 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_26);
				void* L_29 = UnBox_Any(L_27, il2cpp_rgctx_data(method->rgctx_data, 2), L_28);
				il2cpp_codegen_memcpy(V_5, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_29))), SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				goto IL_0408;
			}

IL_0083_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_31;
				L_31 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_30, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				Type_t* L_33;
				L_33 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_32, NULL);
				V_6 = (bool)((((RuntimeObject*)(Type_t*)L_31) == ((RuntimeObject*)(Type_t*)L_33))? 1 : 0);
				bool L_34 = V_6;
				if (!L_34)
				{
					goto IL_00c2_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_35 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_36;
				L_36 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_35, NULL);
				intptr_t L_37 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_38 = V_1;
				bool L_39;
				L_39 = AndroidJNISafe_CallBooleanMethod_m9B26AA2F5828D29D1F1BC3315BABE97F3614EE08(L_36, L_37, L_38, NULL);
				bool L_40 = L_39;
				RuntimeObject* L_41 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_40);
				void* L_43 = UnBox_Any(L_41, il2cpp_rgctx_data(method->rgctx_data, 2), L_42);
				il2cpp_codegen_memcpy(V_5, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_43))), SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				goto IL_0408;
			}

IL_00c2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_45;
				L_45 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_44, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
				Type_t* L_47;
				L_47 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_46, NULL);
				V_7 = (bool)((((RuntimeObject*)(Type_t*)L_45) == ((RuntimeObject*)(Type_t*)L_47))? 1 : 0);
				bool L_48 = V_7;
				if (!L_48)
				{
					goto IL_010e_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_49 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_50;
				L_50 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_49, NULL);
				intptr_t L_51 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_52 = V_1;
				int8_t L_53;
				L_53 = AndroidJNISafe_CallSByteMethod_mA5011FBB030ABC0A47C34052A49A7BEBC1F9EDC0(L_50, L_51, L_52, NULL);
				uint8_t L_54 = ((uint8_t)((int32_t)(uint8_t)L_53));
				RuntimeObject* L_55 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_54);
				void* L_57 = UnBox_Any(L_55, il2cpp_rgctx_data(method->rgctx_data, 2), L_56);
				il2cpp_codegen_memcpy(V_5, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_57))), SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				goto IL_0408;
			}

IL_010e_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_58, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
				Type_t* L_61;
				L_61 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_60, NULL);
				V_8 = (bool)((((RuntimeObject*)(Type_t*)L_59) == ((RuntimeObject*)(Type_t*)L_61))? 1 : 0);
				bool L_62 = V_8;
				if (!L_62)
				{
					goto IL_014d_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_63 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_64;
				L_64 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_63, NULL);
				intptr_t L_65 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_66 = V_1;
				int8_t L_67;
				L_67 = AndroidJNISafe_CallSByteMethod_mA5011FBB030ABC0A47C34052A49A7BEBC1F9EDC0(L_64, L_65, L_66, NULL);
				int8_t L_68 = L_67;
				RuntimeObject* L_69 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_68);
				void* L_71 = UnBox_Any(L_69, il2cpp_rgctx_data(method->rgctx_data, 2), L_70);
				il2cpp_codegen_memcpy(V_5, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_71))), SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				goto IL_0408;
			}

IL_014d_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_73;
				L_73 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_72, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
				Type_t* L_75;
				L_75 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_74, NULL);
				V_9 = (bool)((((RuntimeObject*)(Type_t*)L_73) == ((RuntimeObject*)(Type_t*)L_75))? 1 : 0);
				bool L_76 = V_9;
				if (!L_76)
				{
					goto IL_018c_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_77 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_78;
				L_78 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_77, NULL);
				intptr_t L_79 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_80 = V_1;
				int16_t L_81;
				L_81 = AndroidJNISafe_CallShortMethod_mDA06E47602A9F365C91DB7D3B78A699D8A48F861(L_78, L_79, L_80, NULL);
				int16_t L_82 = L_81;
				RuntimeObject* L_83 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_82);
				void* L_85 = UnBox_Any(L_83, il2cpp_rgctx_data(method->rgctx_data, 2), L_84);
				il2cpp_codegen_memcpy(V_5, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_85))), SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				goto IL_0408;
			}

IL_018c_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_87;
				L_87 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_86, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
				Type_t* L_89;
				L_89 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_88, NULL);
				V_10 = (bool)((((RuntimeObject*)(Type_t*)L_87) == ((RuntimeObject*)(Type_t*)L_89))? 1 : 0);
				bool L_90 = V_10;
				if (!L_90)
				{
					goto IL_01cb_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_91 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_92;
				L_92 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_91, NULL);
				intptr_t L_93 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_94 = V_1;
				int64_t L_95;
				L_95 = AndroidJNISafe_CallLongMethod_m6F9F122D99AB7C95774CE395A98153B705D07931(L_92, L_93, L_94, NULL);
				int64_t L_96 = L_95;
				RuntimeObject* L_97 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_96);
				void* L_99 = UnBox_Any(L_97, il2cpp_rgctx_data(method->rgctx_data, 2), L_98);
				il2cpp_codegen_memcpy(V_5, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_99))), SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				goto IL_0408;
			}

IL_01cb_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_101;
				L_101 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_100, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_102 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
				Type_t* L_103;
				L_103 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_102, NULL);
				V_11 = (bool)((((RuntimeObject*)(Type_t*)L_101) == ((RuntimeObject*)(Type_t*)L_103))? 1 : 0);
				bool L_104 = V_11;
				if (!L_104)
				{
					goto IL_020a_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_105 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_106;
				L_106 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_105, NULL);
				intptr_t L_107 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_108 = V_1;
				float L_109;
				L_109 = AndroidJNISafe_CallFloatMethod_m95871A924AA515B19EEFD76FC5DABE3E2FAE4909(L_106, L_107, L_108, NULL);
				float L_110 = L_109;
				RuntimeObject* L_111 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_110);
				void* L_113 = UnBox_Any(L_111, il2cpp_rgctx_data(method->rgctx_data, 2), L_112);
				il2cpp_codegen_memcpy(V_5, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_113))), SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				goto IL_0408;
			}

IL_020a_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_114 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_115;
				L_115 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_114, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_116 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
				Type_t* L_117;
				L_117 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_116, NULL);
				V_12 = (bool)((((RuntimeObject*)(Type_t*)L_115) == ((RuntimeObject*)(Type_t*)L_117))? 1 : 0);
				bool L_118 = V_12;
				if (!L_118)
				{
					goto IL_0249_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_119 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_120;
				L_120 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_119, NULL);
				intptr_t L_121 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_122 = V_1;
				double L_123;
				L_123 = AndroidJNISafe_CallDoubleMethod_m53CDFD6982DECEB5F155858B4D0B8D7A06B426DD(L_120, L_121, L_122, NULL);
				double L_124 = L_123;
				RuntimeObject* L_125 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_124);
				void* L_127 = UnBox_Any(L_125, il2cpp_rgctx_data(method->rgctx_data, 2), L_126);
				il2cpp_codegen_memcpy(V_5, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_127))), SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				goto IL_0408;
			}

IL_0249_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_128 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_129;
				L_129 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_128, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_130 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
				Type_t* L_131;
				L_131 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_130, NULL);
				V_13 = (bool)((((RuntimeObject*)(Type_t*)L_129) == ((RuntimeObject*)(Type_t*)L_131))? 1 : 0);
				bool L_132 = V_13;
				if (!L_132)
				{
					goto IL_0288_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_133 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_134;
				L_134 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_133, NULL);
				intptr_t L_135 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_136 = V_1;
				Il2CppChar L_137;
				L_137 = AndroidJNISafe_CallCharMethod_m4A39264614C8E7A9E2645F7C0E208062990A9D90(L_134, L_135, L_136, NULL);
				Il2CppChar L_138 = L_137;
				RuntimeObject* L_139 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_138);
				void* L_141 = UnBox_Any(L_139, il2cpp_rgctx_data(method->rgctx_data, 2), L_140);
				il2cpp_codegen_memcpy(V_5, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_141))), SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				goto IL_0408;
			}

IL_0288_1:
			{
				goto IL_03ef_1;
			}

IL_028e_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_142 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_143;
				L_143 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_142, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_144 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				Type_t* L_145;
				L_145 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_144, NULL);
				V_14 = (bool)((((RuntimeObject*)(Type_t*)L_143) == ((RuntimeObject*)(Type_t*)L_145))? 1 : 0);
				bool L_146 = V_14;
				if (!L_146)
				{
					goto IL_02c8_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_147 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_148;
				L_148 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_147, NULL);
				intptr_t L_149 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_150 = V_1;
				String_t* L_151;
				L_151 = AndroidJNISafe_CallStringMethod_mABFAE9A418A989676CB15D01E5971E431BFD4579(L_148, L_149, L_150, NULL);
				void* L_153 = UnBox_Any((RuntimeObject*)L_151, il2cpp_rgctx_data(method->rgctx_data, 2), L_152);
				il2cpp_codegen_memcpy(V_5, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_153))), SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				goto IL_0408;
			}

IL_02c8_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_155;
				L_155 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_154, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_156 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_157;
				L_157 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_156, NULL);
				V_15 = (bool)((((RuntimeObject*)(Type_t*)L_155) == ((RuntimeObject*)(Type_t*)L_157))? 1 : 0);
				bool L_158 = V_15;
				if (!L_158)
				{
					goto IL_0326_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_159 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_160;
				L_160 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_159, NULL);
				intptr_t L_161 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_162 = V_1;
				intptr_t L_163;
				L_163 = AndroidJNISafe_CallObjectMethod_m220EBB62A14A40DD5693A48E5787DE4636D051EA(L_160, L_161, L_162, NULL);
				V_16 = L_163;
				intptr_t L_164 = V_16;
				bool L_165;
				L_165 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_164, (0), NULL);
				if (L_165)
				{
					goto IL_0315_1;
				}
			}
			{
				intptr_t L_166 = V_16;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_167;
				L_167 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m54CF986C577935C4B4FDC72612CCE0F13079AD08(L_166, NULL);
				void* L_169 = UnBox_Any((RuntimeObject*)L_167, il2cpp_rgctx_data(method->rgctx_data, 2), L_168);
				il2cpp_codegen_memcpy(G_B29_0, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_169))), SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				goto IL_031f_1;
			}

IL_0315_1:
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_17, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				il2cpp_codegen_memcpy(L_170, V_17, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				il2cpp_codegen_memcpy(G_B29_0, L_170, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
			}

IL_031f_1:
			{
				il2cpp_codegen_memcpy(V_5, G_B29_0, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				goto IL_0408;
			}

IL_0326_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_171 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_172;
				L_172 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_171, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_173 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_174;
				L_174 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_173, NULL);
				V_18 = (bool)((((RuntimeObject*)(Type_t*)L_172) == ((RuntimeObject*)(Type_t*)L_174))? 1 : 0);
				bool L_175 = V_18;
				if (!L_175)
				{
					goto IL_0384_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_176 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_177;
				L_177 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_176, NULL);
				intptr_t L_178 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_179 = V_1;
				intptr_t L_180;
				L_180 = AndroidJNISafe_CallObjectMethod_m220EBB62A14A40DD5693A48E5787DE4636D051EA(L_177, L_178, L_179, NULL);
				V_19 = L_180;
				intptr_t L_181 = V_19;
				bool L_182;
				L_182 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_181, (0), NULL);
				if (L_182)
				{
					goto IL_0373_1;
				}
			}
			{
				intptr_t L_183 = V_19;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_184;
				L_184 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_mB1EEE323CA333E5DB2871794F1E9094E488682E2(L_183, NULL);
				void* L_186 = UnBox_Any((RuntimeObject*)L_184, il2cpp_rgctx_data(method->rgctx_data, 2), L_185);
				il2cpp_codegen_memcpy(G_B34_0, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_186))), SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				goto IL_037d_1;
			}

IL_0373_1:
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_17, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				il2cpp_codegen_memcpy(L_187, V_17, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				il2cpp_codegen_memcpy(G_B34_0, L_187, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
			}

IL_037d_1:
			{
				il2cpp_codegen_memcpy(V_5, G_B34_0, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				goto IL_0408;
			}

IL_0384_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_188 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_189;
				L_189 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_188, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_190 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				Type_t* L_191;
				L_191 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_190, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_192;
				L_192 = AndroidReflection_IsAssignableFrom_mE4CCA11A87A7E49591786C98FFE239D6EA66F8C5(L_189, L_191, NULL);
				V_20 = L_192;
				bool L_193 = V_20;
				if (!L_193)
				{
					goto IL_03c3_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_194 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_195;
				L_195 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_194, NULL);
				intptr_t L_196 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_197 = V_1;
				intptr_t L_198;
				L_198 = AndroidJNISafe_CallObjectMethod_m220EBB62A14A40DD5693A48E5787DE4636D051EA(L_195, L_196, L_197, NULL);
				V_21 = L_198;
				intptr_t L_199 = V_21;
				InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_199, (Il2CppFullySharedGenericAny*)L_200);
				il2cpp_codegen_memcpy(V_5, L_200, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				goto IL_0408;
			}

IL_03c3_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_201 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
				Type_t* L_202;
				L_202 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_201, NULL);
				Type_t* L_203 = L_202;
				G_B38_0 = L_203;
				G_B38_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
				if (L_203)
				{
					G_B39_0 = L_203;
					G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03da_1;
				}
			}
			{
				G_B40_0 = ((String_t*)(NULL));
				G_B40_1 = G_B38_1;
				goto IL_03df_1;
			}

IL_03da_1:
			{
				NullCheck((RuntimeObject*)G_B39_0);
				String_t* L_204;
				L_204 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B39_0);
				G_B40_0 = L_204;
				G_B40_1 = G_B39_1;
			}

IL_03df_1:
			{
				String_t* L_205;
				L_205 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(G_B40_1, G_B40_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_206 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				NullCheck(L_206);
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_206, L_205, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_206, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaObject__Call_TisIl2CppFullySharedGenericAny_mA1A866611778FF72A2067F7E30B32913C4EB4904_RuntimeMethod_var)));
			}

IL_03ef_1:
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_17, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				il2cpp_codegen_memcpy(L_207, V_17, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				il2cpp_codegen_memcpy(V_5, L_207, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				goto IL_0408;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0408:
	{
		il2cpp_codegen_memcpy(L_208, V_5, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
		il2cpp_codegen_memcpy(il2cppRetVal, L_208, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
		return;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::_CallStatic<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__CallStatic_TisIl2CppFullySharedGenericAny_mA069934E49E8EFEB980CA5EED2B1DE810C150A68_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(ReturnType)
	const uint32_t SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// ReturnType
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
	const Il2CppFullySharedGenericAny L_42 = L_28;
	const Il2CppFullySharedGenericAny L_56 = L_28;
	const Il2CppFullySharedGenericAny L_70 = L_28;
	const Il2CppFullySharedGenericAny L_84 = L_28;
	const Il2CppFullySharedGenericAny L_98 = L_28;
	const Il2CppFullySharedGenericAny L_112 = L_28;
	const Il2CppFullySharedGenericAny L_126 = L_28;
	const Il2CppFullySharedGenericAny L_140 = L_28;
	const Il2CppFullySharedGenericAny L_152 = L_28;
	const Il2CppFullySharedGenericAny L_168 = L_28;
	const Il2CppFullySharedGenericAny L_170 = L_28;
	const Il2CppFullySharedGenericAny L_185 = L_28;
	const Il2CppFullySharedGenericAny L_187 = L_28;
	const Il2CppFullySharedGenericAny L_200 = L_28;
	const Il2CppFullySharedGenericAny L_207 = L_28;
	const Il2CppFullySharedGenericAny L_208 = L_28;
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
	memset(V_5, 0, SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	Il2CppFullySharedGenericAny V_17 = alloca(SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
	memset(V_17, 0, SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
	bool V_18 = false;
	intptr_t V_19;
	memset((&V_19), 0, sizeof(V_19));
	bool V_20 = false;
	intptr_t V_21;
	memset((&V_21), 0, sizeof(V_21));
	Il2CppFullySharedGenericAny G_B29_0 = alloca(SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
	memset(G_B29_0, 0, SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
	Il2CppFullySharedGenericAny G_B34_0 = alloca(SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
	memset(G_B34_0, 0, SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	Type_t* G_B38_0 = NULL;
	String_t* G_B38_1 = NULL;
	String_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args1;
		V_2 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		___args1 = L_2;
	}

IL_0011:
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_3 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_4;
		L_4 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_3, NULL);
		String_t* L_5 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___args1;
		intptr_t L_7;
		L_7 = InvokerFuncInvoker4< intptr_t, intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_4, L_5, L_6, (bool)1);
		V_0 = L_7;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = ___args1;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_9;
		L_9 = AndroidJNIHelper_CreateJNIArgArray_mCA21BB6EB162E1E77E8F95812BD662EA078EDDBF(L_8, NULL);
		V_1 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03fd:
			{// begin finally (depth: 1)
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___args1;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_11 = V_1;
				AndroidJNIHelper_DeleteJNIArgArray_m287B584251A89771CD7C767119A350BD6DDACCAB(L_10, L_11, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_12, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_14;
				L_14 = AndroidReflection_IsPrimitive_m48ED73958206D552B937EEC7560184C6C4228F3D(L_13, NULL);
				V_3 = L_14;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_028e_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_17;
				L_17 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_16, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				Type_t* L_19;
				L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
				V_4 = (bool)((((RuntimeObject*)(Type_t*)L_17) == ((RuntimeObject*)(Type_t*)L_19))? 1 : 0);
				bool L_20 = V_4;
				if (!L_20)
				{
					goto IL_0083_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_21 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
				intptr_t L_22;
				L_22 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_21, NULL);
				intptr_t L_23 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_24 = V_1;
				int32_t L_25;
				L_25 = AndroidJNISafe_CallStaticIntMethod_mE174E036EAB1034BA4DC107F534F0F7B6DA8FBC6(L_22, L_23, L_24, NULL);
				int32_t L_26 = L_25;
				RuntimeObject* L_27 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_26);
				void* L_29 = UnBox_Any(L_27, il2cpp_rgctx_data(method->rgctx_data, 2), L_28);
				il2cpp_codegen_memcpy(V_5, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_29))), SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
				goto IL_0408;
			}

IL_0083_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_31;
				L_31 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_30, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				Type_t* L_33;
				L_33 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_32, NULL);
				V_6 = (bool)((((RuntimeObject*)(Type_t*)L_31) == ((RuntimeObject*)(Type_t*)L_33))? 1 : 0);
				bool L_34 = V_6;
				if (!L_34)
				{
					goto IL_00c2_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_35 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
				intptr_t L_36;
				L_36 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_35, NULL);
				intptr_t L_37 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_38 = V_1;
				bool L_39;
				L_39 = AndroidJNISafe_CallStaticBooleanMethod_mF980739844CAA33E0E0ADA82F5177F91E39CCB75(L_36, L_37, L_38, NULL);
				bool L_40 = L_39;
				RuntimeObject* L_41 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_40);
				void* L_43 = UnBox_Any(L_41, il2cpp_rgctx_data(method->rgctx_data, 2), L_42);
				il2cpp_codegen_memcpy(V_5, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_43))), SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
				goto IL_0408;
			}

IL_00c2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_45;
				L_45 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_44, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
				Type_t* L_47;
				L_47 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_46, NULL);
				V_7 = (bool)((((RuntimeObject*)(Type_t*)L_45) == ((RuntimeObject*)(Type_t*)L_47))? 1 : 0);
				bool L_48 = V_7;
				if (!L_48)
				{
					goto IL_010e_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_49 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
				intptr_t L_50;
				L_50 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_49, NULL);
				intptr_t L_51 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_52 = V_1;
				int8_t L_53;
				L_53 = AndroidJNISafe_CallStaticSByteMethod_mC9057F28DC0C675701810414D19C7168A68F026D(L_50, L_51, L_52, NULL);
				uint8_t L_54 = ((uint8_t)((int32_t)(uint8_t)L_53));
				RuntimeObject* L_55 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_54);
				void* L_57 = UnBox_Any(L_55, il2cpp_rgctx_data(method->rgctx_data, 2), L_56);
				il2cpp_codegen_memcpy(V_5, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_57))), SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
				goto IL_0408;
			}

IL_010e_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_58, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
				Type_t* L_61;
				L_61 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_60, NULL);
				V_8 = (bool)((((RuntimeObject*)(Type_t*)L_59) == ((RuntimeObject*)(Type_t*)L_61))? 1 : 0);
				bool L_62 = V_8;
				if (!L_62)
				{
					goto IL_014d_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_63 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
				intptr_t L_64;
				L_64 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_63, NULL);
				intptr_t L_65 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_66 = V_1;
				int8_t L_67;
				L_67 = AndroidJNISafe_CallStaticSByteMethod_mC9057F28DC0C675701810414D19C7168A68F026D(L_64, L_65, L_66, NULL);
				int8_t L_68 = L_67;
				RuntimeObject* L_69 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_68);
				void* L_71 = UnBox_Any(L_69, il2cpp_rgctx_data(method->rgctx_data, 2), L_70);
				il2cpp_codegen_memcpy(V_5, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_71))), SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
				goto IL_0408;
			}

IL_014d_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_73;
				L_73 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_72, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
				Type_t* L_75;
				L_75 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_74, NULL);
				V_9 = (bool)((((RuntimeObject*)(Type_t*)L_73) == ((RuntimeObject*)(Type_t*)L_75))? 1 : 0);
				bool L_76 = V_9;
				if (!L_76)
				{
					goto IL_018c_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_77 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
				intptr_t L_78;
				L_78 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_77, NULL);
				intptr_t L_79 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_80 = V_1;
				int16_t L_81;
				L_81 = AndroidJNISafe_CallStaticShortMethod_m134B1C6791FD9A09180ADF481475880F4F8B79A4(L_78, L_79, L_80, NULL);
				int16_t L_82 = L_81;
				RuntimeObject* L_83 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_82);
				void* L_85 = UnBox_Any(L_83, il2cpp_rgctx_data(method->rgctx_data, 2), L_84);
				il2cpp_codegen_memcpy(V_5, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_85))), SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
				goto IL_0408;
			}

IL_018c_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_87;
				L_87 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_86, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
				Type_t* L_89;
				L_89 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_88, NULL);
				V_10 = (bool)((((RuntimeObject*)(Type_t*)L_87) == ((RuntimeObject*)(Type_t*)L_89))? 1 : 0);
				bool L_90 = V_10;
				if (!L_90)
				{
					goto IL_01cb_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_91 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
				intptr_t L_92;
				L_92 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_91, NULL);
				intptr_t L_93 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_94 = V_1;
				int64_t L_95;
				L_95 = AndroidJNISafe_CallStaticLongMethod_mA98EE656033866FC4DE05F3F815F76594FA18D84(L_92, L_93, L_94, NULL);
				int64_t L_96 = L_95;
				RuntimeObject* L_97 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_96);
				void* L_99 = UnBox_Any(L_97, il2cpp_rgctx_data(method->rgctx_data, 2), L_98);
				il2cpp_codegen_memcpy(V_5, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_99))), SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
				goto IL_0408;
			}

IL_01cb_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_101;
				L_101 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_100, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_102 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
				Type_t* L_103;
				L_103 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_102, NULL);
				V_11 = (bool)((((RuntimeObject*)(Type_t*)L_101) == ((RuntimeObject*)(Type_t*)L_103))? 1 : 0);
				bool L_104 = V_11;
				if (!L_104)
				{
					goto IL_020a_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_105 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
				intptr_t L_106;
				L_106 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_105, NULL);
				intptr_t L_107 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_108 = V_1;
				float L_109;
				L_109 = AndroidJNISafe_CallStaticFloatMethod_mCEF7855DF0530B27B6E0B4B1C1E78667FD80B2B6(L_106, L_107, L_108, NULL);
				float L_110 = L_109;
				RuntimeObject* L_111 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_110);
				void* L_113 = UnBox_Any(L_111, il2cpp_rgctx_data(method->rgctx_data, 2), L_112);
				il2cpp_codegen_memcpy(V_5, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_113))), SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
				goto IL_0408;
			}

IL_020a_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_114 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_115;
				L_115 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_114, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_116 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
				Type_t* L_117;
				L_117 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_116, NULL);
				V_12 = (bool)((((RuntimeObject*)(Type_t*)L_115) == ((RuntimeObject*)(Type_t*)L_117))? 1 : 0);
				bool L_118 = V_12;
				if (!L_118)
				{
					goto IL_0249_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_119 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
				intptr_t L_120;
				L_120 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_119, NULL);
				intptr_t L_121 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_122 = V_1;
				double L_123;
				L_123 = AndroidJNISafe_CallStaticDoubleMethod_mDCA07255A15D31B20FFD77A795A7FD47C8661D1D(L_120, L_121, L_122, NULL);
				double L_124 = L_123;
				RuntimeObject* L_125 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_124);
				void* L_127 = UnBox_Any(L_125, il2cpp_rgctx_data(method->rgctx_data, 2), L_126);
				il2cpp_codegen_memcpy(V_5, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_127))), SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
				goto IL_0408;
			}

IL_0249_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_128 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_129;
				L_129 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_128, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_130 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
				Type_t* L_131;
				L_131 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_130, NULL);
				V_13 = (bool)((((RuntimeObject*)(Type_t*)L_129) == ((RuntimeObject*)(Type_t*)L_131))? 1 : 0);
				bool L_132 = V_13;
				if (!L_132)
				{
					goto IL_0288_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_133 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
				intptr_t L_134;
				L_134 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_133, NULL);
				intptr_t L_135 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_136 = V_1;
				Il2CppChar L_137;
				L_137 = AndroidJNISafe_CallStaticCharMethod_m435C3A57BC14CCA2F459E1CE9D3E9F084353634C(L_134, L_135, L_136, NULL);
				Il2CppChar L_138 = L_137;
				RuntimeObject* L_139 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_138);
				void* L_141 = UnBox_Any(L_139, il2cpp_rgctx_data(method->rgctx_data, 2), L_140);
				il2cpp_codegen_memcpy(V_5, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_141))), SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
				goto IL_0408;
			}

IL_0288_1:
			{
				goto IL_03ef_1;
			}

IL_028e_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_142 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_143;
				L_143 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_142, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_144 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				Type_t* L_145;
				L_145 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_144, NULL);
				V_14 = (bool)((((RuntimeObject*)(Type_t*)L_143) == ((RuntimeObject*)(Type_t*)L_145))? 1 : 0);
				bool L_146 = V_14;
				if (!L_146)
				{
					goto IL_02c8_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_147 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
				intptr_t L_148;
				L_148 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_147, NULL);
				intptr_t L_149 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_150 = V_1;
				String_t* L_151;
				L_151 = AndroidJNISafe_CallStaticStringMethod_mC5449583711986CFF9CCDAD3F8058D9842229B88(L_148, L_149, L_150, NULL);
				void* L_153 = UnBox_Any((RuntimeObject*)L_151, il2cpp_rgctx_data(method->rgctx_data, 2), L_152);
				il2cpp_codegen_memcpy(V_5, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_153))), SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
				goto IL_0408;
			}

IL_02c8_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_155;
				L_155 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_154, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_156 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_157;
				L_157 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_156, NULL);
				V_15 = (bool)((((RuntimeObject*)(Type_t*)L_155) == ((RuntimeObject*)(Type_t*)L_157))? 1 : 0);
				bool L_158 = V_15;
				if (!L_158)
				{
					goto IL_0326_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_159 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
				intptr_t L_160;
				L_160 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_159, NULL);
				intptr_t L_161 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_162 = V_1;
				intptr_t L_163;
				L_163 = AndroidJNISafe_CallStaticObjectMethod_mFF379E5F210AF38781F1FB59667AC39C4CFA5966(L_160, L_161, L_162, NULL);
				V_16 = L_163;
				intptr_t L_164 = V_16;
				bool L_165;
				L_165 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_164, (0), NULL);
				if (L_165)
				{
					goto IL_0315_1;
				}
			}
			{
				intptr_t L_166 = V_16;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_167;
				L_167 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m54CF986C577935C4B4FDC72612CCE0F13079AD08(L_166, NULL);
				void* L_169 = UnBox_Any((RuntimeObject*)L_167, il2cpp_rgctx_data(method->rgctx_data, 2), L_168);
				il2cpp_codegen_memcpy(G_B29_0, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_169))), SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
				goto IL_031f_1;
			}

IL_0315_1:
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_17, SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
				il2cpp_codegen_memcpy(L_170, V_17, SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
				il2cpp_codegen_memcpy(G_B29_0, L_170, SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
			}

IL_031f_1:
			{
				il2cpp_codegen_memcpy(V_5, G_B29_0, SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
				goto IL_0408;
			}

IL_0326_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_171 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_172;
				L_172 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_171, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_173 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_174;
				L_174 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_173, NULL);
				V_18 = (bool)((((RuntimeObject*)(Type_t*)L_172) == ((RuntimeObject*)(Type_t*)L_174))? 1 : 0);
				bool L_175 = V_18;
				if (!L_175)
				{
					goto IL_0384_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_176 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
				intptr_t L_177;
				L_177 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_176, NULL);
				intptr_t L_178 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_179 = V_1;
				intptr_t L_180;
				L_180 = AndroidJNISafe_CallStaticObjectMethod_mFF379E5F210AF38781F1FB59667AC39C4CFA5966(L_177, L_178, L_179, NULL);
				V_19 = L_180;
				intptr_t L_181 = V_19;
				bool L_182;
				L_182 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_181, (0), NULL);
				if (L_182)
				{
					goto IL_0373_1;
				}
			}
			{
				intptr_t L_183 = V_19;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_184;
				L_184 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_mB1EEE323CA333E5DB2871794F1E9094E488682E2(L_183, NULL);
				void* L_186 = UnBox_Any((RuntimeObject*)L_184, il2cpp_rgctx_data(method->rgctx_data, 2), L_185);
				il2cpp_codegen_memcpy(G_B34_0, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_186))), SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
				goto IL_037d_1;
			}

IL_0373_1:
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_17, SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
				il2cpp_codegen_memcpy(L_187, V_17, SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
				il2cpp_codegen_memcpy(G_B34_0, L_187, SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
			}

IL_037d_1:
			{
				il2cpp_codegen_memcpy(V_5, G_B34_0, SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
				goto IL_0408;
			}

IL_0384_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_188 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_189;
				L_189 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_188, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_190 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				Type_t* L_191;
				L_191 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_190, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_192;
				L_192 = AndroidReflection_IsAssignableFrom_mE4CCA11A87A7E49591786C98FFE239D6EA66F8C5(L_189, L_191, NULL);
				V_20 = L_192;
				bool L_193 = V_20;
				if (!L_193)
				{
					goto IL_03c3_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_194 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
				intptr_t L_195;
				L_195 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_194, NULL);
				intptr_t L_196 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_197 = V_1;
				intptr_t L_198;
				L_198 = AndroidJNISafe_CallStaticObjectMethod_mFF379E5F210AF38781F1FB59667AC39C4CFA5966(L_195, L_196, L_197, NULL);
				V_21 = L_198;
				intptr_t L_199 = V_21;
				InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_199, (Il2CppFullySharedGenericAny*)L_200);
				il2cpp_codegen_memcpy(V_5, L_200, SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
				goto IL_0408;
			}

IL_03c3_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_201 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
				Type_t* L_202;
				L_202 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_201, NULL);
				Type_t* L_203 = L_202;
				G_B38_0 = L_203;
				G_B38_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
				if (L_203)
				{
					G_B39_0 = L_203;
					G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03da_1;
				}
			}
			{
				G_B40_0 = ((String_t*)(NULL));
				G_B40_1 = G_B38_1;
				goto IL_03df_1;
			}

IL_03da_1:
			{
				NullCheck((RuntimeObject*)G_B39_0);
				String_t* L_204;
				L_204 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B39_0);
				G_B40_0 = L_204;
				G_B40_1 = G_B39_1;
			}

IL_03df_1:
			{
				String_t* L_205;
				L_205 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(G_B40_1, G_B40_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_206 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				NullCheck(L_206);
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_206, L_205, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_206, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaObject__CallStatic_TisIl2CppFullySharedGenericAny_mA069934E49E8EFEB980CA5EED2B1DE810C150A68_RuntimeMethod_var)));
			}

IL_03ef_1:
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_17, SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
				il2cpp_codegen_memcpy(L_207, V_17, SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
				il2cpp_codegen_memcpy(V_5, L_207, SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
				goto IL_0408;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0408:
	{
		il2cpp_codegen_memcpy(L_208, V_5, SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
		il2cpp_codegen_memcpy(il2cppRetVal, L_208, SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
		return;
	}
}
// FieldType UnityEngine.AndroidJavaObject::_Get<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Get_TisIl2CppFullySharedGenericAny_m6AA7C8A5BE069836640026CB6EDA5D93B3246683_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(FieldType)
	const uint32_t SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// FieldType
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
	const Il2CppFullySharedGenericAny L_32 = L_19;
	const Il2CppFullySharedGenericAny L_45 = L_19;
	const Il2CppFullySharedGenericAny L_58 = L_19;
	const Il2CppFullySharedGenericAny L_71 = L_19;
	const Il2CppFullySharedGenericAny L_84 = L_19;
	const Il2CppFullySharedGenericAny L_97 = L_19;
	const Il2CppFullySharedGenericAny L_110 = L_19;
	const Il2CppFullySharedGenericAny L_123 = L_19;
	const Il2CppFullySharedGenericAny L_134 = L_19;
	const Il2CppFullySharedGenericAny L_149 = L_19;
	const Il2CppFullySharedGenericAny L_151 = L_19;
	const Il2CppFullySharedGenericAny L_165 = L_19;
	const Il2CppFullySharedGenericAny L_167 = L_19;
	const Il2CppFullySharedGenericAny L_179 = L_19;
	const Il2CppFullySharedGenericAny L_186 = L_19;
	const Il2CppFullySharedGenericAny L_187 = L_19;
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
	memset(V_3, 0, SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	intptr_t V_14;
	memset((&V_14), 0, sizeof(V_14));
	Il2CppFullySharedGenericAny V_15 = alloca(SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
	memset(V_15, 0, SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
	bool V_16 = false;
	intptr_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	bool V_18 = false;
	intptr_t V_19;
	memset((&V_19), 0, sizeof(V_19));
	Il2CppFullySharedGenericAny G_B26_0 = alloca(SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
	memset(G_B26_0, 0, SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
	Il2CppFullySharedGenericAny G_B31_0 = alloca(SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
	memset(G_B31_0, 0, SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
	Type_t* G_B36_0 = NULL;
	String_t* G_B36_1 = NULL;
	Type_t* G_B35_0 = NULL;
	String_t* G_B35_1 = NULL;
	String_t* G_B37_0 = NULL;
	String_t* G_B37_1 = NULL;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		intptr_t L_3;
		L_3 = InvokerFuncInvoker3< intptr_t, intptr_t, String_t*, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_1, L_2, (bool)0);
		V_0 = L_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = AndroidReflection_IsPrimitive_m48ED73958206D552B937EEC7560184C6C4228F3D(L_5, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0261;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_10, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_9) == ((RuntimeObject*)(Type_t*)L_11))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0066;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_13 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
		intptr_t L_14;
		L_14 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_13, NULL);
		intptr_t L_15 = V_0;
		int32_t L_16;
		L_16 = AndroidJNISafe_GetIntField_m61F97AAEAE3410AB91489B59E2B9F1714D686724(L_14, L_15, NULL);
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_17);
		void* L_20 = UnBox_Any(L_18, il2cpp_rgctx_data(method->rgctx_data, 2), L_19);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_20))), SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
		goto IL_03c4;
	}

IL_0066:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_23, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_22) == ((RuntimeObject*)(Type_t*)L_24))? 1 : 0);
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_00a3;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_26 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
		intptr_t L_27;
		L_27 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_26, NULL);
		intptr_t L_28 = V_0;
		bool L_29;
		L_29 = AndroidJNISafe_GetBooleanField_mB1CE25A87F17492A866F2FB302D69532A50ED114(L_27, L_28, NULL);
		bool L_30 = L_29;
		RuntimeObject* L_31 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_30);
		void* L_33 = UnBox_Any(L_31, il2cpp_rgctx_data(method->rgctx_data, 2), L_32);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_33))), SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
		goto IL_03c4;
	}

IL_00a3:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_35;
		L_35 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_34, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_36, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_35) == ((RuntimeObject*)(Type_t*)L_37))? 1 : 0);
		bool L_38 = V_5;
		if (!L_38)
		{
			goto IL_00ed;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28((RuntimeObject*)_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599, NULL);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_39 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
		intptr_t L_40;
		L_40 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_39, NULL);
		intptr_t L_41 = V_0;
		int8_t L_42;
		L_42 = AndroidJNISafe_GetSByteField_mBFC442E1921CD7542D2705337A7E1A8D806EC42C(L_40, L_41, NULL);
		uint8_t L_43 = ((uint8_t)((int32_t)(uint8_t)L_42));
		RuntimeObject* L_44 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_43);
		void* L_46 = UnBox_Any(L_44, il2cpp_rgctx_data(method->rgctx_data, 2), L_45);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_46))), SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
		goto IL_03c4;
	}

IL_00ed:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_48;
		L_48 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_47, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_49, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_6;
		if (!L_51)
		{
			goto IL_012a;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_52 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
		intptr_t L_53;
		L_53 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_52, NULL);
		intptr_t L_54 = V_0;
		int8_t L_55;
		L_55 = AndroidJNISafe_GetSByteField_mBFC442E1921CD7542D2705337A7E1A8D806EC42C(L_53, L_54, NULL);
		int8_t L_56 = L_55;
		RuntimeObject* L_57 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_56);
		void* L_59 = UnBox_Any(L_57, il2cpp_rgctx_data(method->rgctx_data, 2), L_58);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_59))), SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
		goto IL_03c4;
	}

IL_012a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_60, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_62 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_63;
		L_63 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_62, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_61) == ((RuntimeObject*)(Type_t*)L_63))? 1 : 0);
		bool L_64 = V_7;
		if (!L_64)
		{
			goto IL_0167;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_65 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
		intptr_t L_66;
		L_66 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_65, NULL);
		intptr_t L_67 = V_0;
		int16_t L_68;
		L_68 = AndroidJNISafe_GetShortField_m835A602FF3722BA91111A36120C09DC16F58BF69(L_66, L_67, NULL);
		int16_t L_69 = L_68;
		RuntimeObject* L_70 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_69);
		void* L_72 = UnBox_Any(L_70, il2cpp_rgctx_data(method->rgctx_data, 2), L_71);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_72))), SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
		goto IL_03c4;
	}

IL_0167:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_73 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_74;
		L_74 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_73, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_75 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_76;
		L_76 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_75, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_74) == ((RuntimeObject*)(Type_t*)L_76))? 1 : 0);
		bool L_77 = V_8;
		if (!L_77)
		{
			goto IL_01a4;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_78 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
		intptr_t L_79;
		L_79 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_78, NULL);
		intptr_t L_80 = V_0;
		int64_t L_81;
		L_81 = AndroidJNISafe_GetLongField_m31E20FF52A23F3928BC3576173FCF435076A45A0(L_79, L_80, NULL);
		int64_t L_82 = L_81;
		RuntimeObject* L_83 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_82);
		void* L_85 = UnBox_Any(L_83, il2cpp_rgctx_data(method->rgctx_data, 2), L_84);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_85))), SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
		goto IL_03c4;
	}

IL_01a4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_87;
		L_87 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_86, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_88, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_87) == ((RuntimeObject*)(Type_t*)L_89))? 1 : 0);
		bool L_90 = V_9;
		if (!L_90)
		{
			goto IL_01e1;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_91 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
		intptr_t L_92;
		L_92 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_91, NULL);
		intptr_t L_93 = V_0;
		float L_94;
		L_94 = AndroidJNISafe_GetFloatField_m86A2AE1F0D2D81BA1587FDF2EA10693786BA0BBB(L_92, L_93, NULL);
		float L_95 = L_94;
		RuntimeObject* L_96 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_95);
		void* L_98 = UnBox_Any(L_96, il2cpp_rgctx_data(method->rgctx_data, 2), L_97);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_98))), SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
		goto IL_03c4;
	}

IL_01e1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_100;
		L_100 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_99, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_101, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_100) == ((RuntimeObject*)(Type_t*)L_102))? 1 : 0);
		bool L_103 = V_10;
		if (!L_103)
		{
			goto IL_021e;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_104 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
		intptr_t L_105;
		L_105 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_104, NULL);
		intptr_t L_106 = V_0;
		double L_107;
		L_107 = AndroidJNISafe_GetDoubleField_m5E7778FD959CAA9256AB3E6ADCAC024B5A8D1CC3(L_105, L_106, NULL);
		double L_108 = L_107;
		RuntimeObject* L_109 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_108);
		void* L_111 = UnBox_Any(L_109, il2cpp_rgctx_data(method->rgctx_data, 2), L_110);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_111))), SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
		goto IL_03c4;
	}

IL_021e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_112 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_113;
		L_113 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_112, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_114 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_115;
		L_115 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_114, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_113) == ((RuntimeObject*)(Type_t*)L_115))? 1 : 0);
		bool L_116 = V_11;
		if (!L_116)
		{
			goto IL_025b;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_117 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
		intptr_t L_118;
		L_118 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_117, NULL);
		intptr_t L_119 = V_0;
		Il2CppChar L_120;
		L_120 = AndroidJNISafe_GetCharField_mE1C213483F3E07366C8FAE114648538E446202B9(L_118, L_119, NULL);
		Il2CppChar L_121 = L_120;
		RuntimeObject* L_122 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_121);
		void* L_124 = UnBox_Any(L_122, il2cpp_rgctx_data(method->rgctx_data, 2), L_123);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_124))), SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
		goto IL_03c4;
	}

IL_025b:
	{
		goto IL_03b7;
	}

IL_0261:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_125 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_126;
		L_126 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_125, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_127 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_128;
		L_128 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_127, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_126) == ((RuntimeObject*)(Type_t*)L_128))? 1 : 0);
		bool L_129 = V_12;
		if (!L_129)
		{
			goto IL_0299;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_130 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
		intptr_t L_131;
		L_131 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_130, NULL);
		intptr_t L_132 = V_0;
		String_t* L_133;
		L_133 = AndroidJNISafe_GetStringField_m65B73D43D6FA6A76E18AA78FB566A123FC832381(L_131, L_132, NULL);
		void* L_135 = UnBox_Any((RuntimeObject*)L_133, il2cpp_rgctx_data(method->rgctx_data, 2), L_134);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_135))), SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
		goto IL_03c4;
	}

IL_0299:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_136 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_137;
		L_137 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_136, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
		Type_t* L_139;
		L_139 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_138, NULL);
		V_13 = (bool)((((RuntimeObject*)(Type_t*)L_137) == ((RuntimeObject*)(Type_t*)L_139))? 1 : 0);
		bool L_140 = V_13;
		if (!L_140)
		{
			goto IL_02f5;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_141 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
		intptr_t L_142;
		L_142 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_141, NULL);
		intptr_t L_143 = V_0;
		intptr_t L_144;
		L_144 = AndroidJNISafe_GetObjectField_mD645E1D470CF975C1285EFF0A28C66FC37EFA520(L_142, L_143, NULL);
		V_14 = L_144;
		intptr_t L_145 = V_14;
		bool L_146;
		L_146 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_145, (0), NULL);
		if (L_146)
		{
			goto IL_02e5;
		}
	}
	{
		intptr_t L_147 = V_14;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_148;
		L_148 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m54CF986C577935C4B4FDC72612CCE0F13079AD08(L_147, NULL);
		void* L_150 = UnBox_Any((RuntimeObject*)L_148, il2cpp_rgctx_data(method->rgctx_data, 2), L_149);
		il2cpp_codegen_memcpy(G_B26_0, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_150))), SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
		goto IL_02ef;
	}

IL_02e5:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_15, SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
		il2cpp_codegen_memcpy(L_151, V_15, SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
		il2cpp_codegen_memcpy(G_B26_0, L_151, SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
	}

IL_02ef:
	{
		il2cpp_codegen_memcpy(V_3, G_B26_0, SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
		goto IL_03c4;
	}

IL_02f5:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_152 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_153;
		L_153 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_152, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		Type_t* L_155;
		L_155 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_154, NULL);
		V_16 = (bool)((((RuntimeObject*)(Type_t*)L_153) == ((RuntimeObject*)(Type_t*)L_155))? 1 : 0);
		bool L_156 = V_16;
		if (!L_156)
		{
			goto IL_034e;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_157 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
		intptr_t L_158;
		L_158 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_157, NULL);
		intptr_t L_159 = V_0;
		intptr_t L_160;
		L_160 = AndroidJNISafe_GetObjectField_mD645E1D470CF975C1285EFF0A28C66FC37EFA520(L_158, L_159, NULL);
		V_17 = L_160;
		intptr_t L_161 = V_17;
		bool L_162;
		L_162 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_161, (0), NULL);
		if (L_162)
		{
			goto IL_0341;
		}
	}
	{
		intptr_t L_163 = V_17;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_164;
		L_164 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_mB1EEE323CA333E5DB2871794F1E9094E488682E2(L_163, NULL);
		void* L_166 = UnBox_Any((RuntimeObject*)L_164, il2cpp_rgctx_data(method->rgctx_data, 2), L_165);
		il2cpp_codegen_memcpy(G_B31_0, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_166))), SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
		goto IL_034b;
	}

IL_0341:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_15, SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
		il2cpp_codegen_memcpy(L_167, V_15, SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
		il2cpp_codegen_memcpy(G_B31_0, L_167, SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
	}

IL_034b:
	{
		il2cpp_codegen_memcpy(V_3, G_B31_0, SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
		goto IL_03c4;
	}

IL_034e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_168 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_169;
		L_169 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_168, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_170 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_171;
		L_171 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_170, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_172;
		L_172 = AndroidReflection_IsAssignableFrom_mE4CCA11A87A7E49591786C98FFE239D6EA66F8C5(L_169, L_171, NULL);
		V_18 = L_172;
		bool L_173 = V_18;
		if (!L_173)
		{
			goto IL_038b;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_174 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
		intptr_t L_175;
		L_175 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_174, NULL);
		intptr_t L_176 = V_0;
		intptr_t L_177;
		L_177 = AndroidJNISafe_GetObjectField_mD645E1D470CF975C1285EFF0A28C66FC37EFA520(L_175, L_176, NULL);
		V_19 = L_177;
		intptr_t L_178 = V_19;
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_178, (Il2CppFullySharedGenericAny*)L_179);
		il2cpp_codegen_memcpy(V_3, L_179, SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
		goto IL_03c4;
	}

IL_038b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_180 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_181;
		L_181 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_180, NULL);
		Type_t* L_182 = L_181;
		G_B35_0 = L_182;
		G_B35_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
		if (L_182)
		{
			G_B36_0 = L_182;
			G_B36_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
			goto IL_03a2;
		}
	}
	{
		G_B37_0 = ((String_t*)(NULL));
		G_B37_1 = G_B35_1;
		goto IL_03a7;
	}

IL_03a2:
	{
		NullCheck((RuntimeObject*)G_B36_0);
		String_t* L_183;
		L_183 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B36_0);
		G_B37_0 = L_183;
		G_B37_1 = G_B36_1;
	}

IL_03a7:
	{
		String_t* L_184;
		L_184 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(G_B37_1, G_B37_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_185 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_185);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_185, L_184, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_185, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaObject__Get_TisIl2CppFullySharedGenericAny_m6AA7C8A5BE069836640026CB6EDA5D93B3246683_RuntimeMethod_var)));
	}

IL_03b7:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_15, SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
		il2cpp_codegen_memcpy(L_186, V_15, SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
		il2cpp_codegen_memcpy(V_3, L_186, SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
		goto IL_03c4;
	}

IL_03c4:
	{
		il2cpp_codegen_memcpy(L_187, V_3, SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
		il2cpp_codegen_memcpy(il2cppRetVal, L_187, SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
		return;
	}
}
// FieldType UnityEngine.AndroidJavaObject::_GetStatic<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__GetStatic_TisIl2CppFullySharedGenericAny_m5FA6F86B221B6AD76DDD71818F721187D59BFC38_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(FieldType)
	const uint32_t SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// FieldType
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
	const Il2CppFullySharedGenericAny L_32 = L_19;
	const Il2CppFullySharedGenericAny L_45 = L_19;
	const Il2CppFullySharedGenericAny L_58 = L_19;
	const Il2CppFullySharedGenericAny L_71 = L_19;
	const Il2CppFullySharedGenericAny L_84 = L_19;
	const Il2CppFullySharedGenericAny L_97 = L_19;
	const Il2CppFullySharedGenericAny L_110 = L_19;
	const Il2CppFullySharedGenericAny L_123 = L_19;
	const Il2CppFullySharedGenericAny L_134 = L_19;
	const Il2CppFullySharedGenericAny L_149 = L_19;
	const Il2CppFullySharedGenericAny L_151 = L_19;
	const Il2CppFullySharedGenericAny L_165 = L_19;
	const Il2CppFullySharedGenericAny L_167 = L_19;
	const Il2CppFullySharedGenericAny L_179 = L_19;
	const Il2CppFullySharedGenericAny L_186 = L_19;
	const Il2CppFullySharedGenericAny L_187 = L_19;
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
	memset(V_3, 0, SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	intptr_t V_14;
	memset((&V_14), 0, sizeof(V_14));
	Il2CppFullySharedGenericAny V_15 = alloca(SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
	memset(V_15, 0, SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
	bool V_16 = false;
	intptr_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	bool V_18 = false;
	intptr_t V_19;
	memset((&V_19), 0, sizeof(V_19));
	Il2CppFullySharedGenericAny G_B26_0 = alloca(SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
	memset(G_B26_0, 0, SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
	Il2CppFullySharedGenericAny G_B31_0 = alloca(SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
	memset(G_B31_0, 0, SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
	Type_t* G_B36_0 = NULL;
	String_t* G_B36_1 = NULL;
	Type_t* G_B35_0 = NULL;
	String_t* G_B35_1 = NULL;
	String_t* G_B37_0 = NULL;
	String_t* G_B37_1 = NULL;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		intptr_t L_3;
		L_3 = InvokerFuncInvoker3< intptr_t, intptr_t, String_t*, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_1, L_2, (bool)1);
		V_0 = L_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = AndroidReflection_IsPrimitive_m48ED73958206D552B937EEC7560184C6C4228F3D(L_5, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0261;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_10, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_9) == ((RuntimeObject*)(Type_t*)L_11))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0066;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_13 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_14;
		L_14 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_13, NULL);
		intptr_t L_15 = V_0;
		int32_t L_16;
		L_16 = AndroidJNISafe_GetStaticIntField_m8C4987D43981A1740AEFDA7B4B9A6A2C512E5AC4(L_14, L_15, NULL);
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_17);
		void* L_20 = UnBox_Any(L_18, il2cpp_rgctx_data(method->rgctx_data, 2), L_19);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_20))), SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
		goto IL_03c4;
	}

IL_0066:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_23, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_22) == ((RuntimeObject*)(Type_t*)L_24))? 1 : 0);
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_00a3;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_26 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_27;
		L_27 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_26, NULL);
		intptr_t L_28 = V_0;
		bool L_29;
		L_29 = AndroidJNISafe_GetStaticBooleanField_m5EE57D854FD22446DB1BD1A24019958B8FC9B4F2(L_27, L_28, NULL);
		bool L_30 = L_29;
		RuntimeObject* L_31 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_30);
		void* L_33 = UnBox_Any(L_31, il2cpp_rgctx_data(method->rgctx_data, 2), L_32);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_33))), SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
		goto IL_03c4;
	}

IL_00a3:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_35;
		L_35 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_34, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_36, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_35) == ((RuntimeObject*)(Type_t*)L_37))? 1 : 0);
		bool L_38 = V_5;
		if (!L_38)
		{
			goto IL_00ed;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28((RuntimeObject*)_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599, NULL);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_39 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_40;
		L_40 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_39, NULL);
		intptr_t L_41 = V_0;
		int8_t L_42;
		L_42 = AndroidJNISafe_GetStaticSByteField_m0C17CA332A1C79E8AFB20119E9FC54301D40A847(L_40, L_41, NULL);
		uint8_t L_43 = ((uint8_t)((int32_t)(uint8_t)L_42));
		RuntimeObject* L_44 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_43);
		void* L_46 = UnBox_Any(L_44, il2cpp_rgctx_data(method->rgctx_data, 2), L_45);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_46))), SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
		goto IL_03c4;
	}

IL_00ed:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_48;
		L_48 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_47, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_49, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_6;
		if (!L_51)
		{
			goto IL_012a;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_52 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_53;
		L_53 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_52, NULL);
		intptr_t L_54 = V_0;
		int8_t L_55;
		L_55 = AndroidJNISafe_GetStaticSByteField_m0C17CA332A1C79E8AFB20119E9FC54301D40A847(L_53, L_54, NULL);
		int8_t L_56 = L_55;
		RuntimeObject* L_57 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_56);
		void* L_59 = UnBox_Any(L_57, il2cpp_rgctx_data(method->rgctx_data, 2), L_58);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_59))), SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
		goto IL_03c4;
	}

IL_012a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_60, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_62 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_63;
		L_63 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_62, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_61) == ((RuntimeObject*)(Type_t*)L_63))? 1 : 0);
		bool L_64 = V_7;
		if (!L_64)
		{
			goto IL_0167;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_65 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_66;
		L_66 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_65, NULL);
		intptr_t L_67 = V_0;
		int16_t L_68;
		L_68 = AndroidJNISafe_GetStaticShortField_m84E78B16341CC92D47C97D5EBBEE157C24B3845A(L_66, L_67, NULL);
		int16_t L_69 = L_68;
		RuntimeObject* L_70 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_69);
		void* L_72 = UnBox_Any(L_70, il2cpp_rgctx_data(method->rgctx_data, 2), L_71);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_72))), SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
		goto IL_03c4;
	}

IL_0167:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_73 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_74;
		L_74 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_73, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_75 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_76;
		L_76 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_75, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_74) == ((RuntimeObject*)(Type_t*)L_76))? 1 : 0);
		bool L_77 = V_8;
		if (!L_77)
		{
			goto IL_01a4;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_78 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_79;
		L_79 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_78, NULL);
		intptr_t L_80 = V_0;
		int64_t L_81;
		L_81 = AndroidJNISafe_GetStaticLongField_mF93D2C6310F4BAE072E311010A87C76F1E729379(L_79, L_80, NULL);
		int64_t L_82 = L_81;
		RuntimeObject* L_83 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_82);
		void* L_85 = UnBox_Any(L_83, il2cpp_rgctx_data(method->rgctx_data, 2), L_84);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_85))), SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
		goto IL_03c4;
	}

IL_01a4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_87;
		L_87 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_86, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_88, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_87) == ((RuntimeObject*)(Type_t*)L_89))? 1 : 0);
		bool L_90 = V_9;
		if (!L_90)
		{
			goto IL_01e1;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_91 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_92;
		L_92 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_91, NULL);
		intptr_t L_93 = V_0;
		float L_94;
		L_94 = AndroidJNISafe_GetStaticFloatField_mC947331D47B4102982F809E8A27FF05114E5321A(L_92, L_93, NULL);
		float L_95 = L_94;
		RuntimeObject* L_96 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_95);
		void* L_98 = UnBox_Any(L_96, il2cpp_rgctx_data(method->rgctx_data, 2), L_97);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_98))), SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
		goto IL_03c4;
	}

IL_01e1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_100;
		L_100 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_99, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_101, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_100) == ((RuntimeObject*)(Type_t*)L_102))? 1 : 0);
		bool L_103 = V_10;
		if (!L_103)
		{
			goto IL_021e;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_104 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_105;
		L_105 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_104, NULL);
		intptr_t L_106 = V_0;
		double L_107;
		L_107 = AndroidJNISafe_GetStaticDoubleField_mB0B0EC3DB652C45C177D663F71D63352CF31989E(L_105, L_106, NULL);
		double L_108 = L_107;
		RuntimeObject* L_109 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_108);
		void* L_111 = UnBox_Any(L_109, il2cpp_rgctx_data(method->rgctx_data, 2), L_110);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_111))), SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
		goto IL_03c4;
	}

IL_021e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_112 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_113;
		L_113 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_112, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_114 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_115;
		L_115 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_114, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_113) == ((RuntimeObject*)(Type_t*)L_115))? 1 : 0);
		bool L_116 = V_11;
		if (!L_116)
		{
			goto IL_025b;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_117 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_118;
		L_118 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_117, NULL);
		intptr_t L_119 = V_0;
		Il2CppChar L_120;
		L_120 = AndroidJNISafe_GetStaticCharField_m4FDBF70F20C8A63D61CBE1DB322231C8D7CE2FF6(L_118, L_119, NULL);
		Il2CppChar L_121 = L_120;
		RuntimeObject* L_122 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_121);
		void* L_124 = UnBox_Any(L_122, il2cpp_rgctx_data(method->rgctx_data, 2), L_123);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_124))), SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
		goto IL_03c4;
	}

IL_025b:
	{
		goto IL_03b7;
	}

IL_0261:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_125 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_126;
		L_126 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_125, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_127 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_128;
		L_128 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_127, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_126) == ((RuntimeObject*)(Type_t*)L_128))? 1 : 0);
		bool L_129 = V_12;
		if (!L_129)
		{
			goto IL_0299;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_130 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_131;
		L_131 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_130, NULL);
		intptr_t L_132 = V_0;
		String_t* L_133;
		L_133 = AndroidJNISafe_GetStaticStringField_mD0DC3837F26C82A38BFC42C8450823D53B0326EF(L_131, L_132, NULL);
		void* L_135 = UnBox_Any((RuntimeObject*)L_133, il2cpp_rgctx_data(method->rgctx_data, 2), L_134);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_135))), SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
		goto IL_03c4;
	}

IL_0299:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_136 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_137;
		L_137 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_136, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
		Type_t* L_139;
		L_139 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_138, NULL);
		V_13 = (bool)((((RuntimeObject*)(Type_t*)L_137) == ((RuntimeObject*)(Type_t*)L_139))? 1 : 0);
		bool L_140 = V_13;
		if (!L_140)
		{
			goto IL_02f5;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_141 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_142;
		L_142 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_141, NULL);
		intptr_t L_143 = V_0;
		intptr_t L_144;
		L_144 = AndroidJNISafe_GetStaticObjectField_m7A3E277AE5003C9ADB2B184739736F86A0A03AD4(L_142, L_143, NULL);
		V_14 = L_144;
		intptr_t L_145 = V_14;
		bool L_146;
		L_146 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_145, (0), NULL);
		if (L_146)
		{
			goto IL_02e5;
		}
	}
	{
		intptr_t L_147 = V_14;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_148;
		L_148 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m54CF986C577935C4B4FDC72612CCE0F13079AD08(L_147, NULL);
		void* L_150 = UnBox_Any((RuntimeObject*)L_148, il2cpp_rgctx_data(method->rgctx_data, 2), L_149);
		il2cpp_codegen_memcpy(G_B26_0, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_150))), SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
		goto IL_02ef;
	}

IL_02e5:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_15, SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
		il2cpp_codegen_memcpy(L_151, V_15, SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
		il2cpp_codegen_memcpy(G_B26_0, L_151, SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
	}

IL_02ef:
	{
		il2cpp_codegen_memcpy(V_3, G_B26_0, SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
		goto IL_03c4;
	}

IL_02f5:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_152 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_153;
		L_153 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_152, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		Type_t* L_155;
		L_155 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_154, NULL);
		V_16 = (bool)((((RuntimeObject*)(Type_t*)L_153) == ((RuntimeObject*)(Type_t*)L_155))? 1 : 0);
		bool L_156 = V_16;
		if (!L_156)
		{
			goto IL_034e;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_157 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_158;
		L_158 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_157, NULL);
		intptr_t L_159 = V_0;
		intptr_t L_160;
		L_160 = AndroidJNISafe_GetStaticObjectField_m7A3E277AE5003C9ADB2B184739736F86A0A03AD4(L_158, L_159, NULL);
		V_17 = L_160;
		intptr_t L_161 = V_17;
		bool L_162;
		L_162 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_161, (0), NULL);
		if (L_162)
		{
			goto IL_0341;
		}
	}
	{
		intptr_t L_163 = V_17;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_164;
		L_164 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_mB1EEE323CA333E5DB2871794F1E9094E488682E2(L_163, NULL);
		void* L_166 = UnBox_Any((RuntimeObject*)L_164, il2cpp_rgctx_data(method->rgctx_data, 2), L_165);
		il2cpp_codegen_memcpy(G_B31_0, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_166))), SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
		goto IL_034b;
	}

IL_0341:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_15, SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
		il2cpp_codegen_memcpy(L_167, V_15, SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
		il2cpp_codegen_memcpy(G_B31_0, L_167, SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
	}

IL_034b:
	{
		il2cpp_codegen_memcpy(V_3, G_B31_0, SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
		goto IL_03c4;
	}

IL_034e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_168 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_169;
		L_169 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_168, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_170 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_171;
		L_171 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_170, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_172;
		L_172 = AndroidReflection_IsAssignableFrom_mE4CCA11A87A7E49591786C98FFE239D6EA66F8C5(L_169, L_171, NULL);
		V_18 = L_172;
		bool L_173 = V_18;
		if (!L_173)
		{
			goto IL_038b;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_174 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_175;
		L_175 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_174, NULL);
		intptr_t L_176 = V_0;
		intptr_t L_177;
		L_177 = AndroidJNISafe_GetStaticObjectField_m7A3E277AE5003C9ADB2B184739736F86A0A03AD4(L_175, L_176, NULL);
		V_19 = L_177;
		intptr_t L_178 = V_19;
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_178, (Il2CppFullySharedGenericAny*)L_179);
		il2cpp_codegen_memcpy(V_3, L_179, SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
		goto IL_03c4;
	}

IL_038b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_180 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_181;
		L_181 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_180, NULL);
		Type_t* L_182 = L_181;
		G_B35_0 = L_182;
		G_B35_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
		if (L_182)
		{
			G_B36_0 = L_182;
			G_B36_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
			goto IL_03a2;
		}
	}
	{
		G_B37_0 = ((String_t*)(NULL));
		G_B37_1 = G_B35_1;
		goto IL_03a7;
	}

IL_03a2:
	{
		NullCheck((RuntimeObject*)G_B36_0);
		String_t* L_183;
		L_183 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B36_0);
		G_B37_0 = L_183;
		G_B37_1 = G_B36_1;
	}

IL_03a7:
	{
		String_t* L_184;
		L_184 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(G_B37_1, G_B37_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_185 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_185);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_185, L_184, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_185, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaObject__GetStatic_TisIl2CppFullySharedGenericAny_m5FA6F86B221B6AD76DDD71818F721187D59BFC38_RuntimeMethod_var)));
	}

IL_03b7:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_15, SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
		il2cpp_codegen_memcpy(L_186, V_15, SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
		il2cpp_codegen_memcpy(V_3, L_186, SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
		goto IL_03c4;
	}

IL_03c4:
	{
		il2cpp_codegen_memcpy(L_187, V_3, SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
		il2cpp_codegen_memcpy(il2cppRetVal, L_187, SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
		return;
	}
}
// System.Void UnityEngine.AndroidJavaObject::_Set<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,FieldType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Set_TisIl2CppFullySharedGenericAny_m1AF6344C2EF172B8799D007F4BAC3ECDC182BC22_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___val1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D86DE1FC0445C55F712ED0F6D3E32FED0A1E724);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(FieldType)
	const uint32_t SizeOf_FieldType_t2F905C7C598CE04C35E1297452F5AE8BFD208DAE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// FieldType
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_FieldType_t2F905C7C598CE04C35E1297452F5AE8BFD208DAE);
	const Il2CppFullySharedGenericAny L_26 = L_16;
	const Il2CppFullySharedGenericAny L_36 = L_16;
	const Il2CppFullySharedGenericAny L_46 = L_16;
	const Il2CppFullySharedGenericAny L_56 = L_16;
	const Il2CppFullySharedGenericAny L_66 = L_16;
	const Il2CppFullySharedGenericAny L_76 = L_16;
	const Il2CppFullySharedGenericAny L_86 = L_16;
	const Il2CppFullySharedGenericAny L_96 = L_16;
	const Il2CppFullySharedGenericAny L_106 = L_16;
	const Il2CppFullySharedGenericAny L_116 = L_16;
	const Il2CppFullySharedGenericAny L_118 = L_16;
	const Il2CppFullySharedGenericAny L_130 = L_16;
	const Il2CppFullySharedGenericAny L_132 = L_16;
	const Il2CppFullySharedGenericAny L_142 = L_16;
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	intptr_t V_15;
	memset((&V_15), 0, sizeof(V_15));
	intptr_t G_B25_0;
	memset((&G_B25_0), 0, sizeof(G_B25_0));
	intptr_t G_B25_1;
	memset((&G_B25_1), 0, sizeof(G_B25_1));
	intptr_t G_B24_0;
	memset((&G_B24_0), 0, sizeof(G_B24_0));
	intptr_t G_B24_1;
	memset((&G_B24_1), 0, sizeof(G_B24_1));
	intptr_t G_B26_0;
	memset((&G_B26_0), 0, sizeof(G_B26_0));
	intptr_t G_B26_1;
	memset((&G_B26_1), 0, sizeof(G_B26_1));
	intptr_t G_B26_2;
	memset((&G_B26_2), 0, sizeof(G_B26_2));
	intptr_t G_B30_0;
	memset((&G_B30_0), 0, sizeof(G_B30_0));
	intptr_t G_B30_1;
	memset((&G_B30_1), 0, sizeof(G_B30_1));
	intptr_t G_B29_0;
	memset((&G_B29_0), 0, sizeof(G_B29_0));
	intptr_t G_B29_1;
	memset((&G_B29_1), 0, sizeof(G_B29_1));
	intptr_t G_B31_0;
	memset((&G_B31_0), 0, sizeof(G_B31_0));
	intptr_t G_B31_1;
	memset((&G_B31_1), 0, sizeof(G_B31_1));
	intptr_t G_B31_2;
	memset((&G_B31_2), 0, sizeof(G_B31_2));
	Type_t* G_B36_0 = NULL;
	String_t* G_B36_1 = NULL;
	Type_t* G_B35_0 = NULL;
	String_t* G_B35_1 = NULL;
	String_t* G_B37_0 = NULL;
	String_t* G_B37_1 = NULL;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		intptr_t L_3;
		L_3 = InvokerFuncInvoker3< intptr_t, intptr_t, String_t*, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_1, L_2, (bool)0);
		V_0 = L_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = AndroidReflection_IsPrimitive_m48ED73958206D552B937EEC7560184C6C4228F3D(L_5, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_025e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_10, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_9) == ((RuntimeObject*)(Type_t*)L_11))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0067;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_13 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
		intptr_t L_14;
		L_14 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_13, NULL);
		intptr_t L_15 = V_0;
		il2cpp_codegen_memcpy(L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___val1 : &___val1), SizeOf_FieldType_t2F905C7C598CE04C35E1297452F5AE8BFD208DAE);
		RuntimeObject* L_17 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), L_16);
		AndroidJNISafe_SetIntField_mA25D81AEE8AB2AA562EA8B03BF7F81D9202C368C(L_14, L_15, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_17, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		goto IL_0258;
	}

IL_0067:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_20, NULL);
		V_3 = (bool)((((RuntimeObject*)(Type_t*)L_19) == ((RuntimeObject*)(Type_t*)L_21))? 1 : 0);
		bool L_22 = V_3;
		if (!L_22)
		{
			goto IL_00a3;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_23 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
		intptr_t L_24;
		L_24 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_23, NULL);
		intptr_t L_25 = V_0;
		il2cpp_codegen_memcpy(L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___val1 : &___val1), SizeOf_FieldType_t2F905C7C598CE04C35E1297452F5AE8BFD208DAE);
		RuntimeObject* L_27 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), L_26);
		AndroidJNISafe_SetBooleanField_mE88CEE9AAF0B56AD5A1A1741C7612EEA6E0521F1(L_24, L_25, ((*(bool*)((bool*)(bool*)UnBox(L_27, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))), NULL);
		goto IL_0258;
	}

IL_00a3:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_28, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_30, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_29) == ((RuntimeObject*)(Type_t*)L_31))? 1 : 0);
		bool L_32 = V_4;
		if (!L_32)
		{
			goto IL_00ef;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28((RuntimeObject*)_stringLiteral1D86DE1FC0445C55F712ED0F6D3E32FED0A1E724, NULL);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_33 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
		intptr_t L_34;
		L_34 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_33, NULL);
		intptr_t L_35 = V_0;
		il2cpp_codegen_memcpy(L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___val1 : &___val1), SizeOf_FieldType_t2F905C7C598CE04C35E1297452F5AE8BFD208DAE);
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), L_36);
		AndroidJNISafe_SetSByteField_m52A563214F0AB2027CB4124311F147F789AE52CB(L_34, L_35, ((int8_t)((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_37, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))))), NULL);
		goto IL_0258;
	}

IL_00ef:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_38, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_40, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_39) == ((RuntimeObject*)(Type_t*)L_41))? 1 : 0);
		bool L_42 = V_5;
		if (!L_42)
		{
			goto IL_012d;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_43 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
		intptr_t L_44;
		L_44 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_43, NULL);
		intptr_t L_45 = V_0;
		il2cpp_codegen_memcpy(L_46, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___val1 : &___val1), SizeOf_FieldType_t2F905C7C598CE04C35E1297452F5AE8BFD208DAE);
		RuntimeObject* L_47 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), L_46);
		AndroidJNISafe_SetSByteField_m52A563214F0AB2027CB4124311F147F789AE52CB(L_44, L_45, ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_47, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var)))), NULL);
		goto IL_0258;
	}

IL_012d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_49;
		L_49 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_48, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_51;
		L_51 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_50, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_49) == ((RuntimeObject*)(Type_t*)L_51))? 1 : 0);
		bool L_52 = V_6;
		if (!L_52)
		{
			goto IL_016b;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_53 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
		intptr_t L_54;
		L_54 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_53, NULL);
		intptr_t L_55 = V_0;
		il2cpp_codegen_memcpy(L_56, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___val1 : &___val1), SizeOf_FieldType_t2F905C7C598CE04C35E1297452F5AE8BFD208DAE);
		RuntimeObject* L_57 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), L_56);
		AndroidJNISafe_SetShortField_m8626A5FBFCE546B5C17834F06326A2B7938E70B5(L_54, L_55, ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_57, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var)))), NULL);
		goto IL_0258;
	}

IL_016b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_58, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_60, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_59) == ((RuntimeObject*)(Type_t*)L_61))? 1 : 0);
		bool L_62 = V_7;
		if (!L_62)
		{
			goto IL_01a9;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_63 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
		intptr_t L_64;
		L_64 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_63, NULL);
		intptr_t L_65 = V_0;
		il2cpp_codegen_memcpy(L_66, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___val1 : &___val1), SizeOf_FieldType_t2F905C7C598CE04C35E1297452F5AE8BFD208DAE);
		RuntimeObject* L_67 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), L_66);
		AndroidJNISafe_SetLongField_m6F65BE8E3095D1344FD77A9E7D039A7E3D94A925(L_64, L_65, ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_67, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))), NULL);
		goto IL_0258;
	}

IL_01a9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_68 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_69;
		L_69 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_68, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_71;
		L_71 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_70, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_69) == ((RuntimeObject*)(Type_t*)L_71))? 1 : 0);
		bool L_72 = V_8;
		if (!L_72)
		{
			goto IL_01e4;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_73 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
		intptr_t L_74;
		L_74 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_73, NULL);
		intptr_t L_75 = V_0;
		il2cpp_codegen_memcpy(L_76, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___val1 : &___val1), SizeOf_FieldType_t2F905C7C598CE04C35E1297452F5AE8BFD208DAE);
		RuntimeObject* L_77 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), L_76);
		AndroidJNISafe_SetFloatField_m84552EDFC955EB994071C5E2B03A955B169D2842(L_74, L_75, ((*(float*)((float*)(float*)UnBox(L_77, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)))), NULL);
		goto IL_0258;
	}

IL_01e4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_78 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_79;
		L_79 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_78, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_80 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_81;
		L_81 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_80, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_79) == ((RuntimeObject*)(Type_t*)L_81))? 1 : 0);
		bool L_82 = V_9;
		if (!L_82)
		{
			goto IL_021f;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_83 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
		intptr_t L_84;
		L_84 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_83, NULL);
		intptr_t L_85 = V_0;
		il2cpp_codegen_memcpy(L_86, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___val1 : &___val1), SizeOf_FieldType_t2F905C7C598CE04C35E1297452F5AE8BFD208DAE);
		RuntimeObject* L_87 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), L_86);
		AndroidJNISafe_SetDoubleField_m0F9363465DDCE31EAD4F86867549A85AA5C3A09B(L_84, L_85, ((*(double*)((double*)(double*)UnBox(L_87, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))), NULL);
		goto IL_0258;
	}

IL_021f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_88, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_90, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_89) == ((RuntimeObject*)(Type_t*)L_91))? 1 : 0);
		bool L_92 = V_10;
		if (!L_92)
		{
			goto IL_0258;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_93 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
		intptr_t L_94;
		L_94 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_93, NULL);
		intptr_t L_95 = V_0;
		il2cpp_codegen_memcpy(L_96, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___val1 : &___val1), SizeOf_FieldType_t2F905C7C598CE04C35E1297452F5AE8BFD208DAE);
		RuntimeObject* L_97 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), L_96);
		AndroidJNISafe_SetCharField_m1BC58426F7753388A053FEA0137561854AB919F8(L_94, L_95, ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_97, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)))), NULL);
	}

IL_0258:
	{
		goto IL_03c0;
	}

IL_025e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_98 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_99;
		L_99 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_98, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_101;
		L_101 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_100, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_99) == ((RuntimeObject*)(Type_t*)L_101))? 1 : 0);
		bool L_102 = V_11;
		if (!L_102)
		{
			goto IL_029c;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_103 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
		intptr_t L_104;
		L_104 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_103, NULL);
		intptr_t L_105 = V_0;
		il2cpp_codegen_memcpy(L_106, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___val1 : &___val1), SizeOf_FieldType_t2F905C7C598CE04C35E1297452F5AE8BFD208DAE);
		RuntimeObject* L_107 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), L_106);
		AndroidJNISafe_SetStringField_m7AC7481678855A9DFFFBAED8D5C095AA6D3D8C79(L_104, L_105, ((String_t*)CastclassSealed((RuntimeObject*)L_107, String_t_il2cpp_TypeInfo_var)), NULL);
		goto IL_03c0;
	}

IL_029c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_108, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_110 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
		Type_t* L_111;
		L_111 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_110, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_109) == ((RuntimeObject*)(Type_t*)L_111))? 1 : 0);
		bool L_112 = V_12;
		if (!L_112)
		{
			goto IL_02f5;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_113 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
		intptr_t L_114;
		L_114 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_113, NULL);
		intptr_t L_115 = V_0;
		il2cpp_codegen_memcpy(L_116, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___val1 : &___val1), SizeOf_FieldType_t2F905C7C598CE04C35E1297452F5AE8BFD208DAE);
		bool L_117 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 2), L_116);
		G_B24_0 = L_115;
		G_B24_1 = L_114;
		if (!L_117)
		{
			G_B25_0 = L_115;
			G_B25_1 = L_114;
			goto IL_02e4;
		}
	}
	{
		il2cpp_codegen_memcpy(L_118, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___val1 : &___val1), SizeOf_FieldType_t2F905C7C598CE04C35E1297452F5AE8BFD208DAE);
		RuntimeObject* L_119 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), L_118);
		NullCheck(((AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)CastclassClass((RuntimeObject*)L_119, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var)));
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_120 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)((AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)CastclassClass((RuntimeObject*)L_119, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var)))->___m_jclass_2;
		intptr_t L_121;
		L_121 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_120, NULL);
		G_B26_0 = L_121;
		G_B26_1 = G_B24_0;
		G_B26_2 = G_B24_1;
		goto IL_02e9;
	}

IL_02e4:
	{
		G_B26_0 = (0);
		G_B26_1 = G_B25_0;
		G_B26_2 = G_B25_1;
	}

IL_02e9:
	{
		AndroidJNISafe_SetObjectField_mB37CDFD1291DC6BC7D73668AED11A3B59E1C2B10(G_B26_2, G_B26_1, G_B26_0, NULL);
		goto IL_03c0;
	}

IL_02f5:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_123;
		L_123 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_122, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		Type_t* L_125;
		L_125 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_124, NULL);
		V_13 = (bool)((((RuntimeObject*)(Type_t*)L_123) == ((RuntimeObject*)(Type_t*)L_125))? 1 : 0);
		bool L_126 = V_13;
		if (!L_126)
		{
			goto IL_034b;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_127 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
		intptr_t L_128;
		L_128 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_127, NULL);
		intptr_t L_129 = V_0;
		il2cpp_codegen_memcpy(L_130, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___val1 : &___val1), SizeOf_FieldType_t2F905C7C598CE04C35E1297452F5AE8BFD208DAE);
		bool L_131 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 2), L_130);
		G_B29_0 = L_129;
		G_B29_1 = L_128;
		if (!L_131)
		{
			G_B30_0 = L_129;
			G_B30_1 = L_128;
			goto IL_033d;
		}
	}
	{
		il2cpp_codegen_memcpy(L_132, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___val1 : &___val1), SizeOf_FieldType_t2F905C7C598CE04C35E1297452F5AE8BFD208DAE);
		RuntimeObject* L_133 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), L_132);
		NullCheck(((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)CastclassClass((RuntimeObject*)L_133, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var)));
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_134 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)CastclassClass((RuntimeObject*)L_133, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var))->___m_jobject_1;
		intptr_t L_135;
		L_135 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_134, NULL);
		G_B31_0 = L_135;
		G_B31_1 = G_B29_0;
		G_B31_2 = G_B29_1;
		goto IL_0342;
	}

IL_033d:
	{
		G_B31_0 = (0);
		G_B31_1 = G_B30_0;
		G_B31_2 = G_B30_1;
	}

IL_0342:
	{
		AndroidJNISafe_SetObjectField_mB37CDFD1291DC6BC7D73668AED11A3B59E1C2B10(G_B31_2, G_B31_1, G_B31_0, NULL);
		goto IL_03c0;
	}

IL_034b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_136 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_137;
		L_137 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_136, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_139;
		L_139 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_138, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_140;
		L_140 = AndroidReflection_IsAssignableFrom_mE4CCA11A87A7E49591786C98FFE239D6EA66F8C5(L_137, L_139, NULL);
		V_14 = L_140;
		bool L_141 = V_14;
		if (!L_141)
		{
			goto IL_0394;
		}
	}
	{
		il2cpp_codegen_memcpy(L_142, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___val1 : &___val1), SizeOf_FieldType_t2F905C7C598CE04C35E1297452F5AE8BFD208DAE);
		RuntimeObject* L_143 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), L_142);
		intptr_t L_144;
		L_144 = AndroidJNIHelper_ConvertToJNIArray_m0561DD17E7D4E7F598504ADFBEF8EC85F3B3A8E7(((RuntimeArray*)CastclassClass((RuntimeObject*)L_143, RuntimeArray_il2cpp_TypeInfo_var)), NULL);
		V_15 = L_144;
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_145 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_146;
		L_146 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_145, NULL);
		intptr_t L_147 = V_0;
		intptr_t L_148 = V_15;
		AndroidJNISafe_SetObjectField_mB37CDFD1291DC6BC7D73668AED11A3B59E1C2B10(L_146, L_147, L_148, NULL);
		goto IL_03c0;
	}

IL_0394:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_149 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_150;
		L_150 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_149, NULL);
		Type_t* L_151 = L_150;
		G_B35_0 = L_151;
		G_B35_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
		if (L_151)
		{
			G_B36_0 = L_151;
			G_B36_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
			goto IL_03ab;
		}
	}
	{
		G_B37_0 = ((String_t*)(NULL));
		G_B37_1 = G_B35_1;
		goto IL_03b0;
	}

IL_03ab:
	{
		NullCheck((RuntimeObject*)G_B36_0);
		String_t* L_152;
		L_152 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B36_0);
		G_B37_0 = L_152;
		G_B37_1 = G_B36_1;
	}

IL_03b0:
	{
		String_t* L_153;
		L_153 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(G_B37_1, G_B37_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_154 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_154);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_154, L_153, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_154, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaObject__Set_TisIl2CppFullySharedGenericAny_m1AF6344C2EF172B8799D007F4BAC3ECDC182BC22_RuntimeMethod_var)));
	}

IL_03c0:
	{
		return;
	}
}
// System.Void UnityEngine.AndroidJavaObject::_SetStatic<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,FieldType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__SetStatic_TisIl2CppFullySharedGenericAny_mA923EF05918D13946E2452B81B496229D8B952FB_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___val1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D86DE1FC0445C55F712ED0F6D3E32FED0A1E724);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(FieldType)
	const uint32_t SizeOf_FieldType_t0374C27CAE86F7DA1E32463BA4A51CE6B68D02E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// FieldType
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_FieldType_t0374C27CAE86F7DA1E32463BA4A51CE6B68D02E1);
	const Il2CppFullySharedGenericAny L_26 = L_16;
	const Il2CppFullySharedGenericAny L_36 = L_16;
	const Il2CppFullySharedGenericAny L_46 = L_16;
	const Il2CppFullySharedGenericAny L_56 = L_16;
	const Il2CppFullySharedGenericAny L_66 = L_16;
	const Il2CppFullySharedGenericAny L_76 = L_16;
	const Il2CppFullySharedGenericAny L_86 = L_16;
	const Il2CppFullySharedGenericAny L_96 = L_16;
	const Il2CppFullySharedGenericAny L_106 = L_16;
	const Il2CppFullySharedGenericAny L_116 = L_16;
	const Il2CppFullySharedGenericAny L_118 = L_16;
	const Il2CppFullySharedGenericAny L_130 = L_16;
	const Il2CppFullySharedGenericAny L_132 = L_16;
	const Il2CppFullySharedGenericAny L_142 = L_16;
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	intptr_t V_15;
	memset((&V_15), 0, sizeof(V_15));
	intptr_t G_B25_0;
	memset((&G_B25_0), 0, sizeof(G_B25_0));
	intptr_t G_B25_1;
	memset((&G_B25_1), 0, sizeof(G_B25_1));
	intptr_t G_B24_0;
	memset((&G_B24_0), 0, sizeof(G_B24_0));
	intptr_t G_B24_1;
	memset((&G_B24_1), 0, sizeof(G_B24_1));
	intptr_t G_B26_0;
	memset((&G_B26_0), 0, sizeof(G_B26_0));
	intptr_t G_B26_1;
	memset((&G_B26_1), 0, sizeof(G_B26_1));
	intptr_t G_B26_2;
	memset((&G_B26_2), 0, sizeof(G_B26_2));
	intptr_t G_B30_0;
	memset((&G_B30_0), 0, sizeof(G_B30_0));
	intptr_t G_B30_1;
	memset((&G_B30_1), 0, sizeof(G_B30_1));
	intptr_t G_B29_0;
	memset((&G_B29_0), 0, sizeof(G_B29_0));
	intptr_t G_B29_1;
	memset((&G_B29_1), 0, sizeof(G_B29_1));
	intptr_t G_B31_0;
	memset((&G_B31_0), 0, sizeof(G_B31_0));
	intptr_t G_B31_1;
	memset((&G_B31_1), 0, sizeof(G_B31_1));
	intptr_t G_B31_2;
	memset((&G_B31_2), 0, sizeof(G_B31_2));
	Type_t* G_B36_0 = NULL;
	String_t* G_B36_1 = NULL;
	Type_t* G_B35_0 = NULL;
	String_t* G_B35_1 = NULL;
	String_t* G_B37_0 = NULL;
	String_t* G_B37_1 = NULL;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		intptr_t L_3;
		L_3 = InvokerFuncInvoker3< intptr_t, intptr_t, String_t*, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_1, L_2, (bool)1);
		V_0 = L_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = AndroidReflection_IsPrimitive_m48ED73958206D552B937EEC7560184C6C4228F3D(L_5, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_025e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_10, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_9) == ((RuntimeObject*)(Type_t*)L_11))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0067;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_13 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_14;
		L_14 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_13, NULL);
		intptr_t L_15 = V_0;
		il2cpp_codegen_memcpy(L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___val1 : &___val1), SizeOf_FieldType_t0374C27CAE86F7DA1E32463BA4A51CE6B68D02E1);
		RuntimeObject* L_17 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), L_16);
		AndroidJNISafe_SetStaticIntField_mE36FEAE2FEB2D1B231F31D52EAEE2C956B496CB7(L_14, L_15, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_17, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		goto IL_0258;
	}

IL_0067:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_20, NULL);
		V_3 = (bool)((((RuntimeObject*)(Type_t*)L_19) == ((RuntimeObject*)(Type_t*)L_21))? 1 : 0);
		bool L_22 = V_3;
		if (!L_22)
		{
			goto IL_00a3;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_23 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_24;
		L_24 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_23, NULL);
		intptr_t L_25 = V_0;
		il2cpp_codegen_memcpy(L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___val1 : &___val1), SizeOf_FieldType_t0374C27CAE86F7DA1E32463BA4A51CE6B68D02E1);
		RuntimeObject* L_27 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), L_26);
		AndroidJNISafe_SetStaticBooleanField_m4DCD279423F848CE0884BACEF2ABBECC5B21BB37(L_24, L_25, ((*(bool*)((bool*)(bool*)UnBox(L_27, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))), NULL);
		goto IL_0258;
	}

IL_00a3:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_28, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_30, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_29) == ((RuntimeObject*)(Type_t*)L_31))? 1 : 0);
		bool L_32 = V_4;
		if (!L_32)
		{
			goto IL_00ef;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28((RuntimeObject*)_stringLiteral1D86DE1FC0445C55F712ED0F6D3E32FED0A1E724, NULL);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_33 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_34;
		L_34 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_33, NULL);
		intptr_t L_35 = V_0;
		il2cpp_codegen_memcpy(L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___val1 : &___val1), SizeOf_FieldType_t0374C27CAE86F7DA1E32463BA4A51CE6B68D02E1);
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), L_36);
		AndroidJNISafe_SetStaticSByteField_m05DB36918BF549ED3783179BB25BD2BB434400F0(L_34, L_35, ((int8_t)((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_37, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))))), NULL);
		goto IL_0258;
	}

IL_00ef:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_38, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_40, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_39) == ((RuntimeObject*)(Type_t*)L_41))? 1 : 0);
		bool L_42 = V_5;
		if (!L_42)
		{
			goto IL_012d;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_43 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_44;
		L_44 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_43, NULL);
		intptr_t L_45 = V_0;
		il2cpp_codegen_memcpy(L_46, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___val1 : &___val1), SizeOf_FieldType_t0374C27CAE86F7DA1E32463BA4A51CE6B68D02E1);
		RuntimeObject* L_47 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), L_46);
		AndroidJNISafe_SetStaticSByteField_m05DB36918BF549ED3783179BB25BD2BB434400F0(L_44, L_45, ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_47, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var)))), NULL);
		goto IL_0258;
	}

IL_012d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_49;
		L_49 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_48, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_51;
		L_51 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_50, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_49) == ((RuntimeObject*)(Type_t*)L_51))? 1 : 0);
		bool L_52 = V_6;
		if (!L_52)
		{
			goto IL_016b;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_53 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_54;
		L_54 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_53, NULL);
		intptr_t L_55 = V_0;
		il2cpp_codegen_memcpy(L_56, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___val1 : &___val1), SizeOf_FieldType_t0374C27CAE86F7DA1E32463BA4A51CE6B68D02E1);
		RuntimeObject* L_57 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), L_56);
		AndroidJNISafe_SetStaticShortField_m4EC080E45ACC7D82F242F68EBC2C7ACDA3CB8D1C(L_54, L_55, ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_57, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var)))), NULL);
		goto IL_0258;
	}

IL_016b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_58, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_60, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_59) == ((RuntimeObject*)(Type_t*)L_61))? 1 : 0);
		bool L_62 = V_7;
		if (!L_62)
		{
			goto IL_01a9;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_63 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_64;
		L_64 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_63, NULL);
		intptr_t L_65 = V_0;
		il2cpp_codegen_memcpy(L_66, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___val1 : &___val1), SizeOf_FieldType_t0374C27CAE86F7DA1E32463BA4A51CE6B68D02E1);
		RuntimeObject* L_67 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), L_66);
		AndroidJNISafe_SetStaticLongField_m217087BFC4296606744CEB69506C4C0B9F49521F(L_64, L_65, ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_67, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))), NULL);
		goto IL_0258;
	}

IL_01a9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_68 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_69;
		L_69 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_68, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_71;
		L_71 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_70, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_69) == ((RuntimeObject*)(Type_t*)L_71))? 1 : 0);
		bool L_72 = V_8;
		if (!L_72)
		{
			goto IL_01e4;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_73 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_74;
		L_74 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_73, NULL);
		intptr_t L_75 = V_0;
		il2cpp_codegen_memcpy(L_76, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___val1 : &___val1), SizeOf_FieldType_t0374C27CAE86F7DA1E32463BA4A51CE6B68D02E1);
		RuntimeObject* L_77 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), L_76);
		AndroidJNISafe_SetStaticFloatField_mBBCC8840D96B2965206D6448B6B2EDAE3CDC2339(L_74, L_75, ((*(float*)((float*)(float*)UnBox(L_77, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)))), NULL);
		goto IL_0258;
	}

IL_01e4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_78 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_79;
		L_79 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_78, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_80 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_81;
		L_81 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_80, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_79) == ((RuntimeObject*)(Type_t*)L_81))? 1 : 0);
		bool L_82 = V_9;
		if (!L_82)
		{
			goto IL_021f;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_83 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_84;
		L_84 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_83, NULL);
		intptr_t L_85 = V_0;
		il2cpp_codegen_memcpy(L_86, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___val1 : &___val1), SizeOf_FieldType_t0374C27CAE86F7DA1E32463BA4A51CE6B68D02E1);
		RuntimeObject* L_87 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), L_86);
		AndroidJNISafe_SetStaticDoubleField_m94C4E9C749D081B785F5D24532B544D59E4096A6(L_84, L_85, ((*(double*)((double*)(double*)UnBox(L_87, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))), NULL);
		goto IL_0258;
	}

IL_021f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_88, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_90, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_89) == ((RuntimeObject*)(Type_t*)L_91))? 1 : 0);
		bool L_92 = V_10;
		if (!L_92)
		{
			goto IL_0258;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_93 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_94;
		L_94 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_93, NULL);
		intptr_t L_95 = V_0;
		il2cpp_codegen_memcpy(L_96, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___val1 : &___val1), SizeOf_FieldType_t0374C27CAE86F7DA1E32463BA4A51CE6B68D02E1);
		RuntimeObject* L_97 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), L_96);
		AndroidJNISafe_SetStaticCharField_m73E7E7D9BE1A738206FAC4F90C26D5B316D07214(L_94, L_95, ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_97, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)))), NULL);
	}

IL_0258:
	{
		goto IL_03c0;
	}

IL_025e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_98 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_99;
		L_99 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_98, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_101;
		L_101 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_100, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_99) == ((RuntimeObject*)(Type_t*)L_101))? 1 : 0);
		bool L_102 = V_11;
		if (!L_102)
		{
			goto IL_029c;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_103 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_104;
		L_104 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_103, NULL);
		intptr_t L_105 = V_0;
		il2cpp_codegen_memcpy(L_106, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___val1 : &___val1), SizeOf_FieldType_t0374C27CAE86F7DA1E32463BA4A51CE6B68D02E1);
		RuntimeObject* L_107 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), L_106);
		AndroidJNISafe_SetStaticStringField_m509E182615D4C2F7B753B225A04A8BFBA126FFA0(L_104, L_105, ((String_t*)CastclassSealed((RuntimeObject*)L_107, String_t_il2cpp_TypeInfo_var)), NULL);
		goto IL_03c0;
	}

IL_029c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_108, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_110 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
		Type_t* L_111;
		L_111 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_110, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_109) == ((RuntimeObject*)(Type_t*)L_111))? 1 : 0);
		bool L_112 = V_12;
		if (!L_112)
		{
			goto IL_02f5;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_113 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_114;
		L_114 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_113, NULL);
		intptr_t L_115 = V_0;
		il2cpp_codegen_memcpy(L_116, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___val1 : &___val1), SizeOf_FieldType_t0374C27CAE86F7DA1E32463BA4A51CE6B68D02E1);
		bool L_117 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 2), L_116);
		G_B24_0 = L_115;
		G_B24_1 = L_114;
		if (!L_117)
		{
			G_B25_0 = L_115;
			G_B25_1 = L_114;
			goto IL_02e4;
		}
	}
	{
		il2cpp_codegen_memcpy(L_118, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___val1 : &___val1), SizeOf_FieldType_t0374C27CAE86F7DA1E32463BA4A51CE6B68D02E1);
		RuntimeObject* L_119 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), L_118);
		NullCheck(((AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)CastclassClass((RuntimeObject*)L_119, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var)));
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_120 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)((AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)CastclassClass((RuntimeObject*)L_119, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var)))->___m_jclass_2;
		intptr_t L_121;
		L_121 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_120, NULL);
		G_B26_0 = L_121;
		G_B26_1 = G_B24_0;
		G_B26_2 = G_B24_1;
		goto IL_02e9;
	}

IL_02e4:
	{
		G_B26_0 = (0);
		G_B26_1 = G_B25_0;
		G_B26_2 = G_B25_1;
	}

IL_02e9:
	{
		AndroidJNISafe_SetStaticObjectField_mE4688623E6BD1DD91127F4958DC4712290380DBA(G_B26_2, G_B26_1, G_B26_0, NULL);
		goto IL_03c0;
	}

IL_02f5:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_123;
		L_123 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_122, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		Type_t* L_125;
		L_125 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_124, NULL);
		V_13 = (bool)((((RuntimeObject*)(Type_t*)L_123) == ((RuntimeObject*)(Type_t*)L_125))? 1 : 0);
		bool L_126 = V_13;
		if (!L_126)
		{
			goto IL_034b;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_127 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_128;
		L_128 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_127, NULL);
		intptr_t L_129 = V_0;
		il2cpp_codegen_memcpy(L_130, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___val1 : &___val1), SizeOf_FieldType_t0374C27CAE86F7DA1E32463BA4A51CE6B68D02E1);
		bool L_131 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 2), L_130);
		G_B29_0 = L_129;
		G_B29_1 = L_128;
		if (!L_131)
		{
			G_B30_0 = L_129;
			G_B30_1 = L_128;
			goto IL_033d;
		}
	}
	{
		il2cpp_codegen_memcpy(L_132, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___val1 : &___val1), SizeOf_FieldType_t0374C27CAE86F7DA1E32463BA4A51CE6B68D02E1);
		RuntimeObject* L_133 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), L_132);
		NullCheck(((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)CastclassClass((RuntimeObject*)L_133, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var)));
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_134 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)CastclassClass((RuntimeObject*)L_133, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var))->___m_jobject_1;
		intptr_t L_135;
		L_135 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_134, NULL);
		G_B31_0 = L_135;
		G_B31_1 = G_B29_0;
		G_B31_2 = G_B29_1;
		goto IL_0342;
	}

IL_033d:
	{
		G_B31_0 = (0);
		G_B31_1 = G_B30_0;
		G_B31_2 = G_B30_1;
	}

IL_0342:
	{
		AndroidJNISafe_SetStaticObjectField_mE4688623E6BD1DD91127F4958DC4712290380DBA(G_B31_2, G_B31_1, G_B31_0, NULL);
		goto IL_03c0;
	}

IL_034b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_136 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_137;
		L_137 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_136, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_139;
		L_139 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_138, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_140;
		L_140 = AndroidReflection_IsAssignableFrom_mE4CCA11A87A7E49591786C98FFE239D6EA66F8C5(L_137, L_139, NULL);
		V_14 = L_140;
		bool L_141 = V_14;
		if (!L_141)
		{
			goto IL_0394;
		}
	}
	{
		il2cpp_codegen_memcpy(L_142, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___val1 : &___val1), SizeOf_FieldType_t0374C27CAE86F7DA1E32463BA4A51CE6B68D02E1);
		RuntimeObject* L_143 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), L_142);
		intptr_t L_144;
		L_144 = AndroidJNIHelper_ConvertToJNIArray_m0561DD17E7D4E7F598504ADFBEF8EC85F3B3A8E7(((RuntimeArray*)CastclassClass((RuntimeObject*)L_143, RuntimeArray_il2cpp_TypeInfo_var)), NULL);
		V_15 = L_144;
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_145 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_146;
		L_146 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_145, NULL);
		intptr_t L_147 = V_0;
		intptr_t L_148 = V_15;
		AndroidJNISafe_SetStaticObjectField_mE4688623E6BD1DD91127F4958DC4712290380DBA(L_146, L_147, L_148, NULL);
		goto IL_03c0;
	}

IL_0394:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_149 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_150;
		L_150 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_149, NULL);
		Type_t* L_151 = L_150;
		G_B35_0 = L_151;
		G_B35_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
		if (L_151)
		{
			G_B36_0 = L_151;
			G_B36_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
			goto IL_03ab;
		}
	}
	{
		G_B37_0 = ((String_t*)(NULL));
		G_B37_1 = G_B35_1;
		goto IL_03b0;
	}

IL_03ab:
	{
		NullCheck((RuntimeObject*)G_B36_0);
		String_t* L_152;
		L_152 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B36_0);
		G_B37_0 = L_152;
		G_B37_1 = G_B36_1;
	}

IL_03b0:
	{
		String_t* L_153;
		L_153 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(G_B37_1, G_B37_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_154 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_154);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_154, L_153, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_154, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaObject__SetStatic_TisIl2CppFullySharedGenericAny_mA923EF05918D13946E2452B81B496229D8B952FB_RuntimeMethod_var)));
	}

IL_03c0:
	{
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Array::AsReadOnly<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* Array_AsReadOnly_TisIl2CppFullySharedGenericAny_mD4D9E3C60B063B18E64A31B902FBC272C440191F_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_AsReadOnly_TisIl2CppFullySharedGenericAny_mD4D9E3C60B063B18E64A31B902FBC272C440191F_RuntimeMethod_var)));
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___array0;
		ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* L_3 = (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		NullCheck(L_3);
		InvokerActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_3, (RuntimeObject*)L_2);
		return L_3;
	}
}
// System.Int32 System.Array::BinarySearch<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisIl2CppFullySharedGenericAny_m9E6BE2AF7A26F30046A9E541B201A03444F19417_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tC90295E9B1E20B5B3267647B73F0C3C04935EA5B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tC90295E9B1E20B5B3267647B73F0C3C04935EA5B);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_BinarySearch_TisIl2CppFullySharedGenericAny_m9E6BE2AF7A26F30046A9E541B201A03444F19417_RuntimeMethod_var)));
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___array0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___array0;
		NullCheck(L_3);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___value1 : &___value1), SizeOf_T_tC90295E9B1E20B5B3267647B73F0C3C04935EA5B);
		int32_t L_5;
		L_5 = InvokerFuncInvoker5< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Il2CppFullySharedGenericAny, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_4: *(void**)L_4), (RuntimeObject*)NULL);
		return L_5;
	}
}
// System.Int32 System.Array::BinarySearch<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],T,System.Collections.Generic.IComparer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisIl2CppFullySharedGenericAny_m097F3FA5AC11EA434358B2A6E13EFFFCEBE1F265_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, RuntimeObject* ___comparer2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t74168A0A72F70A18E5253E05BA47C6252D01CF4B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t74168A0A72F70A18E5253E05BA47C6252D01CF4B);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_BinarySearch_TisIl2CppFullySharedGenericAny_m097F3FA5AC11EA434358B2A6E13EFFFCEBE1F265_RuntimeMethod_var)));
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___array0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___array0;
		NullCheck(L_3);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___value1 : &___value1), SizeOf_T_t74168A0A72F70A18E5253E05BA47C6252D01CF4B);
		RuntimeObject* L_5 = ___comparer2;
		int32_t L_6;
		L_6 = InvokerFuncInvoker5< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Il2CppFullySharedGenericAny, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_4: *(void**)L_4), L_5);
		return L_6;
	}
}
// System.Int32 System.Array::BinarySearch<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisIl2CppFullySharedGenericAny_mBC992BAFF566AD72F192DD89651FDB3C99EAC692_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, int32_t ___index1, int32_t ___length2, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t8383CF32989D9AAC66DD0999657ADB6192280C9F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t8383CF32989D9AAC66DD0999657ADB6192280C9F);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___length2;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___value3 : &___value3), SizeOf_T_t8383CF32989D9AAC66DD0999657ADB6192280C9F);
		int32_t L_4;
		L_4 = InvokerFuncInvoker5< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Il2CppFullySharedGenericAny, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, L_1, L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_3: *(void**)L_3), (RuntimeObject*)NULL);
		return L_4;
	}
}
// System.Int32 System.Array::BinarySearch<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisIl2CppFullySharedGenericAny_mE95A472EFCA90132EA7828986D323FCFCF1C3B47_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, int32_t ___index1, int32_t ___length2, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value3, RuntimeObject* ___comparer4, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tD52998169470CC26A81ECA956A7C16A37B3A3729 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// T
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T_tD52998169470CC26A81ECA956A7C16A37B3A3729);
	String_t* G_B7_0 = NULL;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_BinarySearch_TisIl2CppFullySharedGenericAny_mE95A472EFCA90132EA7828986D323FCFCF1C3B47_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___length2;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___index1;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_BinarySearch_TisIl2CppFullySharedGenericAny_mE95A472EFCA90132EA7828986D323FCFCF1C3B47_RuntimeMethod_var)));
	}

IL_0031:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7 = ___index1;
		int32_t L_8 = ___length2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_BinarySearch_TisIl2CppFullySharedGenericAny_mE95A472EFCA90132EA7828986D323FCFCF1C3B47_RuntimeMethod_var)));
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ArraySortHelper_1_tA28E8AFAF0DFEB53C13A065091BF6C9E58743967* L_10;
		L_10 = InvokerFuncInvoker0< ArraySortHelper_1_tA28E8AFAF0DFEB53C13A065091BF6C9E58743967* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = ___length2;
		il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? ___value3 : &___value3), SizeOf_T_tD52998169470CC26A81ECA956A7C16A37B3A3729);
		RuntimeObject* L_15 = ___comparer4;
		NullCheck(L_10);
		int32_t L_16;
		L_16 = InvokerFuncInvoker5< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Il2CppFullySharedGenericAny, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), L_10, L_11, L_12, L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? L_14: *(void**)L_14), L_15);
		return L_16;
	}
}
// TOutput[] System.Array::ConvertAll<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TInput[],System.Converter`2<TInput,TOutput>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_ConvertAll_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m14A96DEEDA95901276FC4F307571F8E274241A66_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, Converter_2_t492BE36BDB9ACE2595DC3BFC0172171D1510E4CB* ___converter1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(TInput)
	const uint32_t SizeOf_TInput_tB357F1B69AFF59D997DA40A6189F1CDED55614EC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// sizeof(TOutput)
	const uint32_t SizeOf_TOutput_tF8C149600FE4D829F53D42D5688FA606E8801F87 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	// TInput
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TInput_tB357F1B69AFF59D997DA40A6189F1CDED55614EC);
	// TOutput
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TOutput_tF8C149600FE4D829F53D42D5688FA606E8801F87);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_ConvertAll_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m14A96DEEDA95901276FC4F307571F8E274241A66_RuntimeMethod_var)));
	}

IL_000e:
	{
		Converter_2_t492BE36BDB9ACE2595DC3BFC0172171D1510E4CB* L_2 = ___converter1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5E8864981A1D9D7DF38E3ABBDE863B7C527DFF86)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_ConvertAll_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m14A96DEEDA95901276FC4F307571F8E274241A66_RuntimeMethod_var)));
	}

IL_001c:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___array0;
		NullCheck(L_4);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 2), (uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		V_0 = L_5;
		V_1 = 0;
		goto IL_0041;
	}

IL_0029:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		Converter_2_t492BE36BDB9ACE2595DC3BFC0172171D1510E4CB* L_8 = ___converter1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = ___array0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		il2cpp_codegen_memcpy(L_12, (L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), SizeOf_TInput_tB357F1B69AFF59D997DA40A6189F1CDED55614EC);
		NullCheck(L_8);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_12: *(void**)L_12), (Il2CppFullySharedGenericAny*)L_13);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_13, SizeOf_TOutput_tF8C149600FE4D829F53D42D5688FA606E8801F87);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 5), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_13);
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0041:
	{
		int32_t L_15 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = ___array0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0029;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = V_0;
		return L_17;
	}
}
// T[] System.Array::Empty<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m38FF5678044D39B69F0EF275C8457A01F9B19527_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ((EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value_0;
		return L_0;
	}
}
// System.Boolean System.Array::Exists<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_Exists_TisIl2CppFullySharedGenericAny_mEC1165E69FA52FD5982F116B35AFDD7B9F25130D_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___match1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_1 = ___match1;
		int32_t L_2;
		L_2 = InvokerFuncInvoker2< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, L_1);
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Array::Fill<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Fill_TisIl2CppFullySharedGenericAny_mE47876CE06B32416B6D5980C8AB2ABD8DB4CA793_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t16D727CF07434E4AAE0D1164213E2A7F02B554C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t16D727CF07434E4AAE0D1164213E2A7F02B554C1);
	int32_t V_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Fill_TisIl2CppFullySharedGenericAny_mE47876CE06B32416B6D5980C8AB2ABD8DB4CA793_RuntimeMethod_var)));
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_001e;
	}

IL_0012:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___array0;
		int32_t L_3 = V_0;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___value1 : &___value1), SizeOf_T_t16D727CF07434E4AAE0D1164213E2A7F02B554C1);
		NullCheck(L_2);
		il2cpp_codegen_memcpy((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), L_4, SizeOf_T_t16D727CF07434E4AAE0D1164213E2A7F02B554C1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), (void*)L_4);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001e:
	{
		int32_t L_6 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = ___array0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// System.Void System.Array::Fill<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],T,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Fill_TisIl2CppFullySharedGenericAny_mD37D3936659B9DF8F738A5A5640333172684873D_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, int32_t ___startIndex2, int32_t ___count3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t38285397A4C902B758D557A653065749E1F9E96E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T_t38285397A4C902B758D557A653065749E1F9E96E);
	int32_t V_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Fill_TisIl2CppFullySharedGenericAny_mD37D3936659B9DF8F738A5A5640333172684873D_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___startIndex2;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___startIndex2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___array0;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_0028;
		}
	}

IL_0018:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Fill_TisIl2CppFullySharedGenericAny_mD37D3936659B9DF8F738A5A5640333172684873D_RuntimeMethod_var)));
	}

IL_0028:
	{
		int32_t L_6 = ___count3;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_7 = ___startIndex2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___array0;
		NullCheck(L_8);
		int32_t L_9 = ___count3;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)))))
		{
			goto IL_0044;
		}
	}

IL_0034:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_10 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00BA133FF3D84EAB4FB7DB5FB38F235C4E108ED9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Fill_TisIl2CppFullySharedGenericAny_mD37D3936659B9DF8F738A5A5640333172684873D_RuntimeMethod_var)));
	}

IL_0044:
	{
		int32_t L_11 = ___startIndex2;
		V_0 = L_11;
		goto IL_0054;
	}

IL_0048:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___array0;
		int32_t L_13 = V_0;
		il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___value1 : &___value1), SizeOf_T_t38285397A4C902B758D557A653065749E1F9E96E);
		NullCheck(L_12);
		il2cpp_codegen_memcpy((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), L_14, SizeOf_T_t38285397A4C902B758D557A653065749E1F9E96E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), (void*)L_14);
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0054:
	{
		int32_t L_16 = V_0;
		int32_t L_17 = ___startIndex2;
		int32_t L_18 = ___count3;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)il2cpp_codegen_add(L_17, L_18)))))
		{
			goto IL_0048;
		}
	}
	{
		return;
	}
}
// T System.Array::Find<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Find_TisIl2CppFullySharedGenericAny_m9ABD2EF24DCD19493954D0A57D724249A025E77C_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___match1, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t585B2F137ACE900AA208B14ACFDF6A9807A631D5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t585B2F137ACE900AA208B14ACFDF6A9807A631D5);
	const Il2CppFullySharedGenericAny L_13 = L_8;
	const Il2CppFullySharedGenericAny L_17 = L_8;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t585B2F137ACE900AA208B14ACFDF6A9807A631D5);
	memset(V_1, 0, SizeOf_T_t585B2F137ACE900AA208B14ACFDF6A9807A631D5);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Find_TisIl2CppFullySharedGenericAny_m9ABD2EF24DCD19493954D0A57D724249A025E77C_RuntimeMethod_var)));
	}

IL_000e:
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_2 = ___match1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Find_TisIl2CppFullySharedGenericAny_m9ABD2EF24DCD19493954D0A57D724249A025E77C_RuntimeMethod_var)));
	}

IL_001c:
	{
		V_0 = 0;
		goto IL_003b;
	}

IL_0020:
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_4 = ___match1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___array0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		il2cpp_codegen_memcpy(L_8, (L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), SizeOf_T_t585B2F137ACE900AA208B14ACFDF6A9807A631D5);
		NullCheck(L_4);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = ___array0;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		il2cpp_codegen_memcpy(L_13, (L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)), SizeOf_T_t585B2F137ACE900AA208B14ACFDF6A9807A631D5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_13, SizeOf_T_t585B2F137ACE900AA208B14ACFDF6A9807A631D5);
		return;
	}

IL_0037:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_003b:
	{
		int32_t L_15 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = ___array0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T_t585B2F137ACE900AA208B14ACFDF6A9807A631D5);
		il2cpp_codegen_memcpy(L_17, V_1, SizeOf_T_t585B2F137ACE900AA208B14ACFDF6A9807A631D5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_17, SizeOf_T_t585B2F137ACE900AA208B14ACFDF6A9807A631D5);
		return;
	}
}
// T[] System.Array::FindAll<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_FindAll_TisIl2CppFullySharedGenericAny_m35C679597BB747106A913E8219EF3CA09B745BC0_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___match1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t59A057043E35591EFAF2538FED1253BE619D62BD = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// T
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t59A057043E35591EFAF2538FED1253BE619D62BD);
	const Il2CppFullySharedGenericAny L_23 = L_9;
	int32_t V_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	int32_t V_2 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** G_B9_0 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** G_B10_1 = NULL;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_FindAll_TisIl2CppFullySharedGenericAny_m35C679597BB747106A913E8219EF3CA09B745BC0_RuntimeMethod_var)));
	}

IL_000e:
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_2 = ___match1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_FindAll_TisIl2CppFullySharedGenericAny_m35C679597BB747106A913E8219EF3CA09B745BC0_RuntimeMethod_var)));
	}

IL_001c:
	{
		V_0 = 0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4;
		L_4 = InvokerFuncInvoker0< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL);
		V_1 = L_4;
		V_2 = 0;
		goto IL_006b;
	}

IL_0028:
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_5 = ___match1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___array0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_T_t59A057043E35591EFAF2538FED1253BE619D62BD);
		NullCheck(L_5);
		bool L_10;
		L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_9: *(void**)L_9));
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_11 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = V_1;
		NullCheck(L_12);
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_13 = V_0;
		G_B8_0 = (&V_1);
		if (!L_13)
		{
			G_B9_0 = (&V_1);
			goto IL_0047;
		}
	}
	{
		int32_t L_14 = V_0;
		G_B10_0 = ((int32_t)il2cpp_codegen_multiply(L_14, 2));
		G_B10_1 = G_B8_0;
		goto IL_0048;
	}

IL_0047:
	{
		G_B10_0 = 4;
		G_B10_1 = G_B9_0;
	}

IL_0048:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = ___array0;
		NullCheck(L_15);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_16;
		L_16 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(G_B10_0, ((int32_t)(((RuntimeArray*)L_15)->max_length)), NULL);
		InvokerActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, G_B10_1, L_16);
	}

IL_0055:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = V_1;
		int32_t L_18 = V_0;
		int32_t L_19 = L_18;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = ___array0;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		il2cpp_codegen_memcpy(L_23, (L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)), SizeOf_T_t59A057043E35591EFAF2538FED1253BE619D62BD);
		NullCheck(L_17);
		il2cpp_codegen_memcpy((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)), L_23, SizeOf_T_t59A057043E35591EFAF2538FED1253BE619D62BD);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)), (void*)L_23);
	}

IL_0067:
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_006b:
	{
		int32_t L_25 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_26 = ___array0;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_27 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_28 = V_1;
		NullCheck(L_28);
		if ((((int32_t)L_27) == ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_29 = V_0;
		InvokerActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, (&V_1), L_29);
	}

IL_007f:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_30 = V_1;
		return L_30;
	}
}
// System.Int32 System.Array::FindIndex<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_FindIndex_TisIl2CppFullySharedGenericAny_m293A3BED2CB34E68D3E80A3A1980E9CFD47C03AD_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___match1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_FindIndex_TisIl2CppFullySharedGenericAny_m293A3BED2CB34E68D3E80A3A1980E9CFD47C03AD_RuntimeMethod_var)));
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___array0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___array0;
		NullCheck(L_3);
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_4 = ___match1;
		int32_t L_5;
		L_5 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4);
		return L_5;
	}
}
// System.Int32 System.Array::FindIndex<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],System.Int32,System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_FindIndex_TisIl2CppFullySharedGenericAny_m0AD465741D851473A26905099BD2163C65118A94_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, int32_t ___startIndex1, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___match2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_FindIndex_TisIl2CppFullySharedGenericAny_m0AD465741D851473A26905099BD2163C65118A94_RuntimeMethod_var)));
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___array0;
		int32_t L_3 = ___startIndex1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___array0;
		NullCheck(L_4);
		int32_t L_5 = ___startIndex1;
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_6 = ___match2;
		int32_t L_7;
		L_7 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_2, L_3, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_4)->max_length)), L_5)), L_6);
		return L_7;
	}
}
// System.Int32 System.Array::FindIndex<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],System.Int32,System.Int32,System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_FindIndex_TisIl2CppFullySharedGenericAny_m97FB12E7DE53FF350C15A731A4E54C2F34C71AC5_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, int32_t ___startIndex1, int32_t ___count2, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___match3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tF5A4ABF167A443CF6AF4A92D048C03E6A1E7E2BC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T_tF5A4ABF167A443CF6AF4A92D048C03E6A1E7E2BC);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_FindIndex_TisIl2CppFullySharedGenericAny_m97FB12E7DE53FF350C15A731A4E54C2F34C71AC5_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___startIndex1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___startIndex1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___array0;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_0028;
		}
	}

IL_0018:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_FindIndex_TisIl2CppFullySharedGenericAny_m97FB12E7DE53FF350C15A731A4E54C2F34C71AC5_RuntimeMethod_var)));
	}

IL_0028:
	{
		int32_t L_6 = ___count2;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_7 = ___startIndex1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___array0;
		NullCheck(L_8);
		int32_t L_9 = ___count2;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)))))
		{
			goto IL_0044;
		}
	}

IL_0034:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_10 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00BA133FF3D84EAB4FB7DB5FB38F235C4E108ED9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_FindIndex_TisIl2CppFullySharedGenericAny_m97FB12E7DE53FF350C15A731A4E54C2F34C71AC5_RuntimeMethod_var)));
	}

IL_0044:
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_11 = ___match3;
		if (L_11)
		{
			goto IL_0052;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_12 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_FindIndex_TisIl2CppFullySharedGenericAny_m97FB12E7DE53FF350C15A731A4E54C2F34C71AC5_RuntimeMethod_var)));
	}

IL_0052:
	{
		int32_t L_13 = ___startIndex1;
		int32_t L_14 = ___count2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		int32_t L_15 = ___startIndex1;
		V_1 = L_15;
		goto IL_006f;
	}

IL_005a:
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_16 = ___match3;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = ___array0;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		il2cpp_codegen_memcpy(L_20, (L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)), SizeOf_T_tF5A4ABF167A443CF6AF4A92D048C03E6A1E7E2BC);
		NullCheck(L_16);
		bool L_21;
		L_21 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_20: *(void**)L_20));
		if (!L_21)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_22 = V_1;
		return L_22;
	}

IL_006b:
	{
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_006f:
	{
		int32_t L_24 = V_1;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_005a;
		}
	}
	{
		return (-1);
	}
}
// T System.Array::FindLast<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_FindLast_TisIl2CppFullySharedGenericAny_mADE239C9C92FDD295E1C3753AA26B61B0D022567_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___match1, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tCACFFAA451E823AA09B57117A14400A1E2FAE0ED = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_tCACFFAA451E823AA09B57117A14400A1E2FAE0ED);
	const Il2CppFullySharedGenericAny L_14 = L_9;
	const Il2CppFullySharedGenericAny L_17 = L_9;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_tCACFFAA451E823AA09B57117A14400A1E2FAE0ED);
	memset(V_1, 0, SizeOf_T_tCACFFAA451E823AA09B57117A14400A1E2FAE0ED);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_FindLast_TisIl2CppFullySharedGenericAny_mADE239C9C92FDD295E1C3753AA26B61B0D022567_RuntimeMethod_var)));
	}

IL_000e:
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_2 = ___match1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_FindLast_TisIl2CppFullySharedGenericAny_mADE239C9C92FDD295E1C3753AA26B61B0D022567_RuntimeMethod_var)));
	}

IL_001c:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___array0;
		NullCheck(L_4);
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_4)->max_length)), 1));
		goto IL_003f;
	}

IL_0024:
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_5 = ___match1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___array0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_T_tCACFFAA451E823AA09B57117A14400A1E2FAE0ED);
		NullCheck(L_5);
		bool L_10;
		L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_9: *(void**)L_9));
		if (!L_10)
		{
			goto IL_003b;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = ___array0;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		il2cpp_codegen_memcpy(L_14, (L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), SizeOf_T_tCACFFAA451E823AA09B57117A14400A1E2FAE0ED);
		il2cpp_codegen_memcpy(il2cppRetVal, L_14, SizeOf_T_tCACFFAA451E823AA09B57117A14400A1E2FAE0ED);
		return;
	}

IL_003b:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}

IL_003f:
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T_tCACFFAA451E823AA09B57117A14400A1E2FAE0ED);
		il2cpp_codegen_memcpy(L_17, V_1, SizeOf_T_tCACFFAA451E823AA09B57117A14400A1E2FAE0ED);
		il2cpp_codegen_memcpy(il2cppRetVal, L_17, SizeOf_T_tCACFFAA451E823AA09B57117A14400A1E2FAE0ED);
		return;
	}
}
// System.Int32 System.Array::FindLastIndex<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_FindLastIndex_TisIl2CppFullySharedGenericAny_m01496B77179BE1C110853ECB66557D2B6E187544_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___match1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_FindLastIndex_TisIl2CppFullySharedGenericAny_m01496B77179BE1C110853ECB66557D2B6E187544_RuntimeMethod_var)));
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___array0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___array0;
		NullCheck(L_3);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___array0;
		NullCheck(L_4);
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_5 = ___match1;
		int32_t L_6;
		L_6 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), 1)), ((int32_t)(((RuntimeArray*)L_4)->max_length)), L_5);
		return L_6;
	}
}
// System.Int32 System.Array::FindLastIndex<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],System.Int32,System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_FindLastIndex_TisIl2CppFullySharedGenericAny_m2259A91FC00083836B0D6145D6DAC2682C7BA76A_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, int32_t ___startIndex1, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___match2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_FindLastIndex_TisIl2CppFullySharedGenericAny_m2259A91FC00083836B0D6145D6DAC2682C7BA76A_RuntimeMethod_var)));
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___array0;
		int32_t L_3 = ___startIndex1;
		int32_t L_4 = ___startIndex1;
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_5 = ___match2;
		int32_t L_6;
		L_6 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_2, L_3, ((int32_t)il2cpp_codegen_add(L_4, 1)), L_5);
		return L_6;
	}
}
// System.Int32 System.Array::FindLastIndex<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],System.Int32,System.Int32,System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_FindLastIndex_TisIl2CppFullySharedGenericAny_m80BA42F6E66073F509576CBA4739D25E4D6F5368_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, int32_t ___startIndex1, int32_t ___count2, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___match3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tB982A2E5298BBC94D01A036226F5E48F5F84E847 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T_tB982A2E5298BBC94D01A036226F5E48F5F84E847);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_FindLastIndex_TisIl2CppFullySharedGenericAny_m80BA42F6E66073F509576CBA4739D25E4D6F5368_RuntimeMethod_var)));
	}

IL_000e:
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_2 = ___match3;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_FindLastIndex_TisIl2CppFullySharedGenericAny_m80BA42F6E66073F509576CBA4739D25E4D6F5368_RuntimeMethod_var)));
	}

IL_001c:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___array0;
		NullCheck(L_4);
		if ((((RuntimeArray*)L_4)->max_length))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = ___startIndex1;
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_004e;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_FindLastIndex_TisIl2CppFullySharedGenericAny_m80BA42F6E66073F509576CBA4739D25E4D6F5368_RuntimeMethod_var)));
	}

IL_0034:
	{
		int32_t L_7 = ___startIndex1;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_8 = ___startIndex1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = ___array0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_004e;
		}
	}

IL_003e:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_10 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_FindLastIndex_TisIl2CppFullySharedGenericAny_m80BA42F6E66073F509576CBA4739D25E4D6F5368_RuntimeMethod_var)));
	}

IL_004e:
	{
		int32_t L_11 = ___count2;
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_12 = ___startIndex1;
		int32_t L_13 = ___count2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_12, L_13)), 1))) >= ((int32_t)0)))
		{
			goto IL_006a;
		}
	}

IL_005a:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_14 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00BA133FF3D84EAB4FB7DB5FB38F235C4E108ED9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_FindLastIndex_TisIl2CppFullySharedGenericAny_m80BA42F6E66073F509576CBA4739D25E4D6F5368_RuntimeMethod_var)));
	}

IL_006a:
	{
		int32_t L_15 = ___startIndex1;
		int32_t L_16 = ___count2;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_15, L_16));
		int32_t L_17 = ___startIndex1;
		V_1 = L_17;
		goto IL_0087;
	}

IL_0072:
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_18 = ___match3;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = ___array0;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		il2cpp_codegen_memcpy(L_22, (L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)), SizeOf_T_tB982A2E5298BBC94D01A036226F5E48F5F84E847);
		NullCheck(L_18);
		bool L_23;
		L_23 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_22: *(void**)L_22));
		if (!L_23)
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_24 = V_1;
		return L_24;
	}

IL_0083:
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_25, 1));
	}

IL_0087:
	{
		int32_t L_26 = V_1;
		int32_t L_27 = V_0;
		if ((((int32_t)L_26) > ((int32_t)L_27)))
		{
			goto IL_0072;
		}
	}
	{
		return (-1);
	}
}
// System.Void System.Array::ForEach<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_ForEach_TisIl2CppFullySharedGenericAny_m25BD91772E610CC8AEC0E7A7EF2F21D6290B32B3_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___action1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t9AFF73EA1CD910986093F88CE1EDA32D0782B17B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t9AFF73EA1CD910986093F88CE1EDA32D0782B17B);
	int32_t V_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_ForEach_TisIl2CppFullySharedGenericAny_m25BD91772E610CC8AEC0E7A7EF2F21D6290B32B3_RuntimeMethod_var)));
	}

IL_000e:
	{
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_2 = ___action1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_ForEach_TisIl2CppFullySharedGenericAny_m25BD91772E610CC8AEC0E7A7EF2F21D6290B32B3_RuntimeMethod_var)));
	}

IL_001c:
	{
		V_0 = 0;
		goto IL_0031;
	}

IL_0020:
	{
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_4 = ___action1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___array0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		il2cpp_codegen_memcpy(L_8, (L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), SizeOf_T_t9AFF73EA1CD910986093F88CE1EDA32D0782B17B);
		NullCheck(L_4);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_8: *(void**)L_8));
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0031:
	{
		int32_t L_10 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = ___array0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		return;
	}
}
// System.Int32 System.Array::IndexOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisIl2CppFullySharedGenericAny_mE10413A6B3EE04819938D4BFE4364AEB0815D0D6_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t79BDAAD378A0F4FA139F593913F0E05DD8D64B8E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t79BDAAD378A0F4FA139F593913F0E05DD8D64B8E);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_IndexOf_TisIl2CppFullySharedGenericAny_mE10413A6B3EE04819938D4BFE4364AEB0815D0D6_RuntimeMethod_var)));
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___array0;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___value1 : &___value1), SizeOf_T_t79BDAAD378A0F4FA139F593913F0E05DD8D64B8E);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___array0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_3: *(void**)L_3), 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)));
		return L_5;
	}
}
// System.Int32 System.Array::IndexOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisIl2CppFullySharedGenericAny_mD538B12AD0FED2DB5A3FBA24A70B2676E9EA7157_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, int32_t ___startIndex2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t0E96CA8C31CC9A15B764582568D3CECD90F01199 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t0E96CA8C31CC9A15B764582568D3CECD90F01199);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_IndexOf_TisIl2CppFullySharedGenericAny_mD538B12AD0FED2DB5A3FBA24A70B2676E9EA7157_RuntimeMethod_var)));
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___array0;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___value1 : &___value1), SizeOf_T_t0E96CA8C31CC9A15B764582568D3CECD90F01199);
		int32_t L_4 = ___startIndex2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___array0;
		NullCheck(L_5);
		int32_t L_6 = ___startIndex2;
		int32_t L_7;
		L_7 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_3: *(void**)L_3), L_4, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), L_6)));
		return L_7;
	}
}
// System.Int32 System.Array::IndexOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],T,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisIl2CppFullySharedGenericAny_mC56A9F88FF67ED34DC6749E314512E1D97C75391_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, int32_t ___startIndex2, int32_t ___count3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t7173FE62C222F7EC677CA7E3475978924D8072C3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T_t7173FE62C222F7EC677CA7E3475978924D8072C3);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_IndexOf_TisIl2CppFullySharedGenericAny_mC56A9F88FF67ED34DC6749E314512E1D97C75391_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___startIndex2;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___startIndex2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___array0;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_0028;
		}
	}

IL_0018:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_IndexOf_TisIl2CppFullySharedGenericAny_mC56A9F88FF67ED34DC6749E314512E1D97C75391_RuntimeMethod_var)));
	}

IL_0028:
	{
		int32_t L_6 = ___count3;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_7 = ___count3;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___array0;
		NullCheck(L_8);
		int32_t L_9 = ___startIndex2;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)))))
		{
			goto IL_0044;
		}
	}

IL_0034:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_10 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00BA133FF3D84EAB4FB7DB5FB38F235C4E108ED9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_IndexOf_TisIl2CppFullySharedGenericAny_mC56A9F88FF67ED34DC6749E314512E1D97C75391_RuntimeMethod_var)));
	}

IL_0044:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = ___array0;
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___value1 : &___value1), SizeOf_T_t7173FE62C222F7EC677CA7E3475978924D8072C3);
		int32_t L_13 = ___startIndex2;
		int32_t L_14 = ___count3;
		int32_t L_15;
		L_15 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_12: *(void**)L_12), L_13, L_14);
		return L_15;
	}
}
// System.Int32 System.Array::IndexOfImpl<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],T,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOfImpl_TisIl2CppFullySharedGenericAny_mBD89FB7FA67C3163C699D929EFA8313722DE9783_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, int32_t ___startIndex2, int32_t ___count3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t3D21C4D43233815C399FC36FFC8C6F2C8212B5CD = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// T
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t3D21C4D43233815C399FC36FFC8C6F2C8212B5CD);
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = InvokerFuncInvoker0< EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___array0;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? ___value1 : &___value1), SizeOf_T_t3D21C4D43233815C399FC36FFC8C6F2C8212B5CD);
		int32_t L_3 = ___startIndex2;
		int32_t L_4 = ___count3;
		NullCheck(L_0);
		int32_t L_5;
		L_5 = VirtualFuncInvoker4Invoker< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::IndexOf(T[],T,System.Int32,System.Int32) */, L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? L_2: *(void**)L_2), L_3, L_4);
		return L_5;
	}
}
// System.Void System.Array::InternalArray__ICollection_Add<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__ICollection_Add_TisIl2CppFullySharedGenericAny_m00E64208BE3C0C176112F301AF7AC52AC9327277_gshared (RuntimeArray* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_InternalArray__ICollection_Add_TisIl2CppFullySharedGenericAny_m00E64208BE3C0C176112F301AF7AC52AC9327277_RuntimeMethod_var)));
	}
}
// System.Boolean System.Array::InternalArray__ICollection_Contains<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisIl2CppFullySharedGenericAny_m148347D7A91B363E18C6B2BCDCDB9CE43122A494_gshared (RuntimeArray* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t1E57CAFF53DFD82B91CA25DBB4095EF4F5FC124B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	// T
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t1E57CAFF53DFD82B91CA25DBB4095EF4F5FC124B);
	const Il2CppFullySharedGenericAny L_6 = L_4;
	const Il2CppFullySharedGenericAny L_8 = L_4;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t1E57CAFF53DFD82B91CA25DBB4095EF4F5FC124B);
	memset(V_2, 0, SizeOf_T_t1E57CAFF53DFD82B91CA25DBB4095EF4F5FC124B);
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_InternalArray__ICollection_Contains_TisIl2CppFullySharedGenericAny_m148347D7A91B363E18C6B2BCDCDB9CE43122A494_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (Il2CppFullySharedGenericAny*)V_2);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___item0 : &___item0), SizeOf_T_t1E57CAFF53DFD82B91CA25DBB4095EF4F5FC124B);
		bool L_5 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 1), L_4);
		if (L_5)
		{
			goto IL_003a;
		}
	}
	{
		il2cpp_codegen_memcpy(L_6, V_2, SizeOf_T_t1E57CAFF53DFD82B91CA25DBB4095EF4F5FC124B);
		bool L_7 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 1), L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_003a:
	{
		il2cpp_codegen_memcpy(L_8, V_2, SizeOf_T_t1E57CAFF53DFD82B91CA25DBB4095EF4F5FC124B);
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), L_8);
		bool L_11;
		L_11 = ConstrainedFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_10, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___item0 : &___item0), L_9);
		if (!L_11)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0055:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
// System.Void System.Array::InternalArray__ICollection_CopyTo<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__ICollection_CopyTo_TisIl2CppFullySharedGenericAny_m8018459DC752A8B024EC99D065CCD18DE133F8D5_gshared (RuntimeArray* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		int32_t L_3;
		L_3 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7(__this, L_0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Boolean System.Array::InternalArray__ICollection_Remove<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Remove_TisIl2CppFullySharedGenericAny_m37EA518CE48D4DE94B4E12A148B99ACB9E204B05_gshared (RuntimeArray* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_InternalArray__ICollection_Remove_TisIl2CppFullySharedGenericAny_m37EA518CE48D4DE94B4E12A148B99ACB9E204B05_RuntimeMethod_var)));
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_InternalArray__IEnumerable_GetEnumerator_TisIl2CppFullySharedGenericAny_mB93C741D92D4EEB42CCF1CF7C13C17E4D12DD512_gshared (RuntimeArray* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		EmptyInternalEnumerator_1_t607720486C47065AFF0B11BB349CAC85DEBCE543* L_1 = ((EmptyInternalEnumerator_1_t607720486C47065AFF0B11BB349CAC85DEBCE543_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value_0;
		return (RuntimeObject*)L_1;
	}

IL_000e:
	{
		InternalEnumerator_1_tB0830DCD68C540731416F628C5756C5DB4143FC9 L_2;
		memset((&L_2), 0, sizeof(L_2));
		InternalEnumerator_1__ctor_m464A908F35C335E4B3A17DE886808274C7745493((&L_2), __this, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 3));
		InternalEnumerator_1_tB0830DCD68C540731416F628C5756C5DB4143FC9 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_3);
		return (RuntimeObject*)L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__IReadOnlyList_get_Item_TisIl2CppFullySharedGenericAny_m40A65D3F3DFE5723870F874E158F731A1AE5BDE5_gshared (RuntimeArray* __this, int32_t ___index0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t7EED3066BE9CD863D2783525AA0837A356C066ED = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t7EED3066BE9CD863D2783525AA0837A356C066ED);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t7EED3066BE9CD863D2783525AA0837A356C066ED);
	memset(V_0, 0, SizeOf_T_t7EED3066BE9CD863D2783525AA0837A356C066ED);
	{
		int32_t L_0 = ___index0;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_InternalArray__IReadOnlyList_get_Item_TisIl2CppFullySharedGenericAny_m40A65D3F3DFE5723870F874E158F731A1AE5BDE5_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		GetGenericValueImpl(__this, L_3, (Il2CppFullySharedGenericAny*)V_0);
		il2cpp_codegen_memcpy(L_4, V_0, SizeOf_T_t7EED3066BE9CD863D2783525AA0837A356C066ED);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_T_t7EED3066BE9CD863D2783525AA0837A356C066ED);
		return;
	}
}
// System.Int32 System.Array::InternalArray__IndexOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisIl2CppFullySharedGenericAny_m8B7CCAC86F27AB5C27D0AB84D823D11D11013D25_gshared (RuntimeArray* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	// T
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
	const Il2CppFullySharedGenericAny L_6 = L_4;
	const Il2CppFullySharedGenericAny L_10 = L_4;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
	memset(V_2, 0, SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_InternalArray__IndexOf_TisIl2CppFullySharedGenericAny_m8B7CCAC86F27AB5C27D0AB84D823D11D11013D25_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (Il2CppFullySharedGenericAny*)V_2);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___item0 : &___item0), SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
		bool L_5 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 1), L_4);
		if (L_5)
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_memcpy(L_6, V_2, SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
		bool L_7 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 1), L_6);
		if (L_7)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_8 = V_1;
		int32_t L_9;
		L_9 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_8, L_9));
	}

IL_0042:
	{
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___item0 : &___item0), SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), L_10);
		bool L_13;
		L_13 = ConstrainedFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_12, (void*)(Il2CppFullySharedGenericAny*)V_2, L_11);
		if (!L_13)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_14, L_15));
	}

IL_0061:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0065:
	{
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_19;
		L_19 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}
}
// System.Void System.Array::InternalArray__Insert<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisIl2CppFullySharedGenericAny_m074A30526A4287820EDB8AAD615A1460C9324E3C_gshared (RuntimeArray* __this, int32_t ___index0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item1, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_InternalArray__Insert_TisIl2CppFullySharedGenericAny_m074A30526A4287820EDB8AAD615A1460C9324E3C_RuntimeMethod_var)));
	}
}
// T System.Array::InternalArray__get_Item<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__get_Item_TisIl2CppFullySharedGenericAny_m6EC3E2950317C876E17CCAC89B0354BF24E992B3_gshared (RuntimeArray* __this, int32_t ___index0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tC5560EBCB04F9D519B502F6D6CBF583A9B66E9A5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tC5560EBCB04F9D519B502F6D6CBF583A9B66E9A5);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tC5560EBCB04F9D519B502F6D6CBF583A9B66E9A5);
	memset(V_0, 0, SizeOf_T_tC5560EBCB04F9D519B502F6D6CBF583A9B66E9A5);
	{
		int32_t L_0 = ___index0;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_InternalArray__get_Item_TisIl2CppFullySharedGenericAny_m6EC3E2950317C876E17CCAC89B0354BF24E992B3_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		GetGenericValueImpl(__this, L_3, (Il2CppFullySharedGenericAny*)V_0);
		il2cpp_codegen_memcpy(L_4, V_0, SizeOf_T_tC5560EBCB04F9D519B502F6D6CBF583A9B66E9A5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_T_tC5560EBCB04F9D519B502F6D6CBF583A9B66E9A5);
		return;
	}
}
// System.Void System.Array::InternalArray__set_Item<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisIl2CppFullySharedGenericAny_m8EA7B18F43851A117DD67D8A4C620C2D1456A951_gshared (RuntimeArray* __this, int32_t ___index0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t3F7F4C1E55A84BB86DCFEFFF33E141038B02B3A9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t3F7F4C1E55A84BB86DCFEFFF33E141038B02B3A9);
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___index0;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_InternalArray__set_Item_TisIl2CppFullySharedGenericAny_m8EA7B18F43851A117DD67D8A4C620C2D1456A951_RuntimeMethod_var)));
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___index0;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___item1 : &___item1), SizeOf_T_t3F7F4C1E55A84BB86DCFEFFF33E141038B02B3A9);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_7);
		return;
	}

IL_0028:
	{
		int32_t L_8 = ___index0;
		SetGenericValueImpl(__this, L_8, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___item1 : &___item1));
		return;
	}
}
// System.Int32 System.Array::LastIndexOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOf_TisIl2CppFullySharedGenericAny_m42124E8F60C427C896F449A94F08FC8065F1A0F5_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tC8542A3C8163B4705262EFF00D31896D7B482F5C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tC8542A3C8163B4705262EFF00D31896D7B482F5C);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_LastIndexOf_TisIl2CppFullySharedGenericAny_m42124E8F60C427C896F449A94F08FC8065F1A0F5_RuntimeMethod_var)));
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___array0;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___value1 : &___value1), SizeOf_T_tC8542A3C8163B4705262EFF00D31896D7B482F5C);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___array0;
		NullCheck(L_4);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___array0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_3: *(void**)L_3), ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_4)->max_length)), 1)), ((int32_t)(((RuntimeArray*)L_5)->max_length)));
		return L_6;
	}
}
// System.Int32 System.Array::LastIndexOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOf_TisIl2CppFullySharedGenericAny_mE8071C885BB0D76F2E003AD9147C4EC3FED03BF6_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, int32_t ___startIndex2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tDE4019CD8CD6C3B40B7D1593BF03AB0F1E638E47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tDE4019CD8CD6C3B40B7D1593BF03AB0F1E638E47);
	int32_t G_B4_0 = 0;
	Il2CppFullySharedGenericAny G_B4_1 = alloca(SizeOf_T_tDE4019CD8CD6C3B40B7D1593BF03AB0F1E638E47);
	memset(G_B4_1, 0, SizeOf_T_tDE4019CD8CD6C3B40B7D1593BF03AB0F1E638E47);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* G_B4_2 = NULL;
	int32_t G_B3_0 = 0;
	Il2CppFullySharedGenericAny G_B3_1 = alloca(SizeOf_T_tDE4019CD8CD6C3B40B7D1593BF03AB0F1E638E47);
	memset(G_B3_1, 0, SizeOf_T_tDE4019CD8CD6C3B40B7D1593BF03AB0F1E638E47);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* G_B3_2 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	Il2CppFullySharedGenericAny G_B5_2 = alloca(SizeOf_T_tDE4019CD8CD6C3B40B7D1593BF03AB0F1E638E47);
	memset(G_B5_2, 0, SizeOf_T_tDE4019CD8CD6C3B40B7D1593BF03AB0F1E638E47);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* G_B5_3 = NULL;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_LastIndexOf_TisIl2CppFullySharedGenericAny_mE8071C885BB0D76F2E003AD9147C4EC3FED03BF6_RuntimeMethod_var)));
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___array0;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___value1 : &___value1), SizeOf_T_tDE4019CD8CD6C3B40B7D1593BF03AB0F1E638E47);
		int32_t L_4 = ___startIndex2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___array0;
		NullCheck(L_5);
		G_B3_0 = L_4;
		il2cpp_codegen_memcpy(G_B3_1, L_3, SizeOf_T_tDE4019CD8CD6C3B40B7D1593BF03AB0F1E638E47);
		G_B3_2 = L_2;
		if (!(((RuntimeArray*)L_5)->max_length))
		{
			G_B4_0 = L_4;
			il2cpp_codegen_memcpy(G_B4_1, L_3, SizeOf_T_tDE4019CD8CD6C3B40B7D1593BF03AB0F1E638E47);
			G_B4_2 = L_2;
			goto IL_001a;
		}
	}
	{
		int32_t L_6 = ___startIndex2;
		G_B5_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		G_B5_1 = G_B3_0;
		il2cpp_codegen_memcpy(G_B5_2, G_B3_1, SizeOf_T_tDE4019CD8CD6C3B40B7D1593BF03AB0F1E638E47);
		G_B5_3 = G_B3_2;
		goto IL_001b;
	}

IL_001a:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		il2cpp_codegen_memcpy(G_B5_2, G_B4_1, SizeOf_T_tDE4019CD8CD6C3B40B7D1593BF03AB0F1E638E47);
		G_B5_3 = G_B4_2;
	}

IL_001b:
	{
		int32_t L_7;
		L_7 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, G_B5_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? G_B5_2: *(void**)G_B5_2), G_B5_1, G_B5_0);
		return L_7;
	}
}
// System.Int32 System.Array::LastIndexOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],T,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOf_TisIl2CppFullySharedGenericAny_mEBF4468468DE981CF85609DB10A53052DDF4BDDA_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, int32_t ___startIndex2, int32_t ___count3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tDDDDC03D1E4E1717D9ED1F60A64C462EB161F784 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T_tDDDDC03D1E4E1717D9ED1F60A64C462EB161F784);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_LastIndexOf_TisIl2CppFullySharedGenericAny_mEBF4468468DE981CF85609DB10A53052DDF4BDDA_RuntimeMethod_var)));
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___array0;
		NullCheck(L_2);
		if ((((RuntimeArray*)L_2)->max_length))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_3 = ___startIndex2;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_4 = ___startIndex2;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_LastIndexOf_TisIl2CppFullySharedGenericAny_mEBF4468468DE981CF85609DB10A53052DDF4BDDA_RuntimeMethod_var)));
	}

IL_0029:
	{
		int32_t L_6 = ___count3;
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00BA133FF3D84EAB4FB7DB5FB38F235C4E108ED9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_LastIndexOf_TisIl2CppFullySharedGenericAny_mEBF4468468DE981CF85609DB10A53052DDF4BDDA_RuntimeMethod_var)));
	}

IL_003c:
	{
		return (-1);
	}

IL_003e:
	{
		int32_t L_8 = ___startIndex2;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_9 = ___startIndex2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = ___array0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0058;
		}
	}

IL_0048:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_LastIndexOf_TisIl2CppFullySharedGenericAny_mEBF4468468DE981CF85609DB10A53052DDF4BDDA_RuntimeMethod_var)));
	}

IL_0058:
	{
		int32_t L_12 = ___count3;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_13 = ___startIndex2;
		int32_t L_14 = ___count3;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_13, L_14)), 1))) >= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}

IL_0064:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00BA133FF3D84EAB4FB7DB5FB38F235C4E108ED9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_LastIndexOf_TisIl2CppFullySharedGenericAny_mEBF4468468DE981CF85609DB10A53052DDF4BDDA_RuntimeMethod_var)));
	}

IL_0074:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = ___array0;
		il2cpp_codegen_memcpy(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___value1 : &___value1), SizeOf_T_tDDDDC03D1E4E1717D9ED1F60A64C462EB161F784);
		int32_t L_18 = ___startIndex2;
		int32_t L_19 = ___count3;
		int32_t L_20;
		L_20 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_17: *(void**)L_17), L_18, L_19);
		return L_20;
	}
}
// System.Int32 System.Array::LastIndexOfImpl<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],T,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOfImpl_TisIl2CppFullySharedGenericAny_mF2AA1B98F6CA11961FA393EE413080330A1F226F_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, int32_t ___startIndex2, int32_t ___count3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tA17D68DE348015318EA81E83D9342E5E82C9647E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// T
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tA17D68DE348015318EA81E83D9342E5E82C9647E);
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = InvokerFuncInvoker0< EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___array0;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? ___value1 : &___value1), SizeOf_T_tA17D68DE348015318EA81E83D9342E5E82C9647E);
		int32_t L_3 = ___startIndex2;
		int32_t L_4 = ___count3;
		NullCheck(L_0);
		int32_t L_5;
		L_5 = VirtualFuncInvoker4Invoker< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(11 /* System.Int32 System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::LastIndexOf(T[],T,System.Int32,System.Int32) */, L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? L_2: *(void**)L_2), L_3, L_4);
		return L_5;
	}
}
// System.Void System.Array::Resize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisIl2CppFullySharedGenericAny_m7058C1672A90EFDC4E47F788127BE9FA28C96906_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___array0, int32_t ___newSize1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	int32_t G_B7_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* G_B7_1 = NULL;
	int32_t G_B7_2 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* G_B7_3 = NULL;
	int32_t G_B6_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* G_B6_1 = NULL;
	int32_t G_B6_2 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* G_B6_3 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* G_B8_2 = NULL;
	int32_t G_B8_3 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* G_B8_4 = NULL;
	{
		int32_t L_0 = ___newSize1;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAE7FC72C0A8144676E285C7A23FCC75766669858)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Resize_TisIl2CppFullySharedGenericAny_m7058C1672A90EFDC4E47F788127BE9FA28C96906_RuntimeMethod_var)));
	}

IL_0014:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_2 = ___array0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = *((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)L_2);
		V_0 = L_3;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_5 = ___array0;
		int32_t L_6 = ___newSize1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 1), (uint32_t)L_6);
		*((RuntimeObject**)L_5) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)L_7);
		return;
	}

IL_0023:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = ___newSize1;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) == ((int32_t)L_9)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_10 = ___newSize1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 1), (uint32_t)L_10);
		V_1 = L_11;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = ___newSize1;
		G_B6_0 = 0;
		G_B6_1 = L_13;
		G_B6_2 = 0;
		G_B6_3 = L_12;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))) > ((int32_t)L_15)))
		{
			G_B7_0 = 0;
			G_B7_1 = L_13;
			G_B7_2 = 0;
			G_B7_3 = L_12;
			goto IL_003f;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = V_0;
		NullCheck(L_16);
		G_B8_0 = ((int32_t)(((RuntimeArray*)L_16)->max_length));
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		G_B8_3 = G_B6_2;
		G_B8_4 = G_B6_3;
		goto IL_0040;
	}

IL_003f:
	{
		int32_t L_17 = ___newSize1;
		G_B8_0 = L_17;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
		G_B8_3 = G_B7_2;
		G_B8_4 = G_B7_3;
	}

IL_0040:
	{
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)G_B8_4, G_B8_3, (RuntimeArray*)G_B8_2, G_B8_1, G_B8_0, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_18 = ___array0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = V_1;
		*((RuntimeObject**)L_18) = (RuntimeObject*)L_19;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_18, (void*)(RuntimeObject*)L_19);
	}

IL_0048:
	{
		return;
	}
}
// System.Void System.Array::Reverse<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisIl2CppFullySharedGenericAny_m9675346CBC4932648FC9B8AC786541FCC7734FBC_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Reverse_TisIl2CppFullySharedGenericAny_m9675346CBC4932648FC9B8AC786541FCC7734FBC_RuntimeMethod_var)));
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___array0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___array0;
		NullCheck(L_3);
		InvokerActionInvoker3< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)));
		return;
	}
}
// System.Void System.Array::Reverse<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisIl2CppFullySharedGenericAny_mD735AEE41EA85850B64EC3ACBD09E814D01F8ED7_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t0CF5E7B61B560044C2D7F6DB4AB667A05D1625BE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// T
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T_t0CF5E7B61B560044C2D7F6DB4AB667A05D1625BE);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T_t0CF5E7B61B560044C2D7F6DB4AB667A05D1625BE);
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_T_t0CF5E7B61B560044C2D7F6DB4AB667A05D1625BE);
	Il2CppFullySharedGenericAny* V_0 = NULL;
	Il2CppFullySharedGenericAny* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t0CF5E7B61B560044C2D7F6DB4AB667A05D1625BE);
	memset(V_2, 0, SizeOf_T_t0CF5E7B61B560044C2D7F6DB4AB667A05D1625BE);
	String_t* G_B7_0 = NULL;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Reverse_TisIl2CppFullySharedGenericAny_mD735AEE41EA85850B64EC3ACBD09E814D01F8ED7_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___length2;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___index1;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Reverse_TisIl2CppFullySharedGenericAny_mD735AEE41EA85850B64EC3ACBD09E814D01F8ED7_RuntimeMethod_var)));
	}

IL_0031:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7 = ___index1;
		int32_t L_8 = ___length2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Reverse_TisIl2CppFullySharedGenericAny_mD735AEE41EA85850B64EC3ACBD09E814D01F8ED7_RuntimeMethod_var)));
	}

IL_0044:
	{
		int32_t L_10 = ___length2;
		if ((((int32_t)L_10) > ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		return;
	}

IL_0049:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = ___array0;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		Il2CppFullySharedGenericAny* L_13;
		L_13 = InvokerFuncInvoker1< Il2CppFullySharedGenericAny*, uint8_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_12);
		int32_t L_14 = ___index1;
		Il2CppFullySharedGenericAny* L_15;
		L_15 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_13, L_14);
		V_0 = L_15;
		Il2CppFullySharedGenericAny* L_16 = V_0;
		int32_t L_17 = ___length2;
		Il2CppFullySharedGenericAny* L_18;
		L_18 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_16, L_17);
		Il2CppFullySharedGenericAny* L_19;
		L_19 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_18, (-1));
		V_1 = L_19;
	}

IL_0069:
	{
		Il2CppFullySharedGenericAny* L_20 = V_0;
		il2cpp_codegen_memcpy(L_21, L_20, SizeOf_T_t0CF5E7B61B560044C2D7F6DB4AB667A05D1625BE);
		il2cpp_codegen_memcpy(V_2, L_21, SizeOf_T_t0CF5E7B61B560044C2D7F6DB4AB667A05D1625BE);
		Il2CppFullySharedGenericAny* L_22 = V_0;
		Il2CppFullySharedGenericAny* L_23 = V_1;
		il2cpp_codegen_memcpy(L_24, L_23, SizeOf_T_t0CF5E7B61B560044C2D7F6DB4AB667A05D1625BE);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_22, L_24, SizeOf_T_t0CF5E7B61B560044C2D7F6DB4AB667A05D1625BE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericAny*)L_22, (void*)L_24);
		Il2CppFullySharedGenericAny* L_25 = V_1;
		il2cpp_codegen_memcpy(L_26, V_2, SizeOf_T_t0CF5E7B61B560044C2D7F6DB4AB667A05D1625BE);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_25, L_26, SizeOf_T_t0CF5E7B61B560044C2D7F6DB4AB667A05D1625BE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericAny*)L_25, (void*)L_26);
		Il2CppFullySharedGenericAny* L_27 = V_0;
		Il2CppFullySharedGenericAny* L_28;
		L_28 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_27, 1);
		V_0 = L_28;
		Il2CppFullySharedGenericAny* L_29 = V_1;
		Il2CppFullySharedGenericAny* L_30;
		L_30 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_29, (-1));
		V_1 = L_30;
		Il2CppFullySharedGenericAny* L_31 = V_0;
		Il2CppFullySharedGenericAny* L_32 = V_1;
		bool L_33;
		L_33 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, L_31, L_32);
		if (L_33)
		{
			goto IL_0069;
		}
	}
	{
		return;
	}
}
// System.Void System.Array::Sort<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIl2CppFullySharedGenericAny_mA37FC21106E178525D9E79D670E383E9FAE986B2_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Sort_TisIl2CppFullySharedGenericAny_mA37FC21106E178525D9E79D670E383E9FAE986B2_RuntimeMethod_var)));
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___array0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___array0;
		NullCheck(L_3);
		InvokerActionInvoker4< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), (RuntimeObject*)NULL);
		return;
	}
}
// System.Void System.Array::Sort<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIl2CppFullySharedGenericAny_mF006305D6998E5D252D8E814693F406EE4A87BCF_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* ___comparison1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Sort_TisIl2CppFullySharedGenericAny_mF006305D6998E5D252D8E814693F406EE4A87BCF_RuntimeMethod_var)));
	}

IL_000e:
	{
		Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* L_2 = ___comparison1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEE79E0ED75285085B891F475FE68B37575CE1220)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Sort_TisIl2CppFullySharedGenericAny_mF006305D6998E5D252D8E814693F406EE4A87BCF_RuntimeMethod_var)));
	}

IL_001c:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___array0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___array0;
		NullCheck(L_5);
		Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* L_6 = ___comparison1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 3));
		InvokerActionInvoker4< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_4, 0, ((int32_t)(((RuntimeArray*)L_5)->max_length)), L_6);
		return;
	}
}
// System.Void System.Array::Sort<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],System.Collections.Generic.IComparer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIl2CppFullySharedGenericAny_mA5072810D1FBEFAAB48BD4397D1A971DD2EC6BC4_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Sort_TisIl2CppFullySharedGenericAny_mA5072810D1FBEFAAB48BD4397D1A971DD2EC6BC4_RuntimeMethod_var)));
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___array0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___array0;
		NullCheck(L_3);
		RuntimeObject* L_4 = ___comparer1;
		InvokerActionInvoker4< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4);
		return;
	}
}
// System.Void System.Array::Sort<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TKey[],TValue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mF45A7C3B43CED034AADD9027C19E21D6B30243C4_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___keys0, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___items1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___keys0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral738AE0A86F3C2783715FD77C8D9C55D1C19F9699)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Sort_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mF45A7C3B43CED034AADD9027C19E21D6B30243C4_RuntimeMethod_var)));
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___keys0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___items1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___keys0;
		NullCheck(L_4);
		InvokerActionInvoker5< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_2, L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), (RuntimeObject*)NULL);
		return;
	}
}
// System.Void System.Array::Sort<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIl2CppFullySharedGenericAny_m5FF2EEDF74CE9F0F468FFCE6D66807C4AE59ADC0_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___length2;
		InvokerActionInvoker4< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1, L_2, (RuntimeObject*)NULL);
		return;
	}
}
// System.Void System.Array::Sort<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TKey[],TValue[],System.Collections.Generic.IComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mA1450C5CDA34892A342642C7235ACCC3CBCAF0F3_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___keys0, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___items1, RuntimeObject* ___comparer2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___keys0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral738AE0A86F3C2783715FD77C8D9C55D1C19F9699)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Sort_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mA1450C5CDA34892A342642C7235ACCC3CBCAF0F3_RuntimeMethod_var)));
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___keys0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___items1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___keys0;
		NullCheck(L_4);
		RuntimeObject* L_5 = ___comparer2;
		InvokerActionInvoker5< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_2, L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), L_5);
		return;
	}
}
// System.Void System.Array::Sort<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIl2CppFullySharedGenericAny_mBB2E34F0F908431CBE87584E7729449B9E68C01E_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, int32_t ___index1, int32_t ___length2, RuntimeObject* ___comparer3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* G_B7_0 = NULL;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Sort_TisIl2CppFullySharedGenericAny_mBB2E34F0F908431CBE87584E7729449B9E68C01E_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___length2;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___length2;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Sort_TisIl2CppFullySharedGenericAny_mBB2E34F0F908431CBE87584E7729449B9E68C01E_RuntimeMethod_var)));
	}

IL_0031:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7 = ___index1;
		int32_t L_8 = ___length2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Sort_TisIl2CppFullySharedGenericAny_mBB2E34F0F908431CBE87584E7729449B9E68C01E_RuntimeMethod_var)));
	}

IL_0044:
	{
		int32_t L_10 = ___length2;
		if ((((int32_t)L_10) <= ((int32_t)1)))
		{
			goto IL_0056;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ArraySortHelper_1_tA28E8AFAF0DFEB53C13A065091BF6C9E58743967* L_11;
		L_11 = InvokerFuncInvoker0< ArraySortHelper_1_tA28E8AFAF0DFEB53C13A065091BF6C9E58743967* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___array0;
		int32_t L_13 = ___index1;
		int32_t L_14 = ___length2;
		RuntimeObject* L_15 = ___comparer3;
		NullCheck(L_11);
		InvokerActionInvoker4< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_11, L_12, L_13, L_14, L_15);
	}

IL_0056:
	{
		return;
	}
}
// System.Void System.Array::Sort<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TKey[],TValue[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mABF0B77E98EA7386AEEFAF363BCCE849EB6E4C0C_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___keys0, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___items1, int32_t ___index2, int32_t ___length3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___keys0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___items1;
		int32_t L_2 = ___index2;
		int32_t L_3 = ___length3;
		InvokerActionInvoker5< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, L_1, L_2, L_3, (RuntimeObject*)NULL);
		return;
	}
}
// System.Void System.Array::Sort<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TKey[],TValue[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m1BA26265737C3B511F3B65217370E9F263B0FF00_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___keys0, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___items1, int32_t ___index2, int32_t ___length3, RuntimeObject* ___comparer4, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* G_B7_0 = NULL;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___keys0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral738AE0A86F3C2783715FD77C8D9C55D1C19F9699)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Sort_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m1BA26265737C3B511F3B65217370E9F263B0FF00_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___index2;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___length3;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___length3;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Sort_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m1BA26265737C3B511F3B65217370E9F263B0FF00_RuntimeMethod_var)));
	}

IL_0031:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___keys0;
		NullCheck(L_6);
		int32_t L_7 = ___index2;
		int32_t L_8 = ___length3;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) < ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = ___items1;
		if (!L_9)
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_10 = ___index2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = ___items1;
		NullCheck(L_11);
		int32_t L_12 = ___length3;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)))))
		{
			goto IL_004f;
		}
	}

IL_0044:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Sort_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m1BA26265737C3B511F3B65217370E9F263B0FF00_RuntimeMethod_var)));
	}

IL_004f:
	{
		int32_t L_14 = ___length3;
		if ((((int32_t)L_14) <= ((int32_t)1)))
		{
			goto IL_0071;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = ___items1;
		if (L_15)
		{
			goto IL_0061;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = ___keys0;
		int32_t L_17 = ___index2;
		int32_t L_18 = ___length3;
		RuntimeObject* L_19 = ___comparer4;
		InvokerActionInvoker4< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_16, L_17, L_18, L_19);
		return;
	}

IL_0061:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 5));
		ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3* L_20;
		L_20 = InvokerFuncInvoker0< ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = ___keys0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = ___items1;
		int32_t L_23 = ___index2;
		int32_t L_24 = ___length3;
		RuntimeObject* L_25 = ___comparer4;
		NullCheck(L_20);
		InvokerActionInvoker5< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), L_20, L_21, L_22, L_23, L_24, L_25);
	}

IL_0071:
	{
		return;
	}
}
// System.Boolean System.Array::TrueForAll<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_TrueForAll_TisIl2CppFullySharedGenericAny_mA231610DE6AEEFB9713078176E4809C196029A7A_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___match1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t932AB9394043B52BDC22708F1F6E1D2F01F17135 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t932AB9394043B52BDC22708F1F6E1D2F01F17135);
	int32_t V_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_TrueForAll_TisIl2CppFullySharedGenericAny_mA231610DE6AEEFB9713078176E4809C196029A7A_RuntimeMethod_var)));
	}

IL_000e:
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_2 = ___match1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_TrueForAll_TisIl2CppFullySharedGenericAny_mA231610DE6AEEFB9713078176E4809C196029A7A_RuntimeMethod_var)));
	}

IL_001c:
	{
		V_0 = 0;
		goto IL_0035;
	}

IL_0020:
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_4 = ___match1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___array0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		il2cpp_codegen_memcpy(L_8, (L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), SizeOf_T_t932AB9394043B52BDC22708F1F6E1D2F01F17135);
		NullCheck(L_4);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_8: *(void**)L_8));
		if (L_9)
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0031:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0035:
	{
		int32_t L_11 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___array0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		return (bool)1;
	}
}
// T System.Array::UnsafeLoad<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_UnsafeLoad_TisIl2CppFullySharedGenericAny_m2B0EF79AF409649B4D999739D8EEE79D42C6E5AC_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, int32_t ___index1, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t67255E5BBE7497C1CC5E0C98AE407CAB955070CA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t67255E5BBE7497C1CC5E0C98AE407CAB955070CA);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_T_t67255E5BBE7497C1CC5E0C98AE407CAB955070CA);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_T_t67255E5BBE7497C1CC5E0C98AE407CAB955070CA);
		return;
	}
}
// R System.Array::UnsafeMov<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(S)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_UnsafeMov_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m0C83CA4A19A05559BD8E7885B83DC6C499B55607_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___instance0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	il2cpp_codegen_array_unsafe_mov(il2cpp_rgctx_data(method->rgctx_data, 1), il2cppRetVal, il2cpp_rgctx_data(method->rgctx_data, 0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___instance0 : &___instance0));
}
// System.Void System.Array::UnsafeStore<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_UnsafeStore_TisIl2CppFullySharedGenericAny_m4F195BF35C7EBF69F57CC3AC5BF62245310EFF87_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, int32_t ___index1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tEA3F785DB5CD10890DD476C9C778942C6E167848 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tEA3F785DB5CD10890DD476C9C778942C6E167848);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		int32_t L_1 = ___index1;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___value2 : &___value2), SizeOf_T_tEA3F785DB5CD10890DD476C9C778942C6E167848);
		NullCheck(L_0);
		il2cpp_codegen_memcpy((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)), L_2, SizeOf_T_tEA3F785DB5CD10890DD476C9C778942C6E167848);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)), (void*)L_2);
		return;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskCache::CreateCacheableTask<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* AsyncTaskCache_CreateCacheableTask_TisIl2CppFullySharedGenericAny_m9658A27187D14C0CCEC9008C9910E29D15B2BD45_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___result0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_t04193CDCA43C1147AAA9D76DB3F97CC4A7750EB7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// TResult
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_t04193CDCA43C1147AAA9D76DB3F97CC4A7750EB7);
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___result0 : &___result0), SizeOf_TResult_t04193CDCA43C1147AAA9D76DB3F97CC4A7750EB7);
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = V_0;
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_2 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		NullCheck(L_2);
		InvokerActionInvoker4< bool, Il2CppFullySharedGenericAny, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_2, (bool)0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_0: *(void**)L_0), (int32_t)((int32_t)16384), L_1);
		return L_2;
	}
}
// T UnityEngine.AttributeHelperEngine::GetCustomAttributeOfType<System.Object>(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AttributeHelperEngine_GetCustomAttributeOfType_TisRuntimeObject_m96E4C079D222E0E62568B09711845FE62F49909E_gshared (Type_t* ___klass0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Type_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t G_B3_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = ___klass0;
		Type_t* L_3 = V_0;
		NullCheck((MemberInfo_t*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, (MemberInfo_t*)L_2, L_3, (bool)1);
		V_1 = L_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_1;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_1;
		NullCheck(L_6);
		G_B3_0 = ((!(((uint32_t)(((RuntimeArray*)L_6)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_2 = (bool)G_B3_0;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = 0;
		RuntimeObject* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_003c;
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_4;
		V_3 = L_11;
		goto IL_003c;
	}

IL_003c:
	{
		RuntimeObject* L_12 = V_3;
		return L_12;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInvokableCall_ThrowOnInvalidArg_TisIl2CppFullySharedGenericAny_mA0FE27F106298CD7F71EA734F52423956AA72964_gshared (RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = ___arg0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject* L_1 = ___arg0;
		G_B3_0 = ((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->rgctx_data, 0)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		RuntimeObject* L_5 = ___arg0;
		NullCheck(L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_5, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_8, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		String_t* L_10;
		L_10 = UnityString_Format_m560566B98CA1AC19A6C2B424AE640F6E95D3B9B0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC61356ECF43F815CADD86943C995264057299D08)), L_7, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BaseInvokableCall_ThrowOnInvalidArg_TisIl2CppFullySharedGenericAny_mA0FE27F106298CD7F71EA734F52423956AA72964_RuntimeMethod_var)));
	}

IL_0043:
	{
		return;
	}
}
// System.Void System.Buffer::Memmove<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,T&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIl2CppFullySharedGenericAny_m1B0FF4E1B86D4A7279AAF39C7C4DE1A71A8DEBEF_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___destination0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___source1, uint64_t ___elementCount2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_002f;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_1 = ___destination0;
		uint8_t* L_2;
		L_2 = InvokerFuncInvoker1< uint8_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_1);
		V_1 = L_2;
		uint8_t* L_3 = V_1;
		Il2CppFullySharedGenericAny* L_4 = ___source1;
		uint8_t* L_5;
		L_5 = InvokerFuncInvoker1< uint8_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_6);
		uint8_t* L_7 = V_0;
		uint64_t L_8 = ___elementCount2;
		int32_t L_9;
		L_9 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL);
		Buffer_Memmove_mE2FD779AEAE4F226AFCAF27575AF93D7C56BF5B0((uint8_t*)((uintptr_t)L_3), L_7, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_8), L_9)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}

IL_002f:
	{
		Il2CppFullySharedGenericAny* L_10 = ___destination0;
		uint8_t* L_11;
		L_11 = InvokerFuncInvoker1< uint8_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_10);
		V_2 = L_11;
		uint8_t* L_12 = V_2;
		Il2CppFullySharedGenericAny* L_13 = ___source1;
		uint8_t* L_14;
		L_14 = InvokerFuncInvoker1< uint8_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_13);
		V_1 = L_14;
		uint8_t* L_15 = V_1;
		V_3 = (uint8_t*)((uintptr_t)L_15);
		uint8_t* L_16 = V_3;
		uint64_t L_17 = ___elementCount2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 4)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		NullCheck(L_19);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20;
		L_20 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(101 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_19);
		V_4 = L_20;
		intptr_t L_21;
		L_21 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&V_4), NULL);
		RuntimeImports_Memmove_wbarrier_mC563385425BC68BD59B96AD2FFEDCBC482A31BBA((uint8_t*)((uintptr_t)L_12), L_16, (uint32_t)((int32_t)(uint32_t)L_17), L_21, NULL);
		V_2 = (uint8_t*)((uintptr_t)0);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// TValue System.Collections.Generic.CollectionExtensions::GetValueOrDefault<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>,TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionExtensions_GetValueOrDefault_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mCA5E372099B1F12D24B32C3F2FD76BFFEAAFE6CB_gshared (RuntimeObject* ___dictionary0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key1, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(TValue)
	const uint32_t SizeOf_TValue_t32F9250AF8A344D30C507C913516F1347F27E84C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// sizeof(TKey)
	const uint32_t SizeOf_TKey_t952C588BE4043C2D0018DE9FB71B8D8B17AF6C33 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// TKey
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t952C588BE4043C2D0018DE9FB71B8D8B17AF6C33);
	// TValue
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t32F9250AF8A344D30C507C913516F1347F27E84C);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_t32F9250AF8A344D30C507C913516F1347F27E84C);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t32F9250AF8A344D30C507C913516F1347F27E84C);
	memset(V_0, 0, SizeOf_TValue_t32F9250AF8A344D30C507C913516F1347F27E84C);
	{
		RuntimeObject* L_0 = ___dictionary0;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___key1 : &___key1), SizeOf_TKey_t952C588BE4043C2D0018DE9FB71B8D8B17AF6C33);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TValue_t32F9250AF8A344D30C507C913516F1347F27E84C);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_TValue_t32F9250AF8A344D30C507C913516F1347F27E84C);
		InvokerActionInvoker4< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_2: *(void**)L_2), (Il2CppFullySharedGenericAny*)L_3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_TValue_t32F9250AF8A344D30C507C913516F1347F27E84C);
		return;
	}
}
// TValue System.Collections.Generic.CollectionExtensions::GetValueOrDefault<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>,TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionExtensions_GetValueOrDefault_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD1145EF5C22064F86AAB59693033CCB1EC3FA396_gshared (RuntimeObject* ___dictionary0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___defaultValue2, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(TValue)
	const uint32_t SizeOf_TValue_t507D6B3A11919FD24454F59DEF8F47D4BA2895D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// sizeof(TKey)
	const uint32_t SizeOf_TKey_t1CFD709D338DB4318DE7FE07FE5D3F00A4C35968 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// TKey
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_t1CFD709D338DB4318DE7FE07FE5D3F00A4C35968);
	// TValue
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_t507D6B3A11919FD24454F59DEF8F47D4BA2895D0);
	const Il2CppFullySharedGenericAny L_6 = L_5;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t507D6B3A11919FD24454F59DEF8F47D4BA2895D0);
	memset(V_0, 0, SizeOf_TValue_t507D6B3A11919FD24454F59DEF8F47D4BA2895D0);
	{
		RuntimeObject* L_0 = ___dictionary0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CollectionExtensions_GetValueOrDefault_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD1145EF5C22064F86AAB59693033CCB1EC3FA396_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___dictionary0;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___key1 : &___key1), SizeOf_TKey_t1CFD709D338DB4318DE7FE07FE5D3F00A4C35968);
		NullCheck(L_2);
		bool L_4;
		L_4 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryGetValue(TKey,TValue&) */, il2cpp_rgctx_data(method->rgctx_data, 0), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_3: *(void**)L_3), (Il2CppFullySharedGenericAny*)V_0);
		if (L_4)
		{
			goto IL_001b;
		}
	}
	{
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? ___defaultValue2 : &___defaultValue2), SizeOf_TValue_t507D6B3A11919FD24454F59DEF8F47D4BA2895D0);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_TValue_t507D6B3A11919FD24454F59DEF8F47D4BA2895D0);
		return;
	}

IL_001b:
	{
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_TValue_t507D6B3A11919FD24454F59DEF8F47D4BA2895D0);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_TValue_t507D6B3A11919FD24454F59DEF8F47D4BA2895D0);
		return;
	}
}
// System.Boolean System.Diagnostics.Contracts.Contract::ForAll<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<T>,System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Contract_ForAll_TisIl2CppFullySharedGenericAny_m5C22D043CD9C91BC3B6E7517AE83A291B985131B_gshared (RuntimeObject* ___collection0, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___predicate1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t85360245173BBB1ECF90139FE42AA66BF1B22E2B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	// T
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t85360245173BBB1ECF90139FE42AA66BF1B22E2B);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t85360245173BBB1ECF90139FE42AA66BF1B22E2B);
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t85360245173BBB1ECF90139FE42AA66BF1B22E2B);
	memset(V_1, 0, SizeOf_T_t85360245173BBB1ECF90139FE42AA66BF1B22E2B);
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___collection0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Contract_ForAll_TisIl2CppFullySharedGenericAny_m5C22D043CD9C91BC3B6E7517AE83A291B985131B_RuntimeMethod_var)));
	}

IL_000e:
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_2 = ___predicate1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Contract_ForAll_TisIl2CppFullySharedGenericAny_m5C22D043CD9C91BC3B6E7517AE83A291B985131B_RuntimeMethod_var)));
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___collection0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0Invoker< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator() */, il2cpp_rgctx_data(method->rgctx_data, 0), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0043:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004c;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0039_1;
			}

IL_0025_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current() */, il2cpp_rgctx_data(method->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				il2cpp_codegen_memcpy(V_1, L_9, SizeOf_T_t85360245173BBB1ECF90139FE42AA66BF1B22E2B);
				Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_10 = ___predicate1;
				il2cpp_codegen_memcpy(L_11, V_1, SizeOf_T_t85360245173BBB1ECF90139FE42AA66BF1B22E2B);
				NullCheck(L_10);
				bool L_12;
				L_12 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 5)) ? L_11: *(void**)L_11));
				if (L_12)
				{
					goto IL_0039_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_004f;
			}

IL_0039_1:
			{
				RuntimeObject* L_13 = V_0;
				NullCheck((RuntimeObject*)L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
				if (L_14)
				{
					goto IL_0025_1;
				}
			}
			{
				goto IL_004d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004d:
	{
		return (bool)1;
	}

IL_004f:
	{
		bool L_15 = V_2;
		return L_15;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* CustomAttributeData_UnboxValues_TisIl2CppFullySharedGenericAny_m3C19BA2E3D3EE36B2A32767D441F05A5D406548C_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___values0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t3389E099E6923204EF01287B790A31CBD0CA47C9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t3389E099E6923204EF01287B790A31CBD0CA47C9);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___values0;
		NullCheck(L_0);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0020;
	}

IL_000d:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = V_0;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___values0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		void* L_9 = UnBox_Any(L_7, il2cpp_rgctx_data(method->rgctx_data, 1), L_8);
		NullCheck(L_2);
		il2cpp_codegen_memcpy((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_9))), SizeOf_T_t3389E099E6923204EF01287B790A31CBD0CA47C9);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), (void*)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_9))));
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0020:
	{
		int32_t L_11 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = ___values0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = V_0;
		return L_13;
	}
}
// T System.Reflection.CustomAttributeExtensions::GetCustomAttribute<System.Object>(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_mCE0812F0AE19B736CEA2CD72E64516319040AB6E_gshared (Assembly_t* ___element0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		Assembly_t* L_0 = ___element0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_3;
		L_3 = CustomAttributeExtensions_GetCustomAttribute_m056785B4C31CED65B0F38986EE830315551CE030(L_0, L_2, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
// System.Collections.Generic.IEnumerable`1<T> System.Reflection.CustomAttributeExtensions::GetCustomAttributes<System.Object>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CustomAttributeExtensions_GetCustomAttributes_TisRuntimeObject_m82C17F5D5FFAC8E641B79E4554D83A55BE377165_gshared (MemberInfo_t* ___element0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		MemberInfo_t* L_0 = ___element0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		RuntimeObject* L_3;
		L_3 = CustomAttributeExtensions_GetCustomAttributes_m518D9E8FE83EAB9D1A5B5565ABA49B2B2744E815(L_0, L_2, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
// System.Boolean System.Linq.Enumerable::Any<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisIl2CppFullySharedGenericAny_mF4783EEAF4B6A07CECDADF5E9051221F68763764_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t* L_1;
		L_1 = Error_ArgumentNull_m9157523765DB73FC9F7B984F2F740F2B5EDB7337(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_Any_TisIl2CppFullySharedGenericAny_mF4783EEAF4B6A07CECDADF5E9051221F68763764_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0Invoker< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator() */, il2cpp_rgctx_data(method->rgctx_data, 0), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_002c;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck((RuntimeObject*)L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_002c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_6 = V_0;
				NullCheck((RuntimeObject*)L_6);
				bool L_7;
				L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
				if (!L_7)
				{
					goto IL_0021_1;
				}
			}
			{
				V_1 = (bool)1;
				goto IL_002f;
			}

IL_0021_1:
			{
				goto IL_002d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002d:
	{
		return (bool)0;
	}

IL_002f:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Boolean System.Linq.Enumerable::Any<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisIl2CppFullySharedGenericAny_m95E51621356921A0181988D33DE227D27B1D8B8B_gshared (RuntimeObject* ___source0, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_t592CABD5DC9A0BBE89ED4DD34A3F23DF4B8022EE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	// TSource
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_t592CABD5DC9A0BBE89ED4DD34A3F23DF4B8022EE);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t592CABD5DC9A0BBE89ED4DD34A3F23DF4B8022EE);
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t592CABD5DC9A0BBE89ED4DD34A3F23DF4B8022EE);
	memset(V_1, 0, SizeOf_TSource_t592CABD5DC9A0BBE89ED4DD34A3F23DF4B8022EE);
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t* L_1;
		L_1 = Error_ArgumentNull_m9157523765DB73FC9F7B984F2F740F2B5EDB7337(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_Any_TisIl2CppFullySharedGenericAny_m95E51621356921A0181988D33DE227D27B1D8B8B_RuntimeMethod_var)));
	}

IL_000e:
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2 = ___predicate1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t* L_3;
		L_3 = Error_ArgumentNull_m9157523765DB73FC9F7B984F2F740F2B5EDB7337(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_Any_TisIl2CppFullySharedGenericAny_m95E51621356921A0181988D33DE227D27B1D8B8B_RuntimeMethod_var)));
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___source0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0Invoker< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator() */, il2cpp_rgctx_data(method->rgctx_data, 0), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0043:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004c;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0039_1;
			}

IL_0025_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current() */, il2cpp_rgctx_data(method->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				il2cpp_codegen_memcpy(V_1, L_9, SizeOf_TSource_t592CABD5DC9A0BBE89ED4DD34A3F23DF4B8022EE);
				Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_10 = ___predicate1;
				il2cpp_codegen_memcpy(L_11, V_1, SizeOf_TSource_t592CABD5DC9A0BBE89ED4DD34A3F23DF4B8022EE);
				NullCheck(L_10);
				bool L_12;
				L_12 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 5)) ? L_11: *(void**)L_11));
				if (!L_12)
				{
					goto IL_0039_1;
				}
			}
			{
				V_2 = (bool)1;
				goto IL_004f;
			}

IL_0039_1:
			{
				RuntimeObject* L_13 = V_0;
				NullCheck((RuntimeObject*)L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
				if (L_14)
				{
					goto IL_0025_1;
				}
			}
			{
				goto IL_004d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004d:
	{
		return (bool)0;
	}

IL_004f:
	{
		bool L_15 = V_2;
		return L_15;
	}
}
// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* Enumerable_CombinePredicates_TisIl2CppFullySharedGenericAny_m1EC4E42201F760909FD3830CC08540AAF8FEA09A_gshared (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate10, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate21, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		U3CU3Ec__DisplayClass6_0_1_tE55BAA8F710B52E70FD7088CD314B782A20EA879* L_0 = (U3CU3Ec__DisplayClass6_0_1_tE55BAA8F710B52E70FD7088CD314B782A20EA879*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0);
		U3CU3Ec__DisplayClass6_0_1_tE55BAA8F710B52E70FD7088CD314B782A20EA879* L_1 = L_0;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2 = ___predicate10;
		NullCheck(L_1);
		L_1->___predicate1_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___predicate1_0), (void*)L_2);
		U3CU3Ec__DisplayClass6_0_1_tE55BAA8F710B52E70FD7088CD314B782A20EA879* L_3 = L_1;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_4 = ___predicate21;
		NullCheck(L_3);
		L_3->___predicate2_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___predicate2_1), (void*)L_4);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_5 = (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		NullCheck(L_5);
		InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_5, (RuntimeObject*)L_3, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 3)));
		return L_5;
	}
}
// System.Boolean System.Linq.Enumerable::Contains<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisIl2CppFullySharedGenericAny_mF752D27DF0C805341069D4EE1CEA53CA3DD6A53F_gshared (RuntimeObject* ___source0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_t2A13F2ACA63C8AD11C2FF60F2430DE480EA94CB7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// TSource
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TSource_t2A13F2ACA63C8AD11C2FF60F2430DE480EA94CB7);
	const Il2CppFullySharedGenericAny L_6 = L_3;
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___value1 : &___value1), SizeOf_TSource_t2A13F2ACA63C8AD11C2FF60F2430DE480EA94CB7);
		NullCheck(L_2);
		bool L_4;
		L_4 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Contains(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_3: *(void**)L_3));
		return L_4;
	}

IL_0012:
	{
		RuntimeObject* L_5 = ___source0;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___value1 : &___value1), SizeOf_TSource_t2A13F2ACA63C8AD11C2FF60F2430DE480EA94CB7);
		bool L_7;
		L_7 = InvokerFuncInvoker3< bool, RuntimeObject*, Il2CppFullySharedGenericAny, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_6: *(void**)L_6), (RuntimeObject*)NULL);
		return L_7;
	}
}
// System.Boolean System.Linq.Enumerable::Contains<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisIl2CppFullySharedGenericAny_m4CB55BD0B06B8B382432EFDEA83AB8E2362CFD3C_gshared (RuntimeObject* ___source0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, RuntimeObject* ___comparer2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_tC79DC90DAC43350E29C613D3E1120A3D8ED256A8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 8));
	// TSource
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_tC79DC90DAC43350E29C613D3E1120A3D8ED256A8);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_tC79DC90DAC43350E29C613D3E1120A3D8ED256A8);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_tC79DC90DAC43350E29C613D3E1120A3D8ED256A8);
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tC79DC90DAC43350E29C613D3E1120A3D8ED256A8);
	memset(V_1, 0, SizeOf_TSource_tC79DC90DAC43350E29C613D3E1120A3D8ED256A8);
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___comparer2;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_1;
		L_1 = InvokerFuncInvoker0< EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL);
		___comparer2 = (RuntimeObject*)L_1;
	}

IL_000a:
	{
		RuntimeObject* L_2 = ___source0;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		Exception_t* L_3;
		L_3 = Error_ArgumentNull_m9157523765DB73FC9F7B984F2F740F2B5EDB7337(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_Contains_TisIl2CppFullySharedGenericAny_m4CB55BD0B06B8B382432EFDEA83AB8E2362CFD3C_RuntimeMethod_var)));
	}

IL_0018:
	{
		RuntimeObject* L_4 = ___source0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0Invoker< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator() */, il2cpp_rgctx_data(method->rgctx_data, 4), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0040:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_0049;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_0049:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0036_1;
			}

IL_0021_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current() */, il2cpp_rgctx_data(method->rgctx_data, 6), L_8, (Il2CppFullySharedGenericAny*)L_9);
				il2cpp_codegen_memcpy(V_1, L_9, SizeOf_TSource_tC79DC90DAC43350E29C613D3E1120A3D8ED256A8);
				RuntimeObject* L_10 = ___comparer2;
				il2cpp_codegen_memcpy(L_11, V_1, SizeOf_TSource_tC79DC90DAC43350E29C613D3E1120A3D8ED256A8);
				il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 8)) ? ___value1 : &___value1), SizeOf_TSource_tC79DC90DAC43350E29C613D3E1120A3D8ED256A8);
				NullCheck(L_10);
				bool L_13;
				L_13 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Equals(T,T) */, il2cpp_rgctx_data(method->rgctx_data, 0), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 8)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 8)) ? L_12: *(void**)L_12));
				if (!L_13)
				{
					goto IL_0036_1;
				}
			}
			{
				V_2 = (bool)1;
				goto IL_004c;
			}

IL_0036_1:
			{
				RuntimeObject* L_14 = V_0;
				NullCheck((RuntimeObject*)L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
				if (L_15)
				{
					goto IL_0021_1;
				}
			}
			{
				goto IL_004a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004a:
	{
		return (bool)0;
	}

IL_004c:
	{
		bool L_16 = V_2;
		return L_16;
	}
}
// TSource System.Linq.Enumerable::SingleOrDefault<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerable_SingleOrDefault_TisIl2CppFullySharedGenericAny_m02E59284132F2046A0CEA29500C78B0A9579F030_gshared (RuntimeObject* ___source0, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate1, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SingleOrDefault_TisIl2CppFullySharedGenericAny_m02E59284132F2046A0CEA29500C78B0A9579F030_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_t5AAE17D412D2F7FF3A5366C2DCC9DB0E0A0DA6B0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// TSource
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_t5AAE17D412D2F7FF3A5366C2DCC9DB0E0A0DA6B0);
	const Il2CppFullySharedGenericAny L_13 = L_9;
	const Il2CppFullySharedGenericAny L_19 = L_9;
	const Il2CppFullySharedGenericAny L_20 = L_9;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t5AAE17D412D2F7FF3A5366C2DCC9DB0E0A0DA6B0);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TSource_t5AAE17D412D2F7FF3A5366C2DCC9DB0E0A0DA6B0);
	memset(V_0, 0, SizeOf_TSource_t5AAE17D412D2F7FF3A5366C2DCC9DB0E0A0DA6B0);
	int64_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_TSource_t5AAE17D412D2F7FF3A5366C2DCC9DB0E0A0DA6B0);
	memset(V_3, 0, SizeOf_TSource_t5AAE17D412D2F7FF3A5366C2DCC9DB0E0A0DA6B0);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_TSource_t5AAE17D412D2F7FF3A5366C2DCC9DB0E0A0DA6B0);
	memset(V_4, 0, SizeOf_TSource_t5AAE17D412D2F7FF3A5366C2DCC9DB0E0A0DA6B0);
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t* L_1;
		L_1 = Error_ArgumentNull_m9157523765DB73FC9F7B984F2F740F2B5EDB7337(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_SingleOrDefault_TisIl2CppFullySharedGenericAny_m02E59284132F2046A0CEA29500C78B0A9579F030_RuntimeMethod_var)));
	}

IL_000e:
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2 = ___predicate1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t* L_3;
		L_3 = Error_ArgumentNull_m9157523765DB73FC9F7B984F2F740F2B5EDB7337(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_SingleOrDefault_TisIl2CppFullySharedGenericAny_m02E59284132F2046A0CEA29500C78B0A9579F030_RuntimeMethod_var)));
	}

IL_001c:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TSource_t5AAE17D412D2F7FF3A5366C2DCC9DB0E0A0DA6B0);
		V_1 = ((int64_t)0);
		RuntimeObject* L_4 = ___source0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0Invoker< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator() */, il2cpp_rgctx_data(method->rgctx_data, 0), L_4);
		V_2 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0051:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_6 = V_2;
					if (!L_6)
					{
						goto IL_005a;
					}
				}
				{
					RuntimeObject* L_7 = V_2;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_005a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0047_1;
			}

IL_0030_1:
			{
				RuntimeObject* L_8 = V_2;
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current() */, il2cpp_rgctx_data(method->rgctx_data, 4), L_8, (Il2CppFullySharedGenericAny*)L_9);
				il2cpp_codegen_memcpy(V_3, L_9, SizeOf_TSource_t5AAE17D412D2F7FF3A5366C2DCC9DB0E0A0DA6B0);
				Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_10 = ___predicate1;
				il2cpp_codegen_memcpy(L_11, V_3, SizeOf_TSource_t5AAE17D412D2F7FF3A5366C2DCC9DB0E0A0DA6B0);
				NullCheck(L_10);
				bool L_12;
				L_12 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_11: *(void**)L_11));
				if (!L_12)
				{
					goto IL_0047_1;
				}
			}
			{
				il2cpp_codegen_memcpy(L_13, V_3, SizeOf_TSource_t5AAE17D412D2F7FF3A5366C2DCC9DB0E0A0DA6B0);
				il2cpp_codegen_memcpy(V_0, L_13, SizeOf_TSource_t5AAE17D412D2F7FF3A5366C2DCC9DB0E0A0DA6B0);
				int64_t L_14 = V_1;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_14, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Enumerable_SingleOrDefault_TisIl2CppFullySharedGenericAny_m02E59284132F2046A0CEA29500C78B0A9579F030_RuntimeMethod_var);
				V_1 = ((int64_t)il2cpp_codegen_add(L_14, ((int64_t)1)));
			}

IL_0047_1:
			{
				RuntimeObject* L_15 = V_2;
				NullCheck((RuntimeObject*)L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0030_1;
				}
			}
			{
				goto IL_005b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005b:
	{
		int64_t L_17 = V_1;
		if (!L_17)
		{
			goto IL_0065;
		}
	}
	{
		int64_t L_18 = V_1;
		if ((((int64_t)L_18) == ((int64_t)((int64_t)1))))
		{
			goto IL_0070;
		}
	}
	{
		goto IL_0072;
	}

IL_0065:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_TSource_t5AAE17D412D2F7FF3A5366C2DCC9DB0E0A0DA6B0);
		il2cpp_codegen_memcpy(L_19, V_4, SizeOf_TSource_t5AAE17D412D2F7FF3A5366C2DCC9DB0E0A0DA6B0);
		il2cpp_codegen_memcpy(il2cppRetVal, L_19, SizeOf_TSource_t5AAE17D412D2F7FF3A5366C2DCC9DB0E0A0DA6B0);
		return;
	}

IL_0070:
	{
		il2cpp_codegen_memcpy(L_20, V_0, SizeOf_TSource_t5AAE17D412D2F7FF3A5366C2DCC9DB0E0A0DA6B0);
		il2cpp_codegen_memcpy(il2cppRetVal, L_20, SizeOf_TSource_t5AAE17D412D2F7FF3A5366C2DCC9DB0E0A0DA6B0);
		return;
	}

IL_0072:
	{
		Exception_t* L_21;
		L_21 = Error_MoreThanOneMatch_mADF388C1E5EACA4BA8E0CDAAA0834C595544BFAF(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_SingleOrDefault_TisIl2CppFullySharedGenericAny_m02E59284132F2046A0CEA29500C78B0A9579F030_RuntimeMethod_var)));
	}
}
// System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* Enumerable_ToDictionary_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mB1A78D93F6F6BEFBDF85A2597D33D38EF2C088C1_gshared (RuntimeObject* ___source0, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___keySelector1, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___elementSelector2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___source0;
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_1 = ___keySelector1;
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___elementSelector2;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_3;
		L_3 = InvokerFuncInvoker4< Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, RuntimeObject*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_0, L_1, L_2, (RuntimeObject*)NULL);
		return L_3;
	}
}
// System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* Enumerable_ToDictionary_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mFC4963FADE05082EA901CD1C8FDE2685C1B24FE2_gshared (RuntimeObject* ___source0, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___keySelector1, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___elementSelector2, RuntimeObject* ___comparer3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_t8CD364F5F26EB6C4C305455E0868238B5782188A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 9));
	// TSource
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TSource_t8CD364F5F26EB6C4C305455E0868238B5782188A);
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_TSource_t8CD364F5F26EB6C4C305455E0868238B5782188A);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_TSource_t8CD364F5F26EB6C4C305455E0868238B5782188A);
	// TKey
	// sizeof(TKey)
	const uint32_t SizeOf_TKey_tFF9A03C526F347E261D073D45AF3BBDB16C995AC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_TKey_tFF9A03C526F347E261D073D45AF3BBDB16C995AC);
	// TElement
	// sizeof(TElement)
	const uint32_t SizeOf_TElement_t7ED82472022AA62152C24E6833F9B444EE210781 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TElement_t7ED82472022AA62152C24E6833F9B444EE210781);
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TSource_t8CD364F5F26EB6C4C305455E0868238B5782188A);
	memset(V_2, 0, SizeOf_TSource_t8CD364F5F26EB6C4C305455E0868238B5782188A);
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t* L_1;
		L_1 = Error_ArgumentNull_m9157523765DB73FC9F7B984F2F740F2B5EDB7337(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_ToDictionary_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mFC4963FADE05082EA901CD1C8FDE2685C1B24FE2_RuntimeMethod_var)));
	}

IL_000e:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___keySelector1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t* L_3;
		L_3 = Error_ArgumentNull_m9157523765DB73FC9F7B984F2F740F2B5EDB7337(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral12D34C4D5361DBE1804B6F49EDED3C800B442095)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_ToDictionary_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mFC4963FADE05082EA901CD1C8FDE2685C1B24FE2_RuntimeMethod_var)));
	}

IL_001c:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_4 = ___elementSelector2;
		if (L_4)
		{
			goto IL_002a;
		}
	}
	{
		Exception_t* L_5;
		L_5 = Error_ArgumentNull_m9157523765DB73FC9F7B984F2F740F2B5EDB7337(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0FDD716E74C52D972A9997C1B342B1A650D1D139)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_ToDictionary_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mFC4963FADE05082EA901CD1C8FDE2685C1B24FE2_RuntimeMethod_var)));
	}

IL_002a:
	{
		RuntimeObject* L_6 = ___comparer3;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_7 = (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 4));
		NullCheck(L_7);
		InvokerActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_7, L_6);
		V_0 = L_7;
		RuntimeObject* L_8 = ___source0;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0Invoker< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator() */, il2cpp_rgctx_data(method->rgctx_data, 0), L_8);
		V_1 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005f:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_10 = V_1;
					if (!L_10)
					{
						goto IL_0068;
					}
				}
				{
					RuntimeObject* L_11 = V_1;
					NullCheck((RuntimeObject*)L_11);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
				}

IL_0068:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0055_1;
			}

IL_003a_1:
			{
				RuntimeObject* L_12 = V_1;
				NullCheck(L_12);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current() */, il2cpp_rgctx_data(method->rgctx_data, 7), L_12, (Il2CppFullySharedGenericAny*)L_13);
				il2cpp_codegen_memcpy(V_2, L_13, SizeOf_TSource_t8CD364F5F26EB6C4C305455E0868238B5782188A);
				Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_14 = V_0;
				Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_15 = ___keySelector1;
				il2cpp_codegen_memcpy(L_16, V_2, SizeOf_TSource_t8CD364F5F26EB6C4C305455E0868238B5782188A);
				NullCheck(L_15);
				InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 10)), il2cpp_rgctx_method(method->rgctx_data, 10), L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 9)) ? L_16: *(void**)L_16), (Il2CppFullySharedGenericAny*)L_17);
				Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_18 = ___elementSelector2;
				il2cpp_codegen_memcpy(L_19, V_2, SizeOf_TSource_t8CD364F5F26EB6C4C305455E0868238B5782188A);
				NullCheck(L_18);
				InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)), il2cpp_rgctx_method(method->rgctx_data, 12), L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 9)) ? L_19: *(void**)L_19), (Il2CppFullySharedGenericAny*)L_20);
				NullCheck(L_14);
				InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 14)), il2cpp_rgctx_method(method->rgctx_data, 14), L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 11)) ? L_17: *(void**)L_17), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 13)) ? L_20: *(void**)L_20));
			}

IL_0055_1:
			{
				RuntimeObject* L_21 = V_1;
				NullCheck((RuntimeObject*)L_21);
				bool L_22;
				L_22 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_21);
				if (L_22)
				{
					goto IL_003a_1;
				}
			}
			{
				goto IL_0069;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0069:
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_23 = V_0;
		return L_23;
	}
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* Enumerable_ToList_TisIl2CppFullySharedGenericAny_mAD7ADD5EE3D6E0A30271EDC31500BCE6301A256D_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t* L_1;
		L_1 = Error_ArgumentNull_m9157523765DB73FC9F7B984F2F740F2B5EDB7337(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_ToList_TisIl2CppFullySharedGenericAny_mAD7ADD5EE3D6E0A30271EDC31500BCE6301A256D_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		NullCheck(L_3);
		InvokerActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_3, L_2);
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisIl2CppFullySharedGenericAny_m6A43D6AC77D4100C26E5A69DDE1FFAF0E52A75F4_gshared (RuntimeObject* ___source0, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t* L_1;
		L_1 = Error_ArgumentNull_m9157523765DB73FC9F7B984F2F740F2B5EDB7337(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_Where_TisIl2CppFullySharedGenericAny_m6A43D6AC77D4100C26E5A69DDE1FFAF0E52A75F4_RuntimeMethod_var)));
	}

IL_000e:
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2 = ___predicate1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t* L_3;
		L_3 = Error_ArgumentNull_m9157523765DB73FC9F7B984F2F740F2B5EDB7337(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_Where_TisIl2CppFullySharedGenericAny_m6A43D6AC77D4100C26E5A69DDE1FFAF0E52A75F4_RuntimeMethod_var)));
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___source0;
		if (!((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 2))))
		{
			goto IL_0031;
		}
	}
	{
		RuntimeObject* L_5 = ___source0;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = ___predicate1;
		NullCheck(((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)CastclassClass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->rgctx_data, 2))));
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker1Invoker< RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(13 /* System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Where(System.Func`2<TSource,System.Boolean>) */, ((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)CastclassClass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->rgctx_data, 2))), L_6);
		return L_7;
	}

IL_0031:
	{
		RuntimeObject* L_8 = ___source0;
		if (!((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 4))))
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_9 = ___source0;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_10 = ___predicate1;
		WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* L_11 = (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 5));
		NullCheck(L_11);
		InvokerActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), L_11, ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)Castclass((RuntimeObject*)L_9, il2cpp_rgctx_data(method->rgctx_data, 4))), L_10);
		return (RuntimeObject*)L_11;
	}

IL_0046:
	{
		RuntimeObject* L_12 = ___source0;
		if (!((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)IsInstClass((RuntimeObject*)L_12, il2cpp_rgctx_data(method->rgctx_data, 7))))
		{
			goto IL_005b;
		}
	}
	{
		RuntimeObject* L_13 = ___source0;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_14 = ___predicate1;
		WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* L_15 = (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 8));
		NullCheck(L_15);
		InvokerActionInvoker2< List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)), il2cpp_rgctx_method(method->rgctx_data, 9), L_15, ((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)CastclassClass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->rgctx_data, 7))), L_14);
		return (RuntimeObject*)L_15;
	}

IL_005b:
	{
		RuntimeObject* L_16 = ___source0;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_17 = ___predicate1;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_18 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 10));
		NullCheck(L_18);
		InvokerActionInvoker2< RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)), il2cpp_rgctx_method(method->rgctx_data, 11), L_18, L_16, L_17);
		return (RuntimeObject*)L_18;
	}
}
// T System.Runtime.CompilerServices.JitHelpers::UnsafeCast<System.Object>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JitHelpers_UnsafeCast_TisRuntimeObject_m5F16C3EA8BF80F57323D6F2D44F2743F87F9B056_gshared (RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___o0;
		RuntimeObject* L_1;
		L_1 = InvokerFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0);
		return L_1;
	}
}
// System.Int32 System.Runtime.CompilerServices.JitHelpers::UnsafeEnumCast<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JitHelpers_UnsafeEnumCast_TisIl2CppFullySharedGenericStruct_m4CC281094D1A64D7E8E9986BDE0B521FF43E01CA_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___val0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tC65AC9B6A6ED464FC89D2DE6F81BD0CBE93DDAA3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tC65AC9B6A6ED464FC89D2DE6F81BD0CBE93DDAA3);
	{
		il2cpp_codegen_memcpy(L_0, ___val0, SizeOf_T_tC65AC9B6A6ED464FC89D2DE6F81BD0CBE93DDAA3);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0);
		return L_1;
	}
}
// System.Int64 System.Runtime.CompilerServices.JitHelpers::UnsafeEnumCastLong<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JitHelpers_UnsafeEnumCastLong_TisIl2CppFullySharedGenericStruct_m7DED0B3CF012B1FB20FDDE549C7F3C36897FAC75_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___val0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t9821F8067479961F6F7393010F729FD2D9E4514D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t9821F8067479961F6F7393010F729FD2D9E4514D);
	{
		il2cpp_codegen_memcpy(L_0, ___val0, SizeOf_T_t9821F8067479961F6F7393010F729FD2D9E4514D);
		int64_t L_1;
		L_1 = InvokerFuncInvoker1< int64_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0);
		return L_1;
	}
}
// T System.Threading.LazyInitializer::EnsureInitialized<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LazyInitializer_EnsureInitialized_TisRuntimeObject_m25BE271FF975F2AF91B9CCCDB9454933708A2090_gshared (RuntimeObject** ___target0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject** L_0 = ___target0;
		RuntimeObject* L_1;
		L_1 = VolatileRead(L_0);
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0015;
		}
	}
	{
		RuntimeObject** L_3 = ___target0;
		RuntimeObject* L_4;
		L_4 = InvokerFuncInvoker1< RuntimeObject*, RuntimeObject** >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_3);
		G_B2_0 = L_4;
	}

IL_0015:
	{
		return G_B2_0;
	}
}
// T System.Threading.LazyInitializer::EnsureInitialized<System.Object>(T&,System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LazyInitializer_EnsureInitialized_TisRuntimeObject_m0E12CBD20A01B68BE6591F27A0CFFF9D09BA3FE0_gshared (RuntimeObject** ___target0, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___valueFactory1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject** L_0 = ___target0;
		RuntimeObject* L_1;
		L_1 = VolatileRead(L_0);
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0016;
		}
	}
	{
		RuntimeObject** L_3 = ___target0;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_4 = ___valueFactory1;
		RuntimeObject* L_5;
		L_5 = InvokerFuncInvoker2< RuntimeObject*, RuntimeObject**, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_3, L_4);
		G_B2_0 = L_5;
	}

IL_0016:
	{
		return G_B2_0;
	}
}
// T System.Threading.LazyInitializer::EnsureInitializedCore<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m65D0E9F280589B949454E7209A0D8F86C0543685_gshared (RuntimeObject** ___target0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		RuntimeObject** L_0 = ___target0;
		RuntimeObject* L_1;
		L_1 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_2 = V_0;
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_0, L_1, L_2);
		goto IL_0023;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{// begin catch(System.MissingMethodException)
		MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211* L_4 = (MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		MissingMemberException__ctor_m6292C676754200C455A390D36BFEBD8F8775628C(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7736367EB5597A368928D1011CEA2283AF9B94D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m65D0E9F280589B949454E7209A0D8F86C0543685_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0023:
	{
		RuntimeObject** L_5 = ___target0;
		RuntimeObject* L_6 = (*(RuntimeObject**)L_5);
		return L_6;
	}
}
// T System.Threading.LazyInitializer::EnsureInitializedCore<System.Object>(T&,System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m679BC27AA6229AC0511525395F94E7A89B6977F6_gshared (RuntimeObject** ___target0, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___valueFactory1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_0 = ___valueFactory1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0);
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE958A63C0675D65C92182FC45CE3E78A8DD48061)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m679BC27AA6229AC0511525395F94E7A89B6977F6_RuntimeMethod_var)));
	}

IL_001a:
	{
		RuntimeObject** L_4 = ___target0;
		RuntimeObject* L_5 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7;
		L_7 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_4, L_5, L_6);
		RuntimeObject** L_8 = ___target0;
		RuntimeObject* L_9 = (*(RuntimeObject**)L_8);
		return L_9;
	}
}
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_GetFunctionPointerForDelegate_TisIl2CppFullySharedGenericAny_mF790D90180648964D7AAB20C0C408558C02595F8_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___d0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(TDelegate)
	const uint32_t SizeOf_TDelegate_tF1791086B2613ED5380FB6ACABC93D18C3D60E5C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// TDelegate
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TDelegate_tF1791086B2613ED5380FB6ACABC93D18C3D60E5C);
	const Il2CppFullySharedGenericAny L_3 = L_0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___d0 : &___d0), SizeOf_TDelegate_tF1791086B2613ED5380FB6ACABC93D18C3D60E5C);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_GetFunctionPointerForDelegate_TisIl2CppFullySharedGenericAny_mF790D90180648964D7AAB20C0C408558C02595F8_RuntimeMethod_var)));
	}

IL_0013:
	{
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___d0 : &___d0), SizeOf_TDelegate_tF1791086B2613ED5380FB6ACABC93D18C3D60E5C);
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), L_3);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_5;
		L_5 = Marshal_GetFunctionPointerForDelegateInternal_m052129C4ECA08E9409313F02486CE3DF23491DDE(((Delegate_t*)CastclassClass((RuntimeObject*)L_4, Delegate_t_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}
}
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToPtr_TisIl2CppFullySharedGenericAny_m57B0C8F97F94A2FF87B725688AB56269E22C4002_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t0597C0FD4EC0F489E4D3B873A21ADA0955B49576 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t0597C0FD4EC0F489E4D3B873A21ADA0955B49576);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___structure0 : &___structure0), SizeOf_T_t0597C0FD4EC0F489E4D3B873A21ADA0955B49576);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), L_0);
		intptr_t L_2 = ___ptr1;
		bool L_3 = ___fDeleteOld2;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_StructureToPtr_mE014A5139B79EC0CCF27EBA41031702B7BC63F69(L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void System.Math::ThrowMinMaxException<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Math_ThrowMinMaxException_TisIl2CppFullySharedGenericAny_m9A96CFD97AB1E37EBC18DA9343092F08770E38E1_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___min0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___max1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t3D91A505E61C5689DA3407E88BA4605CD42CDEBA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t3D91A505E61C5689DA3407E88BA4605CD42CDEBA);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t3D91A505E61C5689DA3407E88BA4605CD42CDEBA);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___min0 : &___min0), SizeOf_T_t3D91A505E61C5689DA3407E88BA4605CD42CDEBA);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), L_0);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___max1 : &___max1), SizeOf_T_t3D91A505E61C5689DA3407E88BA4605CD42CDEBA);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), L_2);
		String_t* L_4;
		L_4 = SR_Format_mCBC2E13309DB2E03F48F50E5189DD215B5BA7186(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral110D1733D85BF5EFB139B95FF286BB627337195E)), L_1, L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Math_ThrowMinMaxException_TisIl2CppFullySharedGenericAny_m9A96CFD97AB1E37EBC18DA9343092F08770E38E1_RuntimeMethod_var)));
	}
}
// System.Span`1<T> System.MemoryExtensions::AsSpan<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 MemoryExtensions_AsSpan_TisIl2CppFullySharedGenericAny_m6C3161B5DE8AD64D03E4D0B69F3E5AE92973570A_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		int32_t L_1 = ___start1;
		int32_t L_2 = ___length2;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
// System.Int32 System.MemoryExtensions::IndexOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.ReadOnlySpan`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryExtensions_IndexOf_TisIl2CppFullySharedGenericAny_m0057587978849E370EA7DB7AA03139414D1D0884_gshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___span0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t08E78D0999AE71A68EDAF871364DFB2FF69F14E9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	// T
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_T_t08E78D0999AE71A68EDAF871364DFB2FF69F14E9);
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_5 = ___span0;
		Il2CppFullySharedGenericAny* L_6;
		L_6 = InvokerFuncInvoker1< Il2CppFullySharedGenericAny*, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_5);
		uint8_t* L_7;
		L_7 = InvokerFuncInvoker1< uint8_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_6);
		uint8_t* L_8;
		L_8 = InvokerFuncInvoker1< uint8_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 5)) ? ___value1 : &___value1));
		int32_t L_9 = *((uint8_t*)L_8);
		int32_t L_10;
		L_10 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), (&___span0));
		int32_t L_11;
		L_11 = SpanHelpers_IndexOf_m0A829BB99BDEEEB5A92884FA139590B6E4EA7835(L_7, (uint8_t)L_9, L_10, NULL);
		return L_11;
	}

IL_003b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_12, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_14, NULL);
		bool L_16;
		L_16 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_0076;
		}
	}
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_17 = ___span0;
		Il2CppFullySharedGenericAny* L_18;
		L_18 = InvokerFuncInvoker1< Il2CppFullySharedGenericAny*, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_17);
		Il2CppChar* L_19;
		L_19 = InvokerFuncInvoker1< Il2CppChar*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), NULL, L_18);
		Il2CppChar* L_20;
		L_20 = InvokerFuncInvoker1< Il2CppChar*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), NULL, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 5)) ? ___value1 : &___value1));
		int32_t L_21 = *((uint16_t*)L_20);
		int32_t L_22;
		L_22 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), (&___span0));
		int32_t L_23;
		L_23 = SpanHelpers_IndexOf_mDE4E5FB8BEEEF1D365113B434C8A6A09E9EA3B20(L_19, (Il2CppChar)L_21, L_22, NULL);
		return L_23;
	}

IL_0076:
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_24 = ___span0;
		Il2CppFullySharedGenericAny* L_25;
		L_25 = InvokerFuncInvoker1< Il2CppFullySharedGenericAny*, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_24);
		il2cpp_codegen_memcpy(L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 5)) ? ___value1 : &___value1), SizeOf_T_t08E78D0999AE71A68EDAF871364DFB2FF69F14E9);
		int32_t L_27;
		L_27 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), (&___span0));
		int32_t L_28;
		L_28 = InvokerFuncInvoker3< int32_t, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)), il2cpp_rgctx_method(method->rgctx_data, 8), NULL, L_25, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 5)) ? L_26: *(void**)L_26), L_27);
		return L_28;
	}
}
// System.Boolean System.MemoryExtensions::IsTypeComparableAsBytes<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryExtensions_IsTypeComparableAsBytes_TisIl2CppFullySharedGenericAny_m0D5035651EC09AF7542F17F0E0F45609E5204FD4_gshared (uint64_t* ___size0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_1, L_3, NULL);
		if (L_4)
		{
			goto IL_0036;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003c;
		}
	}

IL_0036:
	{
		uint64_t* L_10 = ___size0;
		*((int64_t*)L_10) = (int64_t)((int64_t)1);
		return (bool)1;
	}

IL_003c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_12, L_14, NULL);
		if (L_15)
		{
			goto IL_008d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_17, L_19, NULL);
		if (L_20)
		{
			goto IL_008d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_22, L_24, NULL);
		if (!L_25)
		{
			goto IL_0093;
		}
	}

IL_008d:
	{
		uint64_t* L_26 = ___size0;
		*((int64_t*)L_26) = (int64_t)((int64_t)2);
		return (bool)1;
	}

IL_0093:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_28;
		L_28 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_27, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_29, NULL);
		bool L_31;
		L_31 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_28, L_30, NULL);
		if (L_31)
		{
			goto IL_00c9;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_32, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_35;
		L_35 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_34, NULL);
		bool L_36;
		L_36 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_33, L_35, NULL);
		if (!L_36)
		{
			goto IL_00cf;
		}
	}

IL_00c9:
	{
		uint64_t* L_37 = ___size0;
		*((int64_t*)L_37) = (int64_t)((int64_t)4);
		return (bool)1;
	}

IL_00cf:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_38, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_40, NULL);
		bool L_42;
		L_42 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_39, L_41, NULL);
		if (L_42)
		{
			goto IL_0105;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_43, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_45, NULL);
		bool L_47;
		L_47 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_44, L_46, NULL);
		if (!L_47)
		{
			goto IL_010b;
		}
	}

IL_0105:
	{
		uint64_t* L_48 = ___size0;
		*((int64_t*)L_48) = (int64_t)((int64_t)8);
		return (bool)1;
	}

IL_010b:
	{
		uint64_t* L_49 = ___size0;
		*((int64_t*)L_49) = (int64_t)((int64_t)0);
		return (bool)0;
	}
}
// System.Boolean System.MemoryExtensions::SequenceEqual<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.ReadOnlySpan`1<T>,System.ReadOnlySpan`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryExtensions_SequenceEqual_TisIl2CppFullySharedGenericAny_mD26B02ADEF5B55445541B03F678DC8642A13C9C9_gshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___span0, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___other1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t33E8C1CDB784AFF44E79687231063596853A9A4B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t33E8C1CDB784AFF44E79687231063596853A9A4B);
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t33E8C1CDB784AFF44E79687231063596853A9A4B);
	memset(V_2, 0, SizeOf_T_t33E8C1CDB784AFF44E79687231063596853A9A4B);
	{
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), (&___span0));
		V_0 = L_0;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T_t33E8C1CDB784AFF44E79687231063596853A9A4B);
		il2cpp_codegen_memcpy(L_1, V_2, SizeOf_T_t33E8C1CDB784AFF44E79687231063596853A9A4B);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 2), L_1);
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		bool L_3;
		L_3 = InvokerFuncInvoker1< bool, uint64_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, (&V_1));
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), (&___other1));
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_004b;
		}
	}
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_6 = ___span0;
		Il2CppFullySharedGenericAny* L_7;
		L_7 = InvokerFuncInvoker1< Il2CppFullySharedGenericAny*, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_6);
		uint8_t* L_8;
		L_8 = InvokerFuncInvoker1< uint8_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), NULL, L_7);
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_9 = ___other1;
		Il2CppFullySharedGenericAny* L_10;
		L_10 = InvokerFuncInvoker1< Il2CppFullySharedGenericAny*, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_9);
		uint8_t* L_11;
		L_11 = InvokerFuncInvoker1< uint8_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), NULL, L_10);
		int32_t L_12 = V_0;
		uint64_t L_13 = V_1;
		bool L_14;
		L_14 = SpanHelpers_SequenceEqual_m1E48A72FE6321C8B208D7CB9368C2CB6416589E9(L_8, L_11, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_12), (int64_t)L_13)), NULL);
		return L_14;
	}

IL_004b:
	{
		return (bool)0;
	}

IL_004d:
	{
		int32_t L_15 = V_0;
		int32_t L_16;
		L_16 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), (&___other1));
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_006a;
		}
	}
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_17 = ___span0;
		Il2CppFullySharedGenericAny* L_18;
		L_18 = InvokerFuncInvoker1< Il2CppFullySharedGenericAny*, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_17);
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_19 = ___other1;
		Il2CppFullySharedGenericAny* L_20;
		L_20 = InvokerFuncInvoker1< Il2CppFullySharedGenericAny*, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_19);
		int32_t L_21 = V_0;
		bool L_22;
		L_22 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), NULL, L_18, L_20, L_21);
		return L_22;
	}

IL_006a:
	{
		return (bool)0;
	}
}
// System.Boolean System.MemoryExtensions::StartsWith<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.ReadOnlySpan`1<T>,System.ReadOnlySpan`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryExtensions_StartsWith_TisIl2CppFullySharedGenericAny_m2913B279872ED170431708459726D909E86DAEC5_gshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___span0, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___value1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t98B08A8CFB7374FB176D63CE2F23601D0741FE10 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t98B08A8CFB7374FB176D63CE2F23601D0741FE10);
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t98B08A8CFB7374FB176D63CE2F23601D0741FE10);
	memset(V_2, 0, SizeOf_T_t98B08A8CFB7374FB176D63CE2F23601D0741FE10);
	{
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), (&___value1));
		V_0 = L_0;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T_t98B08A8CFB7374FB176D63CE2F23601D0741FE10);
		il2cpp_codegen_memcpy(L_1, V_2, SizeOf_T_t98B08A8CFB7374FB176D63CE2F23601D0741FE10);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 2), L_1);
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		bool L_3;
		L_3 = InvokerFuncInvoker1< bool, uint64_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, (&V_1));
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), (&___span0));
		if ((((int32_t)L_4) > ((int32_t)L_5)))
		{
			goto IL_004b;
		}
	}
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_6 = ___span0;
		Il2CppFullySharedGenericAny* L_7;
		L_7 = InvokerFuncInvoker1< Il2CppFullySharedGenericAny*, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_6);
		uint8_t* L_8;
		L_8 = InvokerFuncInvoker1< uint8_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), NULL, L_7);
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_9 = ___value1;
		Il2CppFullySharedGenericAny* L_10;
		L_10 = InvokerFuncInvoker1< Il2CppFullySharedGenericAny*, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_9);
		uint8_t* L_11;
		L_11 = InvokerFuncInvoker1< uint8_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), NULL, L_10);
		int32_t L_12 = V_0;
		uint64_t L_13 = V_1;
		bool L_14;
		L_14 = SpanHelpers_SequenceEqual_m1E48A72FE6321C8B208D7CB9368C2CB6416589E9(L_8, L_11, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_12), (int64_t)L_13)), NULL);
		return L_14;
	}

IL_004b:
	{
		return (bool)0;
	}

IL_004d:
	{
		int32_t L_15 = V_0;
		int32_t L_16;
		L_16 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), (&___span0));
		if ((((int32_t)L_15) > ((int32_t)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_17 = ___span0;
		Il2CppFullySharedGenericAny* L_18;
		L_18 = InvokerFuncInvoker1< Il2CppFullySharedGenericAny*, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_17);
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_19 = ___value1;
		Il2CppFullySharedGenericAny* L_20;
		L_20 = InvokerFuncInvoker1< Il2CppFullySharedGenericAny*, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_19);
		int32_t L_21 = V_0;
		bool L_22;
		L_22 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), NULL, L_18, L_20, L_21);
		return L_22;
	}

IL_006a:
	{
		return (bool)0;
	}
}
// System.ReadOnlySpan`1<System.Byte> System.Runtime.InteropServices.MemoryMarshal::AsBytes<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.ReadOnlySpan`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D MemoryMarshal_AsBytes_TisIl2CppFullySharedGenericStruct_m29EB0D577FBD057543C0B5C910EED089BE9610EC_gshared (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___span0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_AsBytes_TisIl2CppFullySharedGenericStruct_m29EB0D577FBD057543C0B5C910EED089BE9610EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m6A58AD8706EDDB4CE9C309A6085249B6377C8CB5(L_2, NULL);
	}

IL_0016:
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_3 = ___span0;
		Il2CppFullySharedGenericStruct* L_4;
		L_4 = InvokerFuncInvoker1< Il2CppFullySharedGenericStruct*, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_3);
		uint8_t* L_5;
		L_5 = InvokerFuncInvoker1< uint8_t*, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, L_4);
		int32_t L_6;
		L_6 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), (&___span0));
		int32_t L_7;
		L_7 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), NULL);
		if (((int64_t)L_6 * (int64_t)L_7 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_6 * (int64_t)L_7 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), MemoryMarshal_AsBytes_TisIl2CppFullySharedGenericStruct_m29EB0D577FBD057543C0B5C910EED089BE9610EC_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_multiply(L_6, L_7)), /*hidden argument*/ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_RuntimeMethod_var);
		return L_8;
	}
}
// System.Span`1<System.Byte> System.Runtime.InteropServices.MemoryMarshal::AsBytes<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryMarshal_AsBytes_TisIl2CppFullySharedGenericStruct_m36406DDF19CB65616FB43D2C1C74451EE0F4BD48_gshared (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___span0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_AsBytes_TisIl2CppFullySharedGenericStruct_m36406DDF19CB65616FB43D2C1C74451EE0F4BD48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m6A58AD8706EDDB4CE9C309A6085249B6377C8CB5(L_2, NULL);
	}

IL_0016:
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_3 = ___span0;
		Il2CppFullySharedGenericStruct* L_4;
		L_4 = InvokerFuncInvoker1< Il2CppFullySharedGenericStruct*, Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_3);
		uint8_t* L_5;
		L_5 = InvokerFuncInvoker1< uint8_t*, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, L_4);
		int32_t L_6;
		L_6 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), (&___span0));
		int32_t L_7;
		L_7 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), NULL);
		if (((int64_t)L_6 * (int64_t)L_7 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_6 * (int64_t)L_7 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), MemoryMarshal_AsBytes_TisIl2CppFullySharedGenericStruct_m36406DDF19CB65616FB43D2C1C74451EE0F4BD48_RuntimeMethod_var);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_multiply(L_6, L_7)), /*hidden argument*/Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_RuntimeMethod_var);
		return L_8;
	}
}
// System.ReadOnlySpan`1<T> System.Runtime.InteropServices.MemoryMarshal::CreateReadOnlySpan<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC MemoryMarshal_CreateReadOnlySpan_TisIl2CppFullySharedGenericAny_m42F8A125B4CAED2DFE5B25062A4D3AEFC9DF6B2D_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___reference0, int32_t ___length1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___reference0;
		int32_t L_1 = ___length1;
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_2;
		memset((&L_2), 0, sizeof(L_2));
		ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_inline((&L_2), L_0, L_1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_2;
	}
}
// T& System.Runtime.InteropServices.MemoryMarshal::GetNonNullPinnableReference<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.ReadOnlySpan`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* MemoryMarshal_GetNonNullPinnableReference_TisIl2CppFullySharedGenericAny_mAB91EC4EBC42903E0A4AD95B4F3DD8A3AA568033_gshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___span0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), (&___span0));
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_1;
		L_1 = InvokerFuncInvoker1< Il2CppFullySharedGenericAny*, void* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, (void*)((intptr_t)1));
		return L_1;
	}

IL_0011:
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_2 = ___span0;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_3 = (ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141)L_2.____pointer_0;
		V_0 = L_3;
		Il2CppFullySharedGenericAny* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		return L_4;
	}
}
// T& System.Runtime.InteropServices.MemoryMarshal::GetNonNullPinnableReference<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* MemoryMarshal_GetNonNullPinnableReference_TisIl2CppFullySharedGenericAny_m74CFA93CA976E5F59ECFF29ED45E8A5D167F605F_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___span0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), (&___span0));
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_1;
		L_1 = InvokerFuncInvoker1< Il2CppFullySharedGenericAny*, void* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, (void*)((intptr_t)1));
		return L_1;
	}

IL_0011:
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_2 = ___span0;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_3 = (ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141)L_2.____pointer_0;
		V_0 = L_3;
		Il2CppFullySharedGenericAny* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		return L_4;
	}
}
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.ReadOnlySpan`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_mD757F70124FB1F4F0EC537531682AB65C1C21BD4_gshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___span0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_0 = ___span0;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1 = (ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141)L_0.____pointer_0;
		V_0 = L_1;
		Il2CppFullySharedGenericAny* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		return L_2;
	}
}
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_m8AB961AAE813103614C8D9B00F33E0AA78F38DCD_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___span0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_0 = ___span0;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1 = (ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141)L_0.____pointer_0;
		V_0 = L_1;
		Il2CppFullySharedGenericAny* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		return L_2;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_mC831E467D4BD0119FF05A031131A750A97712427_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		void* L_0 = ___dataPointer0;
		(&V_1)->___m_Buffer_0 = L_0;
		int32_t L_1 = ___length1;
		(&V_1)->___m_Length_1 = L_1;
		int32_t L_2 = ___allocator2;
		(&V_1)->___m_AllocatorLabel_2 = L_2;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_5 = V_2;
		return L_5;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisIl2CppFullySharedGenericAny_m07DDBBBFECDBD187397571B84CE56ACFC36593F1_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mF2DFD49F0F9970F97178FBC419BDFB6509346D2C(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Object System.Reflection.RuntimePropertyInfo::GetterAdapterFrame<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Reflection.RuntimePropertyInfo/Getter`2<T,R>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RuntimePropertyInfo_GetterAdapterFrame_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m75EF23C304B30F3DDBEB941C68CA242C9F2A7C70_gshared (Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8* ___getter0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// T
	// sizeof(T)
	const uint32_t SizeOf_T_t9D010360E74C95EC1182ACA9FD322A41C95D25F4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t9D010360E74C95EC1182ACA9FD322A41C95D25F4);
	// R
	// sizeof(R)
	const uint32_t SizeOf_R_t58401F4284B7F00BBB05BF5C6988BA9AA774D700 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_R_t58401F4284B7F00BBB05BF5C6988BA9AA774D700);
	{
		Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8* L_0 = ___getter0;
		RuntimeObject* L_1 = ___obj1;
		void* L_3 = UnBox_Any(L_1, il2cpp_rgctx_data(method->rgctx_data, 1), L_2);
		NullCheck(L_0);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_3))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_3)))), (Il2CppFullySharedGenericAny*)L_4);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data(method->rgctx_data, 3), L_4);
		return L_5;
	}
}
// System.Object System.Reflection.RuntimePropertyInfo::StaticGetterAdapterFrame<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Reflection.RuntimePropertyInfo/StaticGetter`1<R>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RuntimePropertyInfo_StaticGetterAdapterFrame_TisIl2CppFullySharedGenericAny_m95FA8149F07404C4DBB372E77EDA09E6F3E4ED40_gshared (StaticGetter_1_t5C0B26D3ABAE6F5762F45AD85D572BDF5BDB1302* ___getter0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// R
	// sizeof(R)
	const uint32_t SizeOf_R_t6C54281F8B2608EDA385CBD8F137F48D185E5C2C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_R_t6C54281F8B2608EDA385CBD8F137F48D185E5C2C);
	{
		StaticGetter_1_t5C0B26D3ABAE6F5762F45AD85D572BDF5BDB1302* L_0 = ___getter0;
		NullCheck(L_0);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0, (Il2CppFullySharedGenericAny*)L_1);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), L_1);
		return L_2;
	}
}
// T UnityEngine.ScriptableObject::CreateInstance<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptableObject_CreateInstance_TisRuntimeObject_mBE664E52864F727B39B81313FA00C5FCFF9BAE62_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_m986453A5542E9241E445F5F525212CF0C0BCCCBC(L_1, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0018;
	}

IL_0018:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// System.Int32 System.SpanHelpers::IndexOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisIl2CppFullySharedGenericAny_mA1EC12FB39B15FD4BC1D0064A8F55CF12A898B8E_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___searchSpace0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, int32_t ___length2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t356CE9200BC70FFD6BA86854F514CCA30607BFBC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_6 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_13 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_20 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_27 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_34 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_41 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_48 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_55 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_66 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_73 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_80 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_87 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_95 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	// T
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t356CE9200BC70FFD6BA86854F514CCA30607BFBC);
	const Il2CppFullySharedGenericAny L_12 = L_5;
	const Il2CppFullySharedGenericAny L_19 = L_5;
	const Il2CppFullySharedGenericAny L_26 = L_5;
	const Il2CppFullySharedGenericAny L_33 = L_5;
	const Il2CppFullySharedGenericAny L_40 = L_5;
	const Il2CppFullySharedGenericAny L_47 = L_5;
	const Il2CppFullySharedGenericAny L_54 = L_5;
	const Il2CppFullySharedGenericAny L_65 = L_5;
	const Il2CppFullySharedGenericAny L_72 = L_5;
	const Il2CppFullySharedGenericAny L_79 = L_5;
	const Il2CppFullySharedGenericAny L_86 = L_5;
	const Il2CppFullySharedGenericAny L_94 = L_5;
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = IntPtr_op_Explicit_mB06D1B6CFBA72B5C55FBEC1BA3BC25958AB60EB1(0, NULL);
		V_0 = L_0;
		goto IL_0133;
	}

IL_000c:
	{
		int32_t L_1 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_1, 8));
		Il2CppFullySharedGenericAny* L_2 = ___searchSpace0;
		intptr_t L_3 = V_0;
		Il2CppFullySharedGenericAny* L_4;
		L_4 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_2, L_3);
		il2cpp_codegen_memcpy(L_5, L_4, SizeOf_T_t356CE9200BC70FFD6BA86854F514CCA30607BFBC);
		bool L_7;
		L_7 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_6, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value1 : &___value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_5: *(void**)L_5));
		if (L_7)
		{
			goto IL_0202;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_8 = ___searchSpace0;
		intptr_t L_9 = V_0;
		intptr_t L_10;
		L_10 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_9, 1, NULL);
		Il2CppFullySharedGenericAny* L_11;
		L_11 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_8, L_10);
		il2cpp_codegen_memcpy(L_12, L_11, SizeOf_T_t356CE9200BC70FFD6BA86854F514CCA30607BFBC);
		bool L_14;
		L_14 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_13, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value1 : &___value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_12: *(void**)L_12));
		if (L_14)
		{
			goto IL_020a;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_15 = ___searchSpace0;
		intptr_t L_16 = V_0;
		intptr_t L_17;
		L_17 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_16, 2, NULL);
		Il2CppFullySharedGenericAny* L_18;
		L_18 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_15, L_17);
		il2cpp_codegen_memcpy(L_19, L_18, SizeOf_T_t356CE9200BC70FFD6BA86854F514CCA30607BFBC);
		bool L_21;
		L_21 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_20, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value1 : &___value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_19: *(void**)L_19));
		if (L_21)
		{
			goto IL_0218;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_22 = ___searchSpace0;
		intptr_t L_23 = V_0;
		intptr_t L_24;
		L_24 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_23, 3, NULL);
		Il2CppFullySharedGenericAny* L_25;
		L_25 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_22, L_24);
		il2cpp_codegen_memcpy(L_26, L_25, SizeOf_T_t356CE9200BC70FFD6BA86854F514CCA30607BFBC);
		bool L_28;
		L_28 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_27, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value1 : &___value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_26: *(void**)L_26));
		if (L_28)
		{
			goto IL_0226;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_29 = ___searchSpace0;
		intptr_t L_30 = V_0;
		intptr_t L_31;
		L_31 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_30, 4, NULL);
		Il2CppFullySharedGenericAny* L_32;
		L_32 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_29, L_31);
		il2cpp_codegen_memcpy(L_33, L_32, SizeOf_T_t356CE9200BC70FFD6BA86854F514CCA30607BFBC);
		bool L_35;
		L_35 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_34, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value1 : &___value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_33: *(void**)L_33));
		if (L_35)
		{
			goto IL_0234;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_36 = ___searchSpace0;
		intptr_t L_37 = V_0;
		intptr_t L_38;
		L_38 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_37, 5, NULL);
		Il2CppFullySharedGenericAny* L_39;
		L_39 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_36, L_38);
		il2cpp_codegen_memcpy(L_40, L_39, SizeOf_T_t356CE9200BC70FFD6BA86854F514CCA30607BFBC);
		bool L_42;
		L_42 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_41, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value1 : &___value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_40: *(void**)L_40));
		if (L_42)
		{
			goto IL_0242;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_43 = ___searchSpace0;
		intptr_t L_44 = V_0;
		intptr_t L_45;
		L_45 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_44, 6, NULL);
		Il2CppFullySharedGenericAny* L_46;
		L_46 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_43, L_45);
		il2cpp_codegen_memcpy(L_47, L_46, SizeOf_T_t356CE9200BC70FFD6BA86854F514CCA30607BFBC);
		bool L_49;
		L_49 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_48, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value1 : &___value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_47: *(void**)L_47));
		if (L_49)
		{
			goto IL_0250;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_50 = ___searchSpace0;
		intptr_t L_51 = V_0;
		intptr_t L_52;
		L_52 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_51, 7, NULL);
		Il2CppFullySharedGenericAny* L_53;
		L_53 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_50, L_52);
		il2cpp_codegen_memcpy(L_54, L_53, SizeOf_T_t356CE9200BC70FFD6BA86854F514CCA30607BFBC);
		bool L_56;
		L_56 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_55, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value1 : &___value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_54: *(void**)L_54));
		if (L_56)
		{
			goto IL_025e;
		}
	}
	{
		intptr_t L_57 = V_0;
		intptr_t L_58;
		L_58 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_57, 8, NULL);
		V_0 = L_58;
	}

IL_0133:
	{
		int32_t L_59 = ___length2;
		if ((((int32_t)L_59) >= ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_60 = ___length2;
		if ((((int32_t)L_60) < ((int32_t)4)))
		{
			goto IL_01fc;
		}
	}
	{
		int32_t L_61 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_61, 4));
		Il2CppFullySharedGenericAny* L_62 = ___searchSpace0;
		intptr_t L_63 = V_0;
		Il2CppFullySharedGenericAny* L_64;
		L_64 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_62, L_63);
		il2cpp_codegen_memcpy(L_65, L_64, SizeOf_T_t356CE9200BC70FFD6BA86854F514CCA30607BFBC);
		bool L_67;
		L_67 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_66, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value1 : &___value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_65: *(void**)L_65));
		if (L_67)
		{
			goto IL_0202;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_68 = ___searchSpace0;
		intptr_t L_69 = V_0;
		intptr_t L_70;
		L_70 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_69, 1, NULL);
		Il2CppFullySharedGenericAny* L_71;
		L_71 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_68, L_70);
		il2cpp_codegen_memcpy(L_72, L_71, SizeOf_T_t356CE9200BC70FFD6BA86854F514CCA30607BFBC);
		bool L_74;
		L_74 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_73, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value1 : &___value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_72: *(void**)L_72));
		if (L_74)
		{
			goto IL_020a;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_75 = ___searchSpace0;
		intptr_t L_76 = V_0;
		intptr_t L_77;
		L_77 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_76, 2, NULL);
		Il2CppFullySharedGenericAny* L_78;
		L_78 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_75, L_77);
		il2cpp_codegen_memcpy(L_79, L_78, SizeOf_T_t356CE9200BC70FFD6BA86854F514CCA30607BFBC);
		bool L_81;
		L_81 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_80, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value1 : &___value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_79: *(void**)L_79));
		if (L_81)
		{
			goto IL_0218;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_82 = ___searchSpace0;
		intptr_t L_83 = V_0;
		intptr_t L_84;
		L_84 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_83, 3, NULL);
		Il2CppFullySharedGenericAny* L_85;
		L_85 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_82, L_84);
		il2cpp_codegen_memcpy(L_86, L_85, SizeOf_T_t356CE9200BC70FFD6BA86854F514CCA30607BFBC);
		bool L_88;
		L_88 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_87, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value1 : &___value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_86: *(void**)L_86));
		if (L_88)
		{
			goto IL_0226;
		}
	}
	{
		intptr_t L_89 = V_0;
		intptr_t L_90;
		L_90 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_89, 4, NULL);
		V_0 = L_90;
		goto IL_01fc;
	}

IL_01d4:
	{
		Il2CppFullySharedGenericAny* L_91 = ___searchSpace0;
		intptr_t L_92 = V_0;
		Il2CppFullySharedGenericAny* L_93;
		L_93 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_91, L_92);
		il2cpp_codegen_memcpy(L_94, L_93, SizeOf_T_t356CE9200BC70FFD6BA86854F514CCA30607BFBC);
		bool L_96;
		L_96 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_95, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value1 : &___value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_94: *(void**)L_94));
		if (L_96)
		{
			goto IL_0202;
		}
	}
	{
		intptr_t L_97 = V_0;
		intptr_t L_98;
		L_98 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_97, 1, NULL);
		V_0 = L_98;
		int32_t L_99 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
	}

IL_01fc:
	{
		int32_t L_100 = ___length2;
		if ((((int32_t)L_100) > ((int32_t)0)))
		{
			goto IL_01d4;
		}
	}
	{
		return (-1);
	}

IL_0202:
	{
		intptr_t L_101 = V_0;
		void* L_102;
		L_102 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_101, NULL);
		return ((int32_t)(intptr_t)L_102);
	}

IL_020a:
	{
		intptr_t L_103 = V_0;
		intptr_t L_104;
		L_104 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_103, 1, NULL);
		void* L_105;
		L_105 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_104, NULL);
		return ((int32_t)(intptr_t)L_105);
	}

IL_0218:
	{
		intptr_t L_106 = V_0;
		intptr_t L_107;
		L_107 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_106, 2, NULL);
		void* L_108;
		L_108 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_107, NULL);
		return ((int32_t)(intptr_t)L_108);
	}

IL_0226:
	{
		intptr_t L_109 = V_0;
		intptr_t L_110;
		L_110 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_109, 3, NULL);
		void* L_111;
		L_111 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_110, NULL);
		return ((int32_t)(intptr_t)L_111);
	}

IL_0234:
	{
		intptr_t L_112 = V_0;
		intptr_t L_113;
		L_113 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_112, 4, NULL);
		void* L_114;
		L_114 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_113, NULL);
		return ((int32_t)(intptr_t)L_114);
	}

IL_0242:
	{
		intptr_t L_115 = V_0;
		intptr_t L_116;
		L_116 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_115, 5, NULL);
		void* L_117;
		L_117 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_116, NULL);
		return ((int32_t)(intptr_t)L_117);
	}

IL_0250:
	{
		intptr_t L_118 = V_0;
		intptr_t L_119;
		L_119 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_118, 6, NULL);
		void* L_120;
		L_120 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_119, NULL);
		return ((int32_t)(intptr_t)L_120);
	}

IL_025e:
	{
		intptr_t L_121 = V_0;
		intptr_t L_122;
		L_122 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_121, 7, NULL);
		void* L_123;
		L_123 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_122, NULL);
		return ((int32_t)(intptr_t)L_123);
	}
}
// System.Boolean System.SpanHelpers::SequenceEqual<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_SequenceEqual_TisIl2CppFullySharedGenericAny_mA9A3B1A57C2357F0B7BDB6DC001010066D0A2BCC_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___first0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___second1, int32_t ___length2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t31781420BB091038BE3C175661CA379B2DB69B4C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_23 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_34 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_45 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_56 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_67 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_78 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_89 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_103 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_114 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_125 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_136 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_147 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	// T
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t31781420BB091038BE3C175661CA379B2DB69B4C);
	const Il2CppFullySharedGenericAny L_22 = L_11;
	const Il2CppFullySharedGenericAny L_33 = L_11;
	const Il2CppFullySharedGenericAny L_44 = L_11;
	const Il2CppFullySharedGenericAny L_55 = L_11;
	const Il2CppFullySharedGenericAny L_66 = L_11;
	const Il2CppFullySharedGenericAny L_77 = L_11;
	const Il2CppFullySharedGenericAny L_88 = L_11;
	const Il2CppFullySharedGenericAny L_102 = L_11;
	const Il2CppFullySharedGenericAny L_113 = L_11;
	const Il2CppFullySharedGenericAny L_124 = L_11;
	const Il2CppFullySharedGenericAny L_135 = L_11;
	const Il2CppFullySharedGenericAny L_146 = L_11;
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppFullySharedGenericAny* L_0 = ___first0;
		Il2CppFullySharedGenericAny* L_1 = ___second1;
		bool L_2;
		L_2 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1);
		if (L_2)
		{
			goto IL_0289;
		}
	}
	{
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mB06D1B6CFBA72B5C55FBEC1BA3BC25958AB60EB1(0, NULL);
		V_0 = L_3;
		goto IL_0191;
	}

IL_0018:
	{
		int32_t L_4 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_4, 8));
		Il2CppFullySharedGenericAny* L_5 = ___first0;
		intptr_t L_6 = V_0;
		Il2CppFullySharedGenericAny* L_7;
		L_7 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_5, L_6);
		Il2CppFullySharedGenericAny* L_8 = ___second1;
		intptr_t L_9 = V_0;
		Il2CppFullySharedGenericAny* L_10;
		L_10 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_8, L_9);
		il2cpp_codegen_memcpy(L_11, L_10, SizeOf_T_t31781420BB091038BE3C175661CA379B2DB69B4C);
		bool L_13;
		L_13 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_12, (void*)L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_11: *(void**)L_11));
		if (!L_13)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_14 = ___first0;
		intptr_t L_15 = V_0;
		intptr_t L_16;
		L_16 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_15, 1, NULL);
		Il2CppFullySharedGenericAny* L_17;
		L_17 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_14, L_16);
		Il2CppFullySharedGenericAny* L_18 = ___second1;
		intptr_t L_19 = V_0;
		intptr_t L_20;
		L_20 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_19, 1, NULL);
		Il2CppFullySharedGenericAny* L_21;
		L_21 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_18, L_20);
		il2cpp_codegen_memcpy(L_22, L_21, SizeOf_T_t31781420BB091038BE3C175661CA379B2DB69B4C);
		bool L_24;
		L_24 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_23, (void*)L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_22: *(void**)L_22));
		if (!L_24)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_25 = ___first0;
		intptr_t L_26 = V_0;
		intptr_t L_27;
		L_27 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_26, 2, NULL);
		Il2CppFullySharedGenericAny* L_28;
		L_28 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_25, L_27);
		Il2CppFullySharedGenericAny* L_29 = ___second1;
		intptr_t L_30 = V_0;
		intptr_t L_31;
		L_31 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_30, 2, NULL);
		Il2CppFullySharedGenericAny* L_32;
		L_32 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_29, L_31);
		il2cpp_codegen_memcpy(L_33, L_32, SizeOf_T_t31781420BB091038BE3C175661CA379B2DB69B4C);
		bool L_35;
		L_35 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_34, (void*)L_28, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_33: *(void**)L_33));
		if (!L_35)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_36 = ___first0;
		intptr_t L_37 = V_0;
		intptr_t L_38;
		L_38 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_37, 3, NULL);
		Il2CppFullySharedGenericAny* L_39;
		L_39 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_36, L_38);
		Il2CppFullySharedGenericAny* L_40 = ___second1;
		intptr_t L_41 = V_0;
		intptr_t L_42;
		L_42 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_41, 3, NULL);
		Il2CppFullySharedGenericAny* L_43;
		L_43 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_40, L_42);
		il2cpp_codegen_memcpy(L_44, L_43, SizeOf_T_t31781420BB091038BE3C175661CA379B2DB69B4C);
		bool L_46;
		L_46 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_45, (void*)L_39, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_44: *(void**)L_44));
		if (!L_46)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_47 = ___first0;
		intptr_t L_48 = V_0;
		intptr_t L_49;
		L_49 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_48, 4, NULL);
		Il2CppFullySharedGenericAny* L_50;
		L_50 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_47, L_49);
		Il2CppFullySharedGenericAny* L_51 = ___second1;
		intptr_t L_52 = V_0;
		intptr_t L_53;
		L_53 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_52, 4, NULL);
		Il2CppFullySharedGenericAny* L_54;
		L_54 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_51, L_53);
		il2cpp_codegen_memcpy(L_55, L_54, SizeOf_T_t31781420BB091038BE3C175661CA379B2DB69B4C);
		bool L_57;
		L_57 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_56, (void*)L_50, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_55: *(void**)L_55));
		if (!L_57)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_58 = ___first0;
		intptr_t L_59 = V_0;
		intptr_t L_60;
		L_60 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_59, 5, NULL);
		Il2CppFullySharedGenericAny* L_61;
		L_61 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_58, L_60);
		Il2CppFullySharedGenericAny* L_62 = ___second1;
		intptr_t L_63 = V_0;
		intptr_t L_64;
		L_64 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_63, 5, NULL);
		Il2CppFullySharedGenericAny* L_65;
		L_65 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_62, L_64);
		il2cpp_codegen_memcpy(L_66, L_65, SizeOf_T_t31781420BB091038BE3C175661CA379B2DB69B4C);
		bool L_68;
		L_68 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_67, (void*)L_61, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_66: *(void**)L_66));
		if (!L_68)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_69 = ___first0;
		intptr_t L_70 = V_0;
		intptr_t L_71;
		L_71 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_70, 6, NULL);
		Il2CppFullySharedGenericAny* L_72;
		L_72 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_69, L_71);
		Il2CppFullySharedGenericAny* L_73 = ___second1;
		intptr_t L_74 = V_0;
		intptr_t L_75;
		L_75 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_74, 6, NULL);
		Il2CppFullySharedGenericAny* L_76;
		L_76 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_73, L_75);
		il2cpp_codegen_memcpy(L_77, L_76, SizeOf_T_t31781420BB091038BE3C175661CA379B2DB69B4C);
		bool L_79;
		L_79 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_78, (void*)L_72, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_77: *(void**)L_77));
		if (!L_79)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_80 = ___first0;
		intptr_t L_81 = V_0;
		intptr_t L_82;
		L_82 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_81, 7, NULL);
		Il2CppFullySharedGenericAny* L_83;
		L_83 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_80, L_82);
		Il2CppFullySharedGenericAny* L_84 = ___second1;
		intptr_t L_85 = V_0;
		intptr_t L_86;
		L_86 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_85, 7, NULL);
		Il2CppFullySharedGenericAny* L_87;
		L_87 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_84, L_86);
		il2cpp_codegen_memcpy(L_88, L_87, SizeOf_T_t31781420BB091038BE3C175661CA379B2DB69B4C);
		bool L_90;
		L_90 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_89, (void*)L_83, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_88: *(void**)L_88));
		if (!L_90)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_91 = V_0;
		intptr_t L_92;
		L_92 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_91, 8, NULL);
		V_0 = L_92;
	}

IL_0191:
	{
		int32_t L_93 = ___length2;
		if ((((int32_t)L_93) >= ((int32_t)8)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_94 = ___length2;
		if ((((int32_t)L_94) < ((int32_t)4)))
		{
			goto IL_0285;
		}
	}
	{
		int32_t L_95 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_95, 4));
		Il2CppFullySharedGenericAny* L_96 = ___first0;
		intptr_t L_97 = V_0;
		Il2CppFullySharedGenericAny* L_98;
		L_98 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_96, L_97);
		Il2CppFullySharedGenericAny* L_99 = ___second1;
		intptr_t L_100 = V_0;
		Il2CppFullySharedGenericAny* L_101;
		L_101 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_99, L_100);
		il2cpp_codegen_memcpy(L_102, L_101, SizeOf_T_t31781420BB091038BE3C175661CA379B2DB69B4C);
		bool L_104;
		L_104 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_103, (void*)L_98, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_102: *(void**)L_102));
		if (!L_104)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_105 = ___first0;
		intptr_t L_106 = V_0;
		intptr_t L_107;
		L_107 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_106, 1, NULL);
		Il2CppFullySharedGenericAny* L_108;
		L_108 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_105, L_107);
		Il2CppFullySharedGenericAny* L_109 = ___second1;
		intptr_t L_110 = V_0;
		intptr_t L_111;
		L_111 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_110, 1, NULL);
		Il2CppFullySharedGenericAny* L_112;
		L_112 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_109, L_111);
		il2cpp_codegen_memcpy(L_113, L_112, SizeOf_T_t31781420BB091038BE3C175661CA379B2DB69B4C);
		bool L_115;
		L_115 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_114, (void*)L_108, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_113: *(void**)L_113));
		if (!L_115)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_116 = ___first0;
		intptr_t L_117 = V_0;
		intptr_t L_118;
		L_118 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_117, 2, NULL);
		Il2CppFullySharedGenericAny* L_119;
		L_119 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_116, L_118);
		Il2CppFullySharedGenericAny* L_120 = ___second1;
		intptr_t L_121 = V_0;
		intptr_t L_122;
		L_122 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_121, 2, NULL);
		Il2CppFullySharedGenericAny* L_123;
		L_123 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_120, L_122);
		il2cpp_codegen_memcpy(L_124, L_123, SizeOf_T_t31781420BB091038BE3C175661CA379B2DB69B4C);
		bool L_126;
		L_126 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_125, (void*)L_119, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_124: *(void**)L_124));
		if (!L_126)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_127 = ___first0;
		intptr_t L_128 = V_0;
		intptr_t L_129;
		L_129 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_128, 3, NULL);
		Il2CppFullySharedGenericAny* L_130;
		L_130 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_127, L_129);
		Il2CppFullySharedGenericAny* L_131 = ___second1;
		intptr_t L_132 = V_0;
		intptr_t L_133;
		L_133 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_132, 3, NULL);
		Il2CppFullySharedGenericAny* L_134;
		L_134 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_131, L_133);
		il2cpp_codegen_memcpy(L_135, L_134, SizeOf_T_t31781420BB091038BE3C175661CA379B2DB69B4C);
		bool L_137;
		L_137 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_136, (void*)L_130, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_135: *(void**)L_135));
		if (!L_137)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_138 = V_0;
		intptr_t L_139;
		L_139 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_138, 4, NULL);
		V_0 = L_139;
		goto IL_0285;
	}

IL_0258:
	{
		Il2CppFullySharedGenericAny* L_140 = ___first0;
		intptr_t L_141 = V_0;
		Il2CppFullySharedGenericAny* L_142;
		L_142 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_140, L_141);
		Il2CppFullySharedGenericAny* L_143 = ___second1;
		intptr_t L_144 = V_0;
		Il2CppFullySharedGenericAny* L_145;
		L_145 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_143, L_144);
		il2cpp_codegen_memcpy(L_146, L_145, SizeOf_T_t31781420BB091038BE3C175661CA379B2DB69B4C);
		bool L_148;
		L_148 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_147, (void*)L_142, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_146: *(void**)L_146));
		if (!L_148)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_149 = V_0;
		intptr_t L_150;
		L_150 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_149, 1, NULL);
		V_0 = L_150;
		int32_t L_151 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_151, 1));
	}

IL_0285:
	{
		int32_t L_152 = ___length2;
		if ((((int32_t)L_152) > ((int32_t)0)))
		{
			goto IL_0258;
		}
	}

IL_0289:
	{
		return (bool)1;
	}

IL_028b:
	{
		return (bool)0;
	}
}
// System.String System.String::Create<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Int32,TState,System.Buffers.SpanAction`2<System.Char,TState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Create_TisIl2CppFullySharedGenericAny_mC571D61AA789807D59CAE43CB15AE8779FB56E65_gshared (int32_t ___length0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___state1, SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A* ___action2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(TState)
	const uint32_t SizeOf_TState_t3685CA87E19DEC51A75EEB567FB0A26966100966 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// TState
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TState_t3685CA87E19DEC51A75EEB567FB0A26966100966);
	String_t* V_0 = NULL;
	{
		SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A* L_0 = ___action2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_Create_TisIl2CppFullySharedGenericAny_mC571D61AA789807D59CAE43CB15AE8779FB56E65_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___length0;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___length0;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_4;
	}

IL_001b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_Create_TisIl2CppFullySharedGenericAny_mC571D61AA789807D59CAE43CB15AE8779FB56E65_RuntimeMethod_var)));
	}

IL_0026:
	{
		int32_t L_6 = ___length0;
		String_t* L_7;
		L_7 = String_FastAllocateString_mF8E983B7ABC42CA6EB80C5052243D21E81CC2112(L_6, NULL);
		V_0 = L_7;
		SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A* L_8 = ___action2;
		String_t* L_9 = V_0;
		NullCheck(L_9);
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		int32_t L_11 = ___length0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_12), L_10, L_11, /*hidden argument*/Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___state1 : &___state1), SizeOf_TState_t3685CA87E19DEC51A75EEB567FB0A26966100966);
		NullCheck(L_8);
		InvokerActionInvoker2< Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_8, L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_13: *(void**)L_13));
		String_t* L_14 = V_0;
		return L_14;
	}
}
// System.Text.StringBuilder System.Text.StringBuilder::AppendSpanFormattable<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendSpanFormattable_TisIl2CppFullySharedGenericAny_mF50A5C2F631F6F4450B612A08A50CA5E6DC58AEC_gshared (StringBuilder_t* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		String_t* L_2;
		L_2 = ConstrainedFuncInvoker2< String_t*, String_t*, RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 1), L_1, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value0 : &___value0), (String_t*)NULL, (RuntimeObject*)L_0);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(__this, L_2, NULL);
		return L_3;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromCancellation_TisIl2CppFullySharedGenericAny_mB636433E6C3D31528DE7523373943D4417E75057_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_tB032C1A2095381900012737B6DE1239064D7772F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// TResult
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TResult_tB032C1A2095381900012737B6DE1239064D7772F);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TResult_tB032C1A2095381900012737B6DE1239064D7772F);
	memset(V_0, 0, SizeOf_TResult_tB032C1A2095381900012737B6DE1239064D7772F);
	{
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___cancellationToken0), NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromCancellation_TisIl2CppFullySharedGenericAny_mB636433E6C3D31528DE7523373943D4417E75057_RuntimeMethod_var)));
	}

IL_0014:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TResult_tB032C1A2095381900012737B6DE1239064D7772F);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_TResult_tB032C1A2095381900012737B6DE1239064D7772F);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___cancellationToken0;
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_4 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		NullCheck(L_4);
		InvokerActionInvoker4< bool, Il2CppFullySharedGenericAny, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_4, (bool)1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_2: *(void**)L_2), (int32_t)0, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromResult_TisIl2CppFullySharedGenericAny_m02E7B253339286E5DB22748B17A41CBC6D4419CA_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___result0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_t3F3CCAFD1ED489600F2070D9249A91218CC6A408 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// TResult
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_t3F3CCAFD1ED489600F2070D9249A91218CC6A408);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___result0 : &___result0), SizeOf_TResult_t3F3CCAFD1ED489600F2070D9249A91218CC6A408);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_1 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		NullCheck(L_1);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_0: *(void**)L_0));
		return L_1;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppFullySharedGenericAny_mD007C33FD9DD0D9D2616B3BDBC2C5BF2BD05C2AD_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tE62573C48DF6DECFAEF5210EE929BABB2F87B1CB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tE62573C48DF6DECFAEF5210EE929BABB2F87B1CB);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tE62573C48DF6DECFAEF5210EE929BABB2F87B1CB);
	memset(V_0, 0, SizeOf_T_tE62573C48DF6DECFAEF5210EE929BABB2F87B1CB);
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_tE62573C48DF6DECFAEF5210EE929BABB2F87B1CB);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_T_tE62573C48DF6DECFAEF5210EE929BABB2F87B1CB);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_1);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_3 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF(L_3, NULL);
	}

IL_0019:
	{
		return;
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_Add_TisIl2CppFullySharedGenericAny_mA776878E17D6C89A34DECD67476A3B74E00A17ED_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t723815F6601616697B9CA45CDFF5C394DBB2BA05 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	{
		Il2CppFullySharedGenericAny* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = SizeOf_T_t723815F6601616697B9CA45CDFF5C394DBB2BA05;
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_Add_TisIl2CppFullySharedGenericAny_mC8BEDC55BA2BEBD97E748563F7CDBD2207C7296B_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___source0, intptr_t ___elementOffset1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t2C6587B909967C277BA98C9DEF12620959E001D2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	{
		Il2CppFullySharedGenericAny* L_0 = ___source0;
		intptr_t L_1 = ___elementOffset1;
		uint32_t L_2 = SizeOf_T_t2C6587B909967C277BA98C9DEF12620959E001D2;
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, (int32_t)L_2))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m60CB897178565BAB459AC5DF6093CE94B25DF111_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___source0, intptr_t ___byteOffset1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___source0;
		intptr_t L_1 = ___byteOffset1;
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m118A42403810B99A0549EB4E5F30C950F0935D21_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___source0, uint64_t ___byteOffset1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___source0;
		uint64_t L_1 = ___byteOffset1;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE((void*)((uintptr_t)L_1), NULL);
		Il2CppFullySharedGenericAny* L_3;
		L_3 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_2);
		return L_3;
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::AreSame<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_AreSame_TisIl2CppFullySharedGenericAny_m5F4B6D09776601BD6F2EA18BAB08BE7F640A787F_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___left0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___right1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___left0;
		Il2CppFullySharedGenericAny* L_1 = ___right1;
		return (bool)((((RuntimeObject*)(intptr_t)L_0) == ((RuntimeObject*)(intptr_t)L_1))? 1 : 0);
	}
}
// T System.Runtime.CompilerServices.Unsafe::As<System.Object>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Unsafe_As_TisRuntimeObject_m4BCC0ED093BFD47D807324EA964B9020D6203B95_gshared (RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___o0;
		return L_0;
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m80FADCB5E6CC8A1865E6F26DFEF2CD94BF91507A_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___source0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___source0;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
// System.Void* System.Runtime.CompilerServices.Unsafe::AsPointer<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisIl2CppFullySharedGenericAny_m4299CF773ABA68063CC2349190DCB9E3D147C0E7_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___value0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___value0;
		return (void*)(((uintptr_t)L_0));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AsRef<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AsRef_TisIl2CppFullySharedGenericAny_m000278E7BF50F6456AC869C06F0FC2978FC07FDA_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___source0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___source0;
		return L_0;
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AsRef<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AsRef_TisIl2CppFullySharedGenericAny_m0E69757966ABC5AC1A634FD84C2F18B88CA213DD_gshared (void* ___source0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		void* L_0 = ___source0;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisIl2CppFullySharedGenericAny_m84E64FD0D0A7C2EEAF6B6DF2A7403798BA7E02F7_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___left0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___right1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___left0;
		Il2CppFullySharedGenericAny* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// T System.Runtime.CompilerServices.Unsafe::Read<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_Read_TisIl2CppFullySharedGenericAny_m76354D2C381FED7189A898CF0ABD92139C2226BC_gshared (void* ___source0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tD6C0FC5B61C47D4353904986944F37C7308B481C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tD6C0FC5B61C47D4353904986944F37C7308B481C);
	{
		void* L_0 = ___source0;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_tD6C0FC5B61C47D4353904986944F37C7308B481C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tD6C0FC5B61C47D4353904986944F37C7308B481C);
		return;
	}
}
// T System.Runtime.CompilerServices.Unsafe::ReadUnaligned<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_ReadUnaligned_TisIl2CppFullySharedGenericAny_m68922ABEBA47C801C71CFBACE3648458CC81451C_gshared (uint8_t* ___source0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tC9C0164859DE6E4D58636925B6758D92908F5540 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tC9C0164859DE6E4D58636925B6758D92908F5540);
	{
		uint8_t* L_0 = ___source0;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_tC9C0164859DE6E4D58636925B6758D92908F5540);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tC9C0164859DE6E4D58636925B6758D92908F5540);
		return;
	}
}
// System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisIl2CppFullySharedGenericAny_mC21AC4A303359BF2D60749808AC47500C825375D_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tC9200F9C6857EA695B0074F82A5778283BA78FD6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	{
		uint32_t L_0 = SizeOf_T_tC9200F9C6857EA695B0074F82A5778283BA78FD6;
		return (int32_t)L_0;
	}
}
// System.Void System.Runtime.CompilerServices.Unsafe::WriteUnaligned<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Byte&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_WriteUnaligned_TisIl2CppFullySharedGenericAny_m4B60EEEC18B4C0775A6760F90EB0CBDD4A5039EB_gshared (uint8_t* ___destination0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t8AC12E90A10A15C08DFA6228B30CD1E8817DA55A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t8AC12E90A10A15C08DFA6228B30CD1E8817DA55A);
	{
		uint8_t* L_0 = ___destination0;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value1 : &___value1), SizeOf_T_t8AC12E90A10A15C08DFA6228B30CD1E8817DA55A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_0, L_1, SizeOf_T_t8AC12E90A10A15C08DFA6228B30CD1E8817DA55A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)L_0, (void*)L_1);
		return;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m9C5EDFD70A3D351D292C6BF29C0EECBDEDCF6CF5_gshared (void* ___source0, int32_t ___index1, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t36A57F9CE6EB234DE97351DCA9ED54BE9E078207 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t36A57F9CE6EB234DE97351DCA9ED54BE9E078207);
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = SizeOf_T_t36A57F9CE6EB234DE97351DCA9ED54BE9E078207;
		il2cpp_codegen_memcpy(L_3, ((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), SizeOf_T_t36A57F9CE6EB234DE97351DCA9ED54BE9E078207);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_T_t36A57F9CE6EB234DE97351DCA9ED54BE9E078207);
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m84385A977356DBBC280DFCE8A8FD40607D30238F_gshared (void* ___destination0, int32_t ___index1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tF9333180B7DF78112D3B62D2E60EB4F10CC9E094 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tF9333180B7DF78112D3B62D2E60EB4F10CC9E094);
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = SizeOf_T_tF9333180B7DF78112D3B62D2E60EB4F10CC9E094;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value2 : &___value2), SizeOf_T_tF9333180B7DF78112D3B62D2E60EB4F10CC9E094);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), L_3, SizeOf_T_tF9333180B7DF78112D3B62D2E60EB4F10CC9E094);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), (void*)L_3);
		return;
	}
}
// System.Numerics.Vector`1<System.UInt64> System.Numerics.Vector::AsVectorUInt64<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Numerics.Vector`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_AsVectorUInt64_TisIl2CppFullySharedGenericStruct_m79FB4427170C30BCE81E09A4E768EB13D254F711_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___value0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_1;
		L_1 = InvokerFuncInvoker1< Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0);
		return L_1;
	}
}
// System.Numerics.Vector`1<T> System.Numerics.Vector::Equals<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Numerics.Vector`1<T>,System.Numerics.Vector`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 Vector_Equals_TisIl2CppFullySharedGenericStruct_m6F089ED88955D9D91866E5EA2B76F3C006809BCF_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___left0, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___right1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_0 = ___left0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_1 = ___right1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_2;
		L_2 = InvokerFuncInvoker2< Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1);
		return L_2;
	}
}
// T System.Threading.Volatile::Read<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Volatile_Read_TisRuntimeObject_m1BB143C73CA3A7A5B880A663FEE10E149F0F274F_gshared (RuntimeObject** ___location0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject** L_0 = ___location0;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = (RuntimeObject*)L_1->___Value_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_3;
		L_3 = il2cpp_unsafe_as<RuntimeObject*>(L_2);
		return L_3;
	}
}
// System.Void System.Threading.Volatile::Write<System.Object>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisRuntimeObject_mB9B6B04771AC33604CEAD0611ADB13B54869254B_gshared (RuntimeObject** ___location0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject** L_0 = ___location0;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = ___value1;
		il2cpp_codegen_memory_barrier();
		L_1->___Value_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Value_0), (void*)L_2);
		return;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppFullySharedGenericAny_mCA7EA6586E1C7C8B358B9FD1F058915BA583D905_gshared (intptr_t ___array0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(ArrayType)
	const uint32_t SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// ArrayType
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
	const Il2CppFullySharedGenericAny L_20 = L_12;
	const Il2CppFullySharedGenericAny L_28 = L_12;
	const Il2CppFullySharedGenericAny L_36 = L_12;
	const Il2CppFullySharedGenericAny L_44 = L_12;
	const Il2CppFullySharedGenericAny L_52 = L_12;
	const Il2CppFullySharedGenericAny L_60 = L_12;
	const Il2CppFullySharedGenericAny L_68 = L_12;
	const Il2CppFullySharedGenericAny L_76 = L_12;
	const Il2CppFullySharedGenericAny L_99 = L_12;
	const Il2CppFullySharedGenericAny L_122 = L_12;
	const Il2CppFullySharedGenericAny L_129 = L_12;
	const Il2CppFullySharedGenericAny L_130 = L_12;
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
	memset(V_3, 0, SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	Il2CppFullySharedGenericAny V_24 = alloca(SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
	memset(V_24, 0, SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_m48ED73958206D552B937EEC7560184C6C4228F3D(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_m899EDC375E4983DCF33B5B72E2131DC06AA4B5F0(L_10, NULL);
		void* L_13 = UnBox_Any((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1), L_12);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_13))), SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_15, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_14) == ((RuntimeObject*)(Type_t*)L_16))? 1 : 0);
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_18 = ___array0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_19;
		L_19 = AndroidJNISafe_FromBooleanArray_m3F57F10FDDBA3DC358BEF7296F58D819C9EC3BDE(L_18, NULL);
		void* L_21 = UnBox_Any((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 1), L_20);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_21))), SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_22 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_23, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_22) == ((RuntimeObject*)(Type_t*)L_24))? 1 : 0);
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_26 = ___array0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27;
		L_27 = AndroidJNISafe_FromByteArray_mAED5B8EEF34E268BB146A277842089C7FD8A06BB(L_26, NULL);
		void* L_29 = UnBox_Any((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 1), L_28);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_29))), SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_31, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_6;
		if (!L_33)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_34 = ___array0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_35;
		L_35 = AndroidJNISafe_FromSByteArray_m5825C71BA6941CDF25627AD77CDBE648CB322476(L_34, NULL);
		void* L_37 = UnBox_Any((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1), L_36);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_37))), SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_38 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_39, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_38) == ((RuntimeObject*)(Type_t*)L_40))? 1 : 0);
		bool L_41 = V_7;
		if (!L_41)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_42 = ___array0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_43;
		L_43 = AndroidJNISafe_FromShortArray_m227116D8E01EE3568936FB93C97CAEE9062A0A35(L_42, NULL);
		void* L_45 = UnBox_Any((RuntimeObject*)L_43, il2cpp_rgctx_data(method->rgctx_data, 1), L_44);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_45))), SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_46 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_48;
		L_48 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_47, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_46) == ((RuntimeObject*)(Type_t*)L_48))? 1 : 0);
		bool L_49 = V_8;
		if (!L_49)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_50 = ___array0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_51;
		L_51 = AndroidJNISafe_FromLongArray_m687FC548BFA4DC440379619E5C7CB56354E30D59(L_50, NULL);
		void* L_53 = UnBox_Any((RuntimeObject*)L_51, il2cpp_rgctx_data(method->rgctx_data, 1), L_52);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_53))), SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_55, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_9;
		if (!L_57)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_58 = ___array0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_59;
		L_59 = AndroidJNISafe_FromFloatArray_m97B7BC8546EC3F9CF0784D434D4AA41FBB409892(L_58, NULL);
		void* L_61 = UnBox_Any((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1), L_60);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_61))), SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_62 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_63 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_64;
		L_64 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_63, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_62) == ((RuntimeObject*)(Type_t*)L_64))? 1 : 0);
		bool L_65 = V_10;
		if (!L_65)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_66 = ___array0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_67;
		L_67 = AndroidJNISafe_FromDoubleArray_mB752FB522CD25191E5C6AF8CEFA4553593F784A7(L_66, NULL);
		void* L_69 = UnBox_Any((RuntimeObject*)L_67, il2cpp_rgctx_data(method->rgctx_data, 1), L_68);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_69))), SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_70 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_72;
		L_72 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_71, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_70) == ((RuntimeObject*)(Type_t*)L_72))? 1 : 0);
		bool L_73 = V_11;
		if (!L_73)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_74 = ___array0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_75;
		L_75 = AndroidJNISafe_FromCharArray_mC1C728B67330FD610542B4C2D6B9759F78B2BD17(L_74, NULL);
		void* L_77 = UnBox_Any((RuntimeObject*)L_75, il2cpp_rgctx_data(method->rgctx_data, 1), L_76);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_77))), SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_78 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_80;
		L_80 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_79, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_78) == ((RuntimeObject*)(Type_t*)L_80))? 1 : 0);
		bool L_81 = V_12;
		if (!L_81)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_82 = ___array0;
		int32_t L_83;
		L_83 = AndroidJNISafe_GetArrayLength_mB5F7260E652BE95FE9237A47C1E1597306B462C3(L_82, NULL);
		V_13 = L_83;
		int32_t L_84 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_85 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_84);
		V_14 = L_85;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_86 = ___array0;
		int32_t L_87 = V_15;
		intptr_t L_88;
		L_88 = AndroidJNI_GetObjectArrayElement_mDD7F2DC202FA14B8E5889755FB02B401C1127AD0(L_86, L_87, NULL);
		V_16 = L_88;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_89 = V_14;
		int32_t L_90 = V_15;
		intptr_t L_91 = V_16;
		String_t* L_92;
		L_92 = AndroidJNISafe_GetStringChars_m21A07825755C0A9AF91F8248A1C98F861E26928F(L_91, NULL);
		NullCheck(L_89);
		ArrayElementTypeCheck (L_89, L_92);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(L_90), (String_t*)L_92);
		intptr_t L_93 = V_16;
		AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_93, NULL);
		int32_t L_94 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_01c3:
	{
		int32_t L_95 = V_15;
		int32_t L_96 = V_13;
		V_17 = (bool)((((int32_t)L_95) < ((int32_t)L_96))? 1 : 0);
		bool L_97 = V_17;
		if (L_97)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_98 = V_14;
		void* L_100 = UnBox_Any((RuntimeObject*)L_98, il2cpp_rgctx_data(method->rgctx_data, 1), L_99);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_100))), SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_101 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_102 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_103;
		L_103 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_102, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_101) == ((RuntimeObject*)(Type_t*)L_103))? 1 : 0);
		bool L_104 = V_18;
		if (!L_104)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_105 = ___array0;
		int32_t L_106;
		L_106 = AndroidJNISafe_GetArrayLength_mB5F7260E652BE95FE9237A47C1E1597306B462C3(L_105, NULL);
		V_19 = L_106;
		int32_t L_107 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_108 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_107);
		V_20 = L_108;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_109 = ___array0;
		int32_t L_110 = V_21;
		intptr_t L_111;
		L_111 = AndroidJNI_GetObjectArrayElement_mDD7F2DC202FA14B8E5889755FB02B401C1127AD0(L_109, L_110, NULL);
		V_22 = L_111;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_112 = V_20;
		int32_t L_113 = V_21;
		intptr_t L_114 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_115 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_115);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_115, L_114, NULL);
		NullCheck(L_112);
		ArrayElementTypeCheck (L_112, L_115);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(L_113), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_115);
		intptr_t L_116 = V_22;
		AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_116, NULL);
		int32_t L_117 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_117, 1));
	}

IL_022c:
	{
		int32_t L_118 = V_21;
		int32_t L_119 = V_19;
		V_23 = (bool)((((int32_t)L_118) < ((int32_t)L_119))? 1 : 0);
		bool L_120 = V_23;
		if (L_120)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_121 = V_20;
		void* L_123 = UnBox_Any((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 1), L_122);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_123))), SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_124 = V_0;
		Type_t* L_125 = L_124;
		G_B31_0 = L_125;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_125)
		{
			G_B32_0 = L_125;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_126;
		L_126 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_126;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_127;
		L_127 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_128 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_128);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_128, L_127, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_128, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppFullySharedGenericAny_mCA7EA6586E1C7C8B358B9FD1F058915BA583D905_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_24, SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
		il2cpp_codegen_memcpy(L_129, V_24, SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
		il2cpp_codegen_memcpy(V_3, L_129, SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
		goto IL_0272;
	}

IL_0272:
	{
		il2cpp_codegen_memcpy(L_130, V_3, SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
		il2cpp_codegen_memcpy(il2cppRetVal, L_130, SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
		return;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.IntPtr,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisIl2CppFullySharedGenericAny_m62713F90A297B2D7E15FFCFC03A6D3E9B1437CE1_gshared (intptr_t ___jclass0, String_t* ___fieldName1, bool ___isStatic2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___fieldName1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_3, NULL);
		bool L_5 = ___isStatic2;
		intptr_t L_6;
		L_6 = AndroidJNIHelper_GetFieldID_mC795891C3B70C0E8F98D9E8AD2A85103761A0C75(L_0, L_1, L_4, L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		intptr_t L_7 = V_0;
		return L_7;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisIl2CppFullySharedGenericAny_m610860C26BAF5ACB7F62BA3621F9C22C47453951_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = InvokerFuncInvoker1< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_2);
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m5F33E127418D5DA40590E4AE3814D7ACF7810F6E(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisIl2CppFullySharedGenericAny_mDBF81B16A0FEEB1BA244976285B52E8770108EDF_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (&L_0->___Data_2);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	// sizeof(T)
	const uint32_t SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	memset(V_0, 0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___start1;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___length2;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_3);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___array0;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_mDF51E7FDFA74ADCDDB1E43CFC4A3A3083692B010(NULL);
	}

IL_0042:
	{
		int32_t L_10 = ___start1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = ___array0;
		NullCheck(L_11);
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_12 = ___length2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = ___array0;
		NullCheck(L_13);
		int32_t L_14 = ___start1;
		if ((!(((uint32_t)L_12) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353(NULL);
	}

IL_0055:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = ___array0;
		NullCheck((RuntimeArray*)L_15);
		uint8_t* L_16;
		L_16 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_15, NULL);
		Il2CppFullySharedGenericAny* L_17;
		L_17 = InvokerFuncInvoker1< Il2CppFullySharedGenericAny*, uint8_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4), NULL, L_16);
		int32_t L_18 = ___start1;
		Il2CppFullySharedGenericAny* L_19;
		L_19 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), NULL, L_17, L_18);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_20;
		memset((&L_20), 0, sizeof(L_20));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_20), L_19);
		__this->____pointer_0 = L_20;
		int32_t L_21 = ___length2;
		__this->____length_1 = L_21;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___ptr0;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___ptr0;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
