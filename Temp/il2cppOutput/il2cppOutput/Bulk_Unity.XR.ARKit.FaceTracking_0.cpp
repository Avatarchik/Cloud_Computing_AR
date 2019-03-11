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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.FaceSubsystem.FaceAddedEventArgs>
struct Action_1_t71656D6F61C5A84CD1DBA2455EC2625758354C47;
// System.Action`1<UnityEngine.XR.FaceSubsystem.FaceRemovedEventArgs>
struct Action_1_tFBB1F2AD232E22389CE7AB044A0E7C4D3FD628FC;
// System.Action`1<UnityEngine.XR.FaceSubsystem.FaceUpdatedEventArgs>
struct Action_1_tF49EC82BFF8B6A594947CD8057B9CC411B2B1CCB;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t83E667E7934AC9AE24BFBB0281123214BC7E000C;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2>
struct IEnumerable_1_t022DEB6115EB42DC022B7E7F92C994BC074724E5;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_t85CDFDE61E9ED5EC59179D4466DF210DD727EEEC;
// System.Collections.Generic.IEnumerable`1<UnityEngine.XR.ARKit.XRFaceArkitBlendShapeCoefficient>
struct IEnumerable_1_t3BAFC66615CD51E03357464CE88CF9DCB6908D51;
// System.Collections.Generic.IEnumerable`1<UnityEngine.XR.FaceSubsystem.XRFace>
struct IEnumerable_1_t9E6274E653B7B97F796363548CB6F0246293FA9A;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5;
// System.Collections.Generic.List`1<UnityEngine.XR.ARKit.XRFaceArkitBlendShapeCoefficient>
struct List_1_t2DA394A648E4B185A0CA629942B1CBF7DE64D672;
// System.Collections.Generic.List`1<UnityEngine.XR.FaceSubsystem.FaceAddedEventArgs>
struct List_1_t2958218D149DCA487DD6310C94D4D3A64A78828D;
// System.Collections.Generic.List`1<UnityEngine.XR.FaceSubsystem.FaceRemovedEventArgs>
struct List_1_t72C6BEB9CFE07A0462B3D57F1A8047D81654AB11;
// System.Collections.Generic.List`1<UnityEngine.XR.FaceSubsystem.FaceUpdatedEventArgs>
struct List_1_t944F569C71FD46C9CE37163BF0E74B37BF3D3084;
// System.Collections.Generic.List`1<UnityEngine.XR.FaceSubsystem.XRFace>
struct List_1_tB714496A195018B9F2FE0ABA6BE5AA9B1EB10942;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Experimental.ISubsystemDescriptor
struct ISubsystemDescriptor_tDF5EB3ED639A15690D2CB9993789BB21F24D3934;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.XR.ARKit.ARKitFaceSubsystem
struct ARKitFaceSubsystem_t24E01CF6C590EFAC9B51F7B1D341C646A69E9CD9;
// UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceAnchorAdded
struct DelegateXrFaceAnchorAdded_t4C37182B2443CE6D65E2C406B6BC527FF22E7268;
// UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceAnchorRemoved
struct DelegateXrFaceAnchorRemoved_t38731B8AEB3696EC1281AFE0D0E165C3C18C4BB4;
// UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceAnchorUpdated
struct DelegateXrFaceAnchorUpdated_tCBBB53FC1132F3A2AAC5E0C1E3E6CA34E65F8C7C;
// UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceSessionBeginFrame
struct DelegateXrFaceSessionBeginFrame_t03BCAADC9955F8AF986BD37858554A2BB5503D62;
// UnityEngine.XR.ARKit.XRFaceArkitBlendShapeCoefficient[]
struct XRFaceArkitBlendShapeCoefficientU5BU5D_t874678F37E970C7C8EC660F88A38A8BDE831D6AB;
// UnityEngine.XR.FaceSubsystem.XRFaceSubsystem
struct XRFaceSubsystem_tE0367EC4739D16FE0CA2820AAF6688D9ABA66B86;
// UnityEngine.XR.FaceSubsystem.XRFace[]
struct XRFaceU5BU5D_t4C663FE7C32161D7F376CB8DCE5B1A840A8E672F;

extern RuntimeClass* ARKitFaceSubsystem_t24E01CF6C590EFAC9B51F7B1D341C646A69E9CD9_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
extern RuntimeClass* DelegateXrFaceAnchorAdded_t4C37182B2443CE6D65E2C406B6BC527FF22E7268_il2cpp_TypeInfo_var;
extern RuntimeClass* DelegateXrFaceAnchorRemoved_t38731B8AEB3696EC1281AFE0D0E165C3C18C4BB4_il2cpp_TypeInfo_var;
extern RuntimeClass* DelegateXrFaceAnchorUpdated_tCBBB53FC1132F3A2AAC5E0C1E3E6CA34E65F8C7C_il2cpp_TypeInfo_var;
extern RuntimeClass* DelegateXrFaceSessionBeginFrame_t03BCAADC9955F8AF986BD37858554A2BB5503D62_il2cpp_TypeInfo_var;
extern RuntimeClass* NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74_il2cpp_TypeInfo_var;
extern RuntimeClass* NativeArray_1_t463B0B9666832AF1890B0290C471BF44D1A80557_il2cpp_TypeInfo_var;
extern RuntimeClass* NativeArray_1_t4C0FC59F637B1D4B704DBC2E00DA3484EBD4B50A_il2cpp_TypeInfo_var;
extern RuntimeClass* NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71_il2cpp_TypeInfo_var;
extern RuntimeClass* NativeArray_1_tE00CA77AD57C4FDA4711FEC1072D2834BB11DC23_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E_il2cpp_TypeInfo_var;
extern RuntimeClass* XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral37A0B5FF3D6DDD7EB1501626195A8DC712AD0A51;
extern String_t* _stringLiteral3DE5C8935E5C0504750A6A49DD9533047C38EC8C;
extern String_t* _stringLiteral84DBAEF25399215C4823814053CC133F7AD11C90;
extern String_t* _stringLiteralBE956C6BBE22C9317B08530A0E1E1E9ABED5815A;
extern String_t* _stringLiteralD214B207420545B07BED4F7353996091F6754394;
extern String_t* _stringLiteralE13943DFF99B70678B7C440862674F0CDB525067;
extern const RuntimeMethod* ARKitFaceSubsystem_TryGetAllFaces_mFDF075D6ADE9164793B4EC970FE1F49BF198C7C2_RuntimeMethod_var;
extern const RuntimeMethod* ARKitFaceSubsystem_TryGetFaceARKitBlendShapeCoefficients_m45E8DD72CEB21DFF49BEF7BD5AB1CB792BC0A1F4_RuntimeMethod_var;
extern const RuntimeMethod* ARKitFaceSubsystem_TryGetFaceMeshIndices_m7CD730BDAA17EDC41D80B9C43DC95F612E043F16_RuntimeMethod_var;
extern const RuntimeMethod* ARKitFaceSubsystem_TryGetFaceMeshUVs_m628BF9EDA523F56CFA974812DBBA341C73134B02_RuntimeMethod_var;
extern const RuntimeMethod* ARKitFaceSubsystem_TryGetFaceMeshVertices_m3404954FFA51446837E9C46B0C95942A699A1CAA_RuntimeMethod_var;
extern const RuntimeMethod* ARKitFaceSubsystem_UnityARKit_face_anchor_added_m85E7BABAADE00B8C52811A5030BF442EF075F3D8_RuntimeMethod_var;
extern const RuntimeMethod* ARKitFaceSubsystem_UnityARKit_face_anchor_removed_mC0E739A896D0400684C1864435505D880C70E559_RuntimeMethod_var;
extern const RuntimeMethod* ARKitFaceSubsystem_UnityARKit_face_anchor_updated_mEB09AF3DD39C3D3D78B0363CD23AFCBCE8DF29BD_RuntimeMethod_var;
extern const RuntimeMethod* ARKitFaceSubsystem_UnityARKit_face_session_begin_frame_m0E329D6FAF6F81552C95BBCAACB9FEDEB6E2B313_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_m7FFC58CA1D1ED3109FBFE810DDF02D4A4E32413D_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_m8D8DE833E34F3C9AEE197852A28DF22C2B5B9B3B_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_mB209F616554B35E19C68705964701A7BD37FC169_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_mDAF7D94514D9CCE06F0DF44740372B6C43662035_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_mFABE59B1FA98DE337AAA7F8B65164784528C2AF7_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m0B6A7366C5386991AB01BAFF1FACE2DC5BAC410A_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m33B9E3FC1A7C9DF40DF154F08DF7D71F69FDCBD6_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m4922931CB6A2D5FF3678089D45EDEDB901DA2EBC_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_mDE5027112757C65CAB14DEB36BC94F120676590B_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_mEEECECE6D56999D020D7242EDE87DB619BA3227D_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Capacity_m1A53A0BAC1C93A2F3D0E669490E8F110C2B4475E_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Capacity_m1C75B3978DE5B3985710482FDA9577C669909D29_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Capacity_m3BECB289CE03E777262B84E4B8096DF61F6A5044_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Capacity_m4F1077003DAB391699C5CAF1A027F12D2B525969_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Capacity_m6F328BC5CB16A5F1F9CF4F10E77173065F24EABE_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Capacity_m01AC4D143726E324FEBC9025C07096C4E98E2DDE_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Capacity_m0C9768C9A3A74A3259CFE20F26B482DB7590DC69_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Capacity_m3FBA882CEEB035B43469A05A1E7866E9427623DD_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Capacity_mCD857171EDE617A020E9E7EEDDB09F67DCBEA057_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Capacity_mF25A85F4FB85F5CECD1D70B97A713F24FCEAB161_RuntimeMethod_var;
extern const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m9FFD99950B30E3CA4BFD657FB6A7BA744503D7CC_RuntimeMethod_var;
extern const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_mAFBE7D772DDF7690DD8E11CE386ECC88DE85904E_RuntimeMethod_var;
extern const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_m1BF2DFBAF38B30767E9E7DEA8AC2BE2672BC8714_RuntimeMethod_var;
extern const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisXRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E_mD99990BF4F5C73097C33B9E5382D77E7802A2F5E_RuntimeMethod_var;
extern const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisXRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246_mDBCD18D72EE18412B6D0E5343B73A48F70135F76_RuntimeMethod_var;
extern const RuntimeType* ARKitFaceSubsystem_t24E01CF6C590EFAC9B51F7B1D341C646A69E9CD9_0_0_0_var;
extern const uint32_t ARKitFaceSubsystem_Destroy_mE0185004BEF17A21E21A5CE1E6FBE09159194F4A_MetadataUsageId;
extern const uint32_t ARKitFaceSubsystem_RegisterDescriptor_mC00841747E3532C2A69720ECBA2EA399C657E111_MetadataUsageId;
extern const uint32_t ARKitFaceSubsystem_Start_m81DDAA372D4493F97320A9DA8C2356791BA4374E_MetadataUsageId;
extern const uint32_t ARKitFaceSubsystem_TryGetAllFaces_mFDF075D6ADE9164793B4EC970FE1F49BF198C7C2_MetadataUsageId;
extern const uint32_t ARKitFaceSubsystem_TryGetFaceARKitBlendShapeCoefficients_m45E8DD72CEB21DFF49BEF7BD5AB1CB792BC0A1F4_MetadataUsageId;
extern const uint32_t ARKitFaceSubsystem_TryGetFaceMeshIndices_m7CD730BDAA17EDC41D80B9C43DC95F612E043F16_MetadataUsageId;
extern const uint32_t ARKitFaceSubsystem_TryGetFaceMeshUVs_m628BF9EDA523F56CFA974812DBBA341C73134B02_MetadataUsageId;
extern const uint32_t ARKitFaceSubsystem_TryGetFaceMeshVertices_m3404954FFA51446837E9C46B0C95942A699A1CAA_MetadataUsageId;
extern const uint32_t ARKitFaceSubsystem_TryGetNativeAllFaces_mDABACB017D0EA4CF9AED31AB117A2263D4451C53_MetadataUsageId;
extern const uint32_t ARKitFaceSubsystem_TryGetNativeFaceBlendCoefficients_m394B48DF794BA51C2C560A42C4D64DD69F67B489_MetadataUsageId;
extern const uint32_t ARKitFaceSubsystem_TryGetNativeFaceMeshIndices_m5B9319A726C2CB76B7A1CAB383BCA52FF656A1F1_MetadataUsageId;
extern const uint32_t ARKitFaceSubsystem_TryGetNativeFaceMeshUVs_m2C2168403C67F53FE45A8083E25153ECD145EE8C_MetadataUsageId;
extern const uint32_t ARKitFaceSubsystem_TryGetNativeFaceMeshVertices_m2FDF81CC52182CE6B1DCA1508C987C6B0957643B_MetadataUsageId;
extern const uint32_t ARKitFaceSubsystem_UnityARKit_face_anchor_added_m85E7BABAADE00B8C52811A5030BF442EF075F3D8_MetadataUsageId;
extern const uint32_t ARKitFaceSubsystem_UnityARKit_face_anchor_removed_mC0E739A896D0400684C1864435505D880C70E559_MetadataUsageId;
extern const uint32_t ARKitFaceSubsystem_UnityARKit_face_anchor_updated_mEB09AF3DD39C3D3D78B0363CD23AFCBCE8DF29BD_MetadataUsageId;
extern const uint32_t ARKitFaceSubsystem__ctor_mCFD2FDAC2B2FD45B7C15B697268F6D9B54691905_MetadataUsageId;
extern const uint32_t DelegateXrFaceAnchorAdded_BeginInvoke_m0098A3B1C0F77E096EF8D10962C80237E91BB82F_MetadataUsageId;
extern const uint32_t DelegateXrFaceAnchorRemoved_BeginInvoke_mD492385A1B9A7D2B884FE10CCC1A04FA418B9287_MetadataUsageId;
extern const uint32_t DelegateXrFaceAnchorUpdated_BeginInvoke_mC26A70388AA1072B44F47330925CDF23FA3160F7_MetadataUsageId;
extern const uint32_t XRFaceArkitBlendShapeCoefficient_Equals_m35E8AE07A2EEE9B9AA84D97B067A05922A468054_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;


#ifndef U3CMODULEU3E_T1CF7C307ED677A54A6DD437A7514266A3972F693_H
#define U3CMODULEU3E_T1CF7C307ED677A54A6DD437A7514266A3972F693_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t1CF7C307ED677A54A6DD437A7514266A3972F693 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T1CF7C307ED677A54A6DD437A7514266A3972F693_H
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
#ifndef LIST_1_TE1526161A558A17A39A8B69D8EEF3801393B6226_H
#define LIST_1_TE1526161A558A17A39A8B69D8EEF3801393B6226_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int32>
struct  List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____items_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TE1526161A558A17A39A8B69D8EEF3801393B6226_H
#ifndef LIST_1_T0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB_H
#define LIST_1_T0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct  List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____items_1)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get__items_1() const { return ____items_1; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB_StaticFields, ____emptyArray_5)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB_H
#ifndef LIST_1_TFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_H
#define LIST_1_TFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____items_1)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_H
#ifndef LIST_1_T2DA394A648E4B185A0CA629942B1CBF7DE64D672_H
#define LIST_1_T2DA394A648E4B185A0CA629942B1CBF7DE64D672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.XR.ARKit.XRFaceArkitBlendShapeCoefficient>
struct  List_1_t2DA394A648E4B185A0CA629942B1CBF7DE64D672  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRFaceArkitBlendShapeCoefficientU5BU5D_t874678F37E970C7C8EC660F88A38A8BDE831D6AB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2DA394A648E4B185A0CA629942B1CBF7DE64D672, ____items_1)); }
	inline XRFaceArkitBlendShapeCoefficientU5BU5D_t874678F37E970C7C8EC660F88A38A8BDE831D6AB* get__items_1() const { return ____items_1; }
	inline XRFaceArkitBlendShapeCoefficientU5BU5D_t874678F37E970C7C8EC660F88A38A8BDE831D6AB** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRFaceArkitBlendShapeCoefficientU5BU5D_t874678F37E970C7C8EC660F88A38A8BDE831D6AB* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2DA394A648E4B185A0CA629942B1CBF7DE64D672, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2DA394A648E4B185A0CA629942B1CBF7DE64D672, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2DA394A648E4B185A0CA629942B1CBF7DE64D672, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t2DA394A648E4B185A0CA629942B1CBF7DE64D672_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRFaceArkitBlendShapeCoefficientU5BU5D_t874678F37E970C7C8EC660F88A38A8BDE831D6AB* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2DA394A648E4B185A0CA629942B1CBF7DE64D672_StaticFields, ____emptyArray_5)); }
	inline XRFaceArkitBlendShapeCoefficientU5BU5D_t874678F37E970C7C8EC660F88A38A8BDE831D6AB* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRFaceArkitBlendShapeCoefficientU5BU5D_t874678F37E970C7C8EC660F88A38A8BDE831D6AB** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRFaceArkitBlendShapeCoefficientU5BU5D_t874678F37E970C7C8EC660F88A38A8BDE831D6AB* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2DA394A648E4B185A0CA629942B1CBF7DE64D672_H
