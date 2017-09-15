#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// FloodFill
struct FloodFill_t1475753363;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// Grid
struct Grid_t4161269204;
// UnityEngine.Object
struct Object_t1021602117;
// UnityEngine.Transform
struct Transform_t3275118058;
// Player
struct Player_t1147783557;
// UnityEngine.Component
struct Component_t3819376471;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Collider
struct Collider_t3497673348;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Coroutine
struct Coroutine_t2299508840;
// Player/<Restarter>c__Iterator0
struct U3CRestarterU3Ec__Iterator0_t2295529765;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3839502067;
// System.NotSupportedException
struct NotSupportedException_t1793819818;
// System.IntPtr[]
struct IntPtrU5BU5D_t169632028;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Void
struct Void_t1841601450;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t834278767;
// UnityEngine.GameObject[0...,0...]
struct GameObjectU5BU2CU5D_t3057952155;

extern const RuntimeMethod* GameObject_GetComponent_TisGrid_t4161269204_m3584658723_RuntimeMethod_var;
extern Il2CppCodeGenString* _stringLiteral312696090;
extern const uint32_t FloodFill_Start_m949136216_MetadataUsageId;
extern RuntimeClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3336560306;
extern const uint32_t FloodFill_DestroyAdjacentTiles_m1109588397_MetadataUsageId;
extern RuntimeClass* GameObjectU5BU2CU5D_t3057952155_il2cpp_TypeInfo_var;
extern const uint32_t Grid__ctor_m3395573899_MetadataUsageId;
extern RuntimeClass* Quaternion_t4030073918_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1756533147_m3064851704_RuntimeMethod_var;
extern const uint32_t Grid_SpawnerGrid_m1997944283_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t Grid_CheckBombs_m2879230354_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisCamera_t189460977_m633060157_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisFloodFill_t1475753363_m1869390_RuntimeMethod_var;
extern const uint32_t Player_Start_m3139373552_MetadataUsageId;
extern RuntimeClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3987566585;
extern Il2CppCodeGenString* _stringLiteral1814662286;
extern Il2CppCodeGenString* _stringLiteral3021628430;
extern const uint32_t Player_Update_m717746161_MetadataUsageId;
extern RuntimeClass* U3CRestarterU3Ec__Iterator0_t2295529765_il2cpp_TypeInfo_var;
extern const uint32_t Player_Restarter_m3941424592_MetadataUsageId;
extern RuntimeClass* WaitForSeconds_t3839502067_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3538073363;
extern const uint32_t U3CRestarterU3Ec__Iterator0_MoveNext_m1235866082_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1793819818_il2cpp_TypeInfo_var;
extern const uint32_t U3CRestarterU3Ec__Iterator0_Reset_m4277817377_MetadataUsageId;

struct GameObjectU5BU2CU5D_t3057952155;


#ifndef U3CMODULEU3E_T3783534219_H
#define U3CMODULEU3E_T3783534219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3783534219 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T3783534219_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef EXCEPTION_T1927440687_H
#define EXCEPTION_T1927440687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t1927440687  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t169632028* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t1927440687 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t169632028* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t169632028** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t169632028* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___inner_exception_1)); }
	inline Exception_t1927440687 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t1927440687 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t1927440687 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T1927440687_H
#ifndef YIELDINSTRUCTION_T3462875981_H
#define YIELDINSTRUCTION_T3462875981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t3462875981  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t3462875981_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t3462875981_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T3462875981_H
#ifndef VALUETYPE_T3507792607_H
#define VALUETYPE_T3507792607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3507792607  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_com
{
};
#endif // VALUETYPE_T3507792607_H
#ifndef U3CRESTARTERU3EC__ITERATOR0_T2295529765_H
#define U3CRESTARTERU3EC__ITERATOR0_T2295529765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player/<Restarter>c__Iterator0
struct  U3CRestarterU3Ec__Iterator0_t2295529765  : public RuntimeObject
{
public:
	// System.Object Player/<Restarter>c__Iterator0::$current
	RuntimeObject * ___U24current_0;
	// System.Boolean Player/<Restarter>c__Iterator0::$disposing
	bool ___U24disposing_1;
	// System.Int32 Player/<Restarter>c__Iterator0::$PC
	int32_t ___U24PC_2;

public:
	inline static int32_t get_offset_of_U24current_0() { return static_cast<int32_t>(offsetof(U3CRestarterU3Ec__Iterator0_t2295529765, ___U24current_0)); }
	inline RuntimeObject * get_U24current_0() const { return ___U24current_0; }
	inline RuntimeObject ** get_address_of_U24current_0() { return &___U24current_0; }
	inline void set_U24current_0(RuntimeObject * value)
	{
		___U24current_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_0), value);
	}

	inline static int32_t get_offset_of_U24disposing_1() { return static_cast<int32_t>(offsetof(U3CRestarterU3Ec__Iterator0_t2295529765, ___U24disposing_1)); }
	inline bool get_U24disposing_1() const { return ___U24disposing_1; }
	inline bool* get_address_of_U24disposing_1() { return &___U24disposing_1; }
	inline void set_U24disposing_1(bool value)
	{
		___U24disposing_1 = value;
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CRestarterU3Ec__Iterator0_t2295529765, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CRESTARTERU3EC__ITERATOR0_T2295529765_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t1328083999* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t1328083999* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t1328083999** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t1328083999* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef SINGLE_T2076509932_H
#define SINGLE_T2076509932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t2076509932 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_t2076509932, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T2076509932_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VOID_T1841601450_H
#define VOID_T1841601450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1841601450 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1841601450_H
#ifndef UINT32_T2149682021_H
#define UINT32_T2149682021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2149682021 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2149682021, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2149682021_H
#ifndef WAITFORSECONDS_T3839502067_H
#define WAITFORSECONDS_T3839502067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t3839502067  : public YieldInstruction_t3462875981
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t3839502067, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3839502067_marshaled_pinvoke : public YieldInstruction_t3462875981_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3839502067_marshaled_com : public YieldInstruction_t3462875981_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T3839502067_H
#ifndef VECTOR2_T2243707579_H
#define VECTOR2_T2243707579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2243707579 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2243707579, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2243707579, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2243707579_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2243707579  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2243707579  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2243707579  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2243707579  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2243707579  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2243707579  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2243707579  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2243707579  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2243707579  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2243707579 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2243707579  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___oneVector_3)); }
	inline Vector2_t2243707579  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2243707579 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2243707579  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___upVector_4)); }
	inline Vector2_t2243707579  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2243707579 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2243707579  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___downVector_5)); }
	inline Vector2_t2243707579  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2243707579 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2243707579  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___leftVector_6)); }
	inline Vector2_t2243707579  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2243707579 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2243707579  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___rightVector_7)); }
	inline Vector2_t2243707579  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2243707579 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2243707579  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2243707579  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2243707579 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2243707579  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2243707579  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2243707579 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2243707579  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2243707579_H
