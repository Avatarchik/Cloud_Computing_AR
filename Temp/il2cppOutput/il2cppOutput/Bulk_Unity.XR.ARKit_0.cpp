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

template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<UnityEngine.Experimental.XR.FrameReceivedEventArgs>
struct Action_1_t95D7D93D51DF3F6A6C456CD847A0A4150A398BBC;
// System.Action`1<UnityEngine.Experimental.XR.PlaneAddedEventArgs>
struct Action_1_t3863E014281664DEECCEAFF0F363B622DAB862E6;
// System.Action`1<UnityEngine.Experimental.XR.PlaneRemovedEventArgs>
struct Action_1_t9720B7CBE6CC0851562EC5B89948AEF5C229D991;
// System.Action`1<UnityEngine.Experimental.XR.PlaneUpdatedEventArgs>
struct Action_1_tBEAD8CEE1CABAD25A45CE64C8A9D173BEDEC0AF6;
// System.Action`1<UnityEngine.Experimental.XR.ReferencePointUpdatedEventArgs>
struct Action_1_t62CF34AD78617EF5FE6E7FCE5803CBE14C103FBD;
// System.Action`1<UnityEngine.Experimental.XR.SessionTrackingStateChangedEventArgs>
struct Action_1_tFA24ECAFB569947BC1D041AECE3FD63058B301F9;
// System.Action`2<System.Int32Enum,UnityEngine.XR.ARKit.ARWorldMap>
struct Action_2_t3F365260232979E3376DDF7E674235AA6466EC8E;
// System.Action`2<UnityEngine.XR.ARKit.ARWorldMapRequestStatus,UnityEngine.XR.ARKit.ARWorldMap>
struct Action_2_t84AF1D0E414DA3F3CC83837D20CF4E7B5050620A;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
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
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t7EE965B791A606D187CCB69569A433D4CBB36879;
// System.Func`2<System.Object,System.IntPtr>
struct Func_2_tCD6D7E3EA16DD0F2ABEE6DCFB218CC15BF43B5D9;
// System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>
struct Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8;
// System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>
struct Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E;
// System.Func`2<UnityEngine.Experimental.XR.XRSessionSubsystem,System.IntPtr>
struct Func_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427;
// System.Func`3<System.Object,System.Int32Enum,System.Boolean>
struct Func_3_t38EC29D177240EF2B5F3DECA40F77E2A762B6671;
// System.Func`3<System.Object,UnityEngine.Experimental.XR.TrackableId,System.Int32Enum>
struct Func_3_tB11122E2777CE9921EA175D744BFD56D6BD535F9;
// System.Func`3<System.Object,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>
struct Func_3_t2ED96FCF00355A1F97D4CC70B00A6E3CAAF09DAE;
// System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>
struct Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3;
// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>
struct Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828;
// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>
struct Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472;
// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>
struct Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851;
// System.Func`3<UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>
struct Func_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Experimental.ISubsystemDescriptor
struct ISubsystemDescriptor_tDF5EB3ED639A15690D2CB9993789BB21F24D3934;
// UnityEngine.Experimental.XR.XRCameraSubsystem
struct XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701;
// UnityEngine.Experimental.XR.XRPlaneSubsystem
struct XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B;
// UnityEngine.Experimental.XR.XRReferencePointSubsystem
struct XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C;
// UnityEngine.Experimental.XR.XRSessionSubsystem
struct XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F;
// UnityEngine.XR.ARExtensions.ICameraConfigApi
struct ICameraConfigApi_t5694F28C505D2CA91EF77838138F419261B240BA;
// UnityEngine.XR.ARExtensions.ICameraImageApi
struct ICameraImageApi_tBAC003481E172628D623F3F9E7CFB8D2FD84EEE4;
// UnityEngine.XR.ARExtensions.Promise`1<System.Int32Enum>
struct Promise_1_t86CAA07E2F0920F186E17389E61DF22419E422A1;
// UnityEngine.XR.ARExtensions.Promise`1<UnityEngine.XR.ARExtensions.SessionAvailability>
struct Promise_1_t66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF;
// UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetIntrinsicsDelegate
struct TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389;
// UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate
struct AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF;
// UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<System.Int32Enum>
struct AsyncDelegate_1_t6A92F8D83CC29E18956F23A772F33CDBB4FB0D0A;
// UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>
struct AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659;
// UnityEngine.XR.ARKit.ARKitCameraConfigApi
struct ARKitCameraConfigApi_tD2A87AE92ADA920E2EA0F0FF1B1B6C1555FB4F5C;
// UnityEngine.XR.ARKit.ARKitCameraImageApi
struct ARKitCameraImageApi_tF1AB9580BBEDE238B5AE75A8A31104A580582DFC;
// UnityEngine.XR.ARKit.ARKitPlaneExtensions
struct ARKitPlaneExtensions_t0C8BB1B0A9B0E5FFDCA13EF90D0D7CBD940F0323;
// UnityEngine.XR.ARKit.ARKitReferencePointExtensions
struct ARKitReferencePointExtensions_t12256BC4DDF3EB1C9C63FC2E119F2D44375BAA46;
// UnityEngine.XR.ARKit.ARWorldMapSessionExtensions/OnAsyncConversionCompleteDelegate
struct OnAsyncConversionCompleteDelegate_t0713AF22D6B429530D6D08158EA74E6A447B2D5B;

extern RuntimeClass* ARKitCameraConfigApi_tD2A87AE92ADA920E2EA0F0FF1B1B6C1555FB4F5C_il2cpp_TypeInfo_var;
extern RuntimeClass* ARKitCameraExtension_tD14D3953E94E3BB0E105B65643ECF4D08F468F3C_il2cpp_TypeInfo_var;
extern RuntimeClass* ARKitCameraImageApi_tF1AB9580BBEDE238B5AE75A8A31104A580582DFC_il2cpp_TypeInfo_var;
extern RuntimeClass* ARKitPlaneExtensions_t0C8BB1B0A9B0E5FFDCA13EF90D0D7CBD940F0323_il2cpp_TypeInfo_var;
extern RuntimeClass* ARKitReferencePointExtensions_t12256BC4DDF3EB1C9C63FC2E119F2D44375BAA46_il2cpp_TypeInfo_var;
extern RuntimeClass* ARKitSessionExtension_tA5C121128492D8F1AA7C26147BBE7EAD90993DB2_il2cpp_TypeInfo_var;
extern RuntimeClass* ARWorldMapRequestStatus_tF71BE763C5F9644F3D7377ACE110F7FFBBE3D5DC_il2cpp_TypeInfo_var;
extern RuntimeClass* ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167_il2cpp_TypeInfo_var;
extern RuntimeClass* ARWorldMapSessionExtensions_tBBC8030654182B90E45AEBB62C1B2A34DBC0C145_il2cpp_TypeInfo_var;
extern RuntimeClass* ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_2_t84AF1D0E414DA3F3CC83837D20CF4E7B5050620A_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659_il2cpp_TypeInfo_var;
extern RuntimeClass* AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3_il2cpp_TypeInfo_var;
extern RuntimeClass* IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
extern RuntimeClass* OnAsyncConversionCompleteDelegate_t0713AF22D6B429530D6D08158EA74E6A447B2D5B_il2cpp_TypeInfo_var;
extern RuntimeClass* TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389_il2cpp_TypeInfo_var;
extern RuntimeClass* XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var;
extern RuntimeClass* XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var;
extern RuntimeClass* XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var;
extern RuntimeClass* XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral0DA969A2127457410F59C5D0F641E7216F1939EF;
extern String_t* _stringLiteral58A6E4A45F0E9B8660959A01C41469FBA74DCA93;
extern String_t* _stringLiteral803CB9B37A5D16493B12A6980F00E6EFC5F33114;
extern String_t* _stringLiteral899B0047F44DBE211C1A1FE7796920ED5CE0AA69;
extern String_t* _stringLiteral8B8E90144BD4006CACB7B06F48C7A448B4DCF35F;
extern String_t* _stringLiteral928E323A40E2ADC852C5EBBFA916407754AEE75C;
extern String_t* _stringLiteralA715B159C2223C334BF184A1E148A6DB8873E79E;
extern String_t* _stringLiteralB432885F2C666A6E2ADA90FE77C803272558AD52;
extern String_t* _stringLiteralDD0C3835DA449AF51EA858AE7FE22FA1AA724C25;
extern String_t* _stringLiteralE9E9BCFAFB6DCB88A2B98A04AC20F62F3FF46B43;
extern String_t* _stringLiteralF4CEFEA2B6C66275B819F8AE64B1EF1036F2DB5A;
extern const RuntimeMethod* ARKitCameraConfigApi_GetConfiguration_m3FD57A0445BCD312E3E31EC3C54682BB819BE0E1_RuntimeMethod_var;
extern const RuntimeMethod* ARKitCameraConfigApi_get_currentConfiguration_mD1C8B6263BD854AC8995A1E7C7DDA86510FED706_RuntimeMethod_var;
extern const RuntimeMethod* ARKitCameraConfigApi_set_currentConfiguration_m114AF7450AC609D069A72DC19021A1EC1D294922_RuntimeMethod_var;
extern const RuntimeMethod* ARKitCameraExtension_GetNativePtr_mA58672FCB8261CDA679059CAA3C32B5000827C98_RuntimeMethod_var;
extern const RuntimeMethod* ARKitCameraExtension_IsPermissionGranted_m6AB122A1C50F3F87D77E24C8A322BA146E7B09EC_RuntimeMethod_var;
extern const RuntimeMethod* ARKitCameraExtension_TryGetIntrinsics_m1B8BBD1A54DD6F4B00346871178A9E9E955F3DAD_RuntimeMethod_var;
extern const RuntimeMethod* ARKitCameraExtension_TrySetFocusMode_mF5ACEB8C9E07476502536530C58472BF9A7487C9_RuntimeMethod_var;
extern const RuntimeMethod* ARKitPlaneExtensions_GetNativePtr_mB7731DBFFC0CF6B6F18DF59916120F2F6E5EF697_RuntimeMethod_var;
extern const RuntimeMethod* ARKitPlaneExtensions_GetTrackingState_m8BAA498083509F95E5B6F1F0463122259E15011C_RuntimeMethod_var;
extern const RuntimeMethod* ARKitPlaneExtensions_TrySetPlaneDetectionFlags_m635BE90286E040CE8E620077B9183DDD3131DA71_RuntimeMethod_var;
extern const RuntimeMethod* ARKitReferencePointExtensions_AttachReferencePoint_m9F7234D6AD05871235B21FAEA7B835100A922233_RuntimeMethod_var;
extern const RuntimeMethod* ARKitReferencePointExtensions_GetNativePtr_m6FAF4E1BEDF954F0891337C7485AC5FA2EB61B95_RuntimeMethod_var;
extern const RuntimeMethod* ARKitSessionExtension_GetAvailabilityAsync_m7ED425F958E60C67DB7C6B42C621EBD77A96DD79_RuntimeMethod_var;
extern const RuntimeMethod* ARKitSessionExtension_GetNativePtr_m64CD3018CC879573CB8A57B1FA5300C9A85571D2_RuntimeMethod_var;
extern const RuntimeMethod* ARWorldMapRequest_GetWorldMap_m2113D2DECC0E8F9CB67D7A3EC480CBD3F2AA5A4E_RuntimeMethod_var;
extern const RuntimeMethod* ARWorldMapSessionExtensions_ApplyWorldMap_m492FCDC83290E82C7FA5747FC3928EC6962EFC96_RuntimeMethod_var;
extern const RuntimeMethod* ARWorldMapSessionExtensions_GetARWorldMapAsync_mA174E558DF8564B9661A7C9D0E834E5B3C885460_RuntimeMethod_var;
extern const RuntimeMethod* ARWorldMapSessionExtensions_GetWorldMappingStatus_mACA9118CB5F4B4F598CE53AC8A7B2340B2D9A0BC_RuntimeMethod_var;
extern const RuntimeMethod* ARWorldMapSessionExtensions_OnAsyncConversionComplete_mDD148BF0E41C531B93B1D0FF9F7ECA2E5A6CAF36_RuntimeMethod_var;
extern const RuntimeMethod* ARWorldMapSessionExtensions_WorldMapSupported_m9E7E6A372C98215B6DF0162D115D744381173C97_RuntimeMethod_var;
extern const RuntimeMethod* ARWorldMap_Serialize_m0888FED892B775E57E8BEDCE88AEB7CC5296C847_RuntimeMethod_var;
extern const RuntimeMethod* Action_2_Invoke_m2B078E4FAAD6BB392B32D5CCDAC7AC41EF522435_RuntimeMethod_var;
extern const RuntimeMethod* AsyncDelegate_1__ctor_mA0DC00CAC1027C7822EB22B5E9AD00FE41F4BB95_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m79647D280D912B4716600CA05F271A40E9BC7B11_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_mB70921C3E2F09D928DD6CB56EDB76B0740950837_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_mE24D6BB638CDBE042618FD7C42A30F92994B031C_RuntimeMethod_var;
extern const RuntimeMethod* Func_3__ctor_m27FCFCB94AC7593063BF02372B6A9B3BEEFD8779_RuntimeMethod_var;
extern const RuntimeMethod* Func_3__ctor_m719B904C27077EF12C81ECD411AB739E7B94FA3E_RuntimeMethod_var;
extern const RuntimeMethod* Func_3__ctor_m9EFB55F925F47E45BE7C8811F004C9BC82B77149_RuntimeMethod_var;
extern const RuntimeMethod* Func_3__ctor_mEB02727EA13F9EDEA7054E33EB928C6E625E4F1B_RuntimeMethod_var;
extern const RuntimeMethod* Func_3__ctor_mF23AC3FFB9F86CE914EA6FB40CE3A4797273A3EB_RuntimeMethod_var;
extern const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m3191468493B96C1824159DCA7F015F91CAC23965_RuntimeMethod_var;
extern const RuntimeMethod* NativeArray_1__ctor_m2B09F633FCB77B7457A5DA9CFC1A9B34156A74CE_RuntimeMethod_var;
extern const RuntimeMethod* Promise_1_CreateResolvedPromise_m548F7D4E240E44FFBBB8D3942AF9ABD34C6DEE4A_RuntimeMethod_var;
extern const uint32_t ARKitCameraConfigApi_GetConfiguration_m3FD57A0445BCD312E3E31EC3C54682BB819BE0E1_MetadataUsageId;
extern const uint32_t ARKitCameraConfigApi_get_currentConfiguration_mD1C8B6263BD854AC8995A1E7C7DDA86510FED706_MetadataUsageId;
extern const uint32_t ARKitCameraConfigApi_set_currentConfiguration_m114AF7450AC609D069A72DC19021A1EC1D294922_MetadataUsageId;
extern const uint32_t ARKitCameraExtension_Register_m7894593F7182DEC859F83E6F9B0C207168A12A43_MetadataUsageId;
extern const uint32_t ARKitCameraExtension_TrySetFocusMode_mF5ACEB8C9E07476502536530C58472BF9A7487C9_MetadataUsageId;
extern const uint32_t ARKitCameraExtension__cctor_mE496531387F9C09B24ED29D3AA8060A53FEDE30C_MetadataUsageId;
extern const uint32_t ARKitPlaneExtensions_Register_m3CB805B29E43D4D8A31B48A65970DF27D736B9AD_MetadataUsageId;
extern const uint32_t ARKitPlaneExtensions_TrySetPlaneDetectionFlags_m635BE90286E040CE8E620077B9183DDD3131DA71_MetadataUsageId;
extern const uint32_t ARKitPlaneExtensions__cctor_m0FD2A82FBFFB4F6B7CB456C2AE7E22A9C6813001_MetadataUsageId;
extern const uint32_t ARKitReferencePointExtensions_Register_m36C5D1848D16E4690CFB52BC632899B9FF83600C_MetadataUsageId;
extern const uint32_t ARKitReferencePointExtensions__cctor_m7CCC18B83491C47DE31FAD8E0707B41671B84671_MetadataUsageId;
extern const uint32_t ARKitSessionExtension_GetAvailabilityAsync_m7ED425F958E60C67DB7C6B42C621EBD77A96DD79_MetadataUsageId;
extern const uint32_t ARKitSessionExtension_Register_m12654BB77C4735060AE39521A3F2D907F1A888BC_MetadataUsageId;
extern const uint32_t ARKitSessionExtension__cctor_m7F9D299D64D51E897EE39ECB4096CF66B23A3E84_MetadataUsageId;
extern const uint32_t ARWorldMapRequest_Equals_m5F760251980C450E996EA560D181CC25954094E0_MetadataUsageId;
extern const uint32_t ARWorldMapRequest_GetWorldMap_m2113D2DECC0E8F9CB67D7A3EC480CBD3F2AA5A4E_MetadataUsageId;
extern const uint32_t ARWorldMapSessionExtensions_ApplyWorldMap_m492FCDC83290E82C7FA5747FC3928EC6962EFC96_MetadataUsageId;
extern const uint32_t ARWorldMapSessionExtensions_GetARWorldMapAsync_mA174E558DF8564B9661A7C9D0E834E5B3C885460_MetadataUsageId;
extern const uint32_t ARWorldMapSessionExtensions_GetWorldMappingStatus_mACA9118CB5F4B4F598CE53AC8A7B2340B2D9A0BC_MetadataUsageId;
extern const uint32_t ARWorldMapSessionExtensions_OnAsyncConversionComplete_mDD148BF0E41C531B93B1D0FF9F7ECA2E5A6CAF36_MetadataUsageId;
extern const uint32_t ARWorldMapSessionExtensions_WorldMapSupported_m9E7E6A372C98215B6DF0162D115D744381173C97_MetadataUsageId;
extern const uint32_t ARWorldMapSessionExtensions__cctor_mBA4582317C344BB121AD371448065047F408A5D4_MetadataUsageId;
extern const uint32_t ARWorldMap_Equals_mD02750E273F0FCF3A2A085776D8B2789809E6332_MetadataUsageId;
extern const uint32_t ARWorldMap_Serialize_m0888FED892B775E57E8BEDCE88AEB7CC5296C847_MetadataUsageId;
extern const uint32_t ARWorldMap_TryDeserialize_m3AEFF37DAED1C28DA714ED37CD54DEE43771BCD4_MetadataUsageId;
extern const uint32_t OnAsyncConversionCompleteDelegate_BeginInvoke_m6772500819518C2E7BFBE27422504427330F6799_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;


#ifndef U3CMODULEU3E_T8276593D2182AD0E8D12AF6BAFC4DCCD5C1DB6C1_H
#define U3CMODULEU3E_T8276593D2182AD0E8D12AF6BAFC4DCCD5C1DB6C1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t8276593D2182AD0E8D12AF6BAFC4DCCD5C1DB6C1 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T8276593D2182AD0E8D12AF6BAFC4DCCD5C1DB6C1_H
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
#ifndef CUSTOMYIELDINSTRUCTION_T819BB0973AFF22766749FF087B8AEFEAF3C2CB7D_H
#define CUSTOMYIELDINSTRUCTION_T819BB0973AFF22766749FF087B8AEFEAF3C2CB7D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMYIELDINSTRUCTION_T819BB0973AFF22766749FF087B8AEFEAF3C2CB7D_H
#ifndef ARKITCAMERACONFIGAPI_TD2A87AE92ADA920E2EA0F0FF1B1B6C1555FB4F5C_H
#define ARKITCAMERACONFIGAPI_TD2A87AE92ADA920E2EA0F0FF1B1B6C1555FB4F5C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARKit.ARKitCameraConfigApi
struct  ARKitCameraConfigApi_tD2A87AE92ADA920E2EA0F0FF1B1B6C1555FB4F5C  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARKITCAMERACONFIGAPI_TD2A87AE92ADA920E2EA0F0FF1B1B6C1555FB4F5C_H
#ifndef ARKITCAMERAEXTENSION_TD14D3953E94E3BB0E105B65643ECF4D08F468F3C_H
#define ARKITCAMERAEXTENSION_TD14D3953E94E3BB0E105B65643ECF4D08F468F3C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARKit.ARKitCameraExtension
struct  ARKitCameraExtension_tD14D3953E94E3BB0E105B65643ECF4D08F468F3C  : public RuntimeObject
{
public:

public:
};

struct ARKitCameraExtension_tD14D3953E94E3BB0E105B65643ECF4D08F468F3C_StaticFields
{
public:
	// System.String UnityEngine.XR.ARKit.ARKitCameraExtension::k_SubsystemId
	String_t* ___k_SubsystemId_0;
	// UnityEngine.XR.ARKit.ARKitCameraImageApi UnityEngine.XR.ARKit.ARKitCameraExtension::s_CameraImageApi
	ARKitCameraImageApi_tF1AB9580BBEDE238B5AE75A8A31104A580582DFC * ___s_CameraImageApi_1;
	// UnityEngine.XR.ARKit.ARKitCameraConfigApi UnityEngine.XR.ARKit.ARKitCameraExtension::s_CameraConfigApi
	ARKitCameraConfigApi_tD2A87AE92ADA920E2EA0F0FF1B1B6C1555FB4F5C * ___s_CameraConfigApi_2;

public:
	inline static int32_t get_offset_of_k_SubsystemId_0() { return static_cast<int32_t>(offsetof(ARKitCameraExtension_tD14D3953E94E3BB0E105B65643ECF4D08F468F3C_StaticFields, ___k_SubsystemId_0)); }
	inline String_t* get_k_SubsystemId_0() const { return ___k_SubsystemId_0; }
	inline String_t** get_address_of_k_SubsystemId_0() { return &___k_SubsystemId_0; }
	inline void set_k_SubsystemId_0(String_t* value)
	{
		___k_SubsystemId_0 = value;
		Il2CppCodeGenWriteBarrier((&___k_SubsystemId_0), value);
	}