#ifndef LIST_1_TB714496A195018B9F2FE0ABA6BE5AA9B1EB10942_H
#define LIST_1_TB714496A195018B9F2FE0ABA6BE5AA9B1EB10942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.XR.FaceSubsystem.XRFace>
struct  List_1_tB714496A195018B9F2FE0ABA6BE5AA9B1EB10942  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRFaceU5BU5D_t4C663FE7C32161D7F376CB8DCE5B1A840A8E672F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tB714496A195018B9F2FE0ABA6BE5AA9B1EB10942, ____items_1)); }
	inline XRFaceU5BU5D_t4C663FE7C32161D7F376CB8DCE5B1A840A8E672F* get__items_1() const { return ____items_1; }
	inline XRFaceU5BU5D_t4C663FE7C32161D7F376CB8DCE5B1A840A8E672F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRFaceU5BU5D_t4C663FE7C32161D7F376CB8DCE5B1A840A8E672F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tB714496A195018B9F2FE0ABA6BE5AA9B1EB10942, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tB714496A195018B9F2FE0ABA6BE5AA9B1EB10942, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tB714496A195018B9F2FE0ABA6BE5AA9B1EB10942, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tB714496A195018B9F2FE0ABA6BE5AA9B1EB10942_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRFaceU5BU5D_t4C663FE7C32161D7F376CB8DCE5B1A840A8E672F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tB714496A195018B9F2FE0ABA6BE5AA9B1EB10942_StaticFields, ____emptyArray_5)); }
	inline XRFaceU5BU5D_t4C663FE7C32161D7F376CB8DCE5B1A840A8E672F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRFaceU5BU5D_t4C663FE7C32161D7F376CB8DCE5B1A840A8E672F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRFaceU5BU5D_t4C663FE7C32161D7F376CB8DCE5B1A840A8E672F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TB714496A195018B9F2FE0ABA6BE5AA9B1EB10942_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
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
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef SUBSYSTEM_T9D40133A9FEB984E2C3695B077DA4DDFC91CA181_H
#define SUBSYSTEM_T9D40133A9FEB984E2C3695B077DA4DDFC91CA181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Subsystem
struct  Subsystem_t9D40133A9FEB984E2C3695B077DA4DDFC91CA181  : public RuntimeObject
{
public:
	// UnityEngine.Experimental.ISubsystemDescriptor UnityEngine.Experimental.Subsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_0;

public:
	inline static int32_t get_offset_of_m_subsystemDescriptor_0() { return static_cast<int32_t>(offsetof(Subsystem_t9D40133A9FEB984E2C3695B077DA4DDFC91CA181, ___m_subsystemDescriptor_0)); }
	inline RuntimeObject* get_m_subsystemDescriptor_0() const { return ___m_subsystemDescriptor_0; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_0() { return &___m_subsystemDescriptor_0; }
	inline void set_m_subsystemDescriptor_0(RuntimeObject* value)
	{
		___m_subsystemDescriptor_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_subsystemDescriptor_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEM_T9D40133A9FEB984E2C3695B077DA4DDFC91CA181_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
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
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
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
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef SUBSYSTEM_1_T7A31187B2E3DFF03501265C781C9A8547A073F0C_H
#define SUBSYSTEM_1_T7A31187B2E3DFF03501265C781C9A8547A073F0C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Subsystem`1<UnityEngine.XR.FaceSubsystem.XRFaceSubsystemDescriptor>
struct  Subsystem_1_t7A31187B2E3DFF03501265C781C9A8547A073F0C  : public Subsystem_t9D40133A9FEB984E2C3695B077DA4DDFC91CA181
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEM_1_T7A31187B2E3DFF03501265C781C9A8547A073F0C_H
#ifndef TRACKABLEID_TA539F57E82A04D410FE11E10ACC830CF7CD71F7B_H
#define TRACKABLEID_TA539F57E82A04D410FE11E10ACC830CF7CD71F7B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.TrackableId
struct  TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B 
{
public:
	// System.UInt64 UnityEngine.Experimental.XR.TrackableId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.Experimental.XR.TrackableId::m_SubId2
	uint64_t ___m_SubId2_2;

public:
	inline static int32_t get_offset_of_m_SubId1_1() { return static_cast<int32_t>(offsetof(TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B, ___m_SubId1_1)); }
	inline uint64_t get_m_SubId1_1() const { return ___m_SubId1_1; }
	inline uint64_t* get_address_of_m_SubId1_1() { return &___m_SubId1_1; }
	inline void set_m_SubId1_1(uint64_t value)
	{
		___m_SubId1_1 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_2() { return static_cast<int32_t>(offsetof(TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B, ___m_SubId2_2)); }
	inline uint64_t get_m_SubId2_2() const { return ___m_SubId2_2; }
	inline uint64_t* get_address_of_m_SubId2_2() { return &___m_SubId2_2; }
	inline void set_m_SubId2_2(uint64_t value)
	{
		___m_SubId2_2 = value;
	}
};

struct TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B_StaticFields
{
public:
	// UnityEngine.Experimental.XR.TrackableId UnityEngine.Experimental.XR.TrackableId::s_InvalidId
	TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___s_InvalidId_0;

public:
	inline static int32_t get_offset_of_s_InvalidId_0() { return static_cast<int32_t>(offsetof(TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B_StaticFields, ___s_InvalidId_0)); }
	inline TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  get_s_InvalidId_0() const { return ___s_InvalidId_0; }
	inline TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B * get_address_of_s_InvalidId_0() { return &___s_InvalidId_0; }
	inline void set_s_InvalidId_0(TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  value)
	{
		___s_InvalidId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEID_TA539F57E82A04D410FE11E10ACC830CF7CD71F7B_H
#ifndef QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#define QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#define ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#define BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifndef RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#define RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifndef ALLOCATOR_T62A091275262E7067EAAD565B67764FA877D58D6_H
#define ALLOCATOR_T62A091275262E7067EAAD565B67764FA877D58D6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.Allocator
struct  Allocator_t62A091275262E7067EAAD565B67764FA877D58D6 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t62A091275262E7067EAAD565B67764FA877D58D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALLOCATOR_T62A091275262E7067EAAD565B67764FA877D58D6_H
#ifndef POSE_T2997DE3CB3863E4D78FCF42B46FC481818823F29_H
#define POSE_T2997DE3CB3863E4D78FCF42B46FC481818823F29_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Pose
struct  Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___rotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields, ___k_Identity_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___k_Identity_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSE_T2997DE3CB3863E4D78FCF42B46FC481818823F29_H
#ifndef XRARKITBLENDSHAPELOCATION_T2F4D95E87BAFF0BB690B931B8C91D77859D34C28_H
#define XRARKITBLENDSHAPELOCATION_T2F4D95E87BAFF0BB690B931B8C91D77859D34C28_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARKit.XRArkitBlendShapeLocation
struct  XRArkitBlendShapeLocation_t2F4D95E87BAFF0BB690B931B8C91D77859D34C28 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.XRArkitBlendShapeLocation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XRArkitBlendShapeLocation_t2F4D95E87BAFF0BB690B931B8C91D77859D34C28, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRARKITBLENDSHAPELOCATION_T2F4D95E87BAFF0BB690B931B8C91D77859D34C28_H
#ifndef FACESUBSYSTEMCAPABILITIES_TA2A2AD15E172EF1B91CE85994931F8C11330BB2C_H
#define FACESUBSYSTEMCAPABILITIES_TA2A2AD15E172EF1B91CE85994931F8C11330BB2C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.FaceSubsystem.Providing.FaceSubsystemCapabilities
struct  FaceSubsystemCapabilities_tA2A2AD15E172EF1B91CE85994931F8C11330BB2C 
{
public:
	// System.Int32 UnityEngine.XR.FaceSubsystem.Providing.FaceSubsystemCapabilities::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FaceSubsystemCapabilities_tA2A2AD15E172EF1B91CE85994931F8C11330BB2C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FACESUBSYSTEMCAPABILITIES_TA2A2AD15E172EF1B91CE85994931F8C11330BB2C_H
#ifndef XRFACESUBSYSTEM_TE0367EC4739D16FE0CA2820AAF6688D9ABA66B86_H
#define XRFACESUBSYSTEM_TE0367EC4739D16FE0CA2820AAF6688D9ABA66B86_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.FaceSubsystem.XRFaceSubsystem
struct  XRFaceSubsystem_tE0367EC4739D16FE0CA2820AAF6688D9ABA66B86  : public Subsystem_1_t7A31187B2E3DFF03501265C781C9A8547A073F0C
{
public:
	// System.Action`1<UnityEngine.XR.FaceSubsystem.FaceAddedEventArgs> UnityEngine.XR.FaceSubsystem.XRFaceSubsystem::faceAdded
	Action_1_t71656D6F61C5A84CD1DBA2455EC2625758354C47 * ___faceAdded_4;
	// System.Action`1<UnityEngine.XR.FaceSubsystem.FaceUpdatedEventArgs> UnityEngine.XR.FaceSubsystem.XRFaceSubsystem::faceUpdated
	Action_1_tF49EC82BFF8B6A594947CD8057B9CC411B2B1CCB * ___faceUpdated_5;
	// System.Action`1<UnityEngine.XR.FaceSubsystem.FaceRemovedEventArgs> UnityEngine.XR.FaceSubsystem.XRFaceSubsystem::faceRemoved
	Action_1_tFBB1F2AD232E22389CE7AB044A0E7C4D3FD628FC * ___faceRemoved_6;

public:
	inline static int32_t get_offset_of_faceAdded_4() { return static_cast<int32_t>(offsetof(XRFaceSubsystem_tE0367EC4739D16FE0CA2820AAF6688D9ABA66B86, ___faceAdded_4)); }
	inline Action_1_t71656D6F61C5A84CD1DBA2455EC2625758354C47 * get_faceAdded_4() const { return ___faceAdded_4; }
	inline Action_1_t71656D6F61C5A84CD1DBA2455EC2625758354C47 ** get_address_of_faceAdded_4() { return &___faceAdded_4; }
	inline void set_faceAdded_4(Action_1_t71656D6F61C5A84CD1DBA2455EC2625758354C47 * value)
	{
		___faceAdded_4 = value;
		Il2CppCodeGenWriteBarrier((&___faceAdded_4), value);
	}

	inline static int32_t get_offset_of_faceUpdated_5() { return static_cast<int32_t>(offsetof(XRFaceSubsystem_tE0367EC4739D16FE0CA2820AAF6688D9ABA66B86, ___faceUpdated_5)); }
	inline Action_1_tF49EC82BFF8B6A594947CD8057B9CC411B2B1CCB * get_faceUpdated_5() const { return ___faceUpdated_5; }
	inline Action_1_tF49EC82BFF8B6A594947CD8057B9CC411B2B1CCB ** get_address_of_faceUpdated_5() { return &___faceUpdated_5; }
	inline void set_faceUpdated_5(Action_1_tF49EC82BFF8B6A594947CD8057B9CC411B2B1CCB * value)
	{
		___faceUpdated_5 = value;
		Il2CppCodeGenWriteBarrier((&___faceUpdated_5), value);
	}

	inline static int32_t get_offset_of_faceRemoved_6() { return static_cast<int32_t>(offsetof(XRFaceSubsystem_tE0367EC4739D16FE0CA2820AAF6688D9ABA66B86, ___faceRemoved_6)); }
	inline Action_1_tFBB1F2AD232E22389CE7AB044A0E7C4D3FD628FC * get_faceRemoved_6() const { return ___faceRemoved_6; }
	inline Action_1_tFBB1F2AD232E22389CE7AB044A0E7C4D3FD628FC ** get_address_of_faceRemoved_6() { return &___faceRemoved_6; }
	inline void set_faceRemoved_6(Action_1_tFBB1F2AD232E22389CE7AB044A0E7C4D3FD628FC * value)
	{
		___faceRemoved_6 = value;
		Il2CppCodeGenWriteBarrier((&___faceRemoved_6), value);
	}
};

struct XRFaceSubsystem_tE0367EC4739D16FE0CA2820AAF6688D9ABA66B86_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.FaceSubsystem.FaceAddedEventArgs> UnityEngine.XR.FaceSubsystem.XRFaceSubsystem::s_FacesAddedThisFrame
	List_1_t2958218D149DCA487DD6310C94D4D3A64A78828D * ___s_FacesAddedThisFrame_1;
	// System.Collections.Generic.List`1<UnityEngine.XR.FaceSubsystem.FaceUpdatedEventArgs> UnityEngine.XR.FaceSubsystem.XRFaceSubsystem::s_FacesUpdatedThisFrame
	List_1_t944F569C71FD46C9CE37163BF0E74B37BF3D3084 * ___s_FacesUpdatedThisFrame_2;
	// System.Collections.Generic.List`1<UnityEngine.XR.FaceSubsystem.FaceRemovedEventArgs> UnityEngine.XR.FaceSubsystem.XRFaceSubsystem::s_FacesRemovedThisFrame
	List_1_t72C6BEB9CFE07A0462B3D57F1A8047D81654AB11 * ___s_FacesRemovedThisFrame_3;

public:
	inline static int32_t get_offset_of_s_FacesAddedThisFrame_1() { return static_cast<int32_t>(offsetof(XRFaceSubsystem_tE0367EC4739D16FE0CA2820AAF6688D9ABA66B86_StaticFields, ___s_FacesAddedThisFrame_1)); }
	inline List_1_t2958218D149DCA487DD6310C94D4D3A64A78828D * get_s_FacesAddedThisFrame_1() const { return ___s_FacesAddedThisFrame_1; }
	inline List_1_t2958218D149DCA487DD6310C94D4D3A64A78828D ** get_address_of_s_FacesAddedThisFrame_1() { return &___s_FacesAddedThisFrame_1; }
	inline void set_s_FacesAddedThisFrame_1(List_1_t2958218D149DCA487DD6310C94D4D3A64A78828D * value)
	{
		___s_FacesAddedThisFrame_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_FacesAddedThisFrame_1), value);
	}

	inline static int32_t get_offset_of_s_FacesUpdatedThisFrame_2() { return static_cast<int32_t>(offsetof(XRFaceSubsystem_tE0367EC4739D16FE0CA2820AAF6688D9ABA66B86_StaticFields, ___s_FacesUpdatedThisFrame_2)); }
	inline List_1_t944F569C71FD46C9CE37163BF0E74B37BF3D3084 * get_s_FacesUpdatedThisFrame_2() const { return ___s_FacesUpdatedThisFrame_2; }
	inline List_1_t944F569C71FD46C9CE37163BF0E74B37BF3D3084 ** get_address_of_s_FacesUpdatedThisFrame_2() { return &___s_FacesUpdatedThisFrame_2; }
	inline void set_s_FacesUpdatedThisFrame_2(List_1_t944F569C71FD46C9CE37163BF0E74B37BF3D3084 * value)
	{
		___s_FacesUpdatedThisFrame_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_FacesUpdatedThisFrame_2), value);
	}

	inline static int32_t get_offset_of_s_FacesRemovedThisFrame_3() { return static_cast<int32_t>(offsetof(XRFaceSubsystem_tE0367EC4739D16FE0CA2820AAF6688D9ABA66B86_StaticFields, ___s_FacesRemovedThisFrame_3)); }
	inline List_1_t72C6BEB9CFE07A0462B3D57F1A8047D81654AB11 * get_s_FacesRemovedThisFrame_3() const { return ___s_FacesRemovedThisFrame_3; }
	inline List_1_t72C6BEB9CFE07A0462B3D57F1A8047D81654AB11 ** get_address_of_s_FacesRemovedThisFrame_3() { return &___s_FacesRemovedThisFrame_3; }
	inline void set_s_FacesRemovedThisFrame_3(List_1_t72C6BEB9CFE07A0462B3D57F1A8047D81654AB11 * value)
	{
		___s_FacesRemovedThisFrame_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_FacesRemovedThisFrame_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRFACESUBSYSTEM_TE0367EC4739D16FE0CA2820AAF6688D9ABA66B86_H
#ifndef ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#define ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef NATIVEARRAY_1_TE00CA77AD57C4FDA4711FEC1072D2834BB11DC23_H
#define NATIVEARRAY_1_TE00CA77AD57C4FDA4711FEC1072D2834BB11DC23_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.NativeArray`1<System.Int32>
struct  NativeArray_1_tE00CA77AD57C4FDA4711FEC1072D2834BB11DC23 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tE00CA77AD57C4FDA4711FEC1072D2834BB11DC23, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tE00CA77AD57C4FDA4711FEC1072D2834BB11DC23, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tE00CA77AD57C4FDA4711FEC1072D2834BB11DC23, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
#endif // NATIVEARRAY_1_TE00CA77AD57C4FDA4711FEC1072D2834BB11DC23_H
#ifndef NATIVEARRAY_1_T86AEDFC03CDAC131E54ED6A68B102EBD947A3F71_H
#define NATIVEARRAY_1_T86AEDFC03CDAC131E54ED6A68B102EBD947A3F71_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct  NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
#endif // NATIVEARRAY_1_T86AEDFC03CDAC131E54ED6A68B102EBD947A3F71_H
#ifndef NATIVEARRAY_1_T20B0E97D613353CCC2889E9B3D97A5612374FE74_H
#define NATIVEARRAY_1_T20B0E97D613353CCC2889E9B3D97A5612374FE74_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.NativeArray`1<UnityEngine.Vector3>
struct  NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
#endif // NATIVEARRAY_1_T20B0E97D613353CCC2889E9B3D97A5612374FE74_H
#ifndef NATIVEARRAY_1_T4C0FC59F637B1D4B704DBC2E00DA3484EBD4B50A_H
#define NATIVEARRAY_1_T4C0FC59F637B1D4B704DBC2E00DA3484EBD4B50A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARKit.XRFaceArkitBlendShapeCoefficient>
struct  NativeArray_1_t4C0FC59F637B1D4B704DBC2E00DA3484EBD4B50A 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t4C0FC59F637B1D4B704DBC2E00DA3484EBD4B50A, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t4C0FC59F637B1D4B704DBC2E00DA3484EBD4B50A, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t4C0FC59F637B1D4B704DBC2E00DA3484EBD4B50A, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
#endif // NATIVEARRAY_1_T4C0FC59F637B1D4B704DBC2E00DA3484EBD4B50A_H
#ifndef NATIVEARRAY_1_T463B0B9666832AF1890B0290C471BF44D1A80557_H
#define NATIVEARRAY_1_T463B0B9666832AF1890B0290C471BF44D1A80557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.FaceSubsystem.XRFace>
struct  NativeArray_1_t463B0B9666832AF1890B0290C471BF44D1A80557 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t463B0B9666832AF1890B0290C471BF44D1A80557, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t463B0B9666832AF1890B0290C471BF44D1A80557, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t463B0B9666832AF1890B0290C471BF44D1A80557, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
#endif // NATIVEARRAY_1_T463B0B9666832AF1890B0290C471BF44D1A80557_H
#ifndef ARKITFACESUBSYSTEM_T24E01CF6C590EFAC9B51F7B1D341C646A69E9CD9_H
#define ARKITFACESUBSYSTEM_T24E01CF6C590EFAC9B51F7B1D341C646A69E9CD9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARKit.ARKitFaceSubsystem
struct  ARKitFaceSubsystem_t24E01CF6C590EFAC9B51F7B1D341C646A69E9CD9  : public XRFaceSubsystem_tE0367EC4739D16FE0CA2820AAF6688D9ABA66B86
{
public:

public:
};

struct ARKitFaceSubsystem_t24E01CF6C590EFAC9B51F7B1D341C646A69E9CD9_StaticFields
{
public:
	// UnityEngine.XR.FaceSubsystem.XRFaceSubsystem UnityEngine.XR.ARKit.ARKitFaceSubsystem::s_CurrentInstance
	XRFaceSubsystem_tE0367EC4739D16FE0CA2820AAF6688D9ABA66B86 * ___s_CurrentInstance_7;

public:
	inline static int32_t get_offset_of_s_CurrentInstance_7() { return static_cast<int32_t>(offsetof(ARKitFaceSubsystem_t24E01CF6C590EFAC9B51F7B1D341C646A69E9CD9_StaticFields, ___s_CurrentInstance_7)); }
	inline XRFaceSubsystem_tE0367EC4739D16FE0CA2820AAF6688D9ABA66B86 * get_s_CurrentInstance_7() const { return ___s_CurrentInstance_7; }
	inline XRFaceSubsystem_tE0367EC4739D16FE0CA2820AAF6688D9ABA66B86 ** get_address_of_s_CurrentInstance_7() { return &___s_CurrentInstance_7; }
	inline void set_s_CurrentInstance_7(XRFaceSubsystem_tE0367EC4739D16FE0CA2820AAF6688D9ABA66B86 * value)
	{
		___s_CurrentInstance_7 = value;
		Il2CppCodeGenWriteBarrier((&___s_CurrentInstance_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARKITFACESUBSYSTEM_T24E01CF6C590EFAC9B51F7B1D341C646A69E9CD9_H
#ifndef XRFACEARKITBLENDSHAPECOEFFICIENT_T829BF667B33D5FF78CD88C48B4DA4A69076AB42E_H
#define XRFACEARKITBLENDSHAPECOEFFICIENT_T829BF667B33D5FF78CD88C48B4DA4A69076AB42E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARKit.XRFaceArkitBlendShapeCoefficient
struct  XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E 
{
public:
	// UnityEngine.XR.ARKit.XRArkitBlendShapeLocation UnityEngine.XR.ARKit.XRFaceArkitBlendShapeCoefficient::m_ArkitBlendShapeLocation
	int32_t ___m_ArkitBlendShapeLocation_0;
	// System.Single UnityEngine.XR.ARKit.XRFaceArkitBlendShapeCoefficient::m_Coefficient
	float ___m_Coefficient_1;

public:
	inline static int32_t get_offset_of_m_ArkitBlendShapeLocation_0() { return static_cast<int32_t>(offsetof(XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E, ___m_ArkitBlendShapeLocation_0)); }
	inline int32_t get_m_ArkitBlendShapeLocation_0() const { return ___m_ArkitBlendShapeLocation_0; }
	inline int32_t* get_address_of_m_ArkitBlendShapeLocation_0() { return &___m_ArkitBlendShapeLocation_0; }
	inline void set_m_ArkitBlendShapeLocation_0(int32_t value)
	{
		___m_ArkitBlendShapeLocation_0 = value;
	}

	inline static int32_t get_offset_of_m_Coefficient_1() { return static_cast<int32_t>(offsetof(XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E, ___m_Coefficient_1)); }
	inline float get_m_Coefficient_1() const { return ___m_Coefficient_1; }
	inline float* get_address_of_m_Coefficient_1() { return &___m_Coefficient_1; }
	inline void set_m_Coefficient_1(float value)
	{
		___m_Coefficient_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRFACEARKITBLENDSHAPECOEFFICIENT_T829BF667B33D5FF78CD88C48B4DA4A69076AB42E_H
#ifndef FACESUBSYSTEMPARAMS_TA2026F8E1817583A4FCE47A581DD5C29F3015040_H
#define FACESUBSYSTEMPARAMS_TA2026F8E1817583A4FCE47A581DD5C29F3015040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.FaceSubsystem.Providing.FaceSubsystemParams
struct  FaceSubsystemParams_tA2026F8E1817583A4FCE47A581DD5C29F3015040 
{
public:
	// System.String UnityEngine.XR.FaceSubsystem.Providing.FaceSubsystemParams::id
	String_t* ___id_0;
	// System.Type UnityEngine.XR.FaceSubsystem.Providing.FaceSubsystemParams::implementationType
	Type_t * ___implementationType_1;
	// UnityEngine.XR.FaceSubsystem.Providing.FaceSubsystemCapabilities UnityEngine.XR.FaceSubsystem.Providing.FaceSubsystemParams::<capabilities>k__BackingField
	int32_t ___U3CcapabilitiesU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(FaceSubsystemParams_tA2026F8E1817583A4FCE47A581DD5C29F3015040, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((&___id_0), value);
	}

	inline static int32_t get_offset_of_implementationType_1() { return static_cast<int32_t>(offsetof(FaceSubsystemParams_tA2026F8E1817583A4FCE47A581DD5C29F3015040, ___implementationType_1)); }
	inline Type_t * get_implementationType_1() const { return ___implementationType_1; }
	inline Type_t ** get_address_of_implementationType_1() { return &___implementationType_1; }
	inline void set_implementationType_1(Type_t * value)
	{
		___implementationType_1 = value;
		Il2CppCodeGenWriteBarrier((&___implementationType_1), value);
	}

	inline static int32_t get_offset_of_U3CcapabilitiesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FaceSubsystemParams_tA2026F8E1817583A4FCE47A581DD5C29F3015040, ___U3CcapabilitiesU3Ek__BackingField_2)); }
	inline int32_t get_U3CcapabilitiesU3Ek__BackingField_2() const { return ___U3CcapabilitiesU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CcapabilitiesU3Ek__BackingField_2() { return &___U3CcapabilitiesU3Ek__BackingField_2; }
	inline void set_U3CcapabilitiesU3Ek__BackingField_2(int32_t value)
	{
		___U3CcapabilitiesU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.FaceSubsystem.Providing.FaceSubsystemParams
struct FaceSubsystemParams_tA2026F8E1817583A4FCE47A581DD5C29F3015040_marshaled_pinvoke
{
	char* ___id_0;
	Type_t * ___implementationType_1;
	int32_t ___U3CcapabilitiesU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.FaceSubsystem.Providing.FaceSubsystemParams
struct FaceSubsystemParams_tA2026F8E1817583A4FCE47A581DD5C29F3015040_marshaled_com
{
	Il2CppChar* ___id_0;
	Type_t * ___implementationType_1;
	int32_t ___U3CcapabilitiesU3Ek__BackingField_2;
};
#endif // FACESUBSYSTEMPARAMS_TA2026F8E1817583A4FCE47A581DD5C29F3015040_H
#ifndef XRFACE_TD2DF3125FE693EE9DABE72A78349CB7F07A51246_H
#define XRFACE_TD2DF3125FE693EE9DABE72A78349CB7F07A51246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.FaceSubsystem.XRFace
struct  XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246 
{
public:
	// UnityEngine.Experimental.XR.TrackableId UnityEngine.XR.FaceSubsystem.XRFace::m_TrackableId
	TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.FaceSubsystem.XRFace::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_1;
	// System.Int32 UnityEngine.XR.FaceSubsystem.XRFace::m_WasUpdated
	int32_t ___m_WasUpdated_2;
	// System.Int32 UnityEngine.XR.FaceSubsystem.XRFace::m_IsTracked
	int32_t ___m_IsTracked_3;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246, ___m_TrackableId_0)); }
	inline TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246, ___m_Pose_1)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_WasUpdated_2() { return static_cast<int32_t>(offsetof(XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246, ___m_WasUpdated_2)); }
	inline int32_t get_m_WasUpdated_2() const { return ___m_WasUpdated_2; }
	inline int32_t* get_address_of_m_WasUpdated_2() { return &___m_WasUpdated_2; }
	inline void set_m_WasUpdated_2(int32_t value)
	{
		___m_WasUpdated_2 = value;
	}

	inline static int32_t get_offset_of_m_IsTracked_3() { return static_cast<int32_t>(offsetof(XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246, ___m_IsTracked_3)); }
	inline int32_t get_m_IsTracked_3() const { return ___m_IsTracked_3; }
	inline int32_t* get_address_of_m_IsTracked_3() { return &___m_IsTracked_3; }
	inline void set_m_IsTracked_3(int32_t value)
	{
		___m_IsTracked_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRFACE_TD2DF3125FE693EE9DABE72A78349CB7F07A51246_H
#ifndef ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#define ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifndef DELEGATEXRFACEANCHORADDED_T4C37182B2443CE6D65E2C406B6BC527FF22E7268_H
#define DELEGATEXRFACEANCHORADDED_T4C37182B2443CE6D65E2C406B6BC527FF22E7268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceAnchorAdded
struct  DelegateXrFaceAnchorAdded_t4C37182B2443CE6D65E2C406B6BC527FF22E7268  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATEXRFACEANCHORADDED_T4C37182B2443CE6D65E2C406B6BC527FF22E7268_H
#ifndef DELEGATEXRFACEANCHORREMOVED_T38731B8AEB3696EC1281AFE0D0E165C3C18C4BB4_H
#define DELEGATEXRFACEANCHORREMOVED_T38731B8AEB3696EC1281AFE0D0E165C3C18C4BB4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceAnchorRemoved
struct  DelegateXrFaceAnchorRemoved_t38731B8AEB3696EC1281AFE0D0E165C3C18C4BB4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATEXRFACEANCHORREMOVED_T38731B8AEB3696EC1281AFE0D0E165C3C18C4BB4_H
#ifndef DELEGATEXRFACEANCHORUPDATED_TCBBB53FC1132F3A2AAC5E0C1E3E6CA34E65F8C7C_H
#define DELEGATEXRFACEANCHORUPDATED_TCBBB53FC1132F3A2AAC5E0C1E3E6CA34E65F8C7C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceAnchorUpdated
struct  DelegateXrFaceAnchorUpdated_tCBBB53FC1132F3A2AAC5E0C1E3E6CA34E65F8C7C  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATEXRFACEANCHORUPDATED_TCBBB53FC1132F3A2AAC5E0C1E3E6CA34E65F8C7C_H
#ifndef DELEGATEXRFACESESSIONBEGINFRAME_T03BCAADC9955F8AF986BD37858554A2BB5503D62_H
#define DELEGATEXRFACESESSIONBEGINFRAME_T03BCAADC9955F8AF986BD37858554A2BB5503D62_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceSessionBeginFrame
struct  DelegateXrFaceSessionBeginFrame_t03BCAADC9955F8AF986BD37858554A2BB5503D62  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATEXRFACESESSIONBEGINFRAME_T03BCAADC9955F8AF986BD37858554A2BB5503D62_H
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.List`1<UnityEngine.XR.FaceSubsystem.XRFace>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_mDE5027112757C65CAB14DEB36BC94F120676590B_gshared (List_1_tB714496A195018B9F2FE0ABA6BE5AA9B1EB10942 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.XR.FaceSubsystem.XRFace>(System.Void*,System.Int32,Unity.Collections.Allocator)
extern "C" IL2CPP_METHOD_ATTR NativeArray_1_t463B0B9666832AF1890B0290C471BF44D1A80557  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisXRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246_mDBCD18D72EE18412B6D0E5343B73A48F70135F76_gshared (void* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.FaceSubsystem.XRFace>::get_Capacity()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m4F1077003DAB391699C5CAF1A027F12D2B525969_gshared (List_1_tB714496A195018B9F2FE0ABA6BE5AA9B1EB10942 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.FaceSubsystem.XRFace>::set_Capacity(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1_set_Capacity_m01AC4D143726E324FEBC9025C07096C4E98E2DDE_gshared (List_1_tB714496A195018B9F2FE0ABA6BE5AA9B1EB10942 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.FaceSubsystem.XRFace>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void List_1_AddRange_m8D8DE833E34F3C9AEE197852A28DF22C2B5B9B3B_gshared (List_1_tB714496A195018B9F2FE0ABA6BE5AA9B1EB10942 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_m0B6A7366C5386991AB01BAFF1FACE2DC5BAC410A_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Capacity()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m3BECB289CE03E777262B84E4B8096DF61F6A5044_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Capacity(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1_set_Capacity_mF25A85F4FB85F5CECD1D70B97A713F24FCEAB161_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t p0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Vector3>(System.Void*,System.Int32,Unity.Collections.Allocator)
extern "C" IL2CPP_METHOD_ATTR NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_m1BF2DFBAF38B30767E9E7DEA8AC2BE2672BC8714_gshared (void* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void List_1_AddRange_mDAF7D94514D9CCE06F0DF44740372B6C43662035_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_m4922931CB6A2D5FF3678089D45EDEDB901DA2EBC_gshared (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Capacity()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m1A53A0BAC1C93A2F3D0E669490E8F110C2B4475E_gshared (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::set_Capacity(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1_set_Capacity_mCD857171EDE617A020E9E7EEDDB09F67DCBEA057_gshared (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * __this, int32_t p0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Vector2>(System.Void*,System.Int32,Unity.Collections.Allocator)
extern "C" IL2CPP_METHOD_ATTR NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_mAFBE7D772DDF7690DD8E11CE386ECC88DE85904E_gshared (void* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void List_1_AddRange_mB209F616554B35E19C68705964701A7BD37FC169_gshared (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_m33B9E3FC1A7C9DF40DF154F08DF7D71F69FDCBD6_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m6F328BC5CB16A5F1F9CF4F10E77173065F24EABE_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1_set_Capacity_m3FBA882CEEB035B43469A05A1E7866E9427623DD_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t p0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Int32>(System.Void*,System.Int32,Unity.Collections.Allocator)
extern "C" IL2CPP_METHOD_ATTR NativeArray_1_tE00CA77AD57C4FDA4711FEC1072D2834BB11DC23  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m9FFD99950B30E3CA4BFD657FB6A7BA744503D7CC_gshared (void* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void List_1_AddRange_mFABE59B1FA98DE337AAA7F8B65164784528C2AF7_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARKit.XRFaceArkitBlendShapeCoefficient>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_mEEECECE6D56999D020D7242EDE87DB619BA3227D_gshared (List_1_t2DA394A648E4B185A0CA629942B1CBF7DE64D672 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARKit.XRFaceArkitBlendShapeCoefficient>::get_Capacity()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m1C75B3978DE5B3985710482FDA9577C669909D29_gshared (List_1_t2DA394A648E4B185A0CA629942B1CBF7DE64D672 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARKit.XRFaceArkitBlendShapeCoefficient>::set_Capacity(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1_set_Capacity_m0C9768C9A3A74A3259CFE20F26B482DB7590DC69_gshared (List_1_t2DA394A648E4B185A0CA629942B1CBF7DE64D672 * __this, int32_t p0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.XR.ARKit.XRFaceArkitBlendShapeCoefficient>(System.Void*,System.Int32,Unity.Collections.Allocator)
extern "C" IL2CPP_METHOD_ATTR NativeArray_1_t4C0FC59F637B1D4B704DBC2E00DA3484EBD4B50A  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisXRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E_mD99990BF4F5C73097C33B9E5382D77E7802A2F5E_gshared (void* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARKit.XRFaceArkitBlendShapeCoefficient>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void List_1_AddRange_m7FFC58CA1D1ED3109FBFE810DDF02D4A4E32413D_gshared (List_1_t2DA394A648E4B185A0CA629942B1CBF7DE64D672 * __this, RuntimeObject* p0, const RuntimeMethod* method);

// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem::UnityARKit_face_anchor_added(UnityEngine.XR.FaceSubsystem.XRFace)
extern "C" IL2CPP_METHOD_ATTR void ARKitFaceSubsystem_UnityARKit_face_anchor_added_m85E7BABAADE00B8C52811A5030BF442EF075F3D8 (XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  ___anchor0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem::UnityARKit_face_anchor_updated(UnityEngine.XR.FaceSubsystem.XRFace)
extern "C" IL2CPP_METHOD_ATTR void ARKitFaceSubsystem_UnityARKit_face_anchor_updated_mEB09AF3DD39C3D3D78B0363CD23AFCBCE8DF29BD (XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  ___anchor0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem::UnityARKit_face_anchor_removed(UnityEngine.XR.FaceSubsystem.XRFace)
extern "C" IL2CPP_METHOD_ATTR void ARKitFaceSubsystem_UnityARKit_face_anchor_removed_mC0E739A896D0400684C1864435505D880C70E559 (XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  ___anchor0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem::UnityARKit_face_session_begin_frame()
extern "C" IL2CPP_METHOD_ATTR void ARKitFaceSubsystem_UnityARKit_face_session_begin_frame_m0E329D6FAF6F81552C95BBCAACB9FEDEB6E2B313 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.FaceSubsystem.XRFaceSubsystem::InvokeFaceAddedCallback(UnityEngine.XR.FaceSubsystem.XRFace,UnityEngine.XR.FaceSubsystem.XRFaceSubsystem)
extern "C" IL2CPP_METHOD_ATTR void XRFaceSubsystem_InvokeFaceAddedCallback_m171C63EE1C3461A0BD3E463BC91BCF024733DEEC (XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  p0, XRFaceSubsystem_tE0367EC4739D16FE0CA2820AAF6688D9ABA66B86 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.FaceSubsystem.XRFaceSubsystem::InvokeFaceUpdatedCallback(UnityEngine.XR.FaceSubsystem.XRFace,UnityEngine.XR.FaceSubsystem.XRFaceSubsystem)
extern "C" IL2CPP_METHOD_ATTR void XRFaceSubsystem_InvokeFaceUpdatedCallback_m1FAA7E55979A9B1AAC41A32110C626B24574F2A4 (XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  p0, XRFaceSubsystem_tE0367EC4739D16FE0CA2820AAF6688D9ABA66B86 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.FaceSubsystem.XRFaceSubsystem::InvokeFaceRemovedCallback(UnityEngine.XR.FaceSubsystem.XRFace,UnityEngine.XR.FaceSubsystem.XRFaceSubsystem)
extern "C" IL2CPP_METHOD_ATTR void XRFaceSubsystem_InvokeFaceRemovedCallback_mE8E684085CD986C2AAFEC418878134E8672DFFEA (XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  p0, XRFaceSubsystem_tE0367EC4739D16FE0CA2820AAF6688D9ABA66B86 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.FaceSubsystem.XRFaceSubsystem::OnBeginFrame()
extern "C" IL2CPP_METHOD_ATTR void XRFaceSubsystem_OnBeginFrame_mD5C8A78DB73EB4804A47FFDC9F15B0042FA7E5E7 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.FaceSubsystem.XRFaceSubsystem::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XRFaceSubsystem__ctor_m71EAFAFFA8CED999784A658F0D16E83335303138 (XRFaceSubsystem_tE0367EC4739D16FE0CA2820AAF6688D9ABA66B86 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem::UnityARKit_FaceProvider_Initialize()
extern "C" IL2CPP_METHOD_ATTR void ARKitFaceSubsystem_UnityARKit_FaceProvider_Initialize_mDC61B1E4243285043F5A1CBC344F725EC0FC9E9F (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem::UnityARKit_FaceProvider_Shutdown()
extern "C" IL2CPP_METHOD_ATTR void ARKitFaceSubsystem_UnityARKit_FaceProvider_Shutdown_mCFF708E77F0C69BBCD28FC35D2041DC9288BA76E (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceAnchorAdded::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DelegateXrFaceAnchorAdded__ctor_m2336D2D7EF5A54A108E7149A48DC52A24436B3F0 (DelegateXrFaceAnchorAdded_t4C37182B2443CE6D65E2C406B6BC527FF22E7268 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceAnchorUpdated::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DelegateXrFaceAnchorUpdated__ctor_m5CCB49DA3E21A8C12F6321C904EE2D09AF430B2E (DelegateXrFaceAnchorUpdated_tCBBB53FC1132F3A2AAC5E0C1E3E6CA34E65F8C7C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceAnchorRemoved::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DelegateXrFaceAnchorRemoved__ctor_m3117AF62C46947D0CBE299C775A2536A80556B89 (DelegateXrFaceAnchorRemoved_t38731B8AEB3696EC1281AFE0D0E165C3C18C4BB4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceSessionBeginFrame::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DelegateXrFaceSessionBeginFrame__ctor_m450095C59B3611094948B045D9E05A7A36598356 (DelegateXrFaceSessionBeginFrame_t03BCAADC9955F8AF986BD37858554A2BB5503D62 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem::UnityARKit_FaceProvider_SetFaceAnchorCallbacks(UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceAnchorAdded,UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceAnchorUpdated,UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceAnchorRemoved,UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceSessionBeginFrame)
extern "C" IL2CPP_METHOD_ATTR void ARKitFaceSubsystem_UnityARKit_FaceProvider_SetFaceAnchorCallbacks_mCCED563595101D0E86284CA574EED5AE9BE602E4 (DelegateXrFaceAnchorAdded_t4C37182B2443CE6D65E2C406B6BC527FF22E7268 * ___faceAnchorAddedCallback0, DelegateXrFaceAnchorUpdated_tCBBB53FC1132F3A2AAC5E0C1E3E6CA34E65F8C7C * ___faceAnchorUpdatedCallback1, DelegateXrFaceAnchorRemoved_t38731B8AEB3696EC1281AFE0D0E165C3C18C4BB4 * ___faceAnchorRemovedCallback2, DelegateXrFaceSessionBeginFrame_t03BCAADC9955F8AF986BD37858554A2BB5503D62 * ___faceSessionBeginFrameCallback3, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem::UnityARKit_FaceProvider_Start()
extern "C" IL2CPP_METHOD_ATTR void ARKitFaceSubsystem_UnityARKit_FaceProvider_Start_m2687BC560F4269B7EB699F64B533FAE0BBE67167 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem::UnityARKit_FaceProvider_Stop()
extern "C" IL2CPP_METHOD_ATTR void ARKitFaceSubsystem_UnityARKit_FaceProvider_Stop_m814D4D3BBF89E7BC4E3F742C5C4A40FA0622CA81 (const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitFaceSubsystem::TryGetNativeAllFaces(System.Collections.Generic.List`1<UnityEngine.XR.FaceSubsystem.XRFace>)
extern "C" IL2CPP_METHOD_ATTR bool ARKitFaceSubsystem_TryGetNativeAllFaces_mDABACB017D0EA4CF9AED31AB117A2263D4451C53 (List_1_tB714496A195018B9F2FE0ABA6BE5AA9B1EB10942 * ___facesOut0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitFaceSubsystem::TryRemoveNativeFace(UnityEngine.Experimental.XR.TrackableId)
extern "C" IL2CPP_METHOD_ATTR bool ARKitFaceSubsystem_TryRemoveNativeFace_m23A47DE34E96D62D4F8A5677B38BE74C2DBFCBA8 (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___faceId0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitFaceSubsystem::TryGetNativeFaceMeshVertices(UnityEngine.Experimental.XR.TrackableId,System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C" IL2CPP_METHOD_ATTR bool ARKitFaceSubsystem_TryGetNativeFaceMeshVertices_m2FDF81CC52182CE6B1DCA1508C987C6B0957643B (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___faceId0, List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___verticesOut1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitFaceSubsystem::TryGetNativeFaceMeshUVs(UnityEngine.Experimental.XR.TrackableId,System.Collections.Generic.List`1<UnityEngine.Vector2>)
extern "C" IL2CPP_METHOD_ATTR bool ARKitFaceSubsystem_TryGetNativeFaceMeshUVs_m2C2168403C67F53FE45A8083E25153ECD145EE8C (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___faceId0, List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ___uvsOut1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitFaceSubsystem::TryGetNativeFaceMeshIndices(UnityEngine.Experimental.XR.TrackableId,System.Collections.Generic.List`1<System.Int32>)
extern "C" IL2CPP_METHOD_ATTR bool ARKitFaceSubsystem_TryGetNativeFaceMeshIndices_m5B9319A726C2CB76B7A1CAB383BCA52FF656A1F1 (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___faceId0, List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___indicesOut1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitFaceSubsystem::TryGetNativeFaceBlendCoefficients(UnityEngine.Experimental.XR.TrackableId,System.Collections.Generic.List`1<UnityEngine.XR.ARKit.XRFaceArkitBlendShapeCoefficient>)
extern "C" IL2CPP_METHOD_ATTR bool ARKitFaceSubsystem_TryGetNativeFaceBlendCoefficients_m394B48DF794BA51C2C560A42C4D64DD69F67B489 (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___faceId0, List_1_t2DA394A648E4B185A0CA629942B1CBF7DE64D672 * ___coefficientsOut1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.FaceSubsystem.Providing.FaceSubsystemParams::set_supportsFacePose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void FaceSubsystemParams_set_supportsFacePose_mCB88897B661335D2057641A82C31DD59FAE87F9C (FaceSubsystemParams_tA2026F8E1817583A4FCE47A581DD5C29F3015040 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.FaceSubsystem.Providing.FaceSubsystemParams::set_supportsFaceMeshVerticesAndIndices(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void FaceSubsystemParams_set_supportsFaceMeshVerticesAndIndices_m4E80156260A1D99C0B2D06DC0C876B0CE4153C13 (FaceSubsystemParams_tA2026F8E1817583A4FCE47A581DD5C29F3015040 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.FaceSubsystem.Providing.FaceSubsystemParams::set_supportsFaceMeshUVs(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void FaceSubsystemParams_set_supportsFaceMeshUVs_mA7F89E8FF2761803FBAF5DB4B09984CE5100BC07 (FaceSubsystemParams_tA2026F8E1817583A4FCE47A581DD5C29F3015040 * __this, bool p0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.FaceSubsystem.XRFaceSubsystemDescriptor::Create(UnityEngine.XR.FaceSubsystem.Providing.FaceSubsystemParams)
extern "C" IL2CPP_METHOD_ATTR void XRFaceSubsystemDescriptor_Create_mB90EE47930EAA87170DEEE2A0FFF3E2918329E8D (FaceSubsystemParams_tA2026F8E1817583A4FCE47A581DD5C29F3015040  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.FaceSubsystem.XRFace>::Clear()
inline void List_1_Clear_mDE5027112757C65CAB14DEB36BC94F120676590B (List_1_tB714496A195018B9F2FE0ABA6BE5AA9B1EB10942 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB714496A195018B9F2FE0ABA6BE5AA9B1EB10942 *, const RuntimeMethod*))List_1_Clear_mDE5027112757C65CAB14DEB36BC94F120676590B_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARKit.ARKitFaceSubsystem::UnityARKit_FaceProvider_TryGetAllFaces(System.IntPtr&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool ARKitFaceSubsystem_UnityARKit_FaceProvider_TryGetAllFaces_mDB7119BF076A30AEC53514A5F06651B6C883C95D (intptr_t* ___ptrArrayUnityXrFace0, int32_t* ___numArrayFaces1, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027 (intptr_t p0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.XR.FaceSubsystem.XRFace>(System.Void*,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_t463B0B9666832AF1890B0290C471BF44D1A80557  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisXRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246_mDBCD18D72EE18412B6D0E5343B73A48F70135F76 (void* p0, int32_t p1, int32_t p2, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t463B0B9666832AF1890B0290C471BF44D1A80557  (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisXRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246_mDBCD18D72EE18412B6D0E5343B73A48F70135F76_gshared)(p0, p1, p2, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.FaceSubsystem.XRFace>::get_Capacity()
inline int32_t List_1_get_Capacity_m4F1077003DAB391699C5CAF1A027F12D2B525969 (List_1_tB714496A195018B9F2FE0ABA6BE5AA9B1EB10942 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB714496A195018B9F2FE0ABA6BE5AA9B1EB10942 *, const RuntimeMethod*))List_1_get_Capacity_m4F1077003DAB391699C5CAF1A027F12D2B525969_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.FaceSubsystem.XRFace>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_m01AC4D143726E324FEBC9025C07096C4E98E2DDE (List_1_tB714496A195018B9F2FE0ABA6BE5AA9B1EB10942 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB714496A195018B9F2FE0ABA6BE5AA9B1EB10942 *, int32_t, const RuntimeMethod*))List_1_set_Capacity_m01AC4D143726E324FEBC9025C07096C4E98E2DDE_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.FaceSubsystem.XRFace>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m8D8DE833E34F3C9AEE197852A28DF22C2B5B9B3B (List_1_tB714496A195018B9F2FE0ABA6BE5AA9B1EB10942 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB714496A195018B9F2FE0ABA6BE5AA9B1EB10942 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m8D8DE833E34F3C9AEE197852A28DF22C2B5B9B3B_gshared)(__this, p0, method);
}
// System.Boolean UnityEngine.XR.ARKit.ARKitFaceSubsystem::UnityARKit_FaceProvider_TryRemoveFace(UnityEngine.Experimental.XR.TrackableId)
extern "C" IL2CPP_METHOD_ATTR bool ARKitFaceSubsystem_UnityARKit_FaceProvider_TryRemoveFace_m311847F58873432C8C895CCC2F1CCB5A8991114F (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___faceId0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_m0B6A7366C5386991AB01BAFF1FACE2DC5BAC410A (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))List_1_Clear_m0B6A7366C5386991AB01BAFF1FACE2DC5BAC410A_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARKit.ARKitFaceSubsystem::UnityARKit_FaceProvider_TryGetFaceMeshVertices(UnityEngine.Experimental.XR.TrackableId,System.IntPtr&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool ARKitFaceSubsystem_UnityARKit_FaceProvider_TryGetFaceMeshVertices_mBA68D741B9E973699CD229737192CC2806731723 (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___faceId0, intptr_t* ___ptrVertexData1, int32_t* ___numArrayVertices2, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Capacity()
inline int32_t List_1_get_Capacity_m3BECB289CE03E777262B84E4B8096DF61F6A5044 (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))List_1_get_Capacity_m3BECB289CE03E777262B84E4B8096DF61F6A5044_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_mF25A85F4FB85F5CECD1D70B97A713F24FCEAB161 (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, int32_t, const RuntimeMethod*))List_1_set_Capacity_mF25A85F4FB85F5CECD1D70B97A713F24FCEAB161_gshared)(__this, p0, method);
}
// Unity.Collections.NativeArray`1<!!0> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Vector3>(System.Void*,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_m1BF2DFBAF38B30767E9E7DEA8AC2BE2672BC8714 (void* p0, int32_t p1, int32_t p2, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_m1BF2DFBAF38B30767E9E7DEA8AC2BE2672BC8714_gshared)(p0, p1, p2, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_mDAF7D94514D9CCE06F0DF44740372B6C43662035 (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_mDAF7D94514D9CCE06F0DF44740372B6C43662035_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Clear()
inline void List_1_Clear_m4922931CB6A2D5FF3678089D45EDEDB901DA2EBC (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *, const RuntimeMethod*))List_1_Clear_m4922931CB6A2D5FF3678089D45EDEDB901DA2EBC_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARKit.ARKitFaceSubsystem::UnityARKit_FaceProvider_TryGetFaceMeshUVs(UnityEngine.Experimental.XR.TrackableId,System.IntPtr&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool ARKitFaceSubsystem_UnityARKit_FaceProvider_TryGetFaceMeshUVs_mE8B345E671437DF81570A19F17E4E8731DE7E44F (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___faceId0, intptr_t* ___ptrUvData1, int32_t* ___numArrayUVs2, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Capacity()
inline int32_t List_1_get_Capacity_m1A53A0BAC1C93A2F3D0E669490E8F110C2B4475E (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *, const RuntimeMethod*))List_1_get_Capacity_m1A53A0BAC1C93A2F3D0E669490E8F110C2B4475E_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_mCD857171EDE617A020E9E7EEDDB09F67DCBEA057 (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *, int32_t, const RuntimeMethod*))List_1_set_Capacity_mCD857171EDE617A020E9E7EEDDB09F67DCBEA057_gshared)(__this, p0, method);
}
// Unity.Collections.NativeArray`1<!!0> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Vector2>(System.Void*,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_mAFBE7D772DDF7690DD8E11CE386ECC88DE85904E (void* p0, int32_t p1, int32_t p2, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_mAFBE7D772DDF7690DD8E11CE386ECC88DE85904E_gshared)(p0, p1, p2, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_mB209F616554B35E19C68705964701A7BD37FC169 (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_mB209F616554B35E19C68705964701A7BD37FC169_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_m33B9E3FC1A7C9DF40DF154F08DF7D71F69FDCBD6 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1_Clear_m33B9E3FC1A7C9DF40DF154F08DF7D71F69FDCBD6_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARKit.ARKitFaceSubsystem::UnityARKit_FaceProvider_TryGetFaceMeshIndices(UnityEngine.Experimental.XR.TrackableId,System.IntPtr&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool ARKitFaceSubsystem_UnityARKit_FaceProvider_TryGetFaceMeshIndices_m89DE521E400775BE204BF5342DF52FA020245999 (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___faceId0, intptr_t* ___ptrIndexData1, int32_t* ___numArrayIndices2, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
inline int32_t List_1_get_Capacity_m6F328BC5CB16A5F1F9CF4F10E77173065F24EABE (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1_get_Capacity_m6F328BC5CB16A5F1F9CF4F10E77173065F24EABE_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_m3FBA882CEEB035B43469A05A1E7866E9427623DD (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))List_1_set_Capacity_m3FBA882CEEB035B43469A05A1E7866E9427623DD_gshared)(__this, p0, method);
}
// Unity.Collections.NativeArray`1<!!0> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Int32>(System.Void*,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_tE00CA77AD57C4FDA4711FEC1072D2834BB11DC23  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m9FFD99950B30E3CA4BFD657FB6A7BA744503D7CC (void* p0, int32_t p1, int32_t p2, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tE00CA77AD57C4FDA4711FEC1072D2834BB11DC23  (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m9FFD99950B30E3CA4BFD657FB6A7BA744503D7CC_gshared)(p0, p1, p2, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_mFABE59B1FA98DE337AAA7F8B65164784528C2AF7 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_mFABE59B1FA98DE337AAA7F8B65164784528C2AF7_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARKit.XRFaceArkitBlendShapeCoefficient>::Clear()
inline void List_1_Clear_mEEECECE6D56999D020D7242EDE87DB619BA3227D (List_1_t2DA394A648E4B185A0CA629942B1CBF7DE64D672 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2DA394A648E4B185A0CA629942B1CBF7DE64D672 *, const RuntimeMethod*))List_1_Clear_mEEECECE6D56999D020D7242EDE87DB619BA3227D_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARKit.ARKitFaceSubsystem::UnityARKit_FaceProvider_TryGetFaceBlendCoefficients(UnityEngine.Experimental.XR.TrackableId,System.IntPtr&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool ARKitFaceSubsystem_UnityARKit_FaceProvider_TryGetFaceBlendCoefficients_m19E60ECE81157F4F9DCE2E9765A2134761AA4449 (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___faceId0, intptr_t* ___ptrBlendCoefficientData1, int32_t* ___numArrayBlendCoefficients2, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARKit.XRFaceArkitBlendShapeCoefficient>::get_Capacity()
inline int32_t List_1_get_Capacity_m1C75B3978DE5B3985710482FDA9577C669909D29 (List_1_t2DA394A648E4B185A0CA629942B1CBF7DE64D672 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2DA394A648E4B185A0CA629942B1CBF7DE64D672 *, const RuntimeMethod*))List_1_get_Capacity_m1C75B3978DE5B3985710482FDA9577C669909D29_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARKit.XRFaceArkitBlendShapeCoefficient>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_m0C9768C9A3A74A3259CFE20F26B482DB7590DC69 (List_1_t2DA394A648E4B185A0CA629942B1CBF7DE64D672 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2DA394A648E4B185A0CA629942B1CBF7DE64D672 *, int32_t, const RuntimeMethod*))List_1_set_Capacity_m0C9768C9A3A74A3259CFE20F26B482DB7590DC69_gshared)(__this, p0, method);
}
// Unity.Collections.NativeArray`1<!!0> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.XR.ARKit.XRFaceArkitBlendShapeCoefficient>(System.Void*,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_t4C0FC59F637B1D4B704DBC2E00DA3484EBD4B50A  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisXRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E_mD99990BF4F5C73097C33B9E5382D77E7802A2F5E (void* p0, int32_t p1, int32_t p2, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t4C0FC59F637B1D4B704DBC2E00DA3484EBD4B50A  (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisXRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E_mD99990BF4F5C73097C33B9E5382D77E7802A2F5E_gshared)(p0, p1, p2, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARKit.XRFaceArkitBlendShapeCoefficient>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m7FFC58CA1D1ED3109FBFE810DDF02D4A4E32413D (List_1_t2DA394A648E4B185A0CA629942B1CBF7DE64D672 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2DA394A648E4B185A0CA629942B1CBF7DE64D672 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m7FFC58CA1D1ED3109FBFE810DDF02D4A4E32413D_gshared)(__this, p0, method);
}
// UnityEngine.XR.ARKit.XRArkitBlendShapeLocation UnityEngine.XR.ARKit.XRFaceArkitBlendShapeCoefficient::get_arkitBlendShapeLocation()
extern "C" IL2CPP_METHOD_ATTR int32_t XRFaceArkitBlendShapeCoefficient_get_arkitBlendShapeLocation_mA431618F1B085DFF18C85682836B9524FDB64D57 (XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.XR.ARKit.XRFaceArkitBlendShapeCoefficient::get_coefficient()
extern "C" IL2CPP_METHOD_ATTR float XRFaceArkitBlendShapeCoefficient_get_coefficient_m5E08937EAEC9B6C806F17D557146B1A2F8739030 (XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E * __this, const RuntimeMethod* method);
// System.Boolean System.Single::Equals(System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7 (float* __this, float p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.XRFaceArkitBlendShapeCoefficient::Equals(UnityEngine.XR.ARKit.XRFaceArkitBlendShapeCoefficient)
extern "C" IL2CPP_METHOD_ATTR bool XRFaceArkitBlendShapeCoefficient_Equals_m42C7DF3A5731EE811BCE32D976F38702FD0A640B (XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E * __this, XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.XRFaceArkitBlendShapeCoefficient::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool XRFaceArkitBlendShapeCoefficient_Equals_m35E8AE07A2EEE9B9AA84D97B067A05922A468054 (XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Single::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0 (float* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.XRFaceArkitBlendShapeCoefficient::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t XRFaceArkitBlendShapeCoefficient_GetHashCode_m7A4CB222181BFDC2310D0A6D53A3A866256071EB (XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ARKitFaceSubsystem_UnityARKit_face_anchor_added_m85E7BABAADE00B8C52811A5030BF442EF075F3D8(XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  ___anchor0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	ARKitFaceSubsystem_UnityARKit_face_anchor_added_m85E7BABAADE00B8C52811A5030BF442EF075F3D8(___anchor0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ARKitFaceSubsystem_UnityARKit_face_anchor_updated_mEB09AF3DD39C3D3D78B0363CD23AFCBCE8DF29BD(XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  ___anchor0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	ARKitFaceSubsystem_UnityARKit_face_anchor_updated_mEB09AF3DD39C3D3D78B0363CD23AFCBCE8DF29BD(___anchor0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ARKitFaceSubsystem_UnityARKit_face_anchor_removed_mC0E739A896D0400684C1864435505D880C70E559(XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  ___anchor0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	ARKitFaceSubsystem_UnityARKit_face_anchor_removed_mC0E739A896D0400684C1864435505D880C70E559(___anchor0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ARKitFaceSubsystem_UnityARKit_face_session_begin_frame_m0E329D6FAF6F81552C95BBCAACB9FEDEB6E2B313()
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	ARKitFaceSubsystem_UnityARKit_face_session_begin_frame_m0E329D6FAF6F81552C95BBCAACB9FEDEB6E2B313(NULL);

}
extern "C" void DEFAULT_CALL UnityARKit_FaceProvider_Initialize();
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem::UnityARKit_FaceProvider_Initialize()
extern "C" IL2CPP_METHOD_ATTR void ARKitFaceSubsystem_UnityARKit_FaceProvider_Initialize_mDC61B1E4243285043F5A1CBC344F725EC0FC9E9F (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_FaceProvider_Initialize)();

}
extern "C" void DEFAULT_CALL UnityARKit_FaceProvider_Shutdown();
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem::UnityARKit_FaceProvider_Shutdown()
extern "C" IL2CPP_METHOD_ATTR void ARKitFaceSubsystem_UnityARKit_FaceProvider_Shutdown_mCFF708E77F0C69BBCD28FC35D2041DC9288BA76E (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_FaceProvider_Shutdown)();

}
extern "C" void DEFAULT_CALL UnityARKit_FaceProvider_Start();
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem::UnityARKit_FaceProvider_Start()
extern "C" IL2CPP_METHOD_ATTR void ARKitFaceSubsystem_UnityARKit_FaceProvider_Start_m2687BC560F4269B7EB699F64B533FAE0BBE67167 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_FaceProvider_Start)();

}
extern "C" void DEFAULT_CALL UnityARKit_FaceProvider_Stop();
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem::UnityARKit_FaceProvider_Stop()
extern "C" IL2CPP_METHOD_ATTR void ARKitFaceSubsystem_UnityARKit_FaceProvider_Stop_m814D4D3BBF89E7BC4E3F742C5C4A40FA0622CA81 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_FaceProvider_Stop)();

}
extern "C" void DEFAULT_CALL UnityARKit_FaceProvider_SetFaceAnchorCallbacks(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem::UnityARKit_FaceProvider_SetFaceAnchorCallbacks(UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceAnchorAdded,UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceAnchorUpdated,UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceAnchorRemoved,UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceSessionBeginFrame)
extern "C" IL2CPP_METHOD_ATTR void ARKitFaceSubsystem_UnityARKit_FaceProvider_SetFaceAnchorCallbacks_mCCED563595101D0E86284CA574EED5AE9BE602E4 (DelegateXrFaceAnchorAdded_t4C37182B2443CE6D65E2C406B6BC527FF22E7268 * ___faceAnchorAddedCallback0, DelegateXrFaceAnchorUpdated_tCBBB53FC1132F3A2AAC5E0C1E3E6CA34E65F8C7C * ___faceAnchorUpdatedCallback1, DelegateXrFaceAnchorRemoved_t38731B8AEB3696EC1281AFE0D0E165C3C18C4BB4 * ___faceAnchorRemovedCallback2, DelegateXrFaceSessionBeginFrame_t03BCAADC9955F8AF986BD37858554A2BB5503D62 * ___faceSessionBeginFrameCallback3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___faceAnchorAddedCallback0' to native representation
	Il2CppMethodPointer ____faceAnchorAddedCallback0_marshaled = NULL;
	____faceAnchorAddedCallback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___faceAnchorAddedCallback0));

	// Marshaling of parameter '___faceAnchorUpdatedCallback1' to native representation
	Il2CppMethodPointer ____faceAnchorUpdatedCallback1_marshaled = NULL;
	____faceAnchorUpdatedCallback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___faceAnchorUpdatedCallback1));

	// Marshaling of parameter '___faceAnchorRemovedCallback2' to native representation
	Il2CppMethodPointer ____faceAnchorRemovedCallback2_marshaled = NULL;
	____faceAnchorRemovedCallback2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___faceAnchorRemovedCallback2));

	// Marshaling of parameter '___faceSessionBeginFrameCallback3' to native representation
	Il2CppMethodPointer ____faceSessionBeginFrameCallback3_marshaled = NULL;
	____faceSessionBeginFrameCallback3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___faceSessionBeginFrameCallback3));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_FaceProvider_SetFaceAnchorCallbacks)(____faceAnchorAddedCallback0_marshaled, ____faceAnchorUpdatedCallback1_marshaled, ____faceAnchorRemovedCallback2_marshaled, ____faceSessionBeginFrameCallback3_marshaled);

}
extern "C" int32_t DEFAULT_CALL UnityARKit_FaceProvider_TryGetFaceMeshVertices(TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , intptr_t*, int32_t*);
// System.Boolean UnityEngine.XR.ARKit.ARKitFaceSubsystem::UnityARKit_FaceProvider_TryGetFaceMeshVertices(UnityEngine.Experimental.XR.TrackableId,System.IntPtr&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool ARKitFaceSubsystem_UnityARKit_FaceProvider_TryGetFaceMeshVertices_mBA68D741B9E973699CD229737192CC2806731723 (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___faceId0, intptr_t* ___ptrVertexData1, int32_t* ___numArrayVertices2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , intptr_t*, int32_t*);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_FaceProvider_TryGetFaceMeshVertices)(___faceId0, ___ptrVertexData1, ___numArrayVertices2);

	return static_cast<bool>(returnValue);
}
extern "C" int32_t DEFAULT_CALL UnityARKit_FaceProvider_TryGetFaceMeshUVs(TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , intptr_t*, int32_t*);
// System.Boolean UnityEngine.XR.ARKit.ARKitFaceSubsystem::UnityARKit_FaceProvider_TryGetFaceMeshUVs(UnityEngine.Experimental.XR.TrackableId,System.IntPtr&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool ARKitFaceSubsystem_UnityARKit_FaceProvider_TryGetFaceMeshUVs_mE8B345E671437DF81570A19F17E4E8731DE7E44F (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___faceId0, intptr_t* ___ptrUvData1, int32_t* ___numArrayUVs2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , intptr_t*, int32_t*);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_FaceProvider_TryGetFaceMeshUVs)(___faceId0, ___ptrUvData1, ___numArrayUVs2);

	return static_cast<bool>(returnValue);
}
extern "C" int32_t DEFAULT_CALL UnityARKit_FaceProvider_TryGetFaceMeshIndices(TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , intptr_t*, int32_t*);
// System.Boolean UnityEngine.XR.ARKit.ARKitFaceSubsystem::UnityARKit_FaceProvider_TryGetFaceMeshIndices(UnityEngine.Experimental.XR.TrackableId,System.IntPtr&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool ARKitFaceSubsystem_UnityARKit_FaceProvider_TryGetFaceMeshIndices_m89DE521E400775BE204BF5342DF52FA020245999 (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___faceId0, intptr_t* ___ptrIndexData1, int32_t* ___numArrayIndices2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , intptr_t*, int32_t*);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_FaceProvider_TryGetFaceMeshIndices)(___faceId0, ___ptrIndexData1, ___numArrayIndices2);

	return static_cast<bool>(returnValue);
}
extern "C" int32_t DEFAULT_CALL UnityARKit_FaceProvider_TryGetFaceBlendCoefficients(TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , intptr_t*, int32_t*);
// System.Boolean UnityEngine.XR.ARKit.ARKitFaceSubsystem::UnityARKit_FaceProvider_TryGetFaceBlendCoefficients(UnityEngine.Experimental.XR.TrackableId,System.IntPtr&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool ARKitFaceSubsystem_UnityARKit_FaceProvider_TryGetFaceBlendCoefficients_m19E60ECE81157F4F9DCE2E9765A2134761AA4449 (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___faceId0, intptr_t* ___ptrBlendCoefficientData1, int32_t* ___numArrayBlendCoefficients2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , intptr_t*, int32_t*);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_FaceProvider_TryGetFaceBlendCoefficients)(___faceId0, ___ptrBlendCoefficientData1, ___numArrayBlendCoefficients2);

	return static_cast<bool>(returnValue);
}
extern "C" int32_t DEFAULT_CALL UnityARKit_FaceProvider_TryGetAllFaces(intptr_t*, int32_t*);
// System.Boolean UnityEngine.XR.ARKit.ARKitFaceSubsystem::UnityARKit_FaceProvider_TryGetAllFaces(System.IntPtr&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool ARKitFaceSubsystem_UnityARKit_FaceProvider_TryGetAllFaces_mDB7119BF076A30AEC53514A5F06651B6C883C95D (intptr_t* ___ptrArrayUnityXrFace0, int32_t* ___numArrayFaces1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t*, int32_t*);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_FaceProvider_TryGetAllFaces)(___ptrArrayUnityXrFace0, ___numArrayFaces1);

	return static_cast<bool>(returnValue);
}
extern "C" int32_t DEFAULT_CALL UnityARKit_FaceProvider_TryRemoveFace(TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B );
// System.Boolean UnityEngine.XR.ARKit.ARKitFaceSubsystem::UnityARKit_FaceProvider_TryRemoveFace(UnityEngine.Experimental.XR.TrackableId)
extern "C" IL2CPP_METHOD_ATTR bool ARKitFaceSubsystem_UnityARKit_FaceProvider_TryRemoveFace_m311847F58873432C8C895CCC2F1CCB5A8991114F (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___faceId0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B );

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_FaceProvider_TryRemoveFace)(___faceId0);

	return static_cast<bool>(returnValue);
}
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem::UnityARKit_face_anchor_added(UnityEngine.XR.FaceSubsystem.XRFace)
extern "C" IL2CPP_METHOD_ATTR void ARKitFaceSubsystem_UnityARKit_face_anchor_added_m85E7BABAADE00B8C52811A5030BF442EF075F3D8 (XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  ___anchor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitFaceSubsystem_UnityARKit_face_anchor_added_m85E7BABAADE00B8C52811A5030BF442EF075F3D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  L_0 = ___anchor0;
		XRFaceSubsystem_tE0367EC4739D16FE0CA2820AAF6688D9ABA66B86 * L_1 = ((ARKitFaceSubsystem_t24E01CF6C590EFAC9B51F7B1D341C646A69E9CD9_StaticFields*)il2cpp_codegen_static_fields_for(ARKitFaceSubsystem_t24E01CF6C590EFAC9B51F7B1D341C646A69E9CD9_il2cpp_TypeInfo_var))->get_s_CurrentInstance_7();
		XRFaceSubsystem_InvokeFaceAddedCallback_m171C63EE1C3461A0BD3E463BC91BCF024733DEEC(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem::UnityARKit_face_anchor_updated(UnityEngine.XR.FaceSubsystem.XRFace)
extern "C" IL2CPP_METHOD_ATTR void ARKitFaceSubsystem_UnityARKit_face_anchor_updated_mEB09AF3DD39C3D3D78B0363CD23AFCBCE8DF29BD (XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  ___anchor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitFaceSubsystem_UnityARKit_face_anchor_updated_mEB09AF3DD39C3D3D78B0363CD23AFCBCE8DF29BD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  L_0 = ___anchor0;
		XRFaceSubsystem_tE0367EC4739D16FE0CA2820AAF6688D9ABA66B86 * L_1 = ((ARKitFaceSubsystem_t24E01CF6C590EFAC9B51F7B1D341C646A69E9CD9_StaticFields*)il2cpp_codegen_static_fields_for(ARKitFaceSubsystem_t24E01CF6C590EFAC9B51F7B1D341C646A69E9CD9_il2cpp_TypeInfo_var))->get_s_CurrentInstance_7();
		XRFaceSubsystem_InvokeFaceUpdatedCallback_m1FAA7E55979A9B1AAC41A32110C626B24574F2A4(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem::UnityARKit_face_anchor_removed(UnityEngine.XR.FaceSubsystem.XRFace)
extern "C" IL2CPP_METHOD_ATTR void ARKitFaceSubsystem_UnityARKit_face_anchor_removed_mC0E739A896D0400684C1864435505D880C70E559 (XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  ___anchor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitFaceSubsystem_UnityARKit_face_anchor_removed_mC0E739A896D0400684C1864435505D880C70E559_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  L_0 = ___anchor0;
		XRFaceSubsystem_tE0367EC4739D16FE0CA2820AAF6688D9ABA66B86 * L_1 = ((ARKitFaceSubsystem_t24E01CF6C590EFAC9B51F7B1D341C646A69E9CD9_StaticFields*)il2cpp_codegen_static_fields_for(ARKitFaceSubsystem_t24E01CF6C590EFAC9B51F7B1D341C646A69E9CD9_il2cpp_TypeInfo_var))->get_s_CurrentInstance_7();
		XRFaceSubsystem_InvokeFaceRemovedCallback_mE8E684085CD986C2AAFEC418878134E8672DFFEA(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem::UnityARKit_face_session_begin_frame()
extern "C" IL2CPP_METHOD_ATTR void ARKitFaceSubsystem_UnityARKit_face_session_begin_frame_m0E329D6FAF6F81552C95BBCAACB9FEDEB6E2B313 (const RuntimeMethod* method)
{
	{
		XRFaceSubsystem_OnBeginFrame_mD5C8A78DB73EB4804A47FFDC9F15B0042FA7E5E7(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ARKitFaceSubsystem__ctor_mCFD2FDAC2B2FD45B7C15B697268F6D9B54691905 (ARKitFaceSubsystem_t24E01CF6C590EFAC9B51F7B1D341C646A69E9CD9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitFaceSubsystem__ctor_mCFD2FDAC2B2FD45B7C15B697268F6D9B54691905_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRFaceSubsystem__ctor_m71EAFAFFA8CED999784A658F0D16E83335303138(__this, /*hidden argument*/NULL);
		((ARKitFaceSubsystem_t24E01CF6C590EFAC9B51F7B1D341C646A69E9CD9_StaticFields*)il2cpp_codegen_static_fields_for(ARKitFaceSubsystem_t24E01CF6C590EFAC9B51F7B1D341C646A69E9CD9_il2cpp_TypeInfo_var))->set_s_CurrentInstance_7(__this);
		ARKitFaceSubsystem_UnityARKit_FaceProvider_Initialize_mDC61B1E4243285043F5A1CBC344F725EC0FC9E9F(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem::Destroy()
extern "C" IL2CPP_METHOD_ATTR void ARKitFaceSubsystem_Destroy_mE0185004BEF17A21E21A5CE1E6FBE09159194F4A (ARKitFaceSubsystem_t24E01CF6C590EFAC9B51F7B1D341C646A69E9CD9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitFaceSubsystem_Destroy_mE0185004BEF17A21E21A5CE1E6FBE09159194F4A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ARKitFaceSubsystem_t24E01CF6C590EFAC9B51F7B1D341C646A69E9CD9_StaticFields*)il2cpp_codegen_static_fields_for(ARKitFaceSubsystem_t24E01CF6C590EFAC9B51F7B1D341C646A69E9CD9_il2cpp_TypeInfo_var))->set_s_CurrentInstance_7((XRFaceSubsystem_tE0367EC4739D16FE0CA2820AAF6688D9ABA66B86 *)NULL);
		ARKitFaceSubsystem_UnityARKit_FaceProvider_Shutdown_mCFF708E77F0C69BBCD28FC35D2041DC9288BA76E(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem::Start()
extern "C" IL2CPP_METHOD_ATTR void ARKitFaceSubsystem_Start_m81DDAA372D4493F97320A9DA8C2356791BA4374E (ARKitFaceSubsystem_t24E01CF6C590EFAC9B51F7B1D341C646A69E9CD9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitFaceSubsystem_Start_m81DDAA372D4493F97320A9DA8C2356791BA4374E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DelegateXrFaceAnchorAdded_t4C37182B2443CE6D65E2C406B6BC527FF22E7268 * L_0 = (DelegateXrFaceAnchorAdded_t4C37182B2443CE6D65E2C406B6BC527FF22E7268 *)il2cpp_codegen_object_new(DelegateXrFaceAnchorAdded_t4C37182B2443CE6D65E2C406B6BC527FF22E7268_il2cpp_TypeInfo_var);
		DelegateXrFaceAnchorAdded__ctor_m2336D2D7EF5A54A108E7149A48DC52A24436B3F0(L_0, NULL, (intptr_t)((intptr_t)ARKitFaceSubsystem_UnityARKit_face_anchor_added_m85E7BABAADE00B8C52811A5030BF442EF075F3D8_RuntimeMethod_var), /*hidden argument*/NULL);
		DelegateXrFaceAnchorUpdated_tCBBB53FC1132F3A2AAC5E0C1E3E6CA34E65F8C7C * L_1 = (DelegateXrFaceAnchorUpdated_tCBBB53FC1132F3A2AAC5E0C1E3E6CA34E65F8C7C *)il2cpp_codegen_object_new(DelegateXrFaceAnchorUpdated_tCBBB53FC1132F3A2AAC5E0C1E3E6CA34E65F8C7C_il2cpp_TypeInfo_var);
		DelegateXrFaceAnchorUpdated__ctor_m5CCB49DA3E21A8C12F6321C904EE2D09AF430B2E(L_1, NULL, (intptr_t)((intptr_t)ARKitFaceSubsystem_UnityARKit_face_anchor_updated_mEB09AF3DD39C3D3D78B0363CD23AFCBCE8DF29BD_RuntimeMethod_var), /*hidden argument*/NULL);
		DelegateXrFaceAnchorRemoved_t38731B8AEB3696EC1281AFE0D0E165C3C18C4BB4 * L_2 = (DelegateXrFaceAnchorRemoved_t38731B8AEB3696EC1281AFE0D0E165C3C18C4BB4 *)il2cpp_codegen_object_new(DelegateXrFaceAnchorRemoved_t38731B8AEB3696EC1281AFE0D0E165C3C18C4BB4_il2cpp_TypeInfo_var);
		DelegateXrFaceAnchorRemoved__ctor_m3117AF62C46947D0CBE299C775A2536A80556B89(L_2, NULL, (intptr_t)((intptr_t)ARKitFaceSubsystem_UnityARKit_face_anchor_removed_mC0E739A896D0400684C1864435505D880C70E559_RuntimeMethod_var), /*hidden argument*/NULL);
		DelegateXrFaceSessionBeginFrame_t03BCAADC9955F8AF986BD37858554A2BB5503D62 * L_3 = (DelegateXrFaceSessionBeginFrame_t03BCAADC9955F8AF986BD37858554A2BB5503D62 *)il2cpp_codegen_object_new(DelegateXrFaceSessionBeginFrame_t03BCAADC9955F8AF986BD37858554A2BB5503D62_il2cpp_TypeInfo_var);
		DelegateXrFaceSessionBeginFrame__ctor_m450095C59B3611094948B045D9E05A7A36598356(L_3, NULL, (intptr_t)((intptr_t)ARKitFaceSubsystem_UnityARKit_face_session_begin_frame_m0E329D6FAF6F81552C95BBCAACB9FEDEB6E2B313_RuntimeMethod_var), /*hidden argument*/NULL);
		ARKitFaceSubsystem_UnityARKit_FaceProvider_SetFaceAnchorCallbacks_mCCED563595101D0E86284CA574EED5AE9BE602E4(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		ARKitFaceSubsystem_UnityARKit_FaceProvider_Start_m2687BC560F4269B7EB699F64B533FAE0BBE67167(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem::Stop()
extern "C" IL2CPP_METHOD_ATTR void ARKitFaceSubsystem_Stop_m23125CC2079371CF298714C706FA51959BA4F1E3 (ARKitFaceSubsystem_t24E01CF6C590EFAC9B51F7B1D341C646A69E9CD9 * __this, const RuntimeMethod* method)
{
	{
		ARKitFaceSubsystem_UnityARKit_FaceProvider_Stop_m814D4D3BBF89E7BC4E3F742C5C4A40FA0622CA81(/*hidden argument*/NULL);
		ARKitFaceSubsystem_UnityARKit_FaceProvider_SetFaceAnchorCallbacks_mCCED563595101D0E86284CA574EED5AE9BE602E4((DelegateXrFaceAnchorAdded_t4C37182B2443CE6D65E2C406B6BC527FF22E7268 *)NULL, (DelegateXrFaceAnchorUpdated_tCBBB53FC1132F3A2AAC5E0C1E3E6CA34E65F8C7C *)NULL, (DelegateXrFaceAnchorRemoved_t38731B8AEB3696EC1281AFE0D0E165C3C18C4BB4 *)NULL, (DelegateXrFaceSessionBeginFrame_t03BCAADC9955F8AF986BD37858554A2BB5503D62 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitFaceSubsystem::TryGetAllFaces(System.Collections.Generic.List`1<UnityEngine.XR.FaceSubsystem.XRFace>)
extern "C" IL2CPP_METHOD_ATTR bool ARKitFaceSubsystem_TryGetAllFaces_mFDF075D6ADE9164793B4EC970FE1F49BF198C7C2 (ARKitFaceSubsystem_t24E01CF6C590EFAC9B51F7B1D341C646A69E9CD9 * __this, List_1_tB714496A195018B9F2FE0ABA6BE5AA9B1EB10942 * ___facesOut0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitFaceSubsystem_TryGetAllFaces_mFDF075D6ADE9164793B4EC970FE1F49BF198C7C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tB714496A195018B9F2FE0ABA6BE5AA9B1EB10942 * L_0 = ___facesOut0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral37A0B5FF3D6DDD7EB1501626195A8DC712AD0A51, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ARKitFaceSubsystem_TryGetAllFaces_mFDF075D6ADE9164793B4EC970FE1F49BF198C7C2_RuntimeMethod_var);
	}

IL_000e:
	{
		List_1_tB714496A195018B9F2FE0ABA6BE5AA9B1EB10942 * L_2 = ___facesOut0;
		bool L_3 = ARKitFaceSubsystem_TryGetNativeAllFaces_mDABACB017D0EA4CF9AED31AB117A2263D4451C53(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitFaceSubsystem::TryRemoveFace(UnityEngine.Experimental.XR.TrackableId)
extern "C" IL2CPP_METHOD_ATTR bool ARKitFaceSubsystem_TryRemoveFace_m602A91B84E0559639116D004186C7C3946A9748E (ARKitFaceSubsystem_t24E01CF6C590EFAC9B51F7B1D341C646A69E9CD9 * __this, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___faceId0, const RuntimeMethod* method)
{
	{
		TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  L_0 = ___faceId0;
		bool L_1 = ARKitFaceSubsystem_TryRemoveNativeFace_m23A47DE34E96D62D4F8A5677B38BE74C2DBFCBA8(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitFaceSubsystem::TryGetFaceMeshVertices(UnityEngine.Experimental.XR.TrackableId,System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C" IL2CPP_METHOD_ATTR bool ARKitFaceSubsystem_TryGetFaceMeshVertices_m3404954FFA51446837E9C46B0C95942A699A1CAA (ARKitFaceSubsystem_t24E01CF6C590EFAC9B51F7B1D341C646A69E9CD9 * __this, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___faceId0, List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___verticesOut1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitFaceSubsystem_TryGetFaceMeshVertices_m3404954FFA51446837E9C46B0C95942A699A1CAA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_0 = ___verticesOut1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral84DBAEF25399215C4823814053CC133F7AD11C90, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ARKitFaceSubsystem_TryGetFaceMeshVertices_m3404954FFA51446837E9C46B0C95942A699A1CAA_RuntimeMethod_var);
	}

IL_000e:
	{
		TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  L_2 = ___faceId0;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_3 = ___verticesOut1;
		bool L_4 = ARKitFaceSubsystem_TryGetNativeFaceMeshVertices_m2FDF81CC52182CE6B1DCA1508C987C6B0957643B(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitFaceSubsystem::TryGetFaceMeshUVs(UnityEngine.Experimental.XR.TrackableId,System.Collections.Generic.List`1<UnityEngine.Vector2>)
extern "C" IL2CPP_METHOD_ATTR bool ARKitFaceSubsystem_TryGetFaceMeshUVs_m628BF9EDA523F56CFA974812DBBA341C73134B02 (ARKitFaceSubsystem_t24E01CF6C590EFAC9B51F7B1D341C646A69E9CD9 * __this, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___faceId0, List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ___uvsOut1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitFaceSubsystem_TryGetFaceMeshUVs_m628BF9EDA523F56CFA974812DBBA341C73134B02_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_0 = ___uvsOut1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralBE956C6BBE22C9317B08530A0E1E1E9ABED5815A, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ARKitFaceSubsystem_TryGetFaceMeshUVs_m628BF9EDA523F56CFA974812DBBA341C73134B02_RuntimeMethod_var);
	}

IL_000e:
	{
		TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  L_2 = ___faceId0;
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_3 = ___uvsOut1;
		bool L_4 = ARKitFaceSubsystem_TryGetNativeFaceMeshUVs_m2C2168403C67F53FE45A8083E25153ECD145EE8C(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitFaceSubsystem::TryGetFaceMeshIndices(UnityEngine.Experimental.XR.TrackableId,System.Collections.Generic.List`1<System.Int32>)
extern "C" IL2CPP_METHOD_ATTR bool ARKitFaceSubsystem_TryGetFaceMeshIndices_m7CD730BDAA17EDC41D80B9C43DC95F612E043F16 (ARKitFaceSubsystem_t24E01CF6C590EFAC9B51F7B1D341C646A69E9CD9 * __this, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___faceId0, List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___indicesOut1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitFaceSubsystem_TryGetFaceMeshIndices_m7CD730BDAA17EDC41D80B9C43DC95F612E043F16_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = ___indicesOut1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral3DE5C8935E5C0504750A6A49DD9533047C38EC8C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ARKitFaceSubsystem_TryGetFaceMeshIndices_m7CD730BDAA17EDC41D80B9C43DC95F612E043F16_RuntimeMethod_var);
	}

IL_000e:
	{
		TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  L_2 = ___faceId0;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_3 = ___indicesOut1;
		bool L_4 = ARKitFaceSubsystem_TryGetNativeFaceMeshIndices_m5B9319A726C2CB76B7A1CAB383BCA52FF656A1F1(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitFaceSubsystem::TryGetFaceARKitBlendShapeCoefficients(UnityEngine.Experimental.XR.TrackableId,System.Collections.Generic.List`1<UnityEngine.XR.ARKit.XRFaceArkitBlendShapeCoefficient>)
extern "C" IL2CPP_METHOD_ATTR bool ARKitFaceSubsystem_TryGetFaceARKitBlendShapeCoefficients_m45E8DD72CEB21DFF49BEF7BD5AB1CB792BC0A1F4 (ARKitFaceSubsystem_t24E01CF6C590EFAC9B51F7B1D341C646A69E9CD9 * __this, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___faceId0, List_1_t2DA394A648E4B185A0CA629942B1CBF7DE64D672 * ___coefficientsOut1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitFaceSubsystem_TryGetFaceARKitBlendShapeCoefficients_m45E8DD72CEB21DFF49BEF7BD5AB1CB792BC0A1F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2DA394A648E4B185A0CA629942B1CBF7DE64D672 * L_0 = ___coefficientsOut1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_1 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_1, _stringLiteralE13943DFF99B70678B7C440862674F0CDB525067, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ARKitFaceSubsystem_TryGetFaceARKitBlendShapeCoefficients_m45E8DD72CEB21DFF49BEF7BD5AB1CB792BC0A1F4_RuntimeMethod_var);
	}

IL_000e:
	{
		TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  L_2 = ___faceId0;
		List_1_t2DA394A648E4B185A0CA629942B1CBF7DE64D672 * L_3 = ___coefficientsOut1;
		bool L_4 = ARKitFaceSubsystem_TryGetNativeFaceBlendCoefficients_m394B48DF794BA51C2C560A42C4D64DD69F67B489(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem::RegisterDescriptor()
extern "C" IL2CPP_METHOD_ATTR void ARKitFaceSubsystem_RegisterDescriptor_mC00841747E3532C2A69720ECBA2EA399C657E111 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitFaceSubsystem_RegisterDescriptor_mC00841747E3532C2A69720ECBA2EA399C657E111_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FaceSubsystemParams_tA2026F8E1817583A4FCE47A581DD5C29F3015040  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(FaceSubsystemParams_tA2026F8E1817583A4FCE47A581DD5C29F3015040 ));
		FaceSubsystemParams_set_supportsFacePose_mCB88897B661335D2057641A82C31DD59FAE87F9C((FaceSubsystemParams_tA2026F8E1817583A4FCE47A581DD5C29F3015040 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		FaceSubsystemParams_set_supportsFaceMeshVerticesAndIndices_m4E80156260A1D99C0B2D06DC0C876B0CE4153C13((FaceSubsystemParams_tA2026F8E1817583A4FCE47A581DD5C29F3015040 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		FaceSubsystemParams_set_supportsFaceMeshUVs_mA7F89E8FF2761803FBAF5DB4B09984CE5100BC07((FaceSubsystemParams_tA2026F8E1817583A4FCE47A581DD5C29F3015040 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		(&V_0)->set_id_0(_stringLiteralD214B207420545B07BED4F7353996091F6754394);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (ARKitFaceSubsystem_t24E01CF6C590EFAC9B51F7B1D341C646A69E9CD9_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		(&V_0)->set_implementationType_1(L_1);
		FaceSubsystemParams_tA2026F8E1817583A4FCE47A581DD5C29F3015040  L_2 = V_0;
		XRFaceSubsystemDescriptor_Create_mB90EE47930EAA87170DEEE2A0FFF3E2918329E8D(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitFaceSubsystem::TryGetNativeAllFaces(System.Collections.Generic.List`1<UnityEngine.XR.FaceSubsystem.XRFace>)
extern "C" IL2CPP_METHOD_ATTR bool ARKitFaceSubsystem_TryGetNativeAllFaces_mDABACB017D0EA4CF9AED31AB117A2263D4451C53 (List_1_tB714496A195018B9F2FE0ABA6BE5AA9B1EB10942 * ___facesOut0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitFaceSubsystem_TryGetNativeAllFaces_mDABACB017D0EA4CF9AED31AB117A2263D4451C53_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	NativeArray_1_t463B0B9666832AF1890B0290C471BF44D1A80557  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		List_1_tB714496A195018B9F2FE0ABA6BE5AA9B1EB10942 * L_0 = ___facesOut0;
		NullCheck(L_0);
		List_1_Clear_mDE5027112757C65CAB14DEB36BC94F120676590B(L_0, /*hidden argument*/List_1_Clear_mDE5027112757C65CAB14DEB36BC94F120676590B_RuntimeMethod_var);
		bool L_1 = ARKitFaceSubsystem_UnityARKit_FaceProvider_TryGetAllFaces_mDB7119BF076A30AEC53514A5F06651B6C883C95D((intptr_t*)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		intptr_t L_3 = V_0;
		void* L_4 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_3, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		NativeArray_1_t463B0B9666832AF1890B0290C471BF44D1A80557  L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisXRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246_mDBCD18D72EE18412B6D0E5343B73A48F70135F76((void*)(void*)L_4, L_5, 1, /*hidden argument*/NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisXRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246_mDBCD18D72EE18412B6D0E5343B73A48F70135F76_RuntimeMethod_var);
		V_2 = L_6;
		int32_t L_7 = V_1;
		List_1_tB714496A195018B9F2FE0ABA6BE5AA9B1EB10942 * L_8 = ___facesOut0;
		NullCheck(L_8);
		int32_t L_9 = List_1_get_Capacity_m4F1077003DAB391699C5CAF1A027F12D2B525969(L_8, /*hidden argument*/List_1_get_Capacity_m4F1077003DAB391699C5CAF1A027F12D2B525969_RuntimeMethod_var);
		if ((((int32_t)L_7) <= ((int32_t)L_9)))
		{
			goto IL_0037;
		}
	}
	{
		List_1_tB714496A195018B9F2FE0ABA6BE5AA9B1EB10942 * L_10 = ___facesOut0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		List_1_set_Capacity_m01AC4D143726E324FEBC9025C07096C4E98E2DDE(L_10, L_11, /*hidden argument*/List_1_set_Capacity_m01AC4D143726E324FEBC9025C07096C4E98E2DDE_RuntimeMethod_var);
	}

IL_0037:
	{
		List_1_tB714496A195018B9F2FE0ABA6BE5AA9B1EB10942 * L_12 = ___facesOut0;
		NativeArray_1_t463B0B9666832AF1890B0290C471BF44D1A80557  L_13 = V_2;
		NativeArray_1_t463B0B9666832AF1890B0290C471BF44D1A80557  L_14 = L_13;
		RuntimeObject * L_15 = Box(NativeArray_1_t463B0B9666832AF1890B0290C471BF44D1A80557_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		List_1_AddRange_m8D8DE833E34F3C9AEE197852A28DF22C2B5B9B3B(L_12, (RuntimeObject*)L_15, /*hidden argument*/List_1_AddRange_m8D8DE833E34F3C9AEE197852A28DF22C2B5B9B3B_RuntimeMethod_var);
		return (bool)1;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitFaceSubsystem::TryRemoveNativeFace(UnityEngine.Experimental.XR.TrackableId)
extern "C" IL2CPP_METHOD_ATTR bool ARKitFaceSubsystem_TryRemoveNativeFace_m23A47DE34E96D62D4F8A5677B38BE74C2DBFCBA8 (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___faceId0, const RuntimeMethod* method)
{
	{
		TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  L_0 = ___faceId0;
		bool L_1 = ARKitFaceSubsystem_UnityARKit_FaceProvider_TryRemoveFace_m311847F58873432C8C895CCC2F1CCB5A8991114F(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitFaceSubsystem::TryGetNativeFaceMeshVertices(UnityEngine.Experimental.XR.TrackableId,System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C" IL2CPP_METHOD_ATTR bool ARKitFaceSubsystem_TryGetNativeFaceMeshVertices_m2FDF81CC52182CE6B1DCA1508C987C6B0957643B (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___faceId0, List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___verticesOut1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitFaceSubsystem_TryGetNativeFaceMeshVertices_m2FDF81CC52182CE6B1DCA1508C987C6B0957643B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_0 = ___verticesOut1;
		NullCheck(L_0);
		List_1_Clear_m0B6A7366C5386991AB01BAFF1FACE2DC5BAC410A(L_0, /*hidden argument*/List_1_Clear_m0B6A7366C5386991AB01BAFF1FACE2DC5BAC410A_RuntimeMethod_var);
		TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  L_1 = ___faceId0;
		bool L_2 = ARKitFaceSubsystem_UnityARKit_FaceProvider_TryGetFaceMeshVertices_mBA68D741B9E973699CD229737192CC2806731723(L_1, (intptr_t*)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		int32_t L_4 = V_1;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_5 = ___verticesOut1;
		NullCheck(L_5);
		int32_t L_6 = List_1_get_Capacity_m3BECB289CE03E777262B84E4B8096DF61F6A5044(L_5, /*hidden argument*/List_1_get_Capacity_m3BECB289CE03E777262B84E4B8096DF61F6A5044_RuntimeMethod_var);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_002a;
		}
	}
	{
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_7 = ___verticesOut1;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		List_1_set_Capacity_mF25A85F4FB85F5CECD1D70B97A713F24FCEAB161(L_7, L_8, /*hidden argument*/List_1_set_Capacity_mF25A85F4FB85F5CECD1D70B97A713F24FCEAB161_RuntimeMethod_var);
	}

IL_002a:
	{
		intptr_t L_9 = V_0;
		void* L_10 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_1;
		NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  L_12 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_m1BF2DFBAF38B30767E9E7DEA8AC2BE2672BC8714((void*)(void*)L_10, L_11, 1, /*hidden argument*/NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_m1BF2DFBAF38B30767E9E7DEA8AC2BE2672BC8714_RuntimeMethod_var);
		V_2 = L_12;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_13 = ___verticesOut1;
		NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  L_14 = V_2;
		NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  L_15 = L_14;
		RuntimeObject * L_16 = Box(NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		List_1_AddRange_mDAF7D94514D9CCE06F0DF44740372B6C43662035(L_13, (RuntimeObject*)L_16, /*hidden argument*/List_1_AddRange_mDAF7D94514D9CCE06F0DF44740372B6C43662035_RuntimeMethod_var);
		return (bool)1;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitFaceSubsystem::TryGetNativeFaceMeshUVs(UnityEngine.Experimental.XR.TrackableId,System.Collections.Generic.List`1<UnityEngine.Vector2>)
extern "C" IL2CPP_METHOD_ATTR bool ARKitFaceSubsystem_TryGetNativeFaceMeshUVs_m2C2168403C67F53FE45A8083E25153ECD145EE8C (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___faceId0, List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ___uvsOut1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitFaceSubsystem_TryGetNativeFaceMeshUVs_m2C2168403C67F53FE45A8083E25153ECD145EE8C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_0 = ___uvsOut1;
		NullCheck(L_0);
		List_1_Clear_m4922931CB6A2D5FF3678089D45EDEDB901DA2EBC(L_0, /*hidden argument*/List_1_Clear_m4922931CB6A2D5FF3678089D45EDEDB901DA2EBC_RuntimeMethod_var);
		TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  L_1 = ___faceId0;
		bool L_2 = ARKitFaceSubsystem_UnityARKit_FaceProvider_TryGetFaceMeshUVs_mE8B345E671437DF81570A19F17E4E8731DE7E44F(L_1, (intptr_t*)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		int32_t L_4 = V_1;
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_5 = ___uvsOut1;
		NullCheck(L_5);
		int32_t L_6 = List_1_get_Capacity_m1A53A0BAC1C93A2F3D0E669490E8F110C2B4475E(L_5, /*hidden argument*/List_1_get_Capacity_m1A53A0BAC1C93A2F3D0E669490E8F110C2B4475E_RuntimeMethod_var);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_002a;
		}
	}
	{
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_7 = ___uvsOut1;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		List_1_set_Capacity_mCD857171EDE617A020E9E7EEDDB09F67DCBEA057(L_7, L_8, /*hidden argument*/List_1_set_Capacity_mCD857171EDE617A020E9E7EEDDB09F67DCBEA057_RuntimeMethod_var);
	}

IL_002a:
	{
		intptr_t L_9 = V_0;
		void* L_10 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_1;
		NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  L_12 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_mAFBE7D772DDF7690DD8E11CE386ECC88DE85904E((void*)(void*)L_10, L_11, 1, /*hidden argument*/NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_mAFBE7D772DDF7690DD8E11CE386ECC88DE85904E_RuntimeMethod_var);
		V_2 = L_12;
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_13 = ___uvsOut1;
		NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  L_14 = V_2;
		NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  L_15 = L_14;
		RuntimeObject * L_16 = Box(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		List_1_AddRange_mB209F616554B35E19C68705964701A7BD37FC169(L_13, (RuntimeObject*)L_16, /*hidden argument*/List_1_AddRange_mB209F616554B35E19C68705964701A7BD37FC169_RuntimeMethod_var);
		return (bool)1;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitFaceSubsystem::TryGetNativeFaceMeshIndices(UnityEngine.Experimental.XR.TrackableId,System.Collections.Generic.List`1<System.Int32>)
extern "C" IL2CPP_METHOD_ATTR bool ARKitFaceSubsystem_TryGetNativeFaceMeshIndices_m5B9319A726C2CB76B7A1CAB383BCA52FF656A1F1 (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___faceId0, List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___indicesOut1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitFaceSubsystem_TryGetNativeFaceMeshIndices_m5B9319A726C2CB76B7A1CAB383BCA52FF656A1F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	NativeArray_1_tE00CA77AD57C4FDA4711FEC1072D2834BB11DC23  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = ___indicesOut1;
		NullCheck(L_0);
		List_1_Clear_m33B9E3FC1A7C9DF40DF154F08DF7D71F69FDCBD6(L_0, /*hidden argument*/List_1_Clear_m33B9E3FC1A7C9DF40DF154F08DF7D71F69FDCBD6_RuntimeMethod_var);
		TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  L_1 = ___faceId0;
		bool L_2 = ARKitFaceSubsystem_UnityARKit_FaceProvider_TryGetFaceMeshIndices_m89DE521E400775BE204BF5342DF52FA020245999(L_1, (intptr_t*)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		int32_t L_4 = V_1;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_5 = ___indicesOut1;
		NullCheck(L_5);
		int32_t L_6 = List_1_get_Capacity_m6F328BC5CB16A5F1F9CF4F10E77173065F24EABE(L_5, /*hidden argument*/List_1_get_Capacity_m6F328BC5CB16A5F1F9CF4F10E77173065F24EABE_RuntimeMethod_var);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_002a;
		}
	}
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_7 = ___indicesOut1;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		List_1_set_Capacity_m3FBA882CEEB035B43469A05A1E7866E9427623DD(L_7, L_8, /*hidden argument*/List_1_set_Capacity_m3FBA882CEEB035B43469A05A1E7866E9427623DD_RuntimeMethod_var);
	}

IL_002a:
	{
		intptr_t L_9 = V_0;
		void* L_10 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_1;
		NativeArray_1_tE00CA77AD57C4FDA4711FEC1072D2834BB11DC23  L_12 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m9FFD99950B30E3CA4BFD657FB6A7BA744503D7CC((void*)(void*)L_10, L_11, 1, /*hidden argument*/NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m9FFD99950B30E3CA4BFD657FB6A7BA744503D7CC_RuntimeMethod_var);
		V_2 = L_12;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_13 = ___indicesOut1;
		NativeArray_1_tE00CA77AD57C4FDA4711FEC1072D2834BB11DC23  L_14 = V_2;
		NativeArray_1_tE00CA77AD57C4FDA4711FEC1072D2834BB11DC23  L_15 = L_14;
		RuntimeObject * L_16 = Box(NativeArray_1_tE00CA77AD57C4FDA4711FEC1072D2834BB11DC23_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		List_1_AddRange_mFABE59B1FA98DE337AAA7F8B65164784528C2AF7(L_13, (RuntimeObject*)L_16, /*hidden argument*/List_1_AddRange_mFABE59B1FA98DE337AAA7F8B65164784528C2AF7_RuntimeMethod_var);
		return (bool)1;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitFaceSubsystem::TryGetNativeFaceBlendCoefficients(UnityEngine.Experimental.XR.TrackableId,System.Collections.Generic.List`1<UnityEngine.XR.ARKit.XRFaceArkitBlendShapeCoefficient>)
extern "C" IL2CPP_METHOD_ATTR bool ARKitFaceSubsystem_TryGetNativeFaceBlendCoefficients_m394B48DF794BA51C2C560A42C4D64DD69F67B489 (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___faceId0, List_1_t2DA394A648E4B185A0CA629942B1CBF7DE64D672 * ___coefficientsOut1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitFaceSubsystem_TryGetNativeFaceBlendCoefficients_m394B48DF794BA51C2C560A42C4D64DD69F67B489_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	NativeArray_1_t4C0FC59F637B1D4B704DBC2E00DA3484EBD4B50A  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		List_1_t2DA394A648E4B185A0CA629942B1CBF7DE64D672 * L_0 = ___coefficientsOut1;
		NullCheck(L_0);
		List_1_Clear_mEEECECE6D56999D020D7242EDE87DB619BA3227D(L_0, /*hidden argument*/List_1_Clear_mEEECECE6D56999D020D7242EDE87DB619BA3227D_RuntimeMethod_var);
		TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  L_1 = ___faceId0;
		bool L_2 = ARKitFaceSubsystem_UnityARKit_FaceProvider_TryGetFaceBlendCoefficients_m19E60ECE81157F4F9DCE2E9765A2134761AA4449(L_1, (intptr_t*)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		int32_t L_4 = V_1;
		List_1_t2DA394A648E4B185A0CA629942B1CBF7DE64D672 * L_5 = ___coefficientsOut1;
		NullCheck(L_5);
		int32_t L_6 = List_1_get_Capacity_m1C75B3978DE5B3985710482FDA9577C669909D29(L_5, /*hidden argument*/List_1_get_Capacity_m1C75B3978DE5B3985710482FDA9577C669909D29_RuntimeMethod_var);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_002a;
		}
	}
	{
		List_1_t2DA394A648E4B185A0CA629942B1CBF7DE64D672 * L_7 = ___coefficientsOut1;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		List_1_set_Capacity_m0C9768C9A3A74A3259CFE20F26B482DB7590DC69(L_7, L_8, /*hidden argument*/List_1_set_Capacity_m0C9768C9A3A74A3259CFE20F26B482DB7590DC69_RuntimeMethod_var);
	}

IL_002a:
	{
		intptr_t L_9 = V_0;
		void* L_10 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_1;
		NativeArray_1_t4C0FC59F637B1D4B704DBC2E00DA3484EBD4B50A  L_12 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisXRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E_mD99990BF4F5C73097C33B9E5382D77E7802A2F5E((void*)(void*)L_10, L_11, 1, /*hidden argument*/NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisXRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E_mD99990BF4F5C73097C33B9E5382D77E7802A2F5E_RuntimeMethod_var);
		V_2 = L_12;
		List_1_t2DA394A648E4B185A0CA629942B1CBF7DE64D672 * L_13 = ___coefficientsOut1;
		NativeArray_1_t4C0FC59F637B1D4B704DBC2E00DA3484EBD4B50A  L_14 = V_2;
		NativeArray_1_t4C0FC59F637B1D4B704DBC2E00DA3484EBD4B50A  L_15 = L_14;
		RuntimeObject * L_16 = Box(NativeArray_1_t4C0FC59F637B1D4B704DBC2E00DA3484EBD4B50A_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		List_1_AddRange_m7FFC58CA1D1ED3109FBFE810DDF02D4A4E32413D(L_13, (RuntimeObject*)L_16, /*hidden argument*/List_1_AddRange_m7FFC58CA1D1ED3109FBFE810DDF02D4A4E32413D_RuntimeMethod_var);
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_DelegateXrFaceAnchorAdded_t4C37182B2443CE6D65E2C406B6BC527FF22E7268 (DelegateXrFaceAnchorAdded_t4C37182B2443CE6D65E2C406B6BC527FF22E7268 * __this, XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  ___anchorData0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___anchorData0);

}
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceAnchorAdded::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DelegateXrFaceAnchorAdded__ctor_m2336D2D7EF5A54A108E7149A48DC52A24436B3F0 (DelegateXrFaceAnchorAdded_t4C37182B2443CE6D65E2C406B6BC527FF22E7268 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceAnchorAdded::Invoke(UnityEngine.XR.FaceSubsystem.XRFace)
extern "C" IL2CPP_METHOD_ATTR void DelegateXrFaceAnchorAdded_Invoke_m60B3BBF5E5BFFFFAA5FC9B6832A5578D9BF82451 (DelegateXrFaceAnchorAdded_t4C37182B2443CE6D65E2C406B6BC527FF22E7268 * __this, XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  ___anchorData0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef void (*FunctionPointerType) (XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___anchorData0, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246 , const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___anchorData0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  >::Invoke(targetMethod, targetThis, ___anchorData0);
							else
								GenericVirtActionInvoker1< XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  >::Invoke(targetMethod, targetThis, ___anchorData0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___anchorData0);
							else
								VirtActionInvoker1< XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___anchorData0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___anchorData0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___anchorData0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  >::Invoke(targetMethod, targetThis, ___anchorData0);
						else
							GenericVirtActionInvoker1< XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  >::Invoke(targetMethod, targetThis, ___anchorData0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___anchorData0);
						else
							VirtActionInvoker1< XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___anchorData0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceAnchorAdded::BeginInvoke(UnityEngine.XR.FaceSubsystem.XRFace,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* DelegateXrFaceAnchorAdded_BeginInvoke_m0098A3B1C0F77E096EF8D10962C80237E91BB82F (DelegateXrFaceAnchorAdded_t4C37182B2443CE6D65E2C406B6BC527FF22E7268 * __this, XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  ___anchorData0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DelegateXrFaceAnchorAdded_BeginInvoke_m0098A3B1C0F77E096EF8D10962C80237E91BB82F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246_il2cpp_TypeInfo_var, &___anchorData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceAnchorAdded::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void DelegateXrFaceAnchorAdded_EndInvoke_m4BA3042B66055C96AA7ECA3808C2584B40D5E88C (DelegateXrFaceAnchorAdded_t4C37182B2443CE6D65E2C406B6BC527FF22E7268 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_DelegateXrFaceAnchorRemoved_t38731B8AEB3696EC1281AFE0D0E165C3C18C4BB4 (DelegateXrFaceAnchorRemoved_t38731B8AEB3696EC1281AFE0D0E165C3C18C4BB4 * __this, XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  ___anchorData0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___anchorData0);

}
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceAnchorRemoved::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DelegateXrFaceAnchorRemoved__ctor_m3117AF62C46947D0CBE299C775A2536A80556B89 (DelegateXrFaceAnchorRemoved_t38731B8AEB3696EC1281AFE0D0E165C3C18C4BB4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceAnchorRemoved::Invoke(UnityEngine.XR.FaceSubsystem.XRFace)
extern "C" IL2CPP_METHOD_ATTR void DelegateXrFaceAnchorRemoved_Invoke_mEBB42809791A87E3EEA84BBB2A947DF4ADB70252 (DelegateXrFaceAnchorRemoved_t38731B8AEB3696EC1281AFE0D0E165C3C18C4BB4 * __this, XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  ___anchorData0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef void (*FunctionPointerType) (XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___anchorData0, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246 , const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___anchorData0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  >::Invoke(targetMethod, targetThis, ___anchorData0);
							else
								GenericVirtActionInvoker1< XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  >::Invoke(targetMethod, targetThis, ___anchorData0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___anchorData0);
							else
								VirtActionInvoker1< XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___anchorData0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___anchorData0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___anchorData0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  >::Invoke(targetMethod, targetThis, ___anchorData0);
						else
							GenericVirtActionInvoker1< XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  >::Invoke(targetMethod, targetThis, ___anchorData0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___anchorData0);
						else
							VirtActionInvoker1< XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___anchorData0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceAnchorRemoved::BeginInvoke(UnityEngine.XR.FaceSubsystem.XRFace,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* DelegateXrFaceAnchorRemoved_BeginInvoke_mD492385A1B9A7D2B884FE10CCC1A04FA418B9287 (DelegateXrFaceAnchorRemoved_t38731B8AEB3696EC1281AFE0D0E165C3C18C4BB4 * __this, XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  ___anchorData0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DelegateXrFaceAnchorRemoved_BeginInvoke_mD492385A1B9A7D2B884FE10CCC1A04FA418B9287_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246_il2cpp_TypeInfo_var, &___anchorData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceAnchorRemoved::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void DelegateXrFaceAnchorRemoved_EndInvoke_m3EDDC4C22E99D81788811E8E8B4A319B04B9FF1C (DelegateXrFaceAnchorRemoved_t38731B8AEB3696EC1281AFE0D0E165C3C18C4BB4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_DelegateXrFaceAnchorUpdated_tCBBB53FC1132F3A2AAC5E0C1E3E6CA34E65F8C7C (DelegateXrFaceAnchorUpdated_tCBBB53FC1132F3A2AAC5E0C1E3E6CA34E65F8C7C * __this, XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  ___anchorData0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___anchorData0);

}
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceAnchorUpdated::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DelegateXrFaceAnchorUpdated__ctor_m5CCB49DA3E21A8C12F6321C904EE2D09AF430B2E (DelegateXrFaceAnchorUpdated_tCBBB53FC1132F3A2AAC5E0C1E3E6CA34E65F8C7C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceAnchorUpdated::Invoke(UnityEngine.XR.FaceSubsystem.XRFace)
extern "C" IL2CPP_METHOD_ATTR void DelegateXrFaceAnchorUpdated_Invoke_m5688C4D7117B42181323356011995A753965B063 (DelegateXrFaceAnchorUpdated_tCBBB53FC1132F3A2AAC5E0C1E3E6CA34E65F8C7C * __this, XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  ___anchorData0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef void (*FunctionPointerType) (XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___anchorData0, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246 , const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___anchorData0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  >::Invoke(targetMethod, targetThis, ___anchorData0);
							else
								GenericVirtActionInvoker1< XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  >::Invoke(targetMethod, targetThis, ___anchorData0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___anchorData0);
							else
								VirtActionInvoker1< XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___anchorData0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___anchorData0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___anchorData0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  >::Invoke(targetMethod, targetThis, ___anchorData0);
						else
							GenericVirtActionInvoker1< XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  >::Invoke(targetMethod, targetThis, ___anchorData0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___anchorData0);
						else
							VirtActionInvoker1< XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___anchorData0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceAnchorUpdated::BeginInvoke(UnityEngine.XR.FaceSubsystem.XRFace,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* DelegateXrFaceAnchorUpdated_BeginInvoke_mC26A70388AA1072B44F47330925CDF23FA3160F7 (DelegateXrFaceAnchorUpdated_tCBBB53FC1132F3A2AAC5E0C1E3E6CA34E65F8C7C * __this, XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246  ___anchorData0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DelegateXrFaceAnchorUpdated_BeginInvoke_mC26A70388AA1072B44F47330925CDF23FA3160F7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(XRFace_tD2DF3125FE693EE9DABE72A78349CB7F07A51246_il2cpp_TypeInfo_var, &___anchorData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceAnchorUpdated::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void DelegateXrFaceAnchorUpdated_EndInvoke_m2B3CEB44D2E6CDDE7B0E9AB85DAA86071BA5604E (DelegateXrFaceAnchorUpdated_tCBBB53FC1132F3A2AAC5E0C1E3E6CA34E65F8C7C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_DelegateXrFaceSessionBeginFrame_t03BCAADC9955F8AF986BD37858554A2BB5503D62 (DelegateXrFaceSessionBeginFrame_t03BCAADC9955F8AF986BD37858554A2BB5503D62 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceSessionBeginFrame::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DelegateXrFaceSessionBeginFrame__ctor_m450095C59B3611094948B045D9E05A7A36598356 (DelegateXrFaceSessionBeginFrame_t03BCAADC9955F8AF986BD37858554A2BB5503D62 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceSessionBeginFrame::Invoke()
extern "C" IL2CPP_METHOD_ATTR void DelegateXrFaceSessionBeginFrame_Invoke_m8B430DBFD5432732F78534DD65F841B872814452 (DelegateXrFaceSessionBeginFrame_t03BCAADC9955F8AF986BD37858554A2BB5503D62 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 0)
				{
					// open
					typedef void (*FunctionPointerType) (const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceSessionBeginFrame::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* DelegateXrFaceSessionBeginFrame_BeginInvoke_m5A90BD2FB6BC1EB874AF1C14BB0FBE9ECC34CDA8 (DelegateXrFaceSessionBeginFrame_t03BCAADC9955F8AF986BD37858554A2BB5503D62 * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem/DelegateXrFaceSessionBeginFrame::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void DelegateXrFaceSessionBeginFrame_EndInvoke_mF60C0FDEC08D2B35CDA1CF2094B39B18A686CED8 (DelegateXrFaceSessionBeginFrame_t03BCAADC9955F8AF986BD37858554A2BB5503D62 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARKit.XRArkitBlendShapeLocation UnityEngine.XR.ARKit.XRFaceArkitBlendShapeCoefficient::get_arkitBlendShapeLocation()
extern "C" IL2CPP_METHOD_ATTR int32_t XRFaceArkitBlendShapeCoefficient_get_arkitBlendShapeLocation_mA431618F1B085DFF18C85682836B9524FDB64D57 (XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_ArkitBlendShapeLocation_0();
		return L_0;
	}
}
extern "C"  int32_t XRFaceArkitBlendShapeCoefficient_get_arkitBlendShapeLocation_mA431618F1B085DFF18C85682836B9524FDB64D57_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E * _thisAdjusted = reinterpret_cast<XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E *>(__this + 1);
	return XRFaceArkitBlendShapeCoefficient_get_arkitBlendShapeLocation_mA431618F1B085DFF18C85682836B9524FDB64D57(_thisAdjusted, method);
}
// System.Single UnityEngine.XR.ARKit.XRFaceArkitBlendShapeCoefficient::get_coefficient()
extern "C" IL2CPP_METHOD_ATTR float XRFaceArkitBlendShapeCoefficient_get_coefficient_m5E08937EAEC9B6C806F17D557146B1A2F8739030 (XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_m_Coefficient_1();
		return L_0;
	}
}
extern "C"  float XRFaceArkitBlendShapeCoefficient_get_coefficient_m5E08937EAEC9B6C806F17D557146B1A2F8739030_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E * _thisAdjusted = reinterpret_cast<XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E *>(__this + 1);
	return XRFaceArkitBlendShapeCoefficient_get_coefficient_m5E08937EAEC9B6C806F17D557146B1A2F8739030(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARKit.XRFaceArkitBlendShapeCoefficient::Equals(UnityEngine.XR.ARKit.XRFaceArkitBlendShapeCoefficient)
extern "C" IL2CPP_METHOD_ATTR bool XRFaceArkitBlendShapeCoefficient_Equals_m42C7DF3A5731EE811BCE32D976F38702FD0A640B (XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E * __this, XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E  ___other0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		int32_t L_0 = XRFaceArkitBlendShapeCoefficient_get_arkitBlendShapeLocation_mA431618F1B085DFF18C85682836B9524FDB64D57((XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E *)__this, /*hidden argument*/NULL);
		int32_t L_1 = XRFaceArkitBlendShapeCoefficient_get_arkitBlendShapeLocation_mA431618F1B085DFF18C85682836B9524FDB64D57((XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0025;
		}
	}
	{
		float L_2 = XRFaceArkitBlendShapeCoefficient_get_coefficient_m5E08937EAEC9B6C806F17D557146B1A2F8739030((XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E *)__this, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = XRFaceArkitBlendShapeCoefficient_get_coefficient_m5E08937EAEC9B6C806F17D557146B1A2F8739030((XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E *)(&___other0), /*hidden argument*/NULL);
		bool L_4 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&V_0), L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0025:
	{
		return (bool)0;
	}
}
extern "C"  bool XRFaceArkitBlendShapeCoefficient_Equals_m42C7DF3A5731EE811BCE32D976F38702FD0A640B_AdjustorThunk (RuntimeObject * __this, XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E  ___other0, const RuntimeMethod* method)
{
	XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E * _thisAdjusted = reinterpret_cast<XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E *>(__this + 1);
	return XRFaceArkitBlendShapeCoefficient_Equals_m42C7DF3A5731EE811BCE32D976F38702FD0A640B(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARKit.XRFaceArkitBlendShapeCoefficient::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool XRFaceArkitBlendShapeCoefficient_Equals_m35E8AE07A2EEE9B9AA84D97B067A05922A468054 (XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRFaceArkitBlendShapeCoefficient_Equals_m35E8AE07A2EEE9B9AA84D97B067A05922A468054_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3 = XRFaceArkitBlendShapeCoefficient_Equals_m42C7DF3A5731EE811BCE32D976F38702FD0A640B((XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E *)__this, ((*(XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E *)((XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E *)UnBox(L_2, XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
extern "C"  bool XRFaceArkitBlendShapeCoefficient_Equals_m35E8AE07A2EEE9B9AA84D97B067A05922A468054_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E * _thisAdjusted = reinterpret_cast<XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E *>(__this + 1);
	return XRFaceArkitBlendShapeCoefficient_Equals_m35E8AE07A2EEE9B9AA84D97B067A05922A468054(_thisAdjusted, ___obj0, method);
}
// System.Int32 UnityEngine.XR.ARKit.XRFaceArkitBlendShapeCoefficient::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t XRFaceArkitBlendShapeCoefficient_GetHashCode_m7A4CB222181BFDC2310D0A6D53A3A866256071EB (XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		int32_t L_0 = XRFaceArkitBlendShapeCoefficient_get_arkitBlendShapeLocation_mA431618F1B085DFF18C85682836B9524FDB64D57((XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E *)__this, /*hidden argument*/NULL);
		float L_1 = XRFaceArkitBlendShapeCoefficient_get_coefficient_m5E08937EAEC9B6C806F17D557146B1A2F8739030((XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E *)__this, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0((float*)(&V_0), /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)486187739))), (int32_t)L_2));
	}
}
extern "C"  int32_t XRFaceArkitBlendShapeCoefficient_GetHashCode_m7A4CB222181BFDC2310D0A6D53A3A866256071EB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E * _thisAdjusted = reinterpret_cast<XRFaceArkitBlendShapeCoefficient_t829BF667B33D5FF78CD88C48B4DA4A69076AB42E *>(__this + 1);
	return XRFaceArkitBlendShapeCoefficient_GetHashCode_m7A4CB222181BFDC2310D0A6D53A3A866256071EB(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