#ifndef INT32_T2071877448_H
#define INT32_T2071877448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2071877448 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2071877448, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2071877448_H
#ifndef BOOLEAN_T3825574718_H
#define BOOLEAN_T3825574718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t3825574718 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t3825574718, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t3825574718_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t3825574718_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t3825574718_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T3825574718_H
#ifndef SYSTEMEXCEPTION_T3877406272_H
#define SYSTEMEXCEPTION_T3877406272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t3877406272  : public Exception_t1927440687
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T3877406272_H
#ifndef VECTOR3_T2243707580_H
#define VECTOR3_T2243707580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t2243707580 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_0;
	// System.Single UnityEngine.Vector3::y
	float ___y_1;
	// System.Single UnityEngine.Vector3::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};

struct Vector3_t2243707580_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t2243707580  ___zeroVector_3;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t2243707580  ___oneVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t2243707580  ___upVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t2243707580  ___downVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t2243707580  ___leftVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t2243707580  ___rightVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t2243707580  ___forwardVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t2243707580  ___backVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t2243707580  ___positiveInfinityVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t2243707580  ___negativeInfinityVector_12;

public:
	inline static int32_t get_offset_of_zeroVector_3() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___zeroVector_3)); }
	inline Vector3_t2243707580  get_zeroVector_3() const { return ___zeroVector_3; }
	inline Vector3_t2243707580 * get_address_of_zeroVector_3() { return &___zeroVector_3; }
	inline void set_zeroVector_3(Vector3_t2243707580  value)
	{
		___zeroVector_3 = value;
	}

	inline static int32_t get_offset_of_oneVector_4() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___oneVector_4)); }
	inline Vector3_t2243707580  get_oneVector_4() const { return ___oneVector_4; }
	inline Vector3_t2243707580 * get_address_of_oneVector_4() { return &___oneVector_4; }
	inline void set_oneVector_4(Vector3_t2243707580  value)
	{
		___oneVector_4 = value;
	}

	inline static int32_t get_offset_of_upVector_5() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___upVector_5)); }
	inline Vector3_t2243707580  get_upVector_5() const { return ___upVector_5; }
	inline Vector3_t2243707580 * get_address_of_upVector_5() { return &___upVector_5; }
	inline void set_upVector_5(Vector3_t2243707580  value)
	{
		___upVector_5 = value;
	}

	inline static int32_t get_offset_of_downVector_6() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___downVector_6)); }
	inline Vector3_t2243707580  get_downVector_6() const { return ___downVector_6; }
	inline Vector3_t2243707580 * get_address_of_downVector_6() { return &___downVector_6; }
	inline void set_downVector_6(Vector3_t2243707580  value)
	{
		___downVector_6 = value;
	}

	inline static int32_t get_offset_of_leftVector_7() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___leftVector_7)); }
	inline Vector3_t2243707580  get_leftVector_7() const { return ___leftVector_7; }
	inline Vector3_t2243707580 * get_address_of_leftVector_7() { return &___leftVector_7; }
	inline void set_leftVector_7(Vector3_t2243707580  value)
	{
		___leftVector_7 = value;
	}

	inline static int32_t get_offset_of_rightVector_8() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___rightVector_8)); }
	inline Vector3_t2243707580  get_rightVector_8() const { return ___rightVector_8; }
	inline Vector3_t2243707580 * get_address_of_rightVector_8() { return &___rightVector_8; }
	inline void set_rightVector_8(Vector3_t2243707580  value)
	{
		___rightVector_8 = value;
	}

	inline static int32_t get_offset_of_forwardVector_9() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___forwardVector_9)); }
	inline Vector3_t2243707580  get_forwardVector_9() const { return ___forwardVector_9; }
	inline Vector3_t2243707580 * get_address_of_forwardVector_9() { return &___forwardVector_9; }
	inline void set_forwardVector_9(Vector3_t2243707580  value)
	{
		___forwardVector_9 = value;
	}

	inline static int32_t get_offset_of_backVector_10() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___backVector_10)); }
	inline Vector3_t2243707580  get_backVector_10() const { return ___backVector_10; }
	inline Vector3_t2243707580 * get_address_of_backVector_10() { return &___backVector_10; }
	inline void set_backVector_10(Vector3_t2243707580  value)
	{
		___backVector_10 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_11() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___positiveInfinityVector_11)); }
	inline Vector3_t2243707580  get_positiveInfinityVector_11() const { return ___positiveInfinityVector_11; }
	inline Vector3_t2243707580 * get_address_of_positiveInfinityVector_11() { return &___positiveInfinityVector_11; }
	inline void set_positiveInfinityVector_11(Vector3_t2243707580  value)
	{
		___positiveInfinityVector_11 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___negativeInfinityVector_12)); }
	inline Vector3_t2243707580  get_negativeInfinityVector_12() const { return ___negativeInfinityVector_12; }
	inline Vector3_t2243707580 * get_address_of_negativeInfinityVector_12() { return &___negativeInfinityVector_12; }
	inline void set_negativeInfinityVector_12(Vector3_t2243707580  value)
	{
		___negativeInfinityVector_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T2243707580_H
#ifndef QUATERNION_T4030073918_H
#define QUATERNION_T4030073918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t4030073918 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t4030073918, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t4030073918, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t4030073918, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t4030073918, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t4030073918_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t4030073918  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t4030073918_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t4030073918  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t4030073918 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t4030073918  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T4030073918_H
#ifndef RAY_T2469606224_H
#define RAY_T2469606224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t2469606224 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t2243707580  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t2243707580  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2469606224, ___m_Origin_0)); }
	inline Vector3_t2243707580  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t2243707580 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t2243707580  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2469606224, ___m_Direction_1)); }
	inline Vector3_t2243707580  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t2243707580 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t2243707580  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T2469606224_H