	inline static int32_t get_offset_of_s_CameraImageApi_1() { return static_cast<int32_t>(offsetof(ARKitCameraExtension_tD14D3953E94E3BB0E105B65643ECF4D08F468F3C_StaticFields, ___s_CameraImageApi_1)); }
	inline ARKitCameraImageApi_tF1AB9580BBEDE238B5AE75A8A31104A580582DFC * get_s_CameraImageApi_1() const { return ___s_CameraImageApi_1; }
	inline ARKitCameraImageApi_tF1AB9580BBEDE238B5AE75A8A31104A580582DFC ** get_address_of_s_CameraImageApi_1() { return &___s_CameraImageApi_1; }
	inline void set_s_CameraImageApi_1(ARKitCameraImageApi_tF1AB9580BBEDE238B5AE75A8A31104A580582DFC * value)
	{
		___s_CameraImageApi_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_CameraImageApi_1), value);
	}

	inline static int32_t get_offset_of_s_CameraConfigApi_2() { return static_cast<int32_t>(offsetof(ARKitCameraExtension_tD14D3953E94E3BB0E105B65643ECF4D08F468F3C_StaticFields, ___s_CameraConfigApi_2)); }
	inline ARKitCameraConfigApi_tD2A87AE92ADA920E2EA0F0FF1B1B6C1555FB4F5C * get_s_CameraConfigApi_2() const { return ___s_CameraConfigApi_2; }
	inline ARKitCameraConfigApi_tD2A87AE92ADA920E2EA0F0FF1B1B6C1555FB4F5C ** get_address_of_s_CameraConfigApi_2() { return &___s_CameraConfigApi_2; }
	inline void set_s_CameraConfigApi_2(ARKitCameraConfigApi_tD2A87AE92ADA920E2EA0F0FF1B1B6C1555FB4F5C * value)
	{
		___s_CameraConfigApi_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_CameraConfigApi_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARKITCAMERAEXTENSION_TD14D3953E94E3BB0E105B65643ECF4D08F468F3C_H
#ifndef ARKITCAMERAIMAGEAPI_TF1AB9580BBEDE238B5AE75A8A31104A580582DFC_H
#define ARKITCAMERAIMAGEAPI_TF1AB9580BBEDE238B5AE75A8A31104A580582DFC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARKit.ARKitCameraImageApi
struct  ARKitCameraImageApi_tF1AB9580BBEDE238B5AE75A8A31104A580582DFC  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARKITCAMERAIMAGEAPI_TF1AB9580BBEDE238B5AE75A8A31104A580582DFC_H
#ifndef ARKITPLANEEXTENSIONS_T0C8BB1B0A9B0E5FFDCA13EF90D0D7CBD940F0323_H
#define ARKITPLANEEXTENSIONS_T0C8BB1B0A9B0E5FFDCA13EF90D0D7CBD940F0323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARKit.ARKitPlaneExtensions
struct  ARKitPlaneExtensions_t0C8BB1B0A9B0E5FFDCA13EF90D0D7CBD940F0323  : public RuntimeObject
{
public:

public:
};

struct ARKitPlaneExtensions_t0C8BB1B0A9B0E5FFDCA13EF90D0D7CBD940F0323_StaticFields
{
public:
	// System.String UnityEngine.XR.ARKit.ARKitPlaneExtensions::k_SubsystemId
	String_t* ___k_SubsystemId_0;

public:
	inline static int32_t get_offset_of_k_SubsystemId_0() { return static_cast<int32_t>(offsetof(ARKitPlaneExtensions_t0C8BB1B0A9B0E5FFDCA13EF90D0D7CBD940F0323_StaticFields, ___k_SubsystemId_0)); }
	inline String_t* get_k_SubsystemId_0() const { return ___k_SubsystemId_0; }
	inline String_t** get_address_of_k_SubsystemId_0() { return &___k_SubsystemId_0; }
	inline void set_k_SubsystemId_0(String_t* value)
	{
		___k_SubsystemId_0 = value;
		Il2CppCodeGenWriteBarrier((&___k_SubsystemId_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARKITPLANEEXTENSIONS_T0C8BB1B0A9B0E5FFDCA13EF90D0D7CBD940F0323_H
#ifndef ARKITREFERENCEPOINTEXTENSIONS_T12256BC4DDF3EB1C9C63FC2E119F2D44375BAA46_H
#define ARKITREFERENCEPOINTEXTENSIONS_T12256BC4DDF3EB1C9C63FC2E119F2D44375BAA46_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARKit.ARKitReferencePointExtensions
struct  ARKitReferencePointExtensions_t12256BC4DDF3EB1C9C63FC2E119F2D44375BAA46  : public RuntimeObject
{
public:

public:
};

struct ARKitReferencePointExtensions_t12256BC4DDF3EB1C9C63FC2E119F2D44375BAA46_StaticFields
{
public:
	// System.String UnityEngine.XR.ARKit.ARKitReferencePointExtensions::k_SubsystemId
	String_t* ___k_SubsystemId_0;

public:
	inline static int32_t get_offset_of_k_SubsystemId_0() { return static_cast<int32_t>(offsetof(ARKitReferencePointExtensions_t12256BC4DDF3EB1C9C63FC2E119F2D44375BAA46_StaticFields, ___k_SubsystemId_0)); }
	inline String_t* get_k_SubsystemId_0() const { return ___k_SubsystemId_0; }
	inline String_t** get_address_of_k_SubsystemId_0() { return &___k_SubsystemId_0; }
	inline void set_k_SubsystemId_0(String_t* value)
	{
		___k_SubsystemId_0 = value;
		Il2CppCodeGenWriteBarrier((&___k_SubsystemId_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARKITREFERENCEPOINTEXTENSIONS_T12256BC4DDF3EB1C9C63FC2E119F2D44375BAA46_H
#ifndef ARKITSESSIONEXTENSION_TA5C121128492D8F1AA7C26147BBE7EAD90993DB2_H
#define ARKITSESSIONEXTENSION_TA5C121128492D8F1AA7C26147BBE7EAD90993DB2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARKit.ARKitSessionExtension
struct  ARKitSessionExtension_tA5C121128492D8F1AA7C26147BBE7EAD90993DB2  : public RuntimeObject
{
public:

public:
};

struct ARKitSessionExtension_tA5C121128492D8F1AA7C26147BBE7EAD90993DB2_StaticFields
{
public:
	// System.String UnityEngine.XR.ARKit.ARKitSessionExtension::k_SubsystemId
	String_t* ___k_SubsystemId_0;

public:
	inline static int32_t get_offset_of_k_SubsystemId_0() { return static_cast<int32_t>(offsetof(ARKitSessionExtension_tA5C121128492D8F1AA7C26147BBE7EAD90993DB2_StaticFields, ___k_SubsystemId_0)); }
	inline String_t* get_k_SubsystemId_0() const { return ___k_SubsystemId_0; }
	inline String_t** get_address_of_k_SubsystemId_0() { return &___k_SubsystemId_0; }
	inline void set_k_SubsystemId_0(String_t* value)
	{
		___k_SubsystemId_0 = value;
		Il2CppCodeGenWriteBarrier((&___k_SubsystemId_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARKITSESSIONEXTENSION_TA5C121128492D8F1AA7C26147BBE7EAD90993DB2_H
#ifndef ARWORLDMAPREQUESTSTATUSEXTENSIONS_T8FC86F2BC224C9CCC808FF3B4610B22BE5F8051F_H
#define ARWORLDMAPREQUESTSTATUSEXTENSIONS_T8FC86F2BC224C9CCC808FF3B4610B22BE5F8051F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARKit.ARWorldMapRequestStatusExtensions
struct  ARWorldMapRequestStatusExtensions_t8FC86F2BC224C9CCC808FF3B4610B22BE5F8051F  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARWORLDMAPREQUESTSTATUSEXTENSIONS_T8FC86F2BC224C9CCC808FF3B4610B22BE5F8051F_H
#ifndef ARWORLDMAPSESSIONEXTENSIONS_TBBC8030654182B90E45AEBB62C1B2A34DBC0C145_H
#define ARWORLDMAPSESSIONEXTENSIONS_TBBC8030654182B90E45AEBB62C1B2A34DBC0C145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARKit.ARWorldMapSessionExtensions
struct  ARWorldMapSessionExtensions_tBBC8030654182B90E45AEBB62C1B2A34DBC0C145  : public RuntimeObject
{
public:

public:
};

struct ARWorldMapSessionExtensions_tBBC8030654182B90E45AEBB62C1B2A34DBC0C145_StaticFields
{
public:
	// UnityEngine.XR.ARKit.ARWorldMapSessionExtensions/OnAsyncConversionCompleteDelegate UnityEngine.XR.ARKit.ARWorldMapSessionExtensions::s_OnAsyncWorldMapCompleted
	OnAsyncConversionCompleteDelegate_t0713AF22D6B429530D6D08158EA74E6A447B2D5B * ___s_OnAsyncWorldMapCompleted_0;

public:
	inline static int32_t get_offset_of_s_OnAsyncWorldMapCompleted_0() { return static_cast<int32_t>(offsetof(ARWorldMapSessionExtensions_tBBC8030654182B90E45AEBB62C1B2A34DBC0C145_StaticFields, ___s_OnAsyncWorldMapCompleted_0)); }
	inline OnAsyncConversionCompleteDelegate_t0713AF22D6B429530D6D08158EA74E6A447B2D5B * get_s_OnAsyncWorldMapCompleted_0() const { return ___s_OnAsyncWorldMapCompleted_0; }
	inline OnAsyncConversionCompleteDelegate_t0713AF22D6B429530D6D08158EA74E6A447B2D5B ** get_address_of_s_OnAsyncWorldMapCompleted_0() { return &___s_OnAsyncWorldMapCompleted_0; }
	inline void set_s_OnAsyncWorldMapCompleted_0(OnAsyncConversionCompleteDelegate_t0713AF22D6B429530D6D08158EA74E6A447B2D5B * value)
	{
		___s_OnAsyncWorldMapCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_OnAsyncWorldMapCompleted_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARWORLDMAPSESSIONEXTENSIONS_TBBC8030654182B90E45AEBB62C1B2A34DBC0C145_H
#ifndef API_T4000D9F2E2A2012E34CA6CA8B3EA3E0BF565182C_H
#define API_T4000D9F2E2A2012E34CA6CA8B3EA3E0BF565182C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARKit.Api
struct  Api_t4000D9F2E2A2012E34CA6CA8B3EA3E0BF565182C  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // API_T4000D9F2E2A2012E34CA6CA8B3EA3E0BF565182C_H
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
#ifndef DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#define DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
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
#ifndef GCHANDLE_T39FAEE3EA592432C93B574A31DD83B87F1847DE3_H
#define GCHANDLE_T39FAEE3EA592432C93B574A31DD83B87F1847DE3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T39FAEE3EA592432C93B574A31DD83B87F1847DE3_H
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
#ifndef RECTINT_T595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A_H
#define RECTINT_T595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectInt
struct  RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A 
{
public:
	// System.Int32 UnityEngine.RectInt::m_XMin
	int32_t ___m_XMin_0;
	// System.Int32 UnityEngine.RectInt::m_YMin
	int32_t ___m_YMin_1;
	// System.Int32 UnityEngine.RectInt::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.RectInt::m_Height
	int32_t ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A, ___m_XMin_0)); }
	inline int32_t get_m_XMin_0() const { return ___m_XMin_0; }
	inline int32_t* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(int32_t value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A, ___m_YMin_1)); }
	inline int32_t get_m_YMin_1() const { return ___m_YMin_1; }
	inline int32_t* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(int32_t value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A, ___m_Width_2)); }
	inline int32_t get_m_Width_2() const { return ___m_Width_2; }
	inline int32_t* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(int32_t value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A, ___m_Height_3)); }
	inline int32_t get_m_Height_3() const { return ___m_Height_3; }
	inline int32_t* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(int32_t value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTINT_T595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A_H
#ifndef VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#define VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifndef VECTOR2INT_T339DA203C037FA6BCFC926C36DC2194D52D5F905_H
#define VECTOR2INT_T339DA203C037FA6BCFC926C36DC2194D52D5F905_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2Int
struct  Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_One_3)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Up_4)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Down_5)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Left_6)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Right_7)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Right_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2INT_T339DA203C037FA6BCFC926C36DC2194D52D5F905_H
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
#ifndef ARWORLDMAP_T8BAE5D083A023D7DD23C29E4082B6BBD329010DE_H
#define ARWORLDMAP_T8BAE5D083A023D7DD23C29E4082B6BBD329010DE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARKit.ARWorldMap
struct  ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARWorldMap::<nativeHandle>k__BackingField
	int32_t ___U3CnativeHandleU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnativeHandleU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE, ___U3CnativeHandleU3Ek__BackingField_0)); }
	inline int32_t get_U3CnativeHandleU3Ek__BackingField_0() const { return ___U3CnativeHandleU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CnativeHandleU3Ek__BackingField_0() { return &___U3CnativeHandleU3Ek__BackingField_0; }
	inline void set_U3CnativeHandleU3Ek__BackingField_0(int32_t value)
	{
		___U3CnativeHandleU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARWORLDMAP_T8BAE5D083A023D7DD23C29E4082B6BBD329010DE_H
#ifndef ARWORLDMAPREQUEST_T4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167_H
#define ARWORLDMAPREQUEST_T4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARKit.ARWorldMapRequest
struct  ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARWorldMapRequest::m_RequestId
	int32_t ___m_RequestId_0;

public:
	inline static int32_t get_offset_of_m_RequestId_0() { return static_cast<int32_t>(offsetof(ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167, ___m_RequestId_0)); }
	inline int32_t get_m_RequestId_0() const { return ___m_RequestId_0; }
	inline int32_t* get_address_of_m_RequestId_0() { return &___m_RequestId_0; }
	inline void set_m_RequestId_0(int32_t value)
	{
		___m_RequestId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARWORLDMAPREQUEST_T4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167_H
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
#ifndef INDEXOUTOFRANGEEXCEPTION_TEC7665FC66525AB6A6916A7EB505E5591683F0CF_H
#define INDEXOUTOFRANGEEXCEPTION_TEC7665FC66525AB6A6916A7EB505E5591683F0CF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXOUTOFRANGEEXCEPTION_TEC7665FC66525AB6A6916A7EB505E5591683F0CF_H
#ifndef INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
#define INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
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
#endif // INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
#ifndef INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#define INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
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
#ifndef NATIVEARRAYOPTIONS_T23897F2D7CA2F1B58D2539C64062DD7C77615B6A_H
#define NATIVEARRAYOPTIONS_T23897F2D7CA2F1B58D2539C64062DD7C77615B6A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.NativeArrayOptions
struct  NativeArrayOptions_t23897F2D7CA2F1B58D2539C64062DD7C77615B6A 
{
public:
	// System.Int32 Unity.Collections.NativeArrayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeArrayOptions_t23897F2D7CA2F1B58D2539C64062DD7C77615B6A, ___value___2)); }
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
#endif // NATIVEARRAYOPTIONS_T23897F2D7CA2F1B58D2539C64062DD7C77615B6A_H
#ifndef INTEGRATEDSUBSYSTEM_TF67A736CD38F3A64A40687C90024FA7326AF7D86_H
#define INTEGRATEDSUBSYSTEM_TF67A736CD38F3A64A40687C90024FA7326AF7D86_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.IntegratedSubsystem
struct  IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Experimental.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Experimental.ISubsystemDescriptor UnityEngine.Experimental.IntegratedSubsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_subsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86, ___m_subsystemDescriptor_1)); }
	inline RuntimeObject* get_m_subsystemDescriptor_1() const { return ___m_subsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_1() { return &___m_subsystemDescriptor_1; }
	inline void set_m_subsystemDescriptor_1(RuntimeObject* value)
	{
		___m_subsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_subsystemDescriptor_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.IntegratedSubsystem
struct IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.Experimental.IntegratedSubsystem
struct IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};
#endif // INTEGRATEDSUBSYSTEM_TF67A736CD38F3A64A40687C90024FA7326AF7D86_H
#ifndef TRACKINGSTATE_TC867717ED982A6E61C703B6A0CCF908E9642C854_H
#define TRACKINGSTATE_TC867717ED982A6E61C703B6A0CCF908E9642C854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.TrackingState
struct  TrackingState_tC867717ED982A6E61C703B6A0CCF908E9642C854 
{
public:
	// System.Int32 UnityEngine.Experimental.XR.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tC867717ED982A6E61C703B6A0CCF908E9642C854, ___value___2)); }
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
#endif // TRACKINGSTATE_TC867717ED982A6E61C703B6A0CCF908E9642C854_H
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
#ifndef TEXTUREFORMAT_T7C6B5101554065C47682E592D1E26079D4EC2DCE_H
#define TEXTUREFORMAT_T7C6B5101554065C47682E592D1E26079D4EC2DCE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE, ___value___2)); }
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
#endif // TEXTUREFORMAT_T7C6B5101554065C47682E592D1E26079D4EC2DCE_H
#ifndef ARWORLDMAPPINGSTATUS_T10E3FD61A4C125BC3417365E5C1EE00B19C68972_H
#define ARWORLDMAPPINGSTATUS_T10E3FD61A4C125BC3417365E5C1EE00B19C68972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.ARWorldMappingStatus
struct  ARWorldMappingStatus_t10E3FD61A4C125BC3417365E5C1EE00B19C68972 
{
public:
	// System.Int32 UnityEngine.XR.ARExtensions.ARWorldMappingStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARWorldMappingStatus_t10E3FD61A4C125BC3417365E5C1EE00B19C68972, ___value___2)); }
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
#endif // ARWORLDMAPPINGSTATUS_T10E3FD61A4C125BC3417365E5C1EE00B19C68972_H
#ifndef CAMERACONFIGURATION_TF2E20F6B31C6014A39C87E6C430247D1B0F3BDD7_H
#define CAMERACONFIGURATION_TF2E20F6B31C6014A39C87E6C430247D1B0F3BDD7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.CameraConfiguration
struct  CameraConfiguration_tF2E20F6B31C6014A39C87E6C430247D1B0F3BDD7 
{
public:
	// UnityEngine.Vector2Int UnityEngine.XR.ARExtensions.CameraConfiguration::m_Resolution
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___m_Resolution_0;
	// System.Int32 UnityEngine.XR.ARExtensions.CameraConfiguration::m_Framerate
	int32_t ___m_Framerate_1;

public:
	inline static int32_t get_offset_of_m_Resolution_0() { return static_cast<int32_t>(offsetof(CameraConfiguration_tF2E20F6B31C6014A39C87E6C430247D1B0F3BDD7, ___m_Resolution_0)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_m_Resolution_0() const { return ___m_Resolution_0; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_m_Resolution_0() { return &___m_Resolution_0; }
	inline void set_m_Resolution_0(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___m_Resolution_0 = value;
	}

	inline static int32_t get_offset_of_m_Framerate_1() { return static_cast<int32_t>(offsetof(CameraConfiguration_tF2E20F6B31C6014A39C87E6C430247D1B0F3BDD7, ___m_Framerate_1)); }
	inline int32_t get_m_Framerate_1() const { return ___m_Framerate_1; }
	inline int32_t* get_address_of_m_Framerate_1() { return &___m_Framerate_1; }
	inline void set_m_Framerate_1(int32_t value)
	{
		___m_Framerate_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACONFIGURATION_TF2E20F6B31C6014A39C87E6C430247D1B0F3BDD7_H
#ifndef CAMERAFOCUSMODE_T198966DE20F938A7890CE5EBFB00CCA53EAF4ED4_H
#define CAMERAFOCUSMODE_T198966DE20F938A7890CE5EBFB00CCA53EAF4ED4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.CameraFocusMode
struct  CameraFocusMode_t198966DE20F938A7890CE5EBFB00CCA53EAF4ED4 
{
public:
	// System.Int32 UnityEngine.XR.ARExtensions.CameraFocusMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraFocusMode_t198966DE20F938A7890CE5EBFB00CCA53EAF4ED4, ___value___2)); }
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
#endif // CAMERAFOCUSMODE_T198966DE20F938A7890CE5EBFB00CCA53EAF4ED4_H
#ifndef CAMERAIMAGEFORMAT_T3B37B8C0CD1FDB32590DE83ABB369EEB65307EBD_H
#define CAMERAIMAGEFORMAT_T3B37B8C0CD1FDB32590DE83ABB369EEB65307EBD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.CameraImageFormat
struct  CameraImageFormat_t3B37B8C0CD1FDB32590DE83ABB369EEB65307EBD 
{
public:
	// System.Int32 UnityEngine.XR.ARExtensions.CameraImageFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraImageFormat_t3B37B8C0CD1FDB32590DE83ABB369EEB65307EBD, ___value___2)); }
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
#endif // CAMERAIMAGEFORMAT_T3B37B8C0CD1FDB32590DE83ABB369EEB65307EBD_H
#ifndef CAMERAIMAGETRANSFORMATION_T9244C88533E9586E4237E49856EE71A34B60E48D_H
#define CAMERAIMAGETRANSFORMATION_T9244C88533E9586E4237E49856EE71A34B60E48D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.CameraImageTransformation
struct  CameraImageTransformation_t9244C88533E9586E4237E49856EE71A34B60E48D 
{
public:
	// System.Int32 UnityEngine.XR.ARExtensions.CameraImageTransformation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraImageTransformation_t9244C88533E9586E4237E49856EE71A34B60E48D, ___value___2)); }
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
#endif // CAMERAIMAGETRANSFORMATION_T9244C88533E9586E4237E49856EE71A34B60E48D_H
#ifndef CAMERAINTRINSICS_TF5C8338837CCA8C112418715D15B806AD05B8447_H
#define CAMERAINTRINSICS_TF5C8338837CCA8C112418715D15B806AD05B8447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.CameraIntrinsics
struct  CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 
{
public:
	// UnityEngine.Vector2 UnityEngine.XR.ARExtensions.CameraIntrinsics::m_FocalLength
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_FocalLength_0;
	// UnityEngine.Vector2 UnityEngine.XR.ARExtensions.CameraIntrinsics::m_PrincipalPoint
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_PrincipalPoint_1;
	// UnityEngine.Vector2Int UnityEngine.XR.ARExtensions.CameraIntrinsics::m_Resolution
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___m_Resolution_2;

public:
	inline static int32_t get_offset_of_m_FocalLength_0() { return static_cast<int32_t>(offsetof(CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447, ___m_FocalLength_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_FocalLength_0() const { return ___m_FocalLength_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_FocalLength_0() { return &___m_FocalLength_0; }
	inline void set_m_FocalLength_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_FocalLength_0 = value;
	}

	inline static int32_t get_offset_of_m_PrincipalPoint_1() { return static_cast<int32_t>(offsetof(CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447, ___m_PrincipalPoint_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_PrincipalPoint_1() const { return ___m_PrincipalPoint_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_PrincipalPoint_1() { return &___m_PrincipalPoint_1; }
	inline void set_m_PrincipalPoint_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_PrincipalPoint_1 = value;
	}

	inline static int32_t get_offset_of_m_Resolution_2() { return static_cast<int32_t>(offsetof(CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447, ___m_Resolution_2)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_m_Resolution_2() const { return ___m_Resolution_2; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_m_Resolution_2() { return &___m_Resolution_2; }
	inline void set_m_Resolution_2(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___m_Resolution_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAINTRINSICS_TF5C8338837CCA8C112418715D15B806AD05B8447_H
#ifndef PLANEDETECTIONFLAGS_T973AF579C70632C3A6345A61C688B125C5864215_H
#define PLANEDETECTIONFLAGS_T973AF579C70632C3A6345A61C688B125C5864215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.PlaneDetectionFlags
struct  PlaneDetectionFlags_t973AF579C70632C3A6345A61C688B125C5864215 
{
public:
	// System.Int32 UnityEngine.XR.ARExtensions.PlaneDetectionFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneDetectionFlags_t973AF579C70632C3A6345A61C688B125C5864215, ___value___2)); }
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
#endif // PLANEDETECTIONFLAGS_T973AF579C70632C3A6345A61C688B125C5864215_H
#ifndef SESSIONAVAILABILITY_T66AE38CEACBF09105F9564006DE37A94C9DB370F_H
#define SESSIONAVAILABILITY_T66AE38CEACBF09105F9564006DE37A94C9DB370F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.SessionAvailability
struct  SessionAvailability_t66AE38CEACBF09105F9564006DE37A94C9DB370F 
{
public:
	// System.Int32 UnityEngine.XR.ARExtensions.SessionAvailability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionAvailability_t66AE38CEACBF09105F9564006DE37A94C9DB370F, ___value___2)); }
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
#endif // SESSIONAVAILABILITY_T66AE38CEACBF09105F9564006DE37A94C9DB370F_H
#ifndef ARWORLDMAPREQUESTSTATUS_TF71BE763C5F9644F3D7377ACE110F7FFBBE3D5DC_H
#define ARWORLDMAPREQUESTSTATUS_TF71BE763C5F9644F3D7377ACE110F7FFBBE3D5DC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARKit.ARWorldMapRequestStatus
struct  ARWorldMapRequestStatus_tF71BE763C5F9644F3D7377ACE110F7FFBBE3D5DC 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARWorldMapRequestStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARWorldMapRequestStatus_tF71BE763C5F9644F3D7377ACE110F7FFBBE3D5DC, ___value___2)); }
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
#endif // ARWORLDMAPREQUESTSTATUS_TF71BE763C5F9644F3D7377ACE110F7FFBBE3D5DC_H
#ifndef AVAILABILITY_T074966148B4B01D6EEFA10620D4772697DB9645C_H
#define AVAILABILITY_T074966148B4B01D6EEFA10620D4772697DB9645C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARKit.Api/Availability
struct  Availability_t074966148B4B01D6EEFA10620D4772697DB9645C 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.Api/Availability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Availability_t074966148B4B01D6EEFA10620D4772697DB9645C, ___value___2)); }
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
#endif // AVAILABILITY_T074966148B4B01D6EEFA10620D4772697DB9645C_H
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
#ifndef NATIVEARRAY_1_TB6F81A87EBCD8958AF30E15FACF167CE524DEABE_H
#define NATIVEARRAY_1_TB6F81A87EBCD8958AF30E15FACF167CE524DEABE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.NativeArray`1<System.Byte>
struct  NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE, ___m_AllocatorLabel_2)); }
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
#endif // NATIVEARRAY_1_TB6F81A87EBCD8958AF30E15FACF167CE524DEABE_H
#ifndef INTEGRATEDSUBSYSTEM_1_T13F531EAA4D22C65C38F9A4EC080496DC444FC3D_H
#define INTEGRATEDSUBSYSTEM_1_T13F531EAA4D22C65C38F9A4EC080496DC444FC3D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.IntegratedSubsystem`1<UnityEngine.Experimental.XR.XRCameraSubsystemDescriptor>
struct  IntegratedSubsystem_1_t13F531EAA4D22C65C38F9A4EC080496DC444FC3D  : public IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTEGRATEDSUBSYSTEM_1_T13F531EAA4D22C65C38F9A4EC080496DC444FC3D_H
#ifndef INTEGRATEDSUBSYSTEM_1_T5D53A066044FFF0B5A888DC279F870AE7CCE1AB6_H
#define INTEGRATEDSUBSYSTEM_1_T5D53A066044FFF0B5A888DC279F870AE7CCE1AB6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.IntegratedSubsystem`1<UnityEngine.Experimental.XR.XRPlaneSubsystemDescriptor>
struct  IntegratedSubsystem_1_t5D53A066044FFF0B5A888DC279F870AE7CCE1AB6  : public IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTEGRATEDSUBSYSTEM_1_T5D53A066044FFF0B5A888DC279F870AE7CCE1AB6_H
#ifndef INTEGRATEDSUBSYSTEM_1_TBC5DE3D32F4F7A2A85B915E23161D0E811F906AA_H
#define INTEGRATEDSUBSYSTEM_1_TBC5DE3D32F4F7A2A85B915E23161D0E811F906AA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.IntegratedSubsystem`1<UnityEngine.Experimental.XR.XRReferencePointSubsystemDescriptor>
struct  IntegratedSubsystem_1_tBC5DE3D32F4F7A2A85B915E23161D0E811F906AA  : public IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTEGRATEDSUBSYSTEM_1_TBC5DE3D32F4F7A2A85B915E23161D0E811F906AA_H
#ifndef INTEGRATEDSUBSYSTEM_1_TD7024C556BEBF93D22C6C88F64A35242D4DEB369_H
#define INTEGRATEDSUBSYSTEM_1_TD7024C556BEBF93D22C6C88F64A35242D4DEB369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.IntegratedSubsystem`1<UnityEngine.Experimental.XR.XRSessionSubsystemDescriptor>
struct  IntegratedSubsystem_1_tD7024C556BEBF93D22C6C88F64A35242D4DEB369  : public IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTEGRATEDSUBSYSTEM_1_TD7024C556BEBF93D22C6C88F64A35242D4DEB369_H
#ifndef CAMERAIMAGECONVERSIONPARAMS_TEFEA7C9CF777BD67E3221CBC7CB3D2FD1E99B4D1_H
#define CAMERAIMAGECONVERSIONPARAMS_TEFEA7C9CF777BD67E3221CBC7CB3D2FD1E99B4D1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.CameraImageConversionParams
struct  CameraImageConversionParams_tEFEA7C9CF777BD67E3221CBC7CB3D2FD1E99B4D1 
{
public:
	// UnityEngine.RectInt UnityEngine.XR.ARExtensions.CameraImageConversionParams::m_InputRect
	RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A  ___m_InputRect_0;
	// UnityEngine.Vector2Int UnityEngine.XR.ARExtensions.CameraImageConversionParams::m_OutputDimensions
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___m_OutputDimensions_1;
	// UnityEngine.TextureFormat UnityEngine.XR.ARExtensions.CameraImageConversionParams::m_Format
	int32_t ___m_Format_2;
	// UnityEngine.XR.ARExtensions.CameraImageTransformation UnityEngine.XR.ARExtensions.CameraImageConversionParams::m_Transformation
	int32_t ___m_Transformation_3;

public:
	inline static int32_t get_offset_of_m_InputRect_0() { return static_cast<int32_t>(offsetof(CameraImageConversionParams_tEFEA7C9CF777BD67E3221CBC7CB3D2FD1E99B4D1, ___m_InputRect_0)); }
	inline RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A  get_m_InputRect_0() const { return ___m_InputRect_0; }
	inline RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A * get_address_of_m_InputRect_0() { return &___m_InputRect_0; }
	inline void set_m_InputRect_0(RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A  value)
	{
		___m_InputRect_0 = value;
	}

	inline static int32_t get_offset_of_m_OutputDimensions_1() { return static_cast<int32_t>(offsetof(CameraImageConversionParams_tEFEA7C9CF777BD67E3221CBC7CB3D2FD1E99B4D1, ___m_OutputDimensions_1)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_m_OutputDimensions_1() const { return ___m_OutputDimensions_1; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_m_OutputDimensions_1() { return &___m_OutputDimensions_1; }
	inline void set_m_OutputDimensions_1(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___m_OutputDimensions_1 = value;
	}

	inline static int32_t get_offset_of_m_Format_2() { return static_cast<int32_t>(offsetof(CameraImageConversionParams_tEFEA7C9CF777BD67E3221CBC7CB3D2FD1E99B4D1, ___m_Format_2)); }
	inline int32_t get_m_Format_2() const { return ___m_Format_2; }
	inline int32_t* get_address_of_m_Format_2() { return &___m_Format_2; }
	inline void set_m_Format_2(int32_t value)
	{
		___m_Format_2 = value;
	}

	inline static int32_t get_offset_of_m_Transformation_3() { return static_cast<int32_t>(offsetof(CameraImageConversionParams_tEFEA7C9CF777BD67E3221CBC7CB3D2FD1E99B4D1, ___m_Transformation_3)); }
	inline int32_t get_m_Transformation_3() const { return ___m_Transformation_3; }
	inline int32_t* get_address_of_m_Transformation_3() { return &___m_Transformation_3; }
	inline void set_m_Transformation_3(int32_t value)
	{
		___m_Transformation_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAIMAGECONVERSIONPARAMS_TEFEA7C9CF777BD67E3221CBC7CB3D2FD1E99B4D1_H
#ifndef PROMISE_1_T66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF_H
#define PROMISE_1_T66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.Promise`1<UnityEngine.XR.ARExtensions.SessionAvailability>
struct  Promise_1_t66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// T UnityEngine.XR.ARExtensions.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARExtensions.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_t66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF, ___U3CresultU3Ek__BackingField_0)); }
	inline int32_t get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(int32_t value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_t66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROMISE_1_T66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF_H
#ifndef ACTION_2_T84AF1D0E414DA3F3CC83837D20CF4E7B5050620A_H
#define ACTION_2_T84AF1D0E414DA3F3CC83837D20CF4E7B5050620A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<UnityEngine.XR.ARKit.ARWorldMapRequestStatus,UnityEngine.XR.ARKit.ARWorldMap>
struct  Action_2_t84AF1D0E414DA3F3CC83837D20CF4E7B5050620A  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T84AF1D0E414DA3F3CC83837D20CF4E7B5050620A_H
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
#ifndef FUNC_2_TC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8_H
#define FUNC_2_TC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>
struct  Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_TC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8_H
#ifndef FUNC_2_T0076092BB5420B9DA3DDB3BD1AD3722674B1108E_H
#define FUNC_2_T0076092BB5420B9DA3DDB3BD1AD3722674B1108E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>
struct  Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T0076092BB5420B9DA3DDB3BD1AD3722674B1108E_H
#ifndef FUNC_2_T3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427_H
#define FUNC_2_T3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<UnityEngine.Experimental.XR.XRSessionSubsystem,System.IntPtr>
struct  Func_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427_H
#ifndef FUNC_3_TCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3_H
#define FUNC_3_TCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>
struct  Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_TCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3_H
#ifndef FUNC_3_T51D9C7E9448F6A950FC17B94AF0F74697536A828_H
#define FUNC_3_T51D9C7E9448F6A950FC17B94AF0F74697536A828_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>
struct  Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T51D9C7E9448F6A950FC17B94AF0F74697536A828_H
#ifndef FUNC_3_T7E93774D49B95861743D5D0E1341B8BFC0BA0472_H
#define FUNC_3_T7E93774D49B95861743D5D0E1341B8BFC0BA0472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>
struct  Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T7E93774D49B95861743D5D0E1341B8BFC0BA0472_H
#ifndef FUNC_3_T2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851_H
#define FUNC_3_T2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>
struct  Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851_H
#ifndef FUNC_3_T5F7E105DF840E21AC18D244B52CBAC733FF4DAFB_H
#define FUNC_3_T5F7E105DF840E21AC18D244B52CBAC733FF4DAFB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>
struct  Func_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T5F7E105DF840E21AC18D244B52CBAC733FF4DAFB_H
#ifndef XRCAMERASUBSYSTEM_T9271DB5D8FEDD3431246FCB6D9257A940246E701_H
#define XRCAMERASUBSYSTEM_T9271DB5D8FEDD3431246FCB6D9257A940246E701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRCameraSubsystem
struct  XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701  : public IntegratedSubsystem_1_t13F531EAA4D22C65C38F9A4EC080496DC444FC3D
{
public:
	// System.Action`1<UnityEngine.Experimental.XR.FrameReceivedEventArgs> UnityEngine.Experimental.XR.XRCameraSubsystem::FrameReceived
	Action_1_t95D7D93D51DF3F6A6C456CD847A0A4150A398BBC * ___FrameReceived_2;

public:
	inline static int32_t get_offset_of_FrameReceived_2() { return static_cast<int32_t>(offsetof(XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701, ___FrameReceived_2)); }
	inline Action_1_t95D7D93D51DF3F6A6C456CD847A0A4150A398BBC * get_FrameReceived_2() const { return ___FrameReceived_2; }
	inline Action_1_t95D7D93D51DF3F6A6C456CD847A0A4150A398BBC ** get_address_of_FrameReceived_2() { return &___FrameReceived_2; }
	inline void set_FrameReceived_2(Action_1_t95D7D93D51DF3F6A6C456CD847A0A4150A398BBC * value)
	{
		___FrameReceived_2 = value;
		Il2CppCodeGenWriteBarrier((&___FrameReceived_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRCAMERASUBSYSTEM_T9271DB5D8FEDD3431246FCB6D9257A940246E701_H
#ifndef XRPLANESUBSYSTEM_T3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B_H
#define XRPLANESUBSYSTEM_T3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRPlaneSubsystem
struct  XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B  : public IntegratedSubsystem_1_t5D53A066044FFF0B5A888DC279F870AE7CCE1AB6
{
public:
	// System.Action`1<UnityEngine.Experimental.XR.PlaneAddedEventArgs> UnityEngine.Experimental.XR.XRPlaneSubsystem::PlaneAdded
	Action_1_t3863E014281664DEECCEAFF0F363B622DAB862E6 * ___PlaneAdded_2;
	// System.Action`1<UnityEngine.Experimental.XR.PlaneUpdatedEventArgs> UnityEngine.Experimental.XR.XRPlaneSubsystem::PlaneUpdated
	Action_1_tBEAD8CEE1CABAD25A45CE64C8A9D173BEDEC0AF6 * ___PlaneUpdated_3;
	// System.Action`1<UnityEngine.Experimental.XR.PlaneRemovedEventArgs> UnityEngine.Experimental.XR.XRPlaneSubsystem::PlaneRemoved
	Action_1_t9720B7CBE6CC0851562EC5B89948AEF5C229D991 * ___PlaneRemoved_4;

public:
	inline static int32_t get_offset_of_PlaneAdded_2() { return static_cast<int32_t>(offsetof(XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B, ___PlaneAdded_2)); }
	inline Action_1_t3863E014281664DEECCEAFF0F363B622DAB862E6 * get_PlaneAdded_2() const { return ___PlaneAdded_2; }
	inline Action_1_t3863E014281664DEECCEAFF0F363B622DAB862E6 ** get_address_of_PlaneAdded_2() { return &___PlaneAdded_2; }
	inline void set_PlaneAdded_2(Action_1_t3863E014281664DEECCEAFF0F363B622DAB862E6 * value)
	{
		___PlaneAdded_2 = value;
		Il2CppCodeGenWriteBarrier((&___PlaneAdded_2), value);
	}

	inline static int32_t get_offset_of_PlaneUpdated_3() { return static_cast<int32_t>(offsetof(XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B, ___PlaneUpdated_3)); }
	inline Action_1_tBEAD8CEE1CABAD25A45CE64C8A9D173BEDEC0AF6 * get_PlaneUpdated_3() const { return ___PlaneUpdated_3; }
	inline Action_1_tBEAD8CEE1CABAD25A45CE64C8A9D173BEDEC0AF6 ** get_address_of_PlaneUpdated_3() { return &___PlaneUpdated_3; }
	inline void set_PlaneUpdated_3(Action_1_tBEAD8CEE1CABAD25A45CE64C8A9D173BEDEC0AF6 * value)
	{
		___PlaneUpdated_3 = value;
		Il2CppCodeGenWriteBarrier((&___PlaneUpdated_3), value);
	}

	inline static int32_t get_offset_of_PlaneRemoved_4() { return static_cast<int32_t>(offsetof(XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B, ___PlaneRemoved_4)); }
	inline Action_1_t9720B7CBE6CC0851562EC5B89948AEF5C229D991 * get_PlaneRemoved_4() const { return ___PlaneRemoved_4; }
	inline Action_1_t9720B7CBE6CC0851562EC5B89948AEF5C229D991 ** get_address_of_PlaneRemoved_4() { return &___PlaneRemoved_4; }
	inline void set_PlaneRemoved_4(Action_1_t9720B7CBE6CC0851562EC5B89948AEF5C229D991 * value)
	{
		___PlaneRemoved_4 = value;
		Il2CppCodeGenWriteBarrier((&___PlaneRemoved_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRPLANESUBSYSTEM_T3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B_H
#ifndef XRREFERENCEPOINTSUBSYSTEM_T9D4A49A2B6580143EF25399812034F001A18D00C_H
#define XRREFERENCEPOINTSUBSYSTEM_T9D4A49A2B6580143EF25399812034F001A18D00C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRReferencePointSubsystem
struct  XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C  : public IntegratedSubsystem_1_tBC5DE3D32F4F7A2A85B915E23161D0E811F906AA
{
public:
	// System.Action`1<UnityEngine.Experimental.XR.ReferencePointUpdatedEventArgs> UnityEngine.Experimental.XR.XRReferencePointSubsystem::ReferencePointUpdated
	Action_1_t62CF34AD78617EF5FE6E7FCE5803CBE14C103FBD * ___ReferencePointUpdated_2;

public:
	inline static int32_t get_offset_of_ReferencePointUpdated_2() { return static_cast<int32_t>(offsetof(XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C, ___ReferencePointUpdated_2)); }
	inline Action_1_t62CF34AD78617EF5FE6E7FCE5803CBE14C103FBD * get_ReferencePointUpdated_2() const { return ___ReferencePointUpdated_2; }
	inline Action_1_t62CF34AD78617EF5FE6E7FCE5803CBE14C103FBD ** get_address_of_ReferencePointUpdated_2() { return &___ReferencePointUpdated_2; }
	inline void set_ReferencePointUpdated_2(Action_1_t62CF34AD78617EF5FE6E7FCE5803CBE14C103FBD * value)
	{
		___ReferencePointUpdated_2 = value;
		Il2CppCodeGenWriteBarrier((&___ReferencePointUpdated_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRREFERENCEPOINTSUBSYSTEM_T9D4A49A2B6580143EF25399812034F001A18D00C_H
#ifndef XRSESSIONSUBSYSTEM_T75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F_H
#define XRSESSIONSUBSYSTEM_T75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRSessionSubsystem
struct  XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F  : public IntegratedSubsystem_1_tD7024C556BEBF93D22C6C88F64A35242D4DEB369
{
public:
	// System.Action`1<UnityEngine.Experimental.XR.SessionTrackingStateChangedEventArgs> UnityEngine.Experimental.XR.XRSessionSubsystem::TrackingStateChanged
	Action_1_tFA24ECAFB569947BC1D041AECE3FD63058B301F9 * ___TrackingStateChanged_2;

public:
	inline static int32_t get_offset_of_TrackingStateChanged_2() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F, ___TrackingStateChanged_2)); }
	inline Action_1_tFA24ECAFB569947BC1D041AECE3FD63058B301F9 * get_TrackingStateChanged_2() const { return ___TrackingStateChanged_2; }
	inline Action_1_tFA24ECAFB569947BC1D041AECE3FD63058B301F9 ** get_address_of_TrackingStateChanged_2() { return &___TrackingStateChanged_2; }
	inline void set_TrackingStateChanged_2(Action_1_tFA24ECAFB569947BC1D041AECE3FD63058B301F9 * value)
	{
		___TrackingStateChanged_2 = value;
		Il2CppCodeGenWriteBarrier((&___TrackingStateChanged_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRSESSIONSUBSYSTEM_T75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F_H
#ifndef TRYGETINTRINSICSDELEGATE_TE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389_H
#define TRYGETINTRINSICSDELEGATE_TE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetIntrinsicsDelegate
struct  TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRYGETINTRINSICSDELEGATE_TE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389_H
#ifndef ATTACHREFERENCEPOINTDELEGATE_T8E14528144FB8B3DE6B44FCD01B3B4C2090236DF_H
#define ATTACHREFERENCEPOINTDELEGATE_T8E14528144FB8B3DE6B44FCD01B3B4C2090236DF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate
struct  AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTACHREFERENCEPOINTDELEGATE_T8E14528144FB8B3DE6B44FCD01B3B4C2090236DF_H
#ifndef ASYNCDELEGATE_1_TC1209225BB9B8AF0FB9384EA8D49347BB4BCC659_H
#define ASYNCDELEGATE_1_TC1209225BB9B8AF0FB9384EA8D49347BB4BCC659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>
struct  AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCDELEGATE_1_TC1209225BB9B8AF0FB9384EA8D49347BB4BCC659_H
#ifndef ONASYNCCONVERSIONCOMPLETEDELEGATE_T0713AF22D6B429530D6D08158EA74E6A447B2D5B_H
#define ONASYNCCONVERSIONCOMPLETEDELEGATE_T0713AF22D6B429530D6D08158EA74E6A447B2D5B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARKit.ARWorldMapSessionExtensions/OnAsyncConversionCompleteDelegate
struct  OnAsyncConversionCompleteDelegate_t0713AF22D6B429530D6D08158EA74E6A447B2D5B  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONASYNCCONVERSIONCOMPLETEDELEGATE_T0713AF22D6B429530D6D08158EA74E6A447B2D5B_H
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


// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_2__ctor_m5153AE6EE06BA488EF3D92A0DCF7E4EF530961B5_gshared (Func_2_t7EE965B791A606D187CCB69569A433D4CBB36879 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.IntPtr>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_2__ctor_m64D91D0F4CEE0497B1377BAB3C64409E5CDCA78F_gshared (Func_2_tCD6D7E3EA16DD0F2ABEE6DCFB218CC15BF43B5D9 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Func`3<System.Object,System.Int32Enum,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_3__ctor_mA9FB1F42AF9C9A7194C88CBBA1CB1AB3A5D098FA_gshared (Func_3_t38EC29D177240EF2B5F3DECA40F77E2A762B6671 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Func`3<System.Object,UnityEngine.Experimental.XR.TrackableId,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_3__ctor_m7C29B75E27025AC6E14AB16448A6199CAAA9F525_gshared (Func_3_tB11122E2777CE9921EA175D744BFD56D6BD535F9 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Func`3<System.Object,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_3__ctor_mB31B94AEAFCD2CCC2F044FB60ED385D61859DC79_gshared (Func_3_t2ED96FCF00355A1F97D4CC70B00A6E3CAAF09DAE * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// UnityEngine.XR.ARExtensions.Promise`1<!0> UnityEngine.XR.ARExtensions.Promise`1<System.Int32Enum>::CreateResolvedPromise(!0)
extern "C" IL2CPP_METHOD_ATTR Promise_1_t86CAA07E2F0920F186E17389E61DF22419E422A1 * Promise_1_CreateResolvedPromise_m033B95320CE69249E1F513DDE891F06C6FE561FE_gshared (int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<System.Int32Enum>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AsyncDelegate_1__ctor_mF5C7A44A78E479C7D8999030E5765E2A4422A38D_gshared (AsyncDelegate_1_t6A92F8D83CC29E18956F23A772F33CDBB4FB0D0A * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.Byte>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
extern "C" IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m2B09F633FCB77B7457A5DA9CFC1A9B34156A74CE_gshared (NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.Byte>(Unity.Collections.NativeArray`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m3191468493B96C1824159DCA7F015F91CAC23965_gshared (NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE  p0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32Enum,UnityEngine.XR.ARKit.ARWorldMap>::Invoke(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Action_2_Invoke_m514AB5C30ECAB1DFA1C2D1430759E7EF343E4756_gshared (Action_2_t3F365260232979E3376DDF7E674235AA6466EC8E * __this, int32_t p0, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  p1, const RuntimeMethod* method);

// System.Int32 UnityEngine.XR.ARKit.Api::UnityARKit_cameraImage_getConfigurationCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Api_UnityARKit_cameraImage_getConfigurationCount_mC0DFB6E33426E064A103A09A3FF03E1F8E2793F0 (const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.Api::UnityARKit_cameraImage_tryGetConfiguration(System.Int32,UnityEngine.XR.ARExtensions.CameraConfiguration&)
extern "C" IL2CPP_METHOD_ATTR bool Api_UnityARKit_cameraImage_tryGetConfiguration_m18953433E61698D8234E33EED4A1B427456BB24D (int32_t ___index0, CameraConfiguration_tF2E20F6B31C6014A39C87E6C430247D1B0F3BDD7 * ___configuration1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mCCE2EFF47A0ACB4B2636F63140F94FCEA71A9BCA (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.Api::UnityARKit_cameraImage_tryGetCurrentConfiguration(UnityEngine.XR.ARExtensions.CameraConfiguration&)
extern "C" IL2CPP_METHOD_ATTR bool Api_UnityARKit_cameraImage_tryGetCurrentConfiguration_m4ACCA617F78255C2D34E862C32CA02E9608EB533 (CameraConfiguration_tF2E20F6B31C6014A39C87E6C430247D1B0F3BDD7 * ___configuration0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.Api::UnityARKit_cameraImage_trySetConfiguration(UnityEngine.XR.ARExtensions.CameraConfiguration)
extern "C" IL2CPP_METHOD_ATTR bool Api_UnityARKit_cameraImage_trySetConfiguration_m2137D6159D8E3DEADE52F58D993599607C510F8A (CameraConfiguration_tF2E20F6B31C6014A39C87E6C430247D1B0F3BDD7  ___configuration0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mE24D6BB638CDBE042618FD7C42A30F92994B031C (Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m5153AE6EE06BA488EF3D92A0DCF7E4EF530961B5_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions::RegisterIsPermissionGrantedHandler(System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void XRCameraExtensions_RegisterIsPermissionGrantedHandler_mED0452B2B64A07923D45071C3CE63EBD2035B6D5 (String_t* p0, Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8 * p1, const RuntimeMethod* method);
// System.Void System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mB70921C3E2F09D928DD6CB56EDB76B0740950837 (Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m64D91D0F4CEE0497B1377BAB3C64409E5CDCA78F_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions::RegisterGetNativePtrHandler(System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>)
extern "C" IL2CPP_METHOD_ATTR void XRCameraExtensions_RegisterGetNativePtrHandler_m67E8B170C5D41F0AF47462B28177FA0B274258E8 (String_t* p0, Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E * p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions::RegisterCameraImageApi(System.String,UnityEngine.XR.ARExtensions.ICameraImageApi)
extern "C" IL2CPP_METHOD_ATTR void XRCameraExtensions_RegisterCameraImageApi_m83BD2D54ECEE79601C9542DC8C183FF4234DC6E1 (String_t* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions::RegisterCameraConfigApi(System.String,UnityEngine.XR.ARExtensions.ICameraConfigApi)
extern "C" IL2CPP_METHOD_ATTR void XRCameraExtensions_RegisterCameraConfigApi_m568201BADAF07EF9263812CF8D2536805EF8A0EA (String_t* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Void System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m9EFB55F925F47E45BE7C8811F004C9BC82B77149 (Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_mA9FB1F42AF9C9A7194C88CBBA1CB1AB3A5D098FA_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions::RegisterTrySetFocusModeHandler(System.String,System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void XRCameraExtensions_RegisterTrySetFocusModeHandler_mCD5A16427CD17181184A29700DA48887AF153440 (String_t* p0, Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetIntrinsicsDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TryGetIntrinsicsDelegate__ctor_mD8B74D11E32B1BCE8EAEFA7575C7664BB3AEF9AE (TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions::RegisterTryGetIntrinsicsHandler(System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetIntrinsicsDelegate)
extern "C" IL2CPP_METHOD_ATTR void XRCameraExtensions_RegisterTryGetIntrinsicsHandler_mAEB9570EE00D6B928500CD6DB39BE7174C877EB6 (String_t* p0, TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitCameraImageApi::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ARKitCameraImageApi__ctor_m809A72EAE76C00B206584B0690162C6C0759A1E2 (ARKitCameraImageApi_tF1AB9580BBEDE238B5AE75A8A31104A580582DFC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitCameraConfigApi::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ARKitCameraConfigApi__ctor_mB1F8675A1A20AB04B92E36E26852C6B0EC2612F6 (ARKitCameraConfigApi_tD2A87AE92ADA920E2EA0F0FF1B1B6C1555FB4F5C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraExtension::UnityARKit_trySetFocusMode(UnityEngine.XR.ARExtensions.CameraFocusMode)
extern "C" IL2CPP_METHOD_ATTR bool ARKitCameraExtension_UnityARKit_trySetFocusMode_m016859187C9E63BDBF53D109C73F3680104A4071 (int32_t ___focusMode0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.Api::UnityARKit_IsCameraPermissionGranted()
extern "C" IL2CPP_METHOD_ATTR bool Api_UnityARKit_IsCameraPermissionGranted_m67DA79B6852217EF82976F18635968097266E052 (const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARKit.Api::UnityARKit_getNativeFramePtr()
extern "C" IL2CPP_METHOD_ATTR intptr_t Api_UnityARKit_getNativeFramePtr_m4B18366ADAADB40BF6677FA05A1D82466749E728 (const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.Api::UnityARKit_tryGetCameraIntrinsics(UnityEngine.XR.ARExtensions.CameraIntrinsics&)
extern "C" IL2CPP_METHOD_ATTR bool Api_UnityARKit_tryGetCameraIntrinsics_mEC8BBED851DF8933B2E76171FB21CFF545230752 (CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * ___cameraIntrinsics0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.Api::UnityARKit_cameraImage_tryAcquireLatestImage(System.Int32&,UnityEngine.Vector2Int&,System.Int32&,System.Double&,UnityEngine.XR.ARExtensions.CameraImageFormat&)
extern "C" IL2CPP_METHOD_ATTR bool Api_UnityARKit_cameraImage_tryAcquireLatestImage_mFE927E318BB2977096C77567FC196BC195787267 (int32_t* ___nativeHandle0, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * ___dimensions1, int32_t* ___planeCount2, double* ___timestamp3, int32_t* ___format4, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.Api::UnityARKit_cameraImage_tryConvert(System.Int32,UnityEngine.XR.ARExtensions.CameraImageConversionParams,System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Api_UnityARKit_cameraImage_tryConvert_m277D9E2DBB429DA1E29A1B1DE708ECD10379AF7B (int32_t ___nativeHandle0, CameraImageConversionParams_tEFEA7C9CF777BD67E3221CBC7CB3D2FD1E99B4D1  ___conversionParams1, intptr_t ___buffer2, int32_t ___bufferLength3, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.Api::UnityARKit_cameraImage_disposeImage(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Api_UnityARKit_cameraImage_disposeImage_m981FACDA074F559D51F03B79428AB32C9DE68AF4 (int32_t ___nativeHandle0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.Api::UnityARKit_cameraImage_tryGetConvertedDataSize(System.Int32,UnityEngine.Vector2Int,UnityEngine.TextureFormat,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool Api_UnityARKit_cameraImage_tryGetConvertedDataSize_m13AECD8A172D0B003D08F9220A831208772805DA (int32_t ___nativeHandle0, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___dimensions1, int32_t ___format2, int32_t* ___size3, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.Api::UnityARKit_cameraImage_handleValid(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Api_UnityARKit_cameraImage_handleValid_m550A608D8822134393EFD213AA8989BCDC607ABE (int32_t ___nativeHandle0, const RuntimeMethod* method);
// System.Void System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m27FCFCB94AC7593063BF02372B6A9B3BEEFD8779 (Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_m7C29B75E27025AC6E14AB16448A6199CAAA9F525_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.XR.ARExtensions.XRPlaneExtensions::RegisterGetTrackingStateHandler(System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>)
extern "C" IL2CPP_METHOD_ATTR void XRPlaneExtensions_RegisterGetTrackingStateHandler_m2CD375B880EC1FDD19F33675A299B2E8C59BC60D (String_t* p0, Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 * p1, const RuntimeMethod* method);
// System.Void System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m719B904C27077EF12C81ECD411AB739E7B94FA3E (Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_mB31B94AEAFCD2CCC2F044FB60ED385D61859DC79_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.XR.ARExtensions.XRPlaneExtensions::RegisterGetNativePtrHandler(System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>)
extern "C" IL2CPP_METHOD_ATTR void XRPlaneExtensions_RegisterGetNativePtrHandler_mFF73D901D5DBBCB8E6AE8E9A624FCE7E75E4DE43 (String_t* p0, Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828 * p1, const RuntimeMethod* method);
// System.Void System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_mF23AC3FFB9F86CE914EA6FB40CE3A4797273A3EB (Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_mA9FB1F42AF9C9A7194C88CBBA1CB1AB3A5D098FA_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.XR.ARExtensions.XRPlaneExtensions::RegisterTrySetPlaneDetectionFlagsHandler(System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void XRPlaneExtensions_RegisterTrySetPlaneDetectionFlagsHandler_mDC0A19589E7969643C0EF5920C16585E545D341F (String_t* p0, Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 * p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitPlaneExtensions::UnityARKit_trySetPlaneDetectionFlags(UnityEngine.XR.ARExtensions.PlaneDetectionFlags)
extern "C" IL2CPP_METHOD_ATTR bool ARKitPlaneExtensions_UnityARKit_trySetPlaneDetectionFlags_m269DB409EE36F73A47C25831AD4C5FCC8102A060 (int32_t ___flags0, const RuntimeMethod* method);
// UnityEngine.Experimental.XR.TrackingState UnityEngine.XR.ARKit.Api::UnityARKit_getAnchorTrackingState(UnityEngine.Experimental.XR.TrackableId)
extern "C" IL2CPP_METHOD_ATTR int32_t Api_UnityARKit_getAnchorTrackingState_m8EECFF54C1E5DF1F89E44B2AD11E579D1D5A8C06 (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___id0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARKit.Api::UnityARKit_getNativePlanePtr(UnityEngine.Experimental.XR.TrackableId)
extern "C" IL2CPP_METHOD_ATTR intptr_t Api_UnityARKit_getNativePlanePtr_m331E5541D0CCF0AB87B740E9619DECD1D934D365 (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___trackableId0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AttachReferencePointDelegate__ctor_m78B8311C8F1F2170BE5D029F058A51BB34237B3C (AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARExtensions.XRReferencePointExtensions::RegisterAttachReferencePointHandler(System.String,UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate)
extern "C" IL2CPP_METHOD_ATTR void XRReferencePointExtensions_RegisterAttachReferencePointHandler_m9216ECCCA3A6714F54F5F9085272B2684B24A919 (String_t* p0, AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * p1, const RuntimeMethod* method);
// System.Void System.Func`3<UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_mEB02727EA13F9EDEA7054E33EB928C6E625E4F1B (Func_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_mB31B94AEAFCD2CCC2F044FB60ED385D61859DC79_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.XR.ARExtensions.XRReferencePointExtensions::RegisterGetNativePtrHandler(System.String,System.Func`3<UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>)
extern "C" IL2CPP_METHOD_ATTR void XRReferencePointExtensions_RegisterGetNativePtrHandler_m69E29238677EA66C8EB362530B077E661F0244E0 (String_t* p0, Func_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB * p1, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARKit.Api::UnityARKit_getNativeReferencePointPtr(UnityEngine.Experimental.XR.TrackableId)
extern "C" IL2CPP_METHOD_ATTR intptr_t Api_UnityARKit_getNativeReferencePointPtr_m3EDF9A878776EF12669006520BCEE6BBC51251C5 (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___trackableId0, const RuntimeMethod* method);
// UnityEngine.Experimental.XR.TrackableId UnityEngine.XR.ARKit.Api::UnityARKit_attachReferencePoint(UnityEngine.Experimental.XR.TrackableId,UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  Api_UnityARKit_attachReferencePoint_mF498613770EAAFD63B92966871780C3A88BBE029 (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___trackableId0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose1, const RuntimeMethod* method);
// UnityEngine.XR.ARKit.Api/Availability UnityEngine.XR.ARKit.Api::UnityARKit_CheckAvailability()
extern "C" IL2CPP_METHOD_ATTR int32_t Api_UnityARKit_CheckAvailability_m16C5BD2D1AC6885BFEE3B754610DC272B6CA19A7 (const RuntimeMethod* method);
// UnityEngine.XR.ARExtensions.Promise`1<!0> UnityEngine.XR.ARExtensions.Promise`1<UnityEngine.XR.ARExtensions.SessionAvailability>::CreateResolvedPromise(!0)
inline Promise_1_t66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF * Promise_1_CreateResolvedPromise_m548F7D4E240E44FFBBB8D3942AF9ABD34C6DEE4A (int32_t p0, const RuntimeMethod* method)
{
	return ((  Promise_1_t66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF * (*) (int32_t, const RuntimeMethod*))Promise_1_CreateResolvedPromise_m033B95320CE69249E1F513DDE891F06C6FE561FE_gshared)(p0, method);
}
// System.IntPtr UnityEngine.XR.ARKit.Api::UnityARKit_getNativeSessionPtr()
extern "C" IL2CPP_METHOD_ATTR intptr_t Api_UnityARKit_getNativeSessionPtr_m3BB1B38D978BDEF1A7391AB169C6583C16923A63 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>::.ctor(System.Object,System.IntPtr)
inline void AsyncDelegate_1__ctor_mA0DC00CAC1027C7822EB22B5E9AD00FE41F4BB95 (AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 *, RuntimeObject *, intptr_t, const RuntimeMethod*))AsyncDelegate_1__ctor_mF5C7A44A78E479C7D8999030E5765E2A4422A38D_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.XR.ARExtensions.XRSessionExtensions::RegisterGetAvailabilityAsyncHandler(System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>)
extern "C" IL2CPP_METHOD_ATTR void XRSessionExtensions_RegisterGetAvailabilityAsyncHandler_mD8436B9D2786A1B6D358D389C861250181890618 (String_t* p0, AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 * p1, const RuntimeMethod* method);
// System.Void System.Func`2<UnityEngine.Experimental.XR.XRSessionSubsystem,System.IntPtr>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m79647D280D912B4716600CA05F271A40E9BC7B11 (Func_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m64D91D0F4CEE0497B1377BAB3C64409E5CDCA78F_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.XR.ARExtensions.XRSessionExtensions::RegisterGetNativePtrHandler(System.String,System.Func`2<UnityEngine.Experimental.XR.XRSessionSubsystem,System.IntPtr>)
extern "C" IL2CPP_METHOD_ATTR void XRSessionExtensions_RegisterGetNativePtrHandler_m0F2BA7F0001105F840854F14E36B374EA02178EC (String_t* p0, Func_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427 * p1, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.ARWorldMap::get_nativeHandle()
extern "C" IL2CPP_METHOD_ATTR int32_t ARWorldMap_get_nativeHandle_m4BDFD6601FBDE4DCAF00485C162D2DD5E70F8A93 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.Api::UnityARKit_disposeWorldMap(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Api_UnityARKit_disposeWorldMap_m76AA975C391A2D1DAF0100E05DD619C460C4AD23 (int32_t ___worldMapId0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARWorldMap::set_nativeHandle(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ARWorldMap_set_nativeHandle_m60628E8F40C1190D9AE2EF2A28F9B01EE7F94A36 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARWorldMap::Dispose()
extern "C" IL2CPP_METHOD_ATTR void ARWorldMap_Dispose_m39FFD69207F7BB7DA2411A8B744A7C71CFDA03D0 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.Api::UnityARKit_isWorldMapValid(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Api_UnityARKit_isWorldMapValid_m0E89999AA625B3F88F42B20F1A1B257577F74657 (int32_t ___nativeHandle0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARWorldMap::get_valid()
extern "C" IL2CPP_METHOD_ATTR bool ARWorldMap_get_valid_m2778D108B711DFB048E4AF1042800968BC4F63FC (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.Api::UnityARKit_trySerializeWorldMap(System.Int32,System.IntPtr&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool Api_UnityARKit_trySerializeWorldMap_m01904E5B5FA60E7465EE8C1118EAE87E939A75CF (int32_t ___nativeHandle0, intptr_t* ___nsdata1, int32_t* ___length2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.Byte>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m2B09F633FCB77B7457A5DA9CFC1A9B34156A74CE (NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m2B09F633FCB77B7457A5DA9CFC1A9B34156A74CE_gshared)(__this, p0, p1, p2, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.Byte>(Unity.Collections.NativeArray`1<!!0>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m3191468493B96C1824159DCA7F015F91CAC23965 (NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE  p0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE , const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m3191468493B96C1824159DCA7F015F91CAC23965_gshared)(p0, method);
}
// System.Void System.IntPtr::.ctor(System.Void*)
extern "C" IL2CPP_METHOD_ATTR void IntPtr__ctor_m6360250F4B87C6AE2F0389DA0DEE1983EED73FB6 (intptr_t* __this, void* p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.Api::UnityARKit_copyAndReleaseNsData(System.IntPtr,System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Api_UnityARKit_copyAndReleaseNsData_mBE81424D8C7A771D6BB30694DD28A4AD03F852B7 (intptr_t ___destination0, intptr_t ___sourceNsData1, int32_t ___length2, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.XR.ARKit.ARWorldMap::Serialize(Unity.Collections.Allocator)
extern "C" IL2CPP_METHOD_ATTR NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE  ARWorldMap_Serialize_m0888FED892B775E57E8BEDCE88AEB7CC5296C847 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, int32_t ___allocator0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.Api::UnityARKit_deserializeWorldMap(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Api_UnityARKit_deserializeWorldMap_mE59E2BE04D3A85CEA9C98BE9990514B0F4470264 (intptr_t ___buffer0, int32_t ___bufferLength1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARWorldMap::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ARWorldMap__ctor_m603DA112F27C776D33AC7F285A5B0F268AFA1DFC (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, int32_t ___nativeHandle0, const RuntimeMethod* method);
// System.Int32 System.Int32::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A (int32_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.ARWorldMap::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t ARWorldMap_GetHashCode_m084D4D95A1BF2B18C93825E155B889AE07C2C1A9 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARWorldMap::Equals(UnityEngine.XR.ARKit.ARWorldMap)
extern "C" IL2CPP_METHOD_ATTR bool ARWorldMap_Equals_mF4CBBC2F7B48A3FF6C5EAB73E86A0A6C54E15894 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARWorldMap::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ARWorldMap_Equals_mD02750E273F0FCF3A2A085776D8B2789809E6332 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// UnityEngine.XR.ARKit.ARWorldMapRequestStatus UnityEngine.XR.ARKit.Api::UnityARKit_getWorldMapRequestStatus(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Api_UnityARKit_getWorldMapRequestStatus_m5E81BDCA1EA65F8578317B9DB283A1B0AE10D65D (int32_t ___worldMapId0, const RuntimeMethod* method);
// UnityEngine.XR.ARKit.ARWorldMapRequestStatus UnityEngine.XR.ARKit.ARWorldMapRequest::get_status()
extern "C" IL2CPP_METHOD_ATTR int32_t ARWorldMapRequest_get_status_mEF94818913FCF6416CF29C6BFBCC84EEF39C3867 (ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.Api::UnityARKit_getWorldMapIdFromRequestId(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Api_UnityARKit_getWorldMapIdFromRequestId_mCE48249F707D9F2EABE1558A2F52A36B03353885 (int32_t ___requestId0, const RuntimeMethod* method);
// UnityEngine.XR.ARKit.ARWorldMap UnityEngine.XR.ARKit.ARWorldMapRequest::GetWorldMap()
extern "C" IL2CPP_METHOD_ATTR ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  ARWorldMapRequest_GetWorldMap_m2113D2DECC0E8F9CB67D7A3EC480CBD3F2AA5A4E (ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.Api::UnityARKit_disposeWorldMapRequest(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Api_UnityARKit_disposeWorldMapRequest_m8E4D6D1C55E27DA7B04944E7B5B6363B48BD7D11 (int32_t ___worldMapId0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARWorldMapRequest::Dispose()
extern "C" IL2CPP_METHOD_ATTR void ARWorldMapRequest_Dispose_m6B143E570818A0D47A9C4D9EE2ADFE0B34FD478A (ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.ARWorldMapRequest::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t ARWorldMapRequest_GetHashCode_m4BB31BA535D0E535F2227E2EEAFA9C509198B360 (ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARWorldMapRequest::Equals(UnityEngine.XR.ARKit.ARWorldMapRequest)
extern "C" IL2CPP_METHOD_ATTR bool ARWorldMapRequest_Equals_mCA93FB5DE16168E6DC2097FA3D2E5ED1056E9464 (ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 * __this, ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARWorldMapRequest::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ARWorldMapRequest_Equals_m5F760251980C450E996EA560D181CC25954094E0 (ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARWorldMapRequest::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ARWorldMapRequest__ctor_m266BD4EEF387AA12276C40495B179537F45CFDC4 (ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 * __this, int32_t ___requestId0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARWorldMapSessionExtensions::OnAsyncConversionComplete(UnityEngine.XR.ARKit.ARWorldMapRequestStatus,System.Int32,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ARWorldMapSessionExtensions_OnAsyncConversionComplete_mDD148BF0E41C531B93B1D0FF9F7ECA2E5A6CAF36 (int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.Api::UnityARKit_createWorldMapRequest()
extern "C" IL2CPP_METHOD_ATTR int32_t Api_UnityARKit_createWorldMapRequest_m09500B5587A7E14020CA7509015EF5BBF00DF17C (const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.Api::UnityARKit_worldMapSupported()
extern "C" IL2CPP_METHOD_ATTR bool Api_UnityARKit_worldMapSupported_m1902B04D1D7BE4717B3AE080731F682478565443 (const RuntimeMethod* method);
// UnityEngine.XR.ARExtensions.ARWorldMappingStatus UnityEngine.XR.ARKit.Api::UnityARKit_getWorldMappingStatus()
extern "C" IL2CPP_METHOD_ATTR int32_t Api_UnityARKit_getWorldMappingStatus_m3F0625AE5BC8D1F5C9CA605B9754B3A838AB9448 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.Api::UnityARKit_applyWorldMap(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Api_UnityARKit_applyWorldMap_m3025327998D7B76573DBA249432A1F5B4B008DA0 (int32_t ___worldMapId0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARWorldMapSessionExtensions/OnAsyncConversionCompleteDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnAsyncConversionCompleteDelegate__ctor_m46854071AD5413F1FFD5C79AEF9F4C52A58150B0 (OnAsyncConversionCompleteDelegate_t0713AF22D6B429530D6D08158EA74E6A447B2D5B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::FromIntPtr(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  GCHandle_FromIntPtr_mB803C8ECA1D723F1C51A69F7A7E09E269488D36C (intptr_t p0, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GCHandle_get_Target_mDBDEA6883245CF1EF963D9FA945569B2D59DCCF8 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARWorldMapRequestStatusExtensions::IsError(UnityEngine.XR.ARKit.ARWorldMapRequestStatus)
extern "C" IL2CPP_METHOD_ATTR bool ARWorldMapRequestStatusExtensions_IsError_m2CDC805EB13EBC5106106B63CF3E7FA2761416D8 (int32_t ___status0, const RuntimeMethod* method);
// System.Void System.Action`2<UnityEngine.XR.ARKit.ARWorldMapRequestStatus,UnityEngine.XR.ARKit.ARWorldMap>::Invoke(!0,!1)
inline void Action_2_Invoke_m2B078E4FAAD6BB392B32D5CCDAC7AC41EF522435 (Action_2_t84AF1D0E414DA3F3CC83837D20CF4E7B5050620A * __this, int32_t p0, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  p1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t84AF1D0E414DA3F3CC83837D20CF4E7B5050620A *, int32_t, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE , const RuntimeMethod*))Action_2_Invoke_m514AB5C30ECAB1DFA1C2D1430759E7EF343E4756_gshared)(__this, p0, p1, method);
}
// System.Void System.Runtime.InteropServices.GCHandle::Free()
extern "C" IL2CPP_METHOD_ATTR void GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.XR.ARKit.ARKitCameraConfigApi::GetConfigurationCount()
extern "C" IL2CPP_METHOD_ATTR int32_t ARKitCameraConfigApi_GetConfigurationCount_mF4B2343F0C6D88D1E615022DD0B8311DAE5C2008 (ARKitCameraConfigApi_tD2A87AE92ADA920E2EA0F0FF1B1B6C1555FB4F5C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = Api_UnityARKit_cameraImage_getConfigurationCount_mC0DFB6E33426E064A103A09A3FF03E1F8E2793F0(/*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.XR.ARExtensions.CameraConfiguration UnityEngine.XR.ARKit.ARKitCameraConfigApi::GetConfiguration(System.Int32)
extern "C" IL2CPP_METHOD_ATTR CameraConfiguration_tF2E20F6B31C6014A39C87E6C430247D1B0F3BDD7  ARKitCameraConfigApi_GetConfiguration_m3FD57A0445BCD312E3E31EC3C54682BB819BE0E1 (ARKitCameraConfigApi_tD2A87AE92ADA920E2EA0F0FF1B1B6C1555FB4F5C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitCameraConfigApi_GetConfiguration_m3FD57A0445BCD312E3E31EC3C54682BB819BE0E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CameraConfiguration_tF2E20F6B31C6014A39C87E6C430247D1B0F3BDD7  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		bool L_1 = Api_UnityARKit_cameraImage_tryGetConfiguration_m18953433E61698D8234E33EED4A1B427456BB24D(L_0, (CameraConfiguration_tF2E20F6B31C6014A39C87E6C430247D1B0F3BDD7 *)(&V_0), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___index0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralB432885F2C666A6E2ADA90FE77C803272558AD52, L_4, /*hidden argument*/NULL);
		IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * L_6 = (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF *)il2cpp_codegen_object_new(IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_mCCE2EFF47A0ACB4B2636F63140F94FCEA71A9BCA(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, ARKitCameraConfigApi_GetConfiguration_m3FD57A0445BCD312E3E31EC3C54682BB819BE0E1_RuntimeMethod_var);
	}

IL_0020:
	{
		CameraConfiguration_tF2E20F6B31C6014A39C87E6C430247D1B0F3BDD7  L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.XR.ARExtensions.CameraConfiguration UnityEngine.XR.ARKit.ARKitCameraConfigApi::get_currentConfiguration()
extern "C" IL2CPP_METHOD_ATTR CameraConfiguration_tF2E20F6B31C6014A39C87E6C430247D1B0F3BDD7  ARKitCameraConfigApi_get_currentConfiguration_mD1C8B6263BD854AC8995A1E7C7DDA86510FED706 (ARKitCameraConfigApi_tD2A87AE92ADA920E2EA0F0FF1B1B6C1555FB4F5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitCameraConfigApi_get_currentConfiguration_mD1C8B6263BD854AC8995A1E7C7DDA86510FED706_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CameraConfiguration_tF2E20F6B31C6014A39C87E6C430247D1B0F3BDD7  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		bool L_0 = Api_UnityARKit_cameraImage_tryGetCurrentConfiguration_m4ACCA617F78255C2D34E862C32CA02E9608EB533((CameraConfiguration_tF2E20F6B31C6014A39C87E6C430247D1B0F3BDD7 *)(&V_0), /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_1 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_1, _stringLiteral899B0047F44DBE211C1A1FE7796920ED5CE0AA69, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ARKitCameraConfigApi_get_currentConfiguration_mD1C8B6263BD854AC8995A1E7C7DDA86510FED706_RuntimeMethod_var);
	}

IL_0014:
	{
		CameraConfiguration_tF2E20F6B31C6014A39C87E6C430247D1B0F3BDD7  L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraConfigApi::set_currentConfiguration(UnityEngine.XR.ARExtensions.CameraConfiguration)
extern "C" IL2CPP_METHOD_ATTR void ARKitCameraConfigApi_set_currentConfiguration_m114AF7450AC609D069A72DC19021A1EC1D294922 (ARKitCameraConfigApi_tD2A87AE92ADA920E2EA0F0FF1B1B6C1555FB4F5C * __this, CameraConfiguration_tF2E20F6B31C6014A39C87E6C430247D1B0F3BDD7  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitCameraConfigApi_set_currentConfiguration_m114AF7450AC609D069A72DC19021A1EC1D294922_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CameraConfiguration_tF2E20F6B31C6014A39C87E6C430247D1B0F3BDD7  L_0 = ___value0;
		bool L_1 = Api_UnityARKit_cameraImage_trySetConfiguration_m2137D6159D8E3DEADE52F58D993599607C510F8A(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_2 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_2, _stringLiteralF4CEFEA2B6C66275B819F8AE64B1EF1036F2DB5A, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, ARKitCameraConfigApi_set_currentConfiguration_m114AF7450AC609D069A72DC19021A1EC1D294922_RuntimeMethod_var);
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraConfigApi::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ARKitCameraConfigApi__ctor_mB1F8675A1A20AB04B92E36E26852C6B0EC2612F6 (ARKitCameraConfigApi_tD2A87AE92ADA920E2EA0F0FF1B1B6C1555FB4F5C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
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
// System.Void UnityEngine.XR.ARKit.ARKitCameraExtension::Register()
extern "C" IL2CPP_METHOD_ATTR void ARKitCameraExtension_Register_m7894593F7182DEC859F83E6F9B0C207168A12A43 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitCameraExtension_Register_m7894593F7182DEC859F83E6F9B0C207168A12A43_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ARKitCameraExtension_tD14D3953E94E3BB0E105B65643ECF4D08F468F3C_il2cpp_TypeInfo_var);
		String_t* L_0 = ((ARKitCameraExtension_tD14D3953E94E3BB0E105B65643ECF4D08F468F3C_StaticFields*)il2cpp_codegen_static_fields_for(ARKitCameraExtension_tD14D3953E94E3BB0E105B65643ECF4D08F468F3C_il2cpp_TypeInfo_var))->get_k_SubsystemId_0();
		Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8 * L_1 = (Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8 *)il2cpp_codegen_object_new(Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8_il2cpp_TypeInfo_var);
		Func_2__ctor_mE24D6BB638CDBE042618FD7C42A30F92994B031C(L_1, NULL, (intptr_t)((intptr_t)ARKitCameraExtension_IsPermissionGranted_m6AB122A1C50F3F87D77E24C8A322BA146E7B09EC_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mE24D6BB638CDBE042618FD7C42A30F92994B031C_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var);
		XRCameraExtensions_RegisterIsPermissionGrantedHandler_mED0452B2B64A07923D45071C3CE63EBD2035B6D5(L_0, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ((ARKitCameraExtension_tD14D3953E94E3BB0E105B65643ECF4D08F468F3C_StaticFields*)il2cpp_codegen_static_fields_for(ARKitCameraExtension_tD14D3953E94E3BB0E105B65643ECF4D08F468F3C_il2cpp_TypeInfo_var))->get_k_SubsystemId_0();
		Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E * L_3 = (Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E *)il2cpp_codegen_object_new(Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E_il2cpp_TypeInfo_var);
		Func_2__ctor_mB70921C3E2F09D928DD6CB56EDB76B0740950837(L_3, NULL, (intptr_t)((intptr_t)ARKitCameraExtension_GetNativePtr_mA58672FCB8261CDA679059CAA3C32B5000827C98_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mB70921C3E2F09D928DD6CB56EDB76B0740950837_RuntimeMethod_var);
		XRCameraExtensions_RegisterGetNativePtrHandler_m67E8B170C5D41F0AF47462B28177FA0B274258E8(L_2, L_3, /*hidden argument*/NULL);
		String_t* L_4 = ((ARKitCameraExtension_tD14D3953E94E3BB0E105B65643ECF4D08F468F3C_StaticFields*)il2cpp_codegen_static_fields_for(ARKitCameraExtension_tD14D3953E94E3BB0E105B65643ECF4D08F468F3C_il2cpp_TypeInfo_var))->get_k_SubsystemId_0();
		ARKitCameraImageApi_tF1AB9580BBEDE238B5AE75A8A31104A580582DFC * L_5 = ((ARKitCameraExtension_tD14D3953E94E3BB0E105B65643ECF4D08F468F3C_StaticFields*)il2cpp_codegen_static_fields_for(ARKitCameraExtension_tD14D3953E94E3BB0E105B65643ECF4D08F468F3C_il2cpp_TypeInfo_var))->get_s_CameraImageApi_1();
		XRCameraExtensions_RegisterCameraImageApi_m83BD2D54ECEE79601C9542DC8C183FF4234DC6E1(L_4, L_5, /*hidden argument*/NULL);
		String_t* L_6 = ((ARKitCameraExtension_tD14D3953E94E3BB0E105B65643ECF4D08F468F3C_StaticFields*)il2cpp_codegen_static_fields_for(ARKitCameraExtension_tD14D3953E94E3BB0E105B65643ECF4D08F468F3C_il2cpp_TypeInfo_var))->get_k_SubsystemId_0();
		ARKitCameraConfigApi_tD2A87AE92ADA920E2EA0F0FF1B1B6C1555FB4F5C * L_7 = ((ARKitCameraExtension_tD14D3953E94E3BB0E105B65643ECF4D08F468F3C_StaticFields*)il2cpp_codegen_static_fields_for(ARKitCameraExtension_tD14D3953E94E3BB0E105B65643ECF4D08F468F3C_il2cpp_TypeInfo_var))->get_s_CameraConfigApi_2();
		XRCameraExtensions_RegisterCameraConfigApi_m568201BADAF07EF9263812CF8D2536805EF8A0EA(L_6, L_7, /*hidden argument*/NULL);
		String_t* L_8 = ((ARKitCameraExtension_tD14D3953E94E3BB0E105B65643ECF4D08F468F3C_StaticFields*)il2cpp_codegen_static_fields_for(ARKitCameraExtension_tD14D3953E94E3BB0E105B65643ECF4D08F468F3C_il2cpp_TypeInfo_var))->get_k_SubsystemId_0();
		Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 * L_9 = (Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 *)il2cpp_codegen_object_new(Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3_il2cpp_TypeInfo_var);
		Func_3__ctor_m9EFB55F925F47E45BE7C8811F004C9BC82B77149(L_9, NULL, (intptr_t)((intptr_t)ARKitCameraExtension_TrySetFocusMode_mF5ACEB8C9E07476502536530C58472BF9A7487C9_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m9EFB55F925F47E45BE7C8811F004C9BC82B77149_RuntimeMethod_var);
		XRCameraExtensions_RegisterTrySetFocusModeHandler_mCD5A16427CD17181184A29700DA48887AF153440(L_8, L_9, /*hidden argument*/NULL);
		String_t* L_10 = ((ARKitCameraExtension_tD14D3953E94E3BB0E105B65643ECF4D08F468F3C_StaticFields*)il2cpp_codegen_static_fields_for(ARKitCameraExtension_tD14D3953E94E3BB0E105B65643ECF4D08F468F3C_il2cpp_TypeInfo_var))->get_k_SubsystemId_0();
		TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * L_11 = (TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 *)il2cpp_codegen_object_new(TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389_il2cpp_TypeInfo_var);
		TryGetIntrinsicsDelegate__ctor_mD8B74D11E32B1BCE8EAEFA7575C7664BB3AEF9AE(L_11, NULL, (intptr_t)((intptr_t)ARKitCameraExtension_TryGetIntrinsics_m1B8BBD1A54DD6F4B00346871178A9E9E955F3DAD_RuntimeMethod_var), /*hidden argument*/NULL);
		XRCameraExtensions_RegisterTryGetIntrinsicsHandler_mAEB9570EE00D6B928500CD6DB39BE7174C877EB6(L_10, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraExtension::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ARKitCameraExtension__cctor_mE496531387F9C09B24ED29D3AA8060A53FEDE30C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitCameraExtension__cctor_mE496531387F9C09B24ED29D3AA8060A53FEDE30C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ARKitCameraExtension_tD14D3953E94E3BB0E105B65643ECF4D08F468F3C_StaticFields*)il2cpp_codegen_static_fields_for(ARKitCameraExtension_tD14D3953E94E3BB0E105B65643ECF4D08F468F3C_il2cpp_TypeInfo_var))->set_k_SubsystemId_0(_stringLiteral8B8E90144BD4006CACB7B06F48C7A448B4DCF35F);
		ARKitCameraImageApi_tF1AB9580BBEDE238B5AE75A8A31104A580582DFC * L_0 = (ARKitCameraImageApi_tF1AB9580BBEDE238B5AE75A8A31104A580582DFC *)il2cpp_codegen_object_new(ARKitCameraImageApi_tF1AB9580BBEDE238B5AE75A8A31104A580582DFC_il2cpp_TypeInfo_var);
		ARKitCameraImageApi__ctor_m809A72EAE76C00B206584B0690162C6C0759A1E2(L_0, /*hidden argument*/NULL);
		((ARKitCameraExtension_tD14D3953E94E3BB0E105B65643ECF4D08F468F3C_StaticFields*)il2cpp_codegen_static_fields_for(ARKitCameraExtension_tD14D3953E94E3BB0E105B65643ECF4D08F468F3C_il2cpp_TypeInfo_var))->set_s_CameraImageApi_1(L_0);
		ARKitCameraConfigApi_tD2A87AE92ADA920E2EA0F0FF1B1B6C1555FB4F5C * L_1 = (ARKitCameraConfigApi_tD2A87AE92ADA920E2EA0F0FF1B1B6C1555FB4F5C *)il2cpp_codegen_object_new(ARKitCameraConfigApi_tD2A87AE92ADA920E2EA0F0FF1B1B6C1555FB4F5C_il2cpp_TypeInfo_var);
		ARKitCameraConfigApi__ctor_mB1F8675A1A20AB04B92E36E26852C6B0EC2612F6(L_1, /*hidden argument*/NULL);
		((ARKitCameraExtension_tD14D3953E94E3BB0E105B65643ECF4D08F468F3C_StaticFields*)il2cpp_codegen_static_fields_for(ARKitCameraExtension_tD14D3953E94E3BB0E105B65643ECF4D08F468F3C_il2cpp_TypeInfo_var))->set_s_CameraConfigApi_2(L_1);
		return;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraExtension::TrySetFocusMode(UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode)
extern "C" IL2CPP_METHOD_ATTR bool ARKitCameraExtension_TrySetFocusMode_mF5ACEB8C9E07476502536530C58472BF9A7487C9 (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystem0, int32_t ___focusMode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitCameraExtension_TrySetFocusMode_mF5ACEB8C9E07476502536530C58472BF9A7487C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___focusMode1;
		IL2CPP_RUNTIME_CLASS_INIT(ARKitCameraExtension_tD14D3953E94E3BB0E105B65643ECF4D08F468F3C_il2cpp_TypeInfo_var);
		bool L_1 = ARKitCameraExtension_UnityARKit_trySetFocusMode_m016859187C9E63BDBF53D109C73F3680104A4071(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraExtension::IsPermissionGranted(UnityEngine.Experimental.XR.XRCameraSubsystem)
extern "C" IL2CPP_METHOD_ATTR bool ARKitCameraExtension_IsPermissionGranted_m6AB122A1C50F3F87D77E24C8A322BA146E7B09EC (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystem0, const RuntimeMethod* method)
{
	{
		bool L_0 = Api_UnityARKit_IsCameraPermissionGranted_m67DA79B6852217EF82976F18635968097266E052(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.IntPtr UnityEngine.XR.ARKit.ARKitCameraExtension::GetNativePtr(UnityEngine.Experimental.XR.XRCameraSubsystem)
extern "C" IL2CPP_METHOD_ATTR intptr_t ARKitCameraExtension_GetNativePtr_mA58672FCB8261CDA679059CAA3C32B5000827C98 (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystem0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = Api_UnityARKit_getNativeFramePtr_m4B18366ADAADB40BF6677FA05A1D82466749E728(/*hidden argument*/NULL);
		return (intptr_t)L_0;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraExtension::TryGetIntrinsics(UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraIntrinsics&)
extern "C" IL2CPP_METHOD_ATTR bool ARKitCameraExtension_TryGetIntrinsics_m1B8BBD1A54DD6F4B00346871178A9E9E955F3DAD (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystem0, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * ___cameraIntrinsics1, const RuntimeMethod* method)
{
	{
		CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * L_0 = ___cameraIntrinsics1;
		bool L_1 = Api_UnityARKit_tryGetCameraIntrinsics_mEC8BBED851DF8933B2E76171FB21CFF545230752((CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C" int32_t DEFAULT_CALL UnityARKit_trySetFocusMode(int32_t);
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraExtension::UnityARKit_trySetFocusMode(UnityEngine.XR.ARExtensions.CameraFocusMode)
extern "C" IL2CPP_METHOD_ATTR bool ARKitCameraExtension_UnityARKit_trySetFocusMode_m016859187C9E63BDBF53D109C73F3680104A4071 (int32_t ___focusMode0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_trySetFocusMode)(___focusMode0);

	return static_cast<bool>(returnValue);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraImageApi::TryAcquireLatestImage(System.Int32&,UnityEngine.Vector2Int&,System.Int32&,System.Double&,UnityEngine.XR.ARExtensions.CameraImageFormat&)
extern "C" IL2CPP_METHOD_ATTR bool ARKitCameraImageApi_TryAcquireLatestImage_m55DF9950307382BA40D8A0769BED0FAA513B061B (ARKitCameraImageApi_tF1AB9580BBEDE238B5AE75A8A31104A580582DFC * __this, int32_t* ___nativeHandle0, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * ___dimensions1, int32_t* ___planeCount2, double* ___timestamp3, int32_t* ___format4, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = ___nativeHandle0;
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * L_1 = ___dimensions1;
		int32_t* L_2 = ___planeCount2;
		double* L_3 = ___timestamp3;
		int32_t* L_4 = ___format4;
		bool L_5 = Api_UnityARKit_cameraImage_tryAcquireLatestImage_mFE927E318BB2977096C77567FC196BC195787267((int32_t*)L_0, (Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 *)L_1, (int32_t*)L_2, (double*)L_3, (int32_t*)L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraImageApi::TryConvert(System.Int32,UnityEngine.XR.ARExtensions.CameraImageConversionParams,System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool ARKitCameraImageApi_TryConvert_mB3FE3BA4F636A2DC54623B34A366DCBC81D7EAC9 (ARKitCameraImageApi_tF1AB9580BBEDE238B5AE75A8A31104A580582DFC * __this, int32_t ___nativeHandle0, CameraImageConversionParams_tEFEA7C9CF777BD67E3221CBC7CB3D2FD1E99B4D1  ___conversionParams1, intptr_t ___destinationBuffer2, int32_t ___bufferLength3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___nativeHandle0;
		CameraImageConversionParams_tEFEA7C9CF777BD67E3221CBC7CB3D2FD1E99B4D1  L_1 = ___conversionParams1;
		intptr_t L_2 = ___destinationBuffer2;
		int32_t L_3 = ___bufferLength3;
		bool L_4 = Api_UnityARKit_cameraImage_tryConvert_m277D9E2DBB429DA1E29A1B1DE708ECD10379AF7B(L_0, L_1, (intptr_t)L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraImageApi::DisposeImage(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ARKitCameraImageApi_DisposeImage_m31FF6CE7C12DCDA31D87DEC9FCF58D87FE50578F (ARKitCameraImageApi_tF1AB9580BBEDE238B5AE75A8A31104A580582DFC * __this, int32_t ___nativeHandle0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___nativeHandle0;
		Api_UnityARKit_cameraImage_disposeImage_m981FACDA074F559D51F03B79428AB32C9DE68AF4(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraImageApi::TryGetConvertedDataSize(System.Int32,UnityEngine.Vector2Int,UnityEngine.TextureFormat,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool ARKitCameraImageApi_TryGetConvertedDataSize_m7196A4EE3B5DAFA2456C772A0855E472EC1EDDB4 (ARKitCameraImageApi_tF1AB9580BBEDE238B5AE75A8A31104A580582DFC * __this, int32_t ___nativeHandle0, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___dimensions1, int32_t ___format2, int32_t* ___size3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___nativeHandle0;
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_1 = ___dimensions1;
		int32_t L_2 = ___format2;
		int32_t* L_3 = ___size3;
		bool L_4 = Api_UnityARKit_cameraImage_tryGetConvertedDataSize_m13AECD8A172D0B003D08F9220A831208772805DA(L_0, L_1, L_2, (int32_t*)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraImageApi::NativeHandleValid(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool ARKitCameraImageApi_NativeHandleValid_mF6FBEE45A08880A951641AEAFA76C6B2B90A8E73 (ARKitCameraImageApi_tF1AB9580BBEDE238B5AE75A8A31104A580582DFC * __this, int32_t ___nativeHandle0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___nativeHandle0;
		bool L_1 = Api_UnityARKit_cameraImage_handleValid_m550A608D8822134393EFD213AA8989BCDC607ABE(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraImageApi::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ARKitCameraImageApi__ctor_m809A72EAE76C00B206584B0690162C6C0759A1E2 (ARKitCameraImageApi_tF1AB9580BBEDE238B5AE75A8A31104A580582DFC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
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
// System.Void UnityEngine.XR.ARKit.ARKitPlaneExtensions::Register()
extern "C" IL2CPP_METHOD_ATTR void ARKitPlaneExtensions_Register_m3CB805B29E43D4D8A31B48A65970DF27D736B9AD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitPlaneExtensions_Register_m3CB805B29E43D4D8A31B48A65970DF27D736B9AD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ARKitPlaneExtensions_t0C8BB1B0A9B0E5FFDCA13EF90D0D7CBD940F0323_il2cpp_TypeInfo_var);
		String_t* L_0 = ((ARKitPlaneExtensions_t0C8BB1B0A9B0E5FFDCA13EF90D0D7CBD940F0323_StaticFields*)il2cpp_codegen_static_fields_for(ARKitPlaneExtensions_t0C8BB1B0A9B0E5FFDCA13EF90D0D7CBD940F0323_il2cpp_TypeInfo_var))->get_k_SubsystemId_0();
		Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 * L_1 = (Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 *)il2cpp_codegen_object_new(Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472_il2cpp_TypeInfo_var);
		Func_3__ctor_m27FCFCB94AC7593063BF02372B6A9B3BEEFD8779(L_1, NULL, (intptr_t)((intptr_t)ARKitPlaneExtensions_GetTrackingState_m8BAA498083509F95E5B6F1F0463122259E15011C_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m27FCFCB94AC7593063BF02372B6A9B3BEEFD8779_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var);
		XRPlaneExtensions_RegisterGetTrackingStateHandler_m2CD375B880EC1FDD19F33675A299B2E8C59BC60D(L_0, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ((ARKitPlaneExtensions_t0C8BB1B0A9B0E5FFDCA13EF90D0D7CBD940F0323_StaticFields*)il2cpp_codegen_static_fields_for(ARKitPlaneExtensions_t0C8BB1B0A9B0E5FFDCA13EF90D0D7CBD940F0323_il2cpp_TypeInfo_var))->get_k_SubsystemId_0();
		Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828 * L_3 = (Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828 *)il2cpp_codegen_object_new(Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828_il2cpp_TypeInfo_var);
		Func_3__ctor_m719B904C27077EF12C81ECD411AB739E7B94FA3E(L_3, NULL, (intptr_t)((intptr_t)ARKitPlaneExtensions_GetNativePtr_mB7731DBFFC0CF6B6F18DF59916120F2F6E5EF697_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m719B904C27077EF12C81ECD411AB739E7B94FA3E_RuntimeMethod_var);
		XRPlaneExtensions_RegisterGetNativePtrHandler_mFF73D901D5DBBCB8E6AE8E9A624FCE7E75E4DE43(L_2, L_3, /*hidden argument*/NULL);
		String_t* L_4 = ((ARKitPlaneExtensions_t0C8BB1B0A9B0E5FFDCA13EF90D0D7CBD940F0323_StaticFields*)il2cpp_codegen_static_fields_for(ARKitPlaneExtensions_t0C8BB1B0A9B0E5FFDCA13EF90D0D7CBD940F0323_il2cpp_TypeInfo_var))->get_k_SubsystemId_0();
		Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 * L_5 = (Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 *)il2cpp_codegen_object_new(Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851_il2cpp_TypeInfo_var);
		Func_3__ctor_mF23AC3FFB9F86CE914EA6FB40CE3A4797273A3EB(L_5, NULL, (intptr_t)((intptr_t)ARKitPlaneExtensions_TrySetPlaneDetectionFlags_m635BE90286E040CE8E620077B9183DDD3131DA71_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_mF23AC3FFB9F86CE914EA6FB40CE3A4797273A3EB_RuntimeMethod_var);
		XRPlaneExtensions_RegisterTrySetPlaneDetectionFlagsHandler_mDC0A19589E7969643C0EF5920C16585E545D341F(L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitPlaneExtensions::TrySetPlaneDetectionFlags(UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags)
extern "C" IL2CPP_METHOD_ATTR bool ARKitPlaneExtensions_TrySetPlaneDetectionFlags_m635BE90286E040CE8E620077B9183DDD3131DA71 (XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * ___planeSubsystem0, int32_t ___flags1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitPlaneExtensions_TrySetPlaneDetectionFlags_m635BE90286E040CE8E620077B9183DDD3131DA71_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___flags1;
		IL2CPP_RUNTIME_CLASS_INIT(ARKitPlaneExtensions_t0C8BB1B0A9B0E5FFDCA13EF90D0D7CBD940F0323_il2cpp_TypeInfo_var);
		bool L_1 = ARKitPlaneExtensions_UnityARKit_trySetPlaneDetectionFlags_m269DB409EE36F73A47C25831AD4C5FCC8102A060(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Experimental.XR.TrackingState UnityEngine.XR.ARKit.ARKitPlaneExtensions::GetTrackingState(UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId)
extern "C" IL2CPP_METHOD_ATTR int32_t ARKitPlaneExtensions_GetTrackingState_m8BAA498083509F95E5B6F1F0463122259E15011C (XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * ___planeSubsystem0, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___planeId1, const RuntimeMethod* method)
{
	{
		TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  L_0 = ___planeId1;
		int32_t L_1 = Api_UnityARKit_getAnchorTrackingState_m8EECFF54C1E5DF1F89E44B2AD11E579D1D5A8C06(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.IntPtr UnityEngine.XR.ARKit.ARKitPlaneExtensions::GetNativePtr(UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId)
extern "C" IL2CPP_METHOD_ATTR intptr_t ARKitPlaneExtensions_GetNativePtr_mB7731DBFFC0CF6B6F18DF59916120F2F6E5EF697 (XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * ___planeSubsystem0, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___planeId1, const RuntimeMethod* method)
{
	{
		TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  L_0 = ___planeId1;
		intptr_t L_1 = Api_UnityARKit_getNativePlanePtr_m331E5541D0CCF0AB87B740E9619DECD1D934D365(L_0, /*hidden argument*/NULL);
		return (intptr_t)L_1;
	}
}
extern "C" int32_t DEFAULT_CALL UnityARKit_trySetPlaneDetectionFlags(int32_t);
// System.Boolean UnityEngine.XR.ARKit.ARKitPlaneExtensions::UnityARKit_trySetPlaneDetectionFlags(UnityEngine.XR.ARExtensions.PlaneDetectionFlags)
extern "C" IL2CPP_METHOD_ATTR bool ARKitPlaneExtensions_UnityARKit_trySetPlaneDetectionFlags_m269DB409EE36F73A47C25831AD4C5FCC8102A060 (int32_t ___flags0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_trySetPlaneDetectionFlags)(___flags0);

	return static_cast<bool>(returnValue);
}
// System.Void UnityEngine.XR.ARKit.ARKitPlaneExtensions::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ARKitPlaneExtensions__ctor_mAD8B8CC70B76B38153F531CBA45CD839D1E177F3 (ARKitPlaneExtensions_t0C8BB1B0A9B0E5FFDCA13EF90D0D7CBD940F0323 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitPlaneExtensions::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ARKitPlaneExtensions__cctor_m0FD2A82FBFFB4F6B7CB456C2AE7E22A9C6813001 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitPlaneExtensions__cctor_m0FD2A82FBFFB4F6B7CB456C2AE7E22A9C6813001_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ARKitPlaneExtensions_t0C8BB1B0A9B0E5FFDCA13EF90D0D7CBD940F0323_StaticFields*)il2cpp_codegen_static_fields_for(ARKitPlaneExtensions_t0C8BB1B0A9B0E5FFDCA13EF90D0D7CBD940F0323_il2cpp_TypeInfo_var))->set_k_SubsystemId_0(_stringLiteralA715B159C2223C334BF184A1E148A6DB8873E79E);
		return;
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
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointExtensions::Register()
extern "C" IL2CPP_METHOD_ATTR void ARKitReferencePointExtensions_Register_m36C5D1848D16E4690CFB52BC632899B9FF83600C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitReferencePointExtensions_Register_m36C5D1848D16E4690CFB52BC632899B9FF83600C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ARKitReferencePointExtensions_t12256BC4DDF3EB1C9C63FC2E119F2D44375BAA46_il2cpp_TypeInfo_var);
		String_t* L_0 = ((ARKitReferencePointExtensions_t12256BC4DDF3EB1C9C63FC2E119F2D44375BAA46_StaticFields*)il2cpp_codegen_static_fields_for(ARKitReferencePointExtensions_t12256BC4DDF3EB1C9C63FC2E119F2D44375BAA46_il2cpp_TypeInfo_var))->get_k_SubsystemId_0();
		AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * L_1 = (AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF *)il2cpp_codegen_object_new(AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF_il2cpp_TypeInfo_var);
		AttachReferencePointDelegate__ctor_m78B8311C8F1F2170BE5D029F058A51BB34237B3C(L_1, NULL, (intptr_t)((intptr_t)ARKitReferencePointExtensions_AttachReferencePoint_m9F7234D6AD05871235B21FAEA7B835100A922233_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var);
		XRReferencePointExtensions_RegisterAttachReferencePointHandler_m9216ECCCA3A6714F54F5F9085272B2684B24A919(L_0, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ((ARKitReferencePointExtensions_t12256BC4DDF3EB1C9C63FC2E119F2D44375BAA46_StaticFields*)il2cpp_codegen_static_fields_for(ARKitReferencePointExtensions_t12256BC4DDF3EB1C9C63FC2E119F2D44375BAA46_il2cpp_TypeInfo_var))->get_k_SubsystemId_0();
		Func_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB * L_3 = (Func_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB *)il2cpp_codegen_object_new(Func_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB_il2cpp_TypeInfo_var);
		Func_3__ctor_mEB02727EA13F9EDEA7054E33EB928C6E625E4F1B(L_3, NULL, (intptr_t)((intptr_t)ARKitReferencePointExtensions_GetNativePtr_m6FAF4E1BEDF954F0891337C7485AC5FA2EB61B95_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_mEB02727EA13F9EDEA7054E33EB928C6E625E4F1B_RuntimeMethod_var);
		XRReferencePointExtensions_RegisterGetNativePtrHandler_m69E29238677EA66C8EB362530B077E661F0244E0(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.IntPtr UnityEngine.XR.ARKit.ARKitReferencePointExtensions::GetNativePtr(UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId)
extern "C" IL2CPP_METHOD_ATTR intptr_t ARKitReferencePointExtensions_GetNativePtr_m6FAF4E1BEDF954F0891337C7485AC5FA2EB61B95 (XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C * ___referencePointSubsystem0, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___trackableId1, const RuntimeMethod* method)
{
	{
		TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  L_0 = ___trackableId1;
		intptr_t L_1 = Api_UnityARKit_getNativeReferencePointPtr_m3EDF9A878776EF12669006520BCEE6BBC51251C5(L_0, /*hidden argument*/NULL);
		return (intptr_t)L_1;
	}
}
// UnityEngine.Experimental.XR.TrackableId UnityEngine.XR.ARKit.ARKitReferencePointExtensions::AttachReferencePoint(UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ARKitReferencePointExtensions_AttachReferencePoint_m9F7234D6AD05871235B21FAEA7B835100A922233 (XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C * ___referencePointSubsystem0, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___trackableId1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose2, const RuntimeMethod* method)
{
	{
		TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  L_0 = ___trackableId1;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_1 = ___pose2;
		TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  L_2 = Api_UnityARKit_attachReferencePoint_mF498613770EAAFD63B92966871780C3A88BBE029(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointExtensions::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ARKitReferencePointExtensions__ctor_m9C5ADBA55C9F99460F75260862507CCE90ADEE9C (ARKitReferencePointExtensions_t12256BC4DDF3EB1C9C63FC2E119F2D44375BAA46 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointExtensions::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ARKitReferencePointExtensions__cctor_m7CCC18B83491C47DE31FAD8E0707B41671B84671 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitReferencePointExtensions__cctor_m7CCC18B83491C47DE31FAD8E0707B41671B84671_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ARKitReferencePointExtensions_t12256BC4DDF3EB1C9C63FC2E119F2D44375BAA46_StaticFields*)il2cpp_codegen_static_fields_for(ARKitReferencePointExtensions_t12256BC4DDF3EB1C9C63FC2E119F2D44375BAA46_il2cpp_TypeInfo_var))->set_k_SubsystemId_0(_stringLiteralE9E9BCFAFB6DCB88A2B98A04AC20F62F3FF46B43);
		return;
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
// UnityEngine.XR.ARExtensions.Promise`1<UnityEngine.XR.ARExtensions.SessionAvailability> UnityEngine.XR.ARKit.ARKitSessionExtension::GetAvailabilityAsync(UnityEngine.Experimental.XR.XRSessionSubsystem)
extern "C" IL2CPP_METHOD_ATTR Promise_1_t66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF * ARKitSessionExtension_GetAvailabilityAsync_m7ED425F958E60C67DB7C6B42C621EBD77A96DD79 (XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * ___sessionSubsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitSessionExtension_GetAvailabilityAsync_m7ED425F958E60C67DB7C6B42C621EBD77A96DD79_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = Api_UnityARKit_CheckAvailability_m16C5BD2D1AC6885BFEE3B754610DC272B6CA19A7(/*hidden argument*/NULL);
		V_0 = 0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000c;
		}
	}
	{
		V_0 = 6;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		Promise_1_t66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF * L_2 = Promise_1_CreateResolvedPromise_m548F7D4E240E44FFBBB8D3942AF9ABD34C6DEE4A(L_1, /*hidden argument*/Promise_1_CreateResolvedPromise_m548F7D4E240E44FFBBB8D3942AF9ABD34C6DEE4A_RuntimeMethod_var);
		return L_2;
	}
}
// System.IntPtr UnityEngine.XR.ARKit.ARKitSessionExtension::GetNativePtr(UnityEngine.Experimental.XR.XRSessionSubsystem)
extern "C" IL2CPP_METHOD_ATTR intptr_t ARKitSessionExtension_GetNativePtr_m64CD3018CC879573CB8A57B1FA5300C9A85571D2 (XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * ___sessionSubsystem0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = Api_UnityARKit_getNativeSessionPtr_m3BB1B38D978BDEF1A7391AB169C6583C16923A63(/*hidden argument*/NULL);
		return (intptr_t)L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionExtension::Register()
extern "C" IL2CPP_METHOD_ATTR void ARKitSessionExtension_Register_m12654BB77C4735060AE39521A3F2D907F1A888BC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitSessionExtension_Register_m12654BB77C4735060AE39521A3F2D907F1A888BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ARKitSessionExtension_tA5C121128492D8F1AA7C26147BBE7EAD90993DB2_il2cpp_TypeInfo_var);
		String_t* L_0 = ((ARKitSessionExtension_tA5C121128492D8F1AA7C26147BBE7EAD90993DB2_StaticFields*)il2cpp_codegen_static_fields_for(ARKitSessionExtension_tA5C121128492D8F1AA7C26147BBE7EAD90993DB2_il2cpp_TypeInfo_var))->get_k_SubsystemId_0();
		AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 * L_1 = (AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 *)il2cpp_codegen_object_new(AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659_il2cpp_TypeInfo_var);
		AsyncDelegate_1__ctor_mA0DC00CAC1027C7822EB22B5E9AD00FE41F4BB95(L_1, NULL, (intptr_t)((intptr_t)ARKitSessionExtension_GetAvailabilityAsync_m7ED425F958E60C67DB7C6B42C621EBD77A96DD79_RuntimeMethod_var), /*hidden argument*/AsyncDelegate_1__ctor_mA0DC00CAC1027C7822EB22B5E9AD00FE41F4BB95_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var);
		XRSessionExtensions_RegisterGetAvailabilityAsyncHandler_mD8436B9D2786A1B6D358D389C861250181890618(L_0, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ((ARKitSessionExtension_tA5C121128492D8F1AA7C26147BBE7EAD90993DB2_StaticFields*)il2cpp_codegen_static_fields_for(ARKitSessionExtension_tA5C121128492D8F1AA7C26147BBE7EAD90993DB2_il2cpp_TypeInfo_var))->get_k_SubsystemId_0();
		Func_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427 * L_3 = (Func_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427 *)il2cpp_codegen_object_new(Func_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427_il2cpp_TypeInfo_var);
		Func_2__ctor_m79647D280D912B4716600CA05F271A40E9BC7B11(L_3, NULL, (intptr_t)((intptr_t)ARKitSessionExtension_GetNativePtr_m64CD3018CC879573CB8A57B1FA5300C9A85571D2_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m79647D280D912B4716600CA05F271A40E9BC7B11_RuntimeMethod_var);
		XRSessionExtensions_RegisterGetNativePtrHandler_m0F2BA7F0001105F840854F14E36B374EA02178EC(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionExtension::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ARKitSessionExtension__cctor_m7F9D299D64D51E897EE39ECB4096CF66B23A3E84 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitSessionExtension__cctor_m7F9D299D64D51E897EE39ECB4096CF66B23A3E84_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ARKitSessionExtension_tA5C121128492D8F1AA7C26147BBE7EAD90993DB2_StaticFields*)il2cpp_codegen_static_fields_for(ARKitSessionExtension_tA5C121128492D8F1AA7C26147BBE7EAD90993DB2_il2cpp_TypeInfo_var))->set_k_SubsystemId_0(_stringLiteral0DA969A2127457410F59C5D0F641E7216F1939EF);
		return;
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
// System.Void UnityEngine.XR.ARKit.ARWorldMap::Dispose()
extern "C" IL2CPP_METHOD_ATTR void ARWorldMap_Dispose_m39FFD69207F7BB7DA2411A8B744A7C71CFDA03D0 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ARWorldMap_get_nativeHandle_m4BDFD6601FBDE4DCAF00485C162D2DD5E70F8A93((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)__this, /*hidden argument*/NULL);
		Api_UnityARKit_disposeWorldMap_m76AA975C391A2D1DAF0100E05DD619C460C4AD23(L_0, /*hidden argument*/NULL);
		ARWorldMap_set_nativeHandle_m60628E8F40C1190D9AE2EF2A28F9B01EE7F94A36((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)__this, 0, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void ARWorldMap_Dispose_m39FFD69207F7BB7DA2411A8B744A7C71CFDA03D0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * _thisAdjusted = reinterpret_cast<ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *>(__this + 1);
	ARWorldMap_Dispose_m39FFD69207F7BB7DA2411A8B744A7C71CFDA03D0(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARKit.ARWorldMap::get_valid()
extern "C" IL2CPP_METHOD_ATTR bool ARWorldMap_get_valid_m2778D108B711DFB048E4AF1042800968BC4F63FC (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ARWorldMap_get_nativeHandle_m4BDFD6601FBDE4DCAF00485C162D2DD5E70F8A93((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = ARWorldMap_get_nativeHandle_m4BDFD6601FBDE4DCAF00485C162D2DD5E70F8A93((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)__this, /*hidden argument*/NULL);
		bool L_2 = Api_UnityARKit_isWorldMapValid_m0E89999AA625B3F88F42B20F1A1B257577F74657(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
extern "C"  bool ARWorldMap_get_valid_m2778D108B711DFB048E4AF1042800968BC4F63FC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * _thisAdjusted = reinterpret_cast<ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *>(__this + 1);
	return ARWorldMap_get_valid_m2778D108B711DFB048E4AF1042800968BC4F63FC(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.XR.ARKit.ARWorldMap::Serialize(Unity.Collections.Allocator)
extern "C" IL2CPP_METHOD_ATTR NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE  ARWorldMap_Serialize_m0888FED892B775E57E8BEDCE88AEB7CC5296C847 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, int32_t ___allocator0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARWorldMap_Serialize_m0888FED892B775E57E8BEDCE88AEB7CC5296C847_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		bool L_0 = ARWorldMap_get_valid_m2778D108B711DFB048E4AF1042800968BC4F63FC((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_1 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_1, _stringLiteralDD0C3835DA449AF51EA858AE7FE22FA1AA724C25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ARWorldMap_Serialize_m0888FED892B775E57E8BEDCE88AEB7CC5296C847_RuntimeMethod_var);
	}

IL_0013:
	{
		int32_t L_2 = ARWorldMap_get_nativeHandle_m4BDFD6601FBDE4DCAF00485C162D2DD5E70F8A93((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)__this, /*hidden argument*/NULL);
		bool L_3 = Api_UnityARKit_trySerializeWorldMap_m01904E5B5FA60E7465EE8C1118EAE87E939A75CF(L_2, (intptr_t*)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_4 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_4, _stringLiteral58A6E4A45F0E9B8660959A01C41469FBA74DCA93, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, ARWorldMap_Serialize_m0888FED892B775E57E8BEDCE88AEB7CC5296C847_RuntimeMethod_var);
	}

IL_002f:
	{
		int32_t L_5 = V_1;
		int32_t L_6 = ___allocator0;
		NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE  L_7;
		memset(&L_7, 0, sizeof(L_7));
		NativeArray_1__ctor_m2B09F633FCB77B7457A5DA9CFC1A9B34156A74CE((&L_7), L_5, L_6, 0, /*hidden argument*/NativeArray_1__ctor_m2B09F633FCB77B7457A5DA9CFC1A9B34156A74CE_RuntimeMethod_var);
		NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE  L_8 = L_7;
		void* L_9 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m3191468493B96C1824159DCA7F015F91CAC23965(L_8, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m3191468493B96C1824159DCA7F015F91CAC23965_RuntimeMethod_var);
		intptr_t L_10;
		memset(&L_10, 0, sizeof(L_10));
		IntPtr__ctor_m6360250F4B87C6AE2F0389DA0DEE1983EED73FB6((&L_10), (void*)(void*)L_9, /*hidden argument*/NULL);
		intptr_t L_11 = V_0;
		int32_t L_12 = V_1;
		Api_UnityARKit_copyAndReleaseNsData_mBE81424D8C7A771D6BB30694DD28A4AD03F852B7((intptr_t)L_10, (intptr_t)L_11, L_12, /*hidden argument*/NULL);
		return L_8;
	}
}
extern "C"  NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE  ARWorldMap_Serialize_m0888FED892B775E57E8BEDCE88AEB7CC5296C847_AdjustorThunk (RuntimeObject * __this, int32_t ___allocator0, const RuntimeMethod* method)
{
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * _thisAdjusted = reinterpret_cast<ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *>(__this + 1);
	return ARWorldMap_Serialize_m0888FED892B775E57E8BEDCE88AEB7CC5296C847(_thisAdjusted, ___allocator0, method);
}
// System.Boolean UnityEngine.XR.ARKit.ARWorldMap::TryDeserialize(Unity.Collections.NativeArray`1<System.Byte>,UnityEngine.XR.ARKit.ARWorldMap&)
extern "C" IL2CPP_METHOD_ATTR bool ARWorldMap_TryDeserialize_m3AEFF37DAED1C28DA714ED37CD54DEE43771BCD4 (NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE  ___serializedWorldMap0, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * ___worldMap1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARWorldMap_TryDeserialize_m3AEFF37DAED1C28DA714ED37CD54DEE43771BCD4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE  L_0 = ___serializedWorldMap0;
		void* L_1 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m3191468493B96C1824159DCA7F015F91CAC23965(L_0, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m3191468493B96C1824159DCA7F015F91CAC23965_RuntimeMethod_var);
		intptr_t L_2;
		memset(&L_2, 0, sizeof(L_2));
		IntPtr__ctor_m6360250F4B87C6AE2F0389DA0DEE1983EED73FB6((&L_2), (void*)(void*)L_1, /*hidden argument*/NULL);
		int32_t L_3 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE *)(&___serializedWorldMap0))->___m_Length_1);
		int32_t L_4 = Api_UnityARKit_deserializeWorldMap_mE59E2BE04D3A85CEA9C98BE9990514B0F4470264((intptr_t)L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_0024;
		}
	}
	{
		ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * L_6 = ___worldMap1;
		il2cpp_codegen_initobj(L_6, sizeof(ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE ));
		return (bool)0;
	}

IL_0024:
	{
		ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * L_7 = ___worldMap1;
		int32_t L_8 = V_0;
		ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  L_9;
		memset(&L_9, 0, sizeof(L_9));
		ARWorldMap__ctor_m603DA112F27C776D33AC7F285A5B0F268AFA1DFC((&L_9), L_8, /*hidden argument*/NULL);
		*(ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)L_7 = L_9;
		return (bool)1;
	}
}
// System.Int32 UnityEngine.XR.ARKit.ARWorldMap::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t ARWorldMap_GetHashCode_m084D4D95A1BF2B18C93825E155B889AE07C2C1A9 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ARWorldMap_get_nativeHandle_m4BDFD6601FBDE4DCAF00485C162D2DD5E70F8A93((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)(&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  int32_t ARWorldMap_GetHashCode_m084D4D95A1BF2B18C93825E155B889AE07C2C1A9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * _thisAdjusted = reinterpret_cast<ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *>(__this + 1);
	return ARWorldMap_GetHashCode_m084D4D95A1BF2B18C93825E155B889AE07C2C1A9(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARKit.ARWorldMap::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ARWorldMap_Equals_mD02750E273F0FCF3A2A085776D8B2789809E6332 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARWorldMap_Equals_mD02750E273F0FCF3A2A085776D8B2789809E6332_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = ARWorldMap_Equals_mF4CBBC2F7B48A3FF6C5EAB73E86A0A6C54E15894((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)__this, ((*(ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)UnBox(L_1, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  bool ARWorldMap_Equals_mD02750E273F0FCF3A2A085776D8B2789809E6332_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * _thisAdjusted = reinterpret_cast<ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *>(__this + 1);
	return ARWorldMap_Equals_mD02750E273F0FCF3A2A085776D8B2789809E6332(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.ARKit.ARWorldMap::Equals(UnityEngine.XR.ARKit.ARWorldMap)
extern "C" IL2CPP_METHOD_ATTR bool ARWorldMap_Equals_mF4CBBC2F7B48A3FF6C5EAB73E86A0A6C54E15894 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  ___other0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ARWorldMap_get_nativeHandle_m4BDFD6601FBDE4DCAF00485C162D2DD5E70F8A93((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)__this, /*hidden argument*/NULL);
		int32_t L_1 = ARWorldMap_get_nativeHandle_m4BDFD6601FBDE4DCAF00485C162D2DD5E70F8A93((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
extern "C"  bool ARWorldMap_Equals_mF4CBBC2F7B48A3FF6C5EAB73E86A0A6C54E15894_AdjustorThunk (RuntimeObject * __this, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  ___other0, const RuntimeMethod* method)
{
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * _thisAdjusted = reinterpret_cast<ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *>(__this + 1);
	return ARWorldMap_Equals_mF4CBBC2F7B48A3FF6C5EAB73E86A0A6C54E15894(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.XR.ARKit.ARWorldMap::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ARWorldMap__ctor_m603DA112F27C776D33AC7F285A5B0F268AFA1DFC (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, int32_t ___nativeHandle0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___nativeHandle0;
		ARWorldMap_set_nativeHandle_m60628E8F40C1190D9AE2EF2A28F9B01EE7F94A36((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void ARWorldMap__ctor_m603DA112F27C776D33AC7F285A5B0F268AFA1DFC_AdjustorThunk (RuntimeObject * __this, int32_t ___nativeHandle0, const RuntimeMethod* method)
{
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * _thisAdjusted = reinterpret_cast<ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *>(__this + 1);
	ARWorldMap__ctor_m603DA112F27C776D33AC7F285A5B0F268AFA1DFC(_thisAdjusted, ___nativeHandle0, method);
}
// System.Int32 UnityEngine.XR.ARKit.ARWorldMap::get_nativeHandle()
extern "C" IL2CPP_METHOD_ATTR int32_t ARWorldMap_get_nativeHandle_m4BDFD6601FBDE4DCAF00485C162D2DD5E70F8A93 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CnativeHandleU3Ek__BackingField_0();
		return L_0;
	}
}
extern "C"  int32_t ARWorldMap_get_nativeHandle_m4BDFD6601FBDE4DCAF00485C162D2DD5E70F8A93_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * _thisAdjusted = reinterpret_cast<ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *>(__this + 1);
	return ARWorldMap_get_nativeHandle_m4BDFD6601FBDE4DCAF00485C162D2DD5E70F8A93(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARKit.ARWorldMap::set_nativeHandle(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ARWorldMap_set_nativeHandle_m60628E8F40C1190D9AE2EF2A28F9B01EE7F94A36 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CnativeHandleU3Ek__BackingField_0(L_0);
		return;
	}
}
extern "C"  void ARWorldMap_set_nativeHandle_m60628E8F40C1190D9AE2EF2A28F9B01EE7F94A36_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * _thisAdjusted = reinterpret_cast<ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *>(__this + 1);
	ARWorldMap_set_nativeHandle_m60628E8F40C1190D9AE2EF2A28F9B01EE7F94A36(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARKit.ARWorldMapRequestStatus UnityEngine.XR.ARKit.ARWorldMapRequest::get_status()
extern "C" IL2CPP_METHOD_ATTR int32_t ARWorldMapRequest_get_status_mEF94818913FCF6416CF29C6BFBCC84EEF39C3867 (ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_RequestId_0();
		int32_t L_1 = Api_UnityARKit_getWorldMapRequestStatus_m5E81BDCA1EA65F8578317B9DB283A1B0AE10D65D(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  int32_t ARWorldMapRequest_get_status_mEF94818913FCF6416CF29C6BFBCC84EEF39C3867_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 * _thisAdjusted = reinterpret_cast<ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 *>(__this + 1);
	return ARWorldMapRequest_get_status_mEF94818913FCF6416CF29C6BFBCC84EEF39C3867(_thisAdjusted, method);
}
// UnityEngine.XR.ARKit.ARWorldMap UnityEngine.XR.ARKit.ARWorldMapRequest::GetWorldMap()
extern "C" IL2CPP_METHOD_ATTR ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  ARWorldMapRequest_GetWorldMap_m2113D2DECC0E8F9CB67D7A3EC480CBD3F2AA5A4E (ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARWorldMapRequest_GetWorldMap_m2113D2DECC0E8F9CB67D7A3EC480CBD3F2AA5A4E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ARWorldMapRequest_get_status_mEF94818913FCF6416CF29C6BFBCC84EEF39C3867((ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_1 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_1, _stringLiteral928E323A40E2ADC852C5EBBFA916407754AEE75C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ARWorldMapRequest_GetWorldMap_m2113D2DECC0E8F9CB67D7A3EC480CBD3F2AA5A4E_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_2 = __this->get_m_RequestId_0();
		int32_t L_3 = Api_UnityARKit_getWorldMapIdFromRequestId_mCE48249F707D9F2EABE1558A2F52A36B03353885(L_2, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_002d;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_5 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_5, _stringLiteral58A6E4A45F0E9B8660959A01C41469FBA74DCA93, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, ARWorldMapRequest_GetWorldMap_m2113D2DECC0E8F9CB67D7A3EC480CBD3F2AA5A4E_RuntimeMethod_var);
	}

IL_002d:
	{
		ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  L_6;
		memset(&L_6, 0, sizeof(L_6));
		ARWorldMap__ctor_m603DA112F27C776D33AC7F285A5B0F268AFA1DFC((&L_6), G_B4_0, /*hidden argument*/NULL);
		return L_6;
	}
}
extern "C"  ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  ARWorldMapRequest_GetWorldMap_m2113D2DECC0E8F9CB67D7A3EC480CBD3F2AA5A4E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 * _thisAdjusted = reinterpret_cast<ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 *>(__this + 1);
	return ARWorldMapRequest_GetWorldMap_m2113D2DECC0E8F9CB67D7A3EC480CBD3F2AA5A4E(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARKit.ARWorldMapRequest::Dispose()
extern "C" IL2CPP_METHOD_ATTR void ARWorldMapRequest_Dispose_m6B143E570818A0D47A9C4D9EE2ADFE0B34FD478A (ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_RequestId_0();
		Api_UnityARKit_disposeWorldMapRequest_m8E4D6D1C55E27DA7B04944E7B5B6363B48BD7D11(L_0, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void ARWorldMapRequest_Dispose_m6B143E570818A0D47A9C4D9EE2ADFE0B34FD478A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 * _thisAdjusted = reinterpret_cast<ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 *>(__this + 1);
	ARWorldMapRequest_Dispose_m6B143E570818A0D47A9C4D9EE2ADFE0B34FD478A(_thisAdjusted, method);
}
// System.Int32 UnityEngine.XR.ARKit.ARWorldMapRequest::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t ARWorldMapRequest_GetHashCode_m4BB31BA535D0E535F2227E2EEAFA9C509198B360 (ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 * __this, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = __this->get_address_of_m_RequestId_0();
		int32_t L_1 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  int32_t ARWorldMapRequest_GetHashCode_m4BB31BA535D0E535F2227E2EEAFA9C509198B360_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 * _thisAdjusted = reinterpret_cast<ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 *>(__this + 1);
	return ARWorldMapRequest_GetHashCode_m4BB31BA535D0E535F2227E2EEAFA9C509198B360(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARKit.ARWorldMapRequest::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ARWorldMapRequest_Equals_m5F760251980C450E996EA560D181CC25954094E0 (ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARWorldMapRequest_Equals_m5F760251980C450E996EA560D181CC25954094E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = ARWorldMapRequest_Equals_mCA93FB5DE16168E6DC2097FA3D2E5ED1056E9464((ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 *)__this, ((*(ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 *)((ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 *)UnBox(L_1, ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  bool ARWorldMapRequest_Equals_m5F760251980C450E996EA560D181CC25954094E0_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 * _thisAdjusted = reinterpret_cast<ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 *>(__this + 1);
	return ARWorldMapRequest_Equals_m5F760251980C450E996EA560D181CC25954094E0(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.ARKit.ARWorldMapRequest::Equals(UnityEngine.XR.ARKit.ARWorldMapRequest)
extern "C" IL2CPP_METHOD_ATTR bool ARWorldMapRequest_Equals_mCA93FB5DE16168E6DC2097FA3D2E5ED1056E9464 (ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 * __this, ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167  ___other0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_RequestId_0();
		ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167  L_1 = ___other0;
		int32_t L_2 = L_1.get_m_RequestId_0();
		return (bool)((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
	}
}
extern "C"  bool ARWorldMapRequest_Equals_mCA93FB5DE16168E6DC2097FA3D2E5ED1056E9464_AdjustorThunk (RuntimeObject * __this, ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167  ___other0, const RuntimeMethod* method)
{
	ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 * _thisAdjusted = reinterpret_cast<ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 *>(__this + 1);
	return ARWorldMapRequest_Equals_mCA93FB5DE16168E6DC2097FA3D2E5ED1056E9464(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.XR.ARKit.ARWorldMapRequest::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ARWorldMapRequest__ctor_m266BD4EEF387AA12276C40495B179537F45CFDC4 (ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 * __this, int32_t ___requestId0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___requestId0;
		__this->set_m_RequestId_0(L_0);
		return;
	}
}
extern "C"  void ARWorldMapRequest__ctor_m266BD4EEF387AA12276C40495B179537F45CFDC4_AdjustorThunk (RuntimeObject * __this, int32_t ___requestId0, const RuntimeMethod* method)
{
	ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 * _thisAdjusted = reinterpret_cast<ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 *>(__this + 1);
	ARWorldMapRequest__ctor_m266BD4EEF387AA12276C40495B179537F45CFDC4(_thisAdjusted, ___requestId0, method);
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
// System.Boolean UnityEngine.XR.ARKit.ARWorldMapRequestStatusExtensions::IsDone(UnityEngine.XR.ARKit.ARWorldMapRequestStatus)
extern "C" IL2CPP_METHOD_ATTR bool ARWorldMapRequestStatusExtensions_IsDone_mDFB38617F9C19A5E100040093374E5F04F465334 (int32_t ___status0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___status0;
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARWorldMapRequestStatusExtensions::IsError(UnityEngine.XR.ARKit.ARWorldMapRequestStatus)
extern "C" IL2CPP_METHOD_ATTR bool ARWorldMapRequestStatusExtensions_IsError_m2CDC805EB13EBC5106106B63CF3E7FA2761416D8 (int32_t ___status0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___status0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1))) <= ((uint32_t)1))))
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ARWorldMapSessionExtensions_OnAsyncConversionComplete_mDD148BF0E41C531B93B1D0FF9F7ECA2E5A6CAF36(int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	ARWorldMapSessionExtensions_OnAsyncConversionComplete_mDD148BF0E41C531B93B1D0FF9F7ECA2E5A6CAF36(___status0, ___worldMapId1, ___context2, NULL);

}
// UnityEngine.XR.ARKit.ARWorldMapRequest UnityEngine.XR.ARKit.ARWorldMapSessionExtensions::GetARWorldMapAsync(UnityEngine.Experimental.XR.XRSessionSubsystem)
extern "C" IL2CPP_METHOD_ATTR ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167  ARWorldMapSessionExtensions_GetARWorldMapAsync_mA174E558DF8564B9661A7C9D0E834E5B3C885460 (XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * ___sessionSubsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARWorldMapSessionExtensions_GetARWorldMapAsync_mA174E558DF8564B9661A7C9D0E834E5B3C885460_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * L_0 = ___sessionSubsystem0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral803CB9B37A5D16493B12A6980F00E6EFC5F33114, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ARWorldMapSessionExtensions_GetARWorldMapAsync_mA174E558DF8564B9661A7C9D0E834E5B3C885460_RuntimeMethod_var);
	}

IL_000e:
	{
		int32_t L_2 = Api_UnityARKit_createWorldMapRequest_m09500B5587A7E14020CA7509015EF5BBF00DF17C(/*hidden argument*/NULL);
		ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167  L_3;
		memset(&L_3, 0, sizeof(L_3));
		ARWorldMapRequest__ctor_m266BD4EEF387AA12276C40495B179537F45CFDC4((&L_3), L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARWorldMapSessionExtensions::WorldMapSupported(UnityEngine.Experimental.XR.XRSessionSubsystem)
extern "C" IL2CPP_METHOD_ATTR bool ARWorldMapSessionExtensions_WorldMapSupported_m9E7E6A372C98215B6DF0162D115D744381173C97 (XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * ___sessionSubsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARWorldMapSessionExtensions_WorldMapSupported_m9E7E6A372C98215B6DF0162D115D744381173C97_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * L_0 = ___sessionSubsystem0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral803CB9B37A5D16493B12A6980F00E6EFC5F33114, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ARWorldMapSessionExtensions_WorldMapSupported_m9E7E6A372C98215B6DF0162D115D744381173C97_RuntimeMethod_var);
	}

IL_000e:
	{
		bool L_2 = Api_UnityARKit_worldMapSupported_m1902B04D1D7BE4717B3AE080731F682478565443(/*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.XR.ARExtensions.ARWorldMappingStatus UnityEngine.XR.ARKit.ARWorldMapSessionExtensions::GetWorldMappingStatus(UnityEngine.Experimental.XR.XRSessionSubsystem)
extern "C" IL2CPP_METHOD_ATTR int32_t ARWorldMapSessionExtensions_GetWorldMappingStatus_mACA9118CB5F4B4F598CE53AC8A7B2340B2D9A0BC (XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * ___sessionSubsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARWorldMapSessionExtensions_GetWorldMappingStatus_mACA9118CB5F4B4F598CE53AC8A7B2340B2D9A0BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * L_0 = ___sessionSubsystem0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral803CB9B37A5D16493B12A6980F00E6EFC5F33114, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ARWorldMapSessionExtensions_GetWorldMappingStatus_mACA9118CB5F4B4F598CE53AC8A7B2340B2D9A0BC_RuntimeMethod_var);
	}

IL_000e:
	{
		int32_t L_2 = Api_UnityARKit_getWorldMappingStatus_m3F0625AE5BC8D1F5C9CA605B9754B3A838AB9448(/*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.XR.ARKit.ARWorldMapSessionExtensions::ApplyWorldMap(UnityEngine.Experimental.XR.XRSessionSubsystem,UnityEngine.XR.ARKit.ARWorldMap)
extern "C" IL2CPP_METHOD_ATTR void ARWorldMapSessionExtensions_ApplyWorldMap_m492FCDC83290E82C7FA5747FC3928EC6962EFC96 (XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * ___sessionSubsystem0, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  ___worldMap1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARWorldMapSessionExtensions_ApplyWorldMap_m492FCDC83290E82C7FA5747FC3928EC6962EFC96_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * L_0 = ___sessionSubsystem0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral803CB9B37A5D16493B12A6980F00E6EFC5F33114, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ARWorldMapSessionExtensions_ApplyWorldMap_m492FCDC83290E82C7FA5747FC3928EC6962EFC96_RuntimeMethod_var);
	}

IL_000e:
	{
		int32_t L_2 = ARWorldMap_get_nativeHandle_m4BDFD6601FBDE4DCAF00485C162D2DD5E70F8A93((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)(&___worldMap1), /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_3 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_3, _stringLiteralDD0C3835DA449AF51EA858AE7FE22FA1AA724C25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, ARWorldMapSessionExtensions_ApplyWorldMap_m492FCDC83290E82C7FA5747FC3928EC6962EFC96_RuntimeMethod_var);
	}

IL_0022:
	{
		int32_t L_4 = ARWorldMap_get_nativeHandle_m4BDFD6601FBDE4DCAF00485C162D2DD5E70F8A93((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)(&___worldMap1), /*hidden argument*/NULL);
		Api_UnityARKit_applyWorldMap_m3025327998D7B76573DBA249432A1F5B4B008DA0(L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARWorldMapSessionExtensions::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ARWorldMapSessionExtensions__cctor_mBA4582317C344BB121AD371448065047F408A5D4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARWorldMapSessionExtensions__cctor_mBA4582317C344BB121AD371448065047F408A5D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnAsyncConversionCompleteDelegate_t0713AF22D6B429530D6D08158EA74E6A447B2D5B * L_0 = (OnAsyncConversionCompleteDelegate_t0713AF22D6B429530D6D08158EA74E6A447B2D5B *)il2cpp_codegen_object_new(OnAsyncConversionCompleteDelegate_t0713AF22D6B429530D6D08158EA74E6A447B2D5B_il2cpp_TypeInfo_var);
		OnAsyncConversionCompleteDelegate__ctor_m46854071AD5413F1FFD5C79AEF9F4C52A58150B0(L_0, NULL, (intptr_t)((intptr_t)ARWorldMapSessionExtensions_OnAsyncConversionComplete_mDD148BF0E41C531B93B1D0FF9F7ECA2E5A6CAF36_RuntimeMethod_var), /*hidden argument*/NULL);
		((ARWorldMapSessionExtensions_tBBC8030654182B90E45AEBB62C1B2A34DBC0C145_StaticFields*)il2cpp_codegen_static_fields_for(ARWorldMapSessionExtensions_tBBC8030654182B90E45AEBB62C1B2A34DBC0C145_il2cpp_TypeInfo_var))->set_s_OnAsyncWorldMapCompleted_0(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARWorldMapSessionExtensions::OnAsyncConversionComplete(UnityEngine.XR.ARKit.ARWorldMapRequestStatus,System.Int32,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ARWorldMapSessionExtensions_OnAsyncConversionComplete_mDD148BF0E41C531B93B1D0FF9F7ECA2E5A6CAF36 (int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARWorldMapSessionExtensions_OnAsyncConversionComplete_mDD148BF0E41C531B93B1D0FF9F7ECA2E5A6CAF36_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Action_2_t84AF1D0E414DA3F3CC83837D20CF4E7B5050620A * V_1 = NULL;
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  V_2;
	memset(&V_2, 0, sizeof(V_2));
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		intptr_t L_0 = ___context2;
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_1 = GCHandle_FromIntPtr_mB803C8ECA1D723F1C51A69F7A7E09E269488D36C((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = GCHandle_get_Target_mDBDEA6883245CF1EF963D9FA945569B2D59DCCF8((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_0), /*hidden argument*/NULL);
		V_1 = ((Action_2_t84AF1D0E414DA3F3CC83837D20CF4E7B5050620A *)CastclassSealed((RuntimeObject*)L_2, Action_2_t84AF1D0E414DA3F3CC83837D20CF4E7B5050620A_il2cpp_TypeInfo_var));
		int32_t L_3 = ___status0;
		bool L_4 = ARWorldMapRequestStatusExtensions_IsError_m2CDC805EB13EBC5106106B63CF3E7FA2761416D8(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		Action_2_t84AF1D0E414DA3F3CC83837D20CF4E7B5050620A * L_5 = V_1;
		int32_t L_6 = ___status0;
		il2cpp_codegen_initobj((&V_2), sizeof(ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE ));
		ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  L_7 = V_2;
		NullCheck(L_5);
		Action_2_Invoke_m2B078E4FAAD6BB392B32D5CCDAC7AC41EF522435(L_5, L_6, L_7, /*hidden argument*/Action_2_Invoke_m2B078E4FAAD6BB392B32D5CCDAC7AC41EF522435_RuntimeMethod_var);
		goto IL_003e;
	}

IL_002e:
	{
		int32_t L_8 = ___worldMapId1;
		ARWorldMap__ctor_m603DA112F27C776D33AC7F285A5B0F268AFA1DFC((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)(&V_3), L_8, /*hidden argument*/NULL);
		Action_2_t84AF1D0E414DA3F3CC83837D20CF4E7B5050620A * L_9 = V_1;
		int32_t L_10 = ___status0;
		ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  L_11 = V_3;
		NullCheck(L_9);
		Action_2_Invoke_m2B078E4FAAD6BB392B32D5CCDAC7AC41EF522435(L_9, L_10, L_11, /*hidden argument*/Action_2_Invoke_m2B078E4FAAD6BB392B32D5CCDAC7AC41EF522435_RuntimeMethod_var);
	}

IL_003e:
	{
		GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_0), /*hidden argument*/NULL);
		return;
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
extern "C"  void DelegatePInvokeWrapper_OnAsyncConversionCompleteDelegate_t0713AF22D6B429530D6D08158EA74E6A447B2D5B (OnAsyncConversionCompleteDelegate_t0713AF22D6B429530D6D08158EA74E6A447B2D5B * __this, int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___status0, ___worldMapId1, ___context2);

}
// System.Void UnityEngine.XR.ARKit.ARWorldMapSessionExtensions/OnAsyncConversionCompleteDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnAsyncConversionCompleteDelegate__ctor_m46854071AD5413F1FFD5C79AEF9F4C52A58150B0 (OnAsyncConversionCompleteDelegate_t0713AF22D6B429530D6D08158EA74E6A447B2D5B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.ARKit.ARWorldMapSessionExtensions/OnAsyncConversionCompleteDelegate::Invoke(UnityEngine.XR.ARKit.ARWorldMapRequestStatus,System.Int32,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnAsyncConversionCompleteDelegate_Invoke_m614BB7CCC15B7812AD56BCBAF925955BEE7A0A8A (OnAsyncConversionCompleteDelegate_t0713AF22D6B429530D6D08158EA74E6A447B2D5B * __this, int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2, const RuntimeMethod* method)
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
				if (___parameterCount == 3)
				{
					// open
					typedef void (*FunctionPointerType) (int32_t, int32_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___status0, ___worldMapId1, ___context2, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, int32_t, int32_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, ___worldMapId1, ___context2, targetMethod);
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
							typedef void (*FunctionPointerType) (int32_t, int32_t, intptr_t, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___status0, ___worldMapId1, ___context2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< int32_t, int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___status0, ___worldMapId1, ___context2);
							else
								GenericVirtActionInvoker3< int32_t, int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___status0, ___worldMapId1, ___context2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< int32_t, int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___status0, ___worldMapId1, ___context2);
							else
								VirtActionInvoker3< int32_t, int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___status0, ___worldMapId1, ___context2);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, int32_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, ___worldMapId1, ___context2, targetMethod);
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
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___status0, ___worldMapId1, ___context2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, ___worldMapId1, ___context2, targetMethod);
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
						typedef void (*FunctionPointerType) (int32_t, int32_t, intptr_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___status0, ___worldMapId1, ___context2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< int32_t, int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___status0, ___worldMapId1, ___context2);
						else
							GenericVirtActionInvoker3< int32_t, int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___status0, ___worldMapId1, ___context2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< int32_t, int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___status0, ___worldMapId1, ___context2);
						else
							VirtActionInvoker3< int32_t, int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___status0, ___worldMapId1, ___context2);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, ___worldMapId1, ___context2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.ARKit.ARWorldMapSessionExtensions/OnAsyncConversionCompleteDelegate::BeginInvoke(UnityEngine.XR.ARKit.ARWorldMapRequestStatus,System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnAsyncConversionCompleteDelegate_BeginInvoke_m6772500819518C2E7BFBE27422504427330F6799 (OnAsyncConversionCompleteDelegate_t0713AF22D6B429530D6D08158EA74E6A447B2D5B * __this, int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnAsyncConversionCompleteDelegate_BeginInvoke_m6772500819518C2E7BFBE27422504427330F6799_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(ARWorldMapRequestStatus_tF71BE763C5F9644F3D7377ACE110F7FFBBE3D5DC_il2cpp_TypeInfo_var, &___status0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___worldMapId1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___context2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.ARKit.ARWorldMapSessionExtensions/OnAsyncConversionCompleteDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnAsyncConversionCompleteDelegate_EndInvoke_mB66A6692D3A628F6EBB277EAC53C6AB5E2BFDC56 (OnAsyncConversionCompleteDelegate_t0713AF22D6B429530D6D08158EA74E6A447B2D5B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C" TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  DEFAULT_CALL UnityARKit_attachReferencePoint(TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 );
// UnityEngine.Experimental.XR.TrackableId UnityEngine.XR.ARKit.Api::UnityARKit_attachReferencePoint(UnityEngine.Experimental.XR.TrackableId,UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  Api_UnityARKit_attachReferencePoint_mF498613770EAAFD63B92966871780C3A88BBE029 (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___trackableId0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose1, const RuntimeMethod* method)
{
	typedef TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  (DEFAULT_CALL *PInvokeFunc) (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 );

	// Native function invocation
	TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_attachReferencePoint)(___trackableId0, ___pose1);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL UnityARKit_CheckAvailability();
// UnityEngine.XR.ARKit.Api/Availability UnityEngine.XR.ARKit.Api::UnityARKit_CheckAvailability()
extern "C" IL2CPP_METHOD_ATTR int32_t Api_UnityARKit_CheckAvailability_m16C5BD2D1AC6885BFEE3B754610DC272B6CA19A7 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_CheckAvailability)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL UnityARKit_IsCameraPermissionGranted();
// System.Boolean UnityEngine.XR.ARKit.Api::UnityARKit_IsCameraPermissionGranted()
extern "C" IL2CPP_METHOD_ATTR bool Api_UnityARKit_IsCameraPermissionGranted_m67DA79B6852217EF82976F18635968097266E052 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_IsCameraPermissionGranted)();

	return static_cast<bool>(returnValue);
}
extern "C" int32_t DEFAULT_CALL UnityARKit_getAnchorTrackingState(TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B );
// UnityEngine.Experimental.XR.TrackingState UnityEngine.XR.ARKit.Api::UnityARKit_getAnchorTrackingState(UnityEngine.Experimental.XR.TrackableId)
extern "C" IL2CPP_METHOD_ATTR int32_t Api_UnityARKit_getAnchorTrackingState_m8EECFF54C1E5DF1F89E44B2AD11E579D1D5A8C06 (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___id0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B );

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_getAnchorTrackingState)(___id0);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL UnityARKit_createWorldMapRequest();
// System.Int32 UnityEngine.XR.ARKit.Api::UnityARKit_createWorldMapRequest()
extern "C" IL2CPP_METHOD_ATTR int32_t Api_UnityARKit_createWorldMapRequest_m09500B5587A7E14020CA7509015EF5BBF00DF17C (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_createWorldMapRequest)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL UnityARKit_getWorldMapRequestStatus(int32_t);
// UnityEngine.XR.ARKit.ARWorldMapRequestStatus UnityEngine.XR.ARKit.Api::UnityARKit_getWorldMapRequestStatus(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Api_UnityARKit_getWorldMapRequestStatus_m5E81BDCA1EA65F8578317B9DB283A1B0AE10D65D (int32_t ___worldMapId0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_getWorldMapRequestStatus)(___worldMapId0);

	return returnValue;
}
extern "C" void DEFAULT_CALL UnityARKit_disposeWorldMap(int32_t);
// System.Void UnityEngine.XR.ARKit.Api::UnityARKit_disposeWorldMap(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Api_UnityARKit_disposeWorldMap_m76AA975C391A2D1DAF0100E05DD619C460C4AD23 (int32_t ___worldMapId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_disposeWorldMap)(___worldMapId0);

}
extern "C" void DEFAULT_CALL UnityARKit_disposeWorldMapRequest(int32_t);
// System.Void UnityEngine.XR.ARKit.Api::UnityARKit_disposeWorldMapRequest(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Api_UnityARKit_disposeWorldMapRequest_m8E4D6D1C55E27DA7B04944E7B5B6363B48BD7D11 (int32_t ___worldMapId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_disposeWorldMapRequest)(___worldMapId0);

}
extern "C" int32_t DEFAULT_CALL UnityARKit_worldMapSupported();
// System.Boolean UnityEngine.XR.ARKit.Api::UnityARKit_worldMapSupported()
extern "C" IL2CPP_METHOD_ATTR bool Api_UnityARKit_worldMapSupported_m1902B04D1D7BE4717B3AE080731F682478565443 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_worldMapSupported)();

	return static_cast<bool>(returnValue);
}
extern "C" int32_t DEFAULT_CALL UnityARKit_getWorldMappingStatus();
// UnityEngine.XR.ARExtensions.ARWorldMappingStatus UnityEngine.XR.ARKit.Api::UnityARKit_getWorldMappingStatus()
extern "C" IL2CPP_METHOD_ATTR int32_t Api_UnityARKit_getWorldMappingStatus_m3F0625AE5BC8D1F5C9CA605B9754B3A838AB9448 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_getWorldMappingStatus)();

	return returnValue;
}
extern "C" void DEFAULT_CALL UnityARKit_applyWorldMap(int32_t);
// System.Void UnityEngine.XR.ARKit.Api::UnityARKit_applyWorldMap(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Api_UnityARKit_applyWorldMap_m3025327998D7B76573DBA249432A1F5B4B008DA0 (int32_t ___worldMapId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_applyWorldMap)(___worldMapId0);

}
extern "C" int32_t DEFAULT_CALL UnityARKit_getWorldMapIdFromRequestId(int32_t);
// System.Int32 UnityEngine.XR.ARKit.Api::UnityARKit_getWorldMapIdFromRequestId(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Api_UnityARKit_getWorldMapIdFromRequestId_mCE48249F707D9F2EABE1558A2F52A36B03353885 (int32_t ___requestId0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_getWorldMapIdFromRequestId)(___requestId0);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL UnityARKit_isWorldMapValid(int32_t);
// System.Boolean UnityEngine.XR.ARKit.Api::UnityARKit_isWorldMapValid(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Api_UnityARKit_isWorldMapValid_m0E89999AA625B3F88F42B20F1A1B257577F74657 (int32_t ___nativeHandle0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_isWorldMapValid)(___nativeHandle0);

	return static_cast<bool>(returnValue);
}
extern "C" int32_t DEFAULT_CALL UnityARKit_trySerializeWorldMap(int32_t, intptr_t*, int32_t*);
// System.Boolean UnityEngine.XR.ARKit.Api::UnityARKit_trySerializeWorldMap(System.Int32,System.IntPtr&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool Api_UnityARKit_trySerializeWorldMap_m01904E5B5FA60E7465EE8C1118EAE87E939A75CF (int32_t ___nativeHandle0, intptr_t* ___nsdata1, int32_t* ___length2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, intptr_t*, int32_t*);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_trySerializeWorldMap)(___nativeHandle0, ___nsdata1, ___length2);

	return static_cast<bool>(returnValue);
}
extern "C" int32_t DEFAULT_CALL UnityARKit_copyAndReleaseNsData(intptr_t, intptr_t, int32_t);
// System.Int32 UnityEngine.XR.ARKit.Api::UnityARKit_copyAndReleaseNsData(System.IntPtr,System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Api_UnityARKit_copyAndReleaseNsData_mBE81424D8C7A771D6BB30694DD28A4AD03F852B7 (intptr_t ___destination0, intptr_t ___sourceNsData1, int32_t ___length2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_copyAndReleaseNsData)(___destination0, ___sourceNsData1, ___length2);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL UnityARKit_deserializeWorldMap(intptr_t, int32_t);
// System.Int32 UnityEngine.XR.ARKit.Api::UnityARKit_deserializeWorldMap(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Api_UnityARKit_deserializeWorldMap_mE59E2BE04D3A85CEA9C98BE9990514B0F4470264 (intptr_t ___buffer0, int32_t ___bufferLength1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_deserializeWorldMap)(___buffer0, ___bufferLength1);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL UnityARKit_cameraImage_tryAcquireLatestImage(int32_t*, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 *, int32_t*, double*, int32_t*);
// System.Boolean UnityEngine.XR.ARKit.Api::UnityARKit_cameraImage_tryAcquireLatestImage(System.Int32&,UnityEngine.Vector2Int&,System.Int32&,System.Double&,UnityEngine.XR.ARExtensions.CameraImageFormat&)
extern "C" IL2CPP_METHOD_ATTR bool Api_UnityARKit_cameraImage_tryAcquireLatestImage_mFE927E318BB2977096C77567FC196BC195787267 (int32_t* ___nativeHandle0, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * ___dimensions1, int32_t* ___planeCount2, double* ___timestamp3, int32_t* ___format4, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t*, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 *, int32_t*, double*, int32_t*);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_cameraImage_tryAcquireLatestImage)(___nativeHandle0, ___dimensions1, ___planeCount2, ___timestamp3, ___format4);

	return static_cast<bool>(returnValue);
}
extern "C" int32_t DEFAULT_CALL UnityARKit_cameraImage_tryGetConvertedDataSize(int32_t, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 , int32_t, int32_t*);
// System.Boolean UnityEngine.XR.ARKit.Api::UnityARKit_cameraImage_tryGetConvertedDataSize(System.Int32,UnityEngine.Vector2Int,UnityEngine.TextureFormat,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool Api_UnityARKit_cameraImage_tryGetConvertedDataSize_m13AECD8A172D0B003D08F9220A831208772805DA (int32_t ___nativeHandle0, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___dimensions1, int32_t ___format2, int32_t* ___size3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 , int32_t, int32_t*);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_cameraImage_tryGetConvertedDataSize)(___nativeHandle0, ___dimensions1, ___format2, ___size3);

	return static_cast<bool>(returnValue);
}
extern "C" int32_t DEFAULT_CALL UnityARKit_cameraImage_tryConvert(int32_t, CameraImageConversionParams_tEFEA7C9CF777BD67E3221CBC7CB3D2FD1E99B4D1 , intptr_t, int32_t);
// System.Boolean UnityEngine.XR.ARKit.Api::UnityARKit_cameraImage_tryConvert(System.Int32,UnityEngine.XR.ARExtensions.CameraImageConversionParams,System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Api_UnityARKit_cameraImage_tryConvert_m277D9E2DBB429DA1E29A1B1DE708ECD10379AF7B (int32_t ___nativeHandle0, CameraImageConversionParams_tEFEA7C9CF777BD67E3221CBC7CB3D2FD1E99B4D1  ___conversionParams1, intptr_t ___buffer2, int32_t ___bufferLength3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, CameraImageConversionParams_tEFEA7C9CF777BD67E3221CBC7CB3D2FD1E99B4D1 , intptr_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_cameraImage_tryConvert)(___nativeHandle0, ___conversionParams1, ___buffer2, ___bufferLength3);

	return static_cast<bool>(returnValue);
}
extern "C" int32_t DEFAULT_CALL UnityARKit_cameraImage_handleValid(int32_t);
// System.Boolean UnityEngine.XR.ARKit.Api::UnityARKit_cameraImage_handleValid(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Api_UnityARKit_cameraImage_handleValid_m550A608D8822134393EFD213AA8989BCDC607ABE (int32_t ___nativeHandle0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_cameraImage_handleValid)(___nativeHandle0);

	return static_cast<bool>(returnValue);
}
extern "C" void DEFAULT_CALL UnityARKit_cameraImage_disposeImage(int32_t);
// System.Void UnityEngine.XR.ARKit.Api::UnityARKit_cameraImage_disposeImage(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Api_UnityARKit_cameraImage_disposeImage_m981FACDA074F559D51F03B79428AB32C9DE68AF4 (int32_t ___nativeHandle0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_cameraImage_disposeImage)(___nativeHandle0);

}
extern "C" intptr_t DEFAULT_CALL UnityARKit_getNativePlanePtr(TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B );
// System.IntPtr UnityEngine.XR.ARKit.Api::UnityARKit_getNativePlanePtr(UnityEngine.Experimental.XR.TrackableId)
extern "C" IL2CPP_METHOD_ATTR intptr_t Api_UnityARKit_getNativePlanePtr_m331E5541D0CCF0AB87B740E9619DECD1D934D365 (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___trackableId0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B );

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_getNativePlanePtr)(___trackableId0);

	return returnValue;
}
extern "C" intptr_t DEFAULT_CALL UnityARKit_getNativeReferencePointPtr(TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B );
// System.IntPtr UnityEngine.XR.ARKit.Api::UnityARKit_getNativeReferencePointPtr(UnityEngine.Experimental.XR.TrackableId)
extern "C" IL2CPP_METHOD_ATTR intptr_t Api_UnityARKit_getNativeReferencePointPtr_m3EDF9A878776EF12669006520BCEE6BBC51251C5 (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___trackableId0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B );

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_getNativeReferencePointPtr)(___trackableId0);

	return returnValue;
}
extern "C" intptr_t DEFAULT_CALL UnityARKit_getNativeSessionPtr();
// System.IntPtr UnityEngine.XR.ARKit.Api::UnityARKit_getNativeSessionPtr()
extern "C" IL2CPP_METHOD_ATTR intptr_t Api_UnityARKit_getNativeSessionPtr_m3BB1B38D978BDEF1A7391AB169C6583C16923A63 (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_getNativeSessionPtr)();

	return returnValue;
}
extern "C" intptr_t DEFAULT_CALL UnityARKit_getNativeFramePtr();
// System.IntPtr UnityEngine.XR.ARKit.Api::UnityARKit_getNativeFramePtr()
extern "C" IL2CPP_METHOD_ATTR intptr_t Api_UnityARKit_getNativeFramePtr_m4B18366ADAADB40BF6677FA05A1D82466749E728 (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_getNativeFramePtr)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL UnityARKit_cameraImage_getConfigurationCount();
// System.Int32 UnityEngine.XR.ARKit.Api::UnityARKit_cameraImage_getConfigurationCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Api_UnityARKit_cameraImage_getConfigurationCount_mC0DFB6E33426E064A103A09A3FF03E1F8E2793F0 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_cameraImage_getConfigurationCount)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL UnityARKit_cameraImage_tryGetConfiguration(int32_t, CameraConfiguration_tF2E20F6B31C6014A39C87E6C430247D1B0F3BDD7 *);
// System.Boolean UnityEngine.XR.ARKit.Api::UnityARKit_cameraImage_tryGetConfiguration(System.Int32,UnityEngine.XR.ARExtensions.CameraConfiguration&)
extern "C" IL2CPP_METHOD_ATTR bool Api_UnityARKit_cameraImage_tryGetConfiguration_m18953433E61698D8234E33EED4A1B427456BB24D (int32_t ___index0, CameraConfiguration_tF2E20F6B31C6014A39C87E6C430247D1B0F3BDD7 * ___configuration1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, CameraConfiguration_tF2E20F6B31C6014A39C87E6C430247D1B0F3BDD7 *);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_cameraImage_tryGetConfiguration)(___index0, ___configuration1);

	return static_cast<bool>(returnValue);
}
extern "C" int32_t DEFAULT_CALL UnityARKit_cameraImage_trySetConfiguration(CameraConfiguration_tF2E20F6B31C6014A39C87E6C430247D1B0F3BDD7 );
// System.Boolean UnityEngine.XR.ARKit.Api::UnityARKit_cameraImage_trySetConfiguration(UnityEngine.XR.ARExtensions.CameraConfiguration)
extern "C" IL2CPP_METHOD_ATTR bool Api_UnityARKit_cameraImage_trySetConfiguration_m2137D6159D8E3DEADE52F58D993599607C510F8A (CameraConfiguration_tF2E20F6B31C6014A39C87E6C430247D1B0F3BDD7  ___configuration0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (CameraConfiguration_tF2E20F6B31C6014A39C87E6C430247D1B0F3BDD7 );

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_cameraImage_trySetConfiguration)(___configuration0);

	return static_cast<bool>(returnValue);
}
extern "C" int32_t DEFAULT_CALL UnityARKit_cameraImage_tryGetCurrentConfiguration(CameraConfiguration_tF2E20F6B31C6014A39C87E6C430247D1B0F3BDD7 *);
// System.Boolean UnityEngine.XR.ARKit.Api::UnityARKit_cameraImage_tryGetCurrentConfiguration(UnityEngine.XR.ARExtensions.CameraConfiguration&)
extern "C" IL2CPP_METHOD_ATTR bool Api_UnityARKit_cameraImage_tryGetCurrentConfiguration_m4ACCA617F78255C2D34E862C32CA02E9608EB533 (CameraConfiguration_tF2E20F6B31C6014A39C87E6C430247D1B0F3BDD7 * ___configuration0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (CameraConfiguration_tF2E20F6B31C6014A39C87E6C430247D1B0F3BDD7 *);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_cameraImage_tryGetCurrentConfiguration)(___configuration0);

	return static_cast<bool>(returnValue);
}
extern "C" int32_t DEFAULT_CALL UnityARKit_tryGetCameraIntrinsics(CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *);
// System.Boolean UnityEngine.XR.ARKit.Api::UnityARKit_tryGetCameraIntrinsics(UnityEngine.XR.ARExtensions.CameraIntrinsics&)
extern "C" IL2CPP_METHOD_ATTR bool Api_UnityARKit_tryGetCameraIntrinsics_mEC8BBED851DF8933B2E76171FB21CFF545230752 (CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * ___cameraIntrinsics0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_tryGetCameraIntrinsics)(___cameraIntrinsics0);

	return static_cast<bool>(returnValue);
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