#ifndef COROUTINE_T2299508840_H
#define COROUTINE_T2299508840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t2299508840  : public YieldInstruction_t3462875981
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t2299508840, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t2299508840_marshaled_pinvoke : public YieldInstruction_t3462875981_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t2299508840_marshaled_com : public YieldInstruction_t3462875981_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T2299508840_H
#ifndef OBJECT_T1021602117_H
#define OBJECT_T1021602117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t1021602117  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t1021602117, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t1021602117_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t1021602117_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t1021602117_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t1021602117_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T1021602117_H
#ifndef NOTSUPPORTEDEXCEPTION_T1793819818_H
#define NOTSUPPORTEDEXCEPTION_T1793819818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1793819818  : public SystemException_t3877406272
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1793819818_H
#ifndef RAYCASTHIT_T87180320_H
#define RAYCASTHIT_T87180320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t87180320 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t2243707580  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t2243707580  ___m_Normal_1;
	// System.Int32 UnityEngine.RaycastHit::m_FaceID
	int32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t2243707579  ___m_UV_4;
	// UnityEngine.Collider UnityEngine.RaycastHit::m_Collider
	Collider_t3497673348 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t87180320, ___m_Point_0)); }
	inline Vector3_t2243707580  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t2243707580 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t2243707580  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t87180320, ___m_Normal_1)); }
	inline Vector3_t2243707580  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t2243707580 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t2243707580  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t87180320, ___m_FaceID_2)); }
	inline int32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline int32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(int32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t87180320, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t87180320, ___m_UV_4)); }
	inline Vector2_t2243707579  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_t2243707579 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_t2243707579  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t87180320, ___m_Collider_5)); }
	inline Collider_t3497673348 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider_t3497673348 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider_t3497673348 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit
struct RaycastHit_t87180320_marshaled_pinvoke
{
	Vector3_t2243707580  ___m_Point_0;
	Vector3_t2243707580  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t2243707579  ___m_UV_4;
	Collider_t3497673348 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit
struct RaycastHit_t87180320_marshaled_com
{
	Vector3_t2243707580  ___m_Point_0;
	Vector3_t2243707580  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t2243707579  ___m_UV_4;
	Collider_t3497673348 * ___m_Collider_5;
};
#endif // RAYCASTHIT_T87180320_H
#ifndef COMPONENT_T3819376471_H
#define COMPONENT_T3819376471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t3819376471  : public Object_t1021602117
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T3819376471_H
#ifndef GAMEOBJECT_T1756533147_H
#define GAMEOBJECT_T1756533147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1756533147  : public Object_t1021602117
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1756533147_H
#ifndef BEHAVIOUR_T955675639_H
#define BEHAVIOUR_T955675639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t955675639  : public Component_t3819376471
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T955675639_H
#ifndef TRANSFORM_T3275118058_H
#define TRANSFORM_T3275118058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3275118058  : public Component_t3819376471
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3275118058_H
#ifndef COLLIDER_T3497673348_H
#define COLLIDER_T3497673348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t3497673348  : public Component_t3819376471
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T3497673348_H
#ifndef MONOBEHAVIOUR_T1158329972_H
#define MONOBEHAVIOUR_T1158329972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t1158329972  : public Behaviour_t955675639
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T1158329972_H
#ifndef CAMERA_T189460977_H
#define CAMERA_T189460977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t189460977  : public Behaviour_t955675639
{
public:

public:
};

struct Camera_t189460977_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t834278767 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t834278767 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t834278767 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t189460977_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t834278767 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t834278767 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t834278767 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t189460977_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t834278767 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t834278767 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t834278767 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t189460977_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t834278767 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t834278767 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t834278767 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T189460977_H
#ifndef PLAYER_T1147783557_H
#define PLAYER_T1147783557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player
struct  Player_t1147783557  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera Player::_camera
	Camera_t189460977 * ____camera_2;
	// Grid Player::_grid
	Grid_t4161269204 * ____grid_3;
	// FloodFill Player::_floodfill
	FloodFill_t1475753363 * ____floodfill_4;

public:
	inline static int32_t get_offset_of__camera_2() { return static_cast<int32_t>(offsetof(Player_t1147783557, ____camera_2)); }
	inline Camera_t189460977 * get__camera_2() const { return ____camera_2; }
	inline Camera_t189460977 ** get_address_of__camera_2() { return &____camera_2; }
	inline void set__camera_2(Camera_t189460977 * value)
	{
		____camera_2 = value;
		Il2CppCodeGenWriteBarrier((&____camera_2), value);
	}

	inline static int32_t get_offset_of__grid_3() { return static_cast<int32_t>(offsetof(Player_t1147783557, ____grid_3)); }
	inline Grid_t4161269204 * get__grid_3() const { return ____grid_3; }
	inline Grid_t4161269204 ** get_address_of__grid_3() { return &____grid_3; }
	inline void set__grid_3(Grid_t4161269204 * value)
	{
		____grid_3 = value;
		Il2CppCodeGenWriteBarrier((&____grid_3), value);
	}

	inline static int32_t get_offset_of__floodfill_4() { return static_cast<int32_t>(offsetof(Player_t1147783557, ____floodfill_4)); }
	inline FloodFill_t1475753363 * get__floodfill_4() const { return ____floodfill_4; }
	inline FloodFill_t1475753363 ** get_address_of__floodfill_4() { return &____floodfill_4; }
	inline void set__floodfill_4(FloodFill_t1475753363 * value)
	{
		____floodfill_4 = value;
		Il2CppCodeGenWriteBarrier((&____floodfill_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYER_T1147783557_H
#ifndef GRID_T4161269204_H
#define GRID_T4161269204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grid
struct  Grid_t4161269204  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[0...,0...] Grid::GridArray
	GameObjectU5BU2CU5D_t3057952155* ___GridArray_2;
	// UnityEngine.GameObject Grid::Tile
	GameObject_t1756533147 * ___Tile_3;
	// UnityEngine.GameObject Grid::Bomb
	GameObject_t1756533147 * ___Bomb_4;
	// UnityEngine.GameObject Grid::_spawner
	GameObject_t1756533147 * ____spawner_5;
	// System.Int32 Grid::BombCount
	int32_t ___BombCount_6;

public:
	inline static int32_t get_offset_of_GridArray_2() { return static_cast<int32_t>(offsetof(Grid_t4161269204, ___GridArray_2)); }
	inline GameObjectU5BU2CU5D_t3057952155* get_GridArray_2() const { return ___GridArray_2; }
	inline GameObjectU5BU2CU5D_t3057952155** get_address_of_GridArray_2() { return &___GridArray_2; }
	inline void set_GridArray_2(GameObjectU5BU2CU5D_t3057952155* value)
	{
		___GridArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___GridArray_2), value);
	}

	inline static int32_t get_offset_of_Tile_3() { return static_cast<int32_t>(offsetof(Grid_t4161269204, ___Tile_3)); }
	inline GameObject_t1756533147 * get_Tile_3() const { return ___Tile_3; }
	inline GameObject_t1756533147 ** get_address_of_Tile_3() { return &___Tile_3; }
	inline void set_Tile_3(GameObject_t1756533147 * value)
	{
		___Tile_3 = value;
		Il2CppCodeGenWriteBarrier((&___Tile_3), value);
	}

	inline static int32_t get_offset_of_Bomb_4() { return static_cast<int32_t>(offsetof(Grid_t4161269204, ___Bomb_4)); }
	inline GameObject_t1756533147 * get_Bomb_4() const { return ___Bomb_4; }
	inline GameObject_t1756533147 ** get_address_of_Bomb_4() { return &___Bomb_4; }
	inline void set_Bomb_4(GameObject_t1756533147 * value)
	{
		___Bomb_4 = value;
		Il2CppCodeGenWriteBarrier((&___Bomb_4), value);
	}

	inline static int32_t get_offset_of__spawner_5() { return static_cast<int32_t>(offsetof(Grid_t4161269204, ____spawner_5)); }
	inline GameObject_t1756533147 * get__spawner_5() const { return ____spawner_5; }
	inline GameObject_t1756533147 ** get_address_of__spawner_5() { return &____spawner_5; }
	inline void set__spawner_5(GameObject_t1756533147 * value)
	{
		____spawner_5 = value;
		Il2CppCodeGenWriteBarrier((&____spawner_5), value);
	}

	inline static int32_t get_offset_of_BombCount_6() { return static_cast<int32_t>(offsetof(Grid_t4161269204, ___BombCount_6)); }
	inline int32_t get_BombCount_6() const { return ___BombCount_6; }
	inline int32_t* get_address_of_BombCount_6() { return &___BombCount_6; }
	inline void set_BombCount_6(int32_t value)
	{
		___BombCount_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRID_T4161269204_H
#ifndef FLOODFILL_T1475753363_H
#define FLOODFILL_T1475753363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FloodFill
struct  FloodFill_t1475753363  : public MonoBehaviour_t1158329972
{
public:
	// Grid FloodFill::_grid
	Grid_t4161269204 * ____grid_2;

public:
	inline static int32_t get_offset_of__grid_2() { return static_cast<int32_t>(offsetof(FloodFill_t1475753363, ____grid_2)); }
	inline Grid_t4161269204 * get__grid_2() const { return ____grid_2; }
	inline Grid_t4161269204 ** get_address_of__grid_2() { return &____grid_2; }
	inline void set__grid_2(Grid_t4161269204 * value)
	{
		____grid_2 = value;
		Il2CppCodeGenWriteBarrier((&____grid_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLOODFILL_T1475753363_H
// UnityEngine.GameObject[,]
struct GameObjectU5BU2CU5D_t3057952155  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_t1756533147 * m_Items[1];

public:
	inline GameObject_t1756533147 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t1756533147 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t1756533147 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1756533147 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t1756533147 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t1756533147 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1756533147 * GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline GameObject_t1756533147 ** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, GameObject_t1756533147 * value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1756533147 * GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline GameObject_t1756533147 ** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, GameObject_t1756533147 * value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m3347661153_gshared (GameObject_t1756533147 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m3829784634_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t2243707580  p1, Quaternion_t4030073918  p2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m4109961936_gshared (Component_t3819376471 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
extern "C"  GameObject_t1756533147 * GameObject_FindGameObjectWithTag_m829057129 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<Grid>()
#define GameObject_GetComponent_TisGrid_t4161269204_m3584658723(__this, method) ((  Grid_t4161269204 * (*) (GameObject_t1756533147 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m3347661153_gshared)(__this, method)
// System.Int32 System.Array::GetLength(System.Int32)
extern "C"  int32_t Array_GetLength_m2083296647 (RuntimeArray * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m3764089466 (RuntimeObject * __this /* static, unused */, Object_t1021602117 * p0, Object_t1021602117 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
extern "C"  bool GameObject_CompareTag_m2797152613 (GameObject_t1756533147 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m4145850038 (RuntimeObject * __this /* static, unused */, Object_t1021602117 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean FloodFill::DestroyAdjacentTiles(System.Int32,System.Int32)
extern "C"  bool FloodFill_DestroyAdjacentTiles_m1109588397 (FloodFill_t1475753363 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Grid::SpawnerGrid()
extern "C"  void Grid_SpawnerGrid_m1997944283 (Grid_t4161269204 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m694320887 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m2638739322 (Vector3_t2243707580 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t4030073918  Quaternion_get_identity_m1561886418 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t1756533147_m3064851704(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1756533147 * (*) (RuntimeObject * /* static, unused */, GameObject_t1756533147 *, Vector3_t2243707580 , Quaternion_t4030073918 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m3829784634_gshared)(__this /* static, unused */, p0, p1, p2, method)
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3275118058 * GameObject_get_transform_m909382139 (GameObject_t1756533147 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C"  void Transform_set_parent_m3281327839 (Transform_t3275118058 * __this, Transform_t3275118058 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
extern "C"  String_t* Object_get_name_m2079638459 (Object_t1021602117 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m1790663636 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t189460977_m633060157(__this, method) ((  Camera_t189460977 * (*) (Component_t3819376471 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m4109961936_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<FloodFill>()
#define Component_GetComponent_TisFloodFill_t1475753363_m1869390(__this, method) ((  FloodFill_t1475753363 * (*) (Component_t3819376471 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m4109961936_gshared)(__this, method)
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C"  Vector3_t2243707580  Input_get_mousePosition_m146923508 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C"  Ray_t2469606224  Camera_ScreenPointToRay_m614889538 (Camera_t189460977 * __this, Vector3_t2243707580  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C"  bool Input_GetMouseButtonDown_m47917805 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
extern "C"  bool Physics_Raycast_m2736931691 (RuntimeObject * __this /* static, unused */, Ray_t2469606224  p0, RaycastHit_t87180320 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
extern "C"  Transform_t3275118058 * RaycastHit_get_transform_m3290290036 (RaycastHit_t87180320 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m2596409543 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern "C"  void MonoBehaviour_print_m3437620292 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C"  Collider_t3497673348 * RaycastHit_get_collider_m301198172 (RaycastHit_t87180320 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
extern "C"  bool Component_CompareTag_m3443292365 (Component_t3819376471 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Player::Restarter()
extern "C"  RuntimeObject* Player_Restarter_m3941424592 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C"  Coroutine_t2299508840 * MonoBehaviour_StartCoroutine_m2470621050 (MonoBehaviour_t1158329972 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Grid::CheckBombs()
extern "C"  void Grid_CheckBombs_m2879230354 (Grid_t4161269204 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t2243707580  Transform_get_position_m1104419803 (Transform_t3275118058 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Player/<Restarter>c__Iterator0::.ctor()
extern "C"  void U3CRestarterU3Ec__Iterator0__ctor_m2591580026 (U3CRestarterU3Ec__Iterator0_t2295529765 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m2551263788 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C"  void WaitForSeconds__ctor_m1990515539 (WaitForSeconds_t3839502067 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m1619949821 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m3232764727 (NotSupportedException_t1793819818 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FloodFill::.ctor()
extern "C"  void FloodFill__ctor_m1756851116 (FloodFill_t1475753363 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FloodFill::Start()
extern "C"  void FloodFill_Start_m949136216 (FloodFill_t1475753363 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FloodFill_Start_m949136216_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1756533147 * L_0 = GameObject_FindGameObjectWithTag_m829057129(NULL /*static, unused*/, _stringLiteral312696090, /*hidden argument*/NULL);
		Grid_t4161269204 * L_1 = GameObject_GetComponent_TisGrid_t4161269204_m3584658723(L_0, /*hidden argument*/GameObject_GetComponent_TisGrid_t4161269204_m3584658723_RuntimeMethod_var);
		__this->set__grid_2(L_1);
		return;
	}
}
// System.Boolean FloodFill::DestroyAdjacentTiles(System.Int32,System.Int32)
extern "C"  bool FloodFill_DestroyAdjacentTiles_m1109588397 (FloodFill_t1475753363 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FloodFill_DestroyAdjacentTiles_m1109588397_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___x0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_1 = ___x0;
		Grid_t4161269204 * L_2 = __this->get__grid_2();
		GameObjectU5BU2CU5D_t3057952155* L_3 = L_2->get_GridArray_2();
		int32_t L_4 = Array_GetLength_m2083296647((RuntimeArray *)(RuntimeArray *)L_3, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) > ((int32_t)((int32_t)((int32_t)L_4-(int32_t)1)))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_5 = ___y1;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_6 = ___y1;
		Grid_t4161269204 * L_7 = __this->get__grid_2();
		GameObjectU5BU2CU5D_t3057952155* L_8 = L_7->get_GridArray_2();
		int32_t L_9 = Array_GetLength_m2083296647((RuntimeArray *)(RuntimeArray *)L_8, 1, /*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)((int32_t)L_9-(int32_t)1)))))
		{
			goto IL_0042;
		}
	}

IL_0040:
	{
		return (bool)0;
	}

IL_0042:
	{
		Grid_t4161269204 * L_10 = __this->get__grid_2();
		Grid_t4161269204 * L_11 = __this->get__grid_2();
		GameObjectU5BU2CU5D_t3057952155* L_12 = L_11->get_GridArray_2();
		int32_t L_13 = ___x0;
		int32_t L_14 = ___y1;
		GameObject_t1756533147 * L_15 = ((GameObjectU5BU2CU5D_t3057952155*)(GameObjectU5BU2CU5D_t3057952155*)L_12)->GetAtUnchecked(L_13, L_14);
		L_10->set_Tile_3(L_15);
		Grid_t4161269204 * L_16 = __this->get__grid_2();
		GameObject_t1756533147 * L_17 = L_16->get_Tile_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Equality_m3764089466(NULL /*static, unused*/, L_17, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_0096;
		}
	}
	{
		Grid_t4161269204 * L_19 = __this->get__grid_2();
		GameObjectU5BU2CU5D_t3057952155* L_20 = L_19->get_GridArray_2();
		int32_t L_21 = ___x0;
		int32_t L_22 = ___y1;
		GameObject_t1756533147 * L_23 = ((GameObjectU5BU2CU5D_t3057952155*)(GameObjectU5BU2CU5D_t3057952155*)L_20)->GetAtUnchecked(L_21, L_22);
		bool L_24 = GameObject_CompareTag_m2797152613(L_23, _stringLiteral3336560306, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0098;
		}
	}

IL_0096:
	{
		return (bool)0;
	}

IL_0098:
	{
		Grid_t4161269204 * L_25 = __this->get__grid_2();
		GameObject_t1756533147 * L_26 = L_25->get_Tile_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		Grid_t4161269204 * L_27 = __this->get__grid_2();
		GameObjectU5BU2CU5D_t3057952155* L_28 = L_27->get_GridArray_2();
		int32_t L_29 = ___x0;
		int32_t L_30 = ___y1;
		((GameObjectU5BU2CU5D_t3057952155*)(GameObjectU5BU2CU5D_t3057952155*)L_28)->SetAtUnchecked(L_29, L_30, (GameObject_t1756533147 *)NULL);
		int32_t L_31 = ___x0;
		int32_t L_32 = ___y1;
		FloodFill_DestroyAdjacentTiles_m1109588397(__this, ((int32_t)((int32_t)L_31-(int32_t)1)), L_32, /*hidden argument*/NULL);
		int32_t L_33 = ___x0;
		int32_t L_34 = ___y1;
		FloodFill_DestroyAdjacentTiles_m1109588397(__this, ((int32_t)((int32_t)L_33+(int32_t)1)), L_34, /*hidden argument*/NULL);
		int32_t L_35 = ___x0;
		int32_t L_36 = ___y1;
		FloodFill_DestroyAdjacentTiles_m1109588397(__this, L_35, ((int32_t)((int32_t)L_36-(int32_t)1)), /*hidden argument*/NULL);
		int32_t L_37 = ___x0;
		int32_t L_38 = ___y1;
		FloodFill_DestroyAdjacentTiles_m1109588397(__this, L_37, ((int32_t)((int32_t)L_38+(int32_t)1)), /*hidden argument*/NULL);
		return (bool)1;
	}
}
// System.Void Grid::.ctor()
extern "C"  void Grid__ctor_m3395573899 (Grid_t4161269204 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Grid__ctor_m3395573899_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_array_size_t L_1[] = { (il2cpp_array_size_t)((int32_t)35), (il2cpp_array_size_t)((int32_t)20) };
		GameObjectU5BU2CU5D_t3057952155* L_0 = (GameObjectU5BU2CU5D_t3057952155*)GenArrayNew(GameObjectU5BU2CU5D_t3057952155_il2cpp_TypeInfo_var, L_1);
		__this->set_GridArray_2((GameObjectU5BU2CU5D_t3057952155*)L_0);
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Grid::Start()
extern "C"  void Grid_Start_m2697467711 (Grid_t4161269204 * __this, const RuntimeMethod* method)
{
	{
		Grid_SpawnerGrid_m1997944283(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Grid::SpawnerGrid()
extern "C"  void Grid_SpawnerGrid_m1997944283 (Grid_t4161269204 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Grid_SpawnerGrid_m1997944283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	GameObjectU5BU2CU5D_t3057952155* G_B4_2 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	GameObjectU5BU2CU5D_t3057952155* G_B3_2 = NULL;
	GameObject_t1756533147 * G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	int32_t G_B5_2 = 0;
	GameObjectU5BU2CU5D_t3057952155* G_B5_3 = NULL;
	{
		V_0 = 0;
		goto IL_008f;
	}

IL_0007:
	{
		V_1 = 0;
		goto IL_0079;
	}

IL_000e:
	{
		GameObjectU5BU2CU5D_t3057952155* L_0 = __this->get_GridArray_2();
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = Random_Range_m694320887(NULL /*static, unused*/, 0, ((int32_t)100), /*hidden argument*/NULL);
		G_B3_0 = L_2;
		G_B3_1 = L_1;
		G_B3_2 = L_0;
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)20))))
		{
			G_B4_0 = L_2;
			G_B4_1 = L_1;
			G_B4_2 = L_0;
			goto IL_0030;
		}
	}
	{
		GameObject_t1756533147 * L_4 = __this->get_Bomb_4();
		G_B5_0 = L_4;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		goto IL_0036;
	}

IL_0030:
	{
		GameObject_t1756533147 * L_5 = __this->get_Tile_3();
		G_B5_0 = L_5;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
	}

IL_0036:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t2243707580  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector3__ctor_m2638739322((&L_8), (((float)((float)L_6))), (0.0f), (((float)((float)L_7))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t4030073918_il2cpp_TypeInfo_var);
		Quaternion_t4030073918  L_9 = Quaternion_get_identity_m1561886418(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		GameObject_t1756533147 * L_10 = Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, G_B5_0, L_8, L_9, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_RuntimeMethod_var);
		((GameObjectU5BU2CU5D_t3057952155*)(GameObjectU5BU2CU5D_t3057952155*)G_B5_3)->SetAtUnchecked(G_B5_2, G_B5_1, L_10);
		GameObjectU5BU2CU5D_t3057952155* L_11 = __this->get_GridArray_2();
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		GameObject_t1756533147 * L_14 = ((GameObjectU5BU2CU5D_t3057952155*)(GameObjectU5BU2CU5D_t3057952155*)L_11)->GetAtUnchecked(L_12, L_13);
		Transform_t3275118058 * L_15 = GameObject_get_transform_m909382139(L_14, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_16 = __this->get__spawner_5();
		Transform_t3275118058 * L_17 = GameObject_get_transform_m909382139(L_16, /*hidden argument*/NULL);
		Transform_set_parent_m3281327839(L_15, L_17, /*hidden argument*/NULL);
		int32_t L_18 = V_1;
		V_1 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0079:
	{
		int32_t L_19 = V_1;
		GameObjectU5BU2CU5D_t3057952155* L_20 = __this->get_GridArray_2();
		int32_t L_21 = Array_GetLength_m2083296647((RuntimeArray *)(RuntimeArray *)L_20, 1, /*hidden argument*/NULL);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		GameObjectU5BU2CU5D_t3057952155* L_24 = __this->get_GridArray_2();
		int32_t L_25 = Array_GetLength_m2083296647((RuntimeArray *)(RuntimeArray *)L_24, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Grid::CheckBombs()
extern "C"  void Grid_CheckBombs_m2879230354 (Grid_t4161269204 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Grid_CheckBombs_m2879230354_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		goto IL_00e4;
	}

IL_0007:
	{
		V_1 = 0;
		goto IL_00ce;
	}

IL_000e:
	{
		int32_t L_0 = V_0;
		V_2 = ((int32_t)((int32_t)L_0-(int32_t)1));
		goto IL_00c1;
	}

IL_0017:
	{
		int32_t L_1 = V_1;
		V_3 = ((int32_t)((int32_t)L_1-(int32_t)1));
		goto IL_00b4;
	}

IL_0020:
	{
		int32_t L_2 = V_2;
		GameObjectU5BU2CU5D_t3057952155* L_3 = __this->get_GridArray_2();
		int32_t L_4 = Array_GetLength_m2083296647((RuntimeArray *)(RuntimeArray *)L_3, 1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) > ((int32_t)((int32_t)((int32_t)L_4-(int32_t)1)))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_6 = V_3;
		GameObjectU5BU2CU5D_t3057952155* L_7 = __this->get_GridArray_2();
		int32_t L_8 = Array_GetLength_m2083296647((RuntimeArray *)(RuntimeArray *)L_7, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_6) > ((int32_t)((int32_t)((int32_t)L_8-(int32_t)1)))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_9 = V_3;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_005b;
		}
	}

IL_0056:
	{
		goto IL_00b0;
	}

IL_005b:
	{
		GameObjectU5BU2CU5D_t3057952155* L_10 = __this->get_GridArray_2();
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		GameObject_t1756533147 * L_13 = ((GameObjectU5BU2CU5D_t3057952155*)(GameObjectU5BU2CU5D_t3057952155*)L_10)->GetAtUnchecked(L_11, L_12);
		String_t* L_14 = Object_get_name_m2079638459(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_15 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_14, _stringLiteral3336560306, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0081;
		}
	}
	{
		goto IL_00b0;
	}

IL_0081:
	{
		GameObjectU5BU2CU5D_t3057952155* L_16 = __this->get_GridArray_2();
		int32_t L_17 = V_3;
		int32_t L_18 = V_2;
		GameObject_t1756533147 * L_19 = ((GameObjectU5BU2CU5D_t3057952155*)(GameObjectU5BU2CU5D_t3057952155*)L_16)->GetAtUnchecked(L_17, L_18);
		String_t* L_20 = Object_get_name_m2079638459(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_21 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_20, _stringLiteral3336560306, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00b0;
		}
	}
	{
		int32_t L_22 = __this->get_BombCount_6();
		__this->set_BombCount_6(((int32_t)((int32_t)L_22+(int32_t)1)));
	}

IL_00b0:
	{
		int32_t L_23 = V_3;
		V_3 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_24 = V_3;
		int32_t L_25 = V_1;
		if ((((int32_t)L_24) <= ((int32_t)((int32_t)((int32_t)L_25+(int32_t)1)))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_00c1:
	{
		int32_t L_27 = V_2;
		int32_t L_28 = V_0;
		if ((((int32_t)L_27) <= ((int32_t)((int32_t)((int32_t)L_28+(int32_t)1)))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_29 = V_1;
		V_1 = ((int32_t)((int32_t)L_29+(int32_t)1));
	}

IL_00ce:
	{
		int32_t L_30 = V_1;
		GameObjectU5BU2CU5D_t3057952155* L_31 = __this->get_GridArray_2();
		int32_t L_32 = Array_GetLength_m2083296647((RuntimeArray *)(RuntimeArray *)L_31, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_33 = V_0;
		V_0 = ((int32_t)((int32_t)L_33+(int32_t)1));
	}

IL_00e4:
	{
		int32_t L_34 = V_0;
		GameObjectU5BU2CU5D_t3057952155* L_35 = __this->get_GridArray_2();
		int32_t L_36 = Array_GetLength_m2083296647((RuntimeArray *)(RuntimeArray *)L_35, 1, /*hidden argument*/NULL);
		if ((((int32_t)L_34) < ((int32_t)L_36)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Player::.ctor()
extern "C"  void Player__ctor_m1986401168 (Player_t1147783557 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player::Start()
extern "C"  void Player_Start_m3139373552 (Player_t1147783557 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_Start_m3139373552_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_t189460977 * L_0 = Component_GetComponent_TisCamera_t189460977_m633060157(__this, /*hidden argument*/Component_GetComponent_TisCamera_t189460977_m633060157_RuntimeMethod_var);
		__this->set__camera_2(L_0);
		FloodFill_t1475753363 * L_1 = Component_GetComponent_TisFloodFill_t1475753363_m1869390(__this, /*hidden argument*/Component_GetComponent_TisFloodFill_t1475753363_m1869390_RuntimeMethod_var);
		__this->set__floodfill_4(L_1);
		GameObject_t1756533147 * L_2 = GameObject_FindGameObjectWithTag_m829057129(NULL /*static, unused*/, _stringLiteral312696090, /*hidden argument*/NULL);
		Grid_t4161269204 * L_3 = GameObject_GetComponent_TisGrid_t4161269204_m3584658723(L_2, /*hidden argument*/GameObject_GetComponent_TisGrid_t4161269204_m3584658723_RuntimeMethod_var);
		__this->set__grid_3(L_3);
		return;
	}
}
// System.Void Player::Update()
extern "C"  void Player_Update_m717746161 (Player_t1147783557 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_Update_m717746161_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Ray_t2469606224  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RaycastHit_t87180320  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t2243707580  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		Camera_t189460977 * L_0 = __this->get__camera_2();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_1 = Input_get_mousePosition_m146923508(NULL /*static, unused*/, /*hidden argument*/NULL);
		Ray_t2469606224  L_2 = Camera_ScreenPointToRay_m614889538(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = Input_GetMouseButtonDown_m47917805(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		Ray_t2469606224  L_4 = V_0;
		bool L_5 = Physics_Raycast_m2736931691(NULL /*static, unused*/, L_4, (&V_1), /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_002b;
		}
	}
	{
		return;
	}

IL_002b:
	{
		Transform_t3275118058 * L_6 = RaycastHit_get_transform_m3290290036((&V_1), /*hidden argument*/NULL);
		String_t* L_7 = Object_get_name_m2079638459(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral3987566585, L_7, /*hidden argument*/NULL);
		MonoBehaviour_print_m3437620292(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		Collider_t3497673348 * L_9 = RaycastHit_get_collider_m301198172((&V_1), /*hidden argument*/NULL);
		bool L_10 = Component_CompareTag_m3443292365(L_9, _stringLiteral3336560306, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_11 = Player_Restarter_m3941424592(NULL /*static, unused*/, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2470621050(__this, L_11, /*hidden argument*/NULL);
	}

IL_0068:
	{
		Collider_t3497673348 * L_12 = RaycastHit_get_collider_m301198172((&V_1), /*hidden argument*/NULL);
		bool L_13 = Component_CompareTag_m3443292365(L_12, _stringLiteral1814662286, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00c9;
		}
	}
	{
		MonoBehaviour_print_m3437620292(NULL /*static, unused*/, _stringLiteral3021628430, /*hidden argument*/NULL);
		Grid_t4161269204 * L_14 = __this->get__grid_3();
		Grid_CheckBombs_m2879230354(L_14, /*hidden argument*/NULL);
		FloodFill_t1475753363 * L_15 = __this->get__floodfill_4();
		Transform_t3275118058 * L_16 = RaycastHit_get_transform_m3290290036((&V_1), /*hidden argument*/NULL);
		Vector3_t2243707580  L_17 = Transform_get_position_m1104419803(L_16, /*hidden argument*/NULL);
		V_2 = L_17;
		float L_18 = (&V_2)->get_x_0();
		Transform_t3275118058 * L_19 = RaycastHit_get_transform_m3290290036((&V_1), /*hidden argument*/NULL);
		Vector3_t2243707580  L_20 = Transform_get_position_m1104419803(L_19, /*hidden argument*/NULL);
		V_3 = L_20;
		float L_21 = (&V_3)->get_y_1();
		FloodFill_DestroyAdjacentTiles_m1109588397(L_15, (((int32_t)((int32_t)L_18))), (((int32_t)((int32_t)L_21))), /*hidden argument*/NULL);
	}

IL_00c9:
	{
		return;
	}
}
// System.Collections.IEnumerator Player::Restarter()
extern "C"  RuntimeObject* Player_Restarter_m3941424592 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_Restarter_m3941424592_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CRestarterU3Ec__Iterator0_t2295529765 * V_0 = NULL;
	{
		U3CRestarterU3Ec__Iterator0_t2295529765 * L_0 = (U3CRestarterU3Ec__Iterator0_t2295529765 *)il2cpp_codegen_object_new(U3CRestarterU3Ec__Iterator0_t2295529765_il2cpp_TypeInfo_var);
		U3CRestarterU3Ec__Iterator0__ctor_m2591580026(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CRestarterU3Ec__Iterator0_t2295529765 * L_1 = V_0;
		return L_1;
	}
}
// System.Void Player/<Restarter>c__Iterator0::.ctor()
extern "C"  void U3CRestarterU3Ec__Iterator0__ctor_m2591580026 (U3CRestarterU3Ec__Iterator0_t2295529765 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Player/<Restarter>c__Iterator0::MoveNext()
extern "C"  bool U3CRestarterU3Ec__Iterator0_MoveNext_m1235866082 (U3CRestarterU3Ec__Iterator0_t2295529765 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRestarterU3Ec__Iterator0_MoveNext_m1235866082_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_2();
		V_0 = L_0;
		__this->set_U24PC_2((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0045;
			}
		}
	}
	{
		goto IL_0056;
	}

IL_0021:
	{
		WaitForSeconds_t3839502067 * L_2 = (WaitForSeconds_t3839502067 *)il2cpp_codegen_object_new(WaitForSeconds_t3839502067_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m1990515539(L_2, (5.0f), /*hidden argument*/NULL);
		__this->set_U24current_0(L_2);
		bool L_3 = __this->get_U24disposing_1();
		if (L_3)
		{
			goto IL_0040;
		}
	}
	{
		__this->set_U24PC_2(1);
	}

IL_0040:
	{
		goto IL_0058;
	}

IL_0045:
	{
		SceneManager_LoadScene_m1619949821(NULL /*static, unused*/, _stringLiteral3538073363, /*hidden argument*/NULL);
		__this->set_U24PC_2((-1));
	}

IL_0056:
	{
		return (bool)0;
	}

IL_0058:
	{
		return (bool)1;
	}
}
// System.Object Player/<Restarter>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CRestarterU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2283122702 (U3CRestarterU3Ec__Iterator0_t2295529765 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_0();
		return L_0;
	}
}
// System.Object Player/<Restarter>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CRestarterU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m2102323798 (U3CRestarterU3Ec__Iterator0_t2295529765 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_0();
		return L_0;
	}
}
// System.Void Player/<Restarter>c__Iterator0::Dispose()
extern "C"  void U3CRestarterU3Ec__Iterator0_Dispose_m997953399 (U3CRestarterU3Ec__Iterator0_t2295529765 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_1((bool)1);
		__this->set_U24PC_2((-1));
		return;
	}
}
// System.Void Player/<Restarter>c__Iterator0::Reset()
extern "C"  void U3CRestarterU3Ec__Iterator0_Reset_m4277817377 (U3CRestarterU3Ec__Iterator0_t2295529765 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRestarterU3Ec__Iterator0_Reset_m4277817377_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1793819818 * L_0 = (NotSupportedException_t1793819818 *)il2cpp_codegen_object_new(NotSupportedException_t1793819818_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3232764727(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
