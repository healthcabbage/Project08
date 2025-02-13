// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project08/Public/RabbitPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRabbitPlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
PROJECT08_API UClass* Z_Construct_UClass_ARabbitPlayerController();
PROJECT08_API UClass* Z_Construct_UClass_ARabbitPlayerController_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project08();
// End Cross Module References

// Begin Class ARabbitPlayerController Function GetHUDWidget
struct Z_Construct_UFunction_ARabbitPlayerController_GetHUDWidget_Statics
{
	struct RabbitPlayerController_eventGetHUDWidget_Parms
	{
		UUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Public/RabbitPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARabbitPlayerController_GetHUDWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RabbitPlayerController_eventGetHUDWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARabbitPlayerController_GetHUDWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARabbitPlayerController_GetHUDWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARabbitPlayerController_GetHUDWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARabbitPlayerController_GetHUDWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARabbitPlayerController, nullptr, "GetHUDWidget", nullptr, nullptr, Z_Construct_UFunction_ARabbitPlayerController_GetHUDWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARabbitPlayerController_GetHUDWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARabbitPlayerController_GetHUDWidget_Statics::RabbitPlayerController_eventGetHUDWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARabbitPlayerController_GetHUDWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARabbitPlayerController_GetHUDWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARabbitPlayerController_GetHUDWidget_Statics::RabbitPlayerController_eventGetHUDWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARabbitPlayerController_GetHUDWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARabbitPlayerController_GetHUDWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARabbitPlayerController::execGetHUDWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=P_THIS->GetHUDWidget();
	P_NATIVE_END;
}
// End Class ARabbitPlayerController Function GetHUDWidget

// Begin Class ARabbitPlayerController
void ARabbitPlayerController::StaticRegisterNativesARabbitPlayerController()
{
	UClass* Class = ARabbitPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHUDWidget", &ARabbitPlayerController::execGetHUDWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARabbitPlayerController);
UClass* Z_Construct_UClass_ARabbitPlayerController_NoRegister()
{
	return ARabbitPlayerController::StaticClass();
}
struct Z_Construct_UClass_ARabbitPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "RabbitPlayerController.h" },
		{ "ModuleRelativePath", "Public/RabbitPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RabbitPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RabbitPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RabbitPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RabbitPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RabbitPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Public/RabbitPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetInstance_MetaData[] = {
		{ "Category", "HUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RabbitPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SprintAction;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HUDWidgetInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARabbitPlayerController_GetHUDWidget, "GetHUDWidget" }, // 1688074775
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARabbitPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARabbitPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARabbitPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARabbitPlayerController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARabbitPlayerController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARabbitPlayerController_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARabbitPlayerController, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARabbitPlayerController_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARabbitPlayerController, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARabbitPlayerController_Statics::NewProp_SprintAction = { "SprintAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARabbitPlayerController, SprintAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintAction_MetaData), NewProp_SprintAction_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARabbitPlayerController_Statics::NewProp_HUDWidgetClass = { "HUDWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARabbitPlayerController, HUDWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidgetClass_MetaData), NewProp_HUDWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARabbitPlayerController_Statics::NewProp_HUDWidgetInstance = { "HUDWidgetInstance", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARabbitPlayerController, HUDWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidgetInstance_MetaData), NewProp_HUDWidgetInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARabbitPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARabbitPlayerController_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARabbitPlayerController_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARabbitPlayerController_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARabbitPlayerController_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARabbitPlayerController_Statics::NewProp_SprintAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARabbitPlayerController_Statics::NewProp_HUDWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARabbitPlayerController_Statics::NewProp_HUDWidgetInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARabbitPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARabbitPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Project08,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARabbitPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARabbitPlayerController_Statics::ClassParams = {
	&ARabbitPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARabbitPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARabbitPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARabbitPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ARabbitPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARabbitPlayerController()
{
	if (!Z_Registration_Info_UClass_ARabbitPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARabbitPlayerController.OuterSingleton, Z_Construct_UClass_ARabbitPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARabbitPlayerController.OuterSingleton;
}
template<> PROJECT08_API UClass* StaticClass<ARabbitPlayerController>()
{
	return ARabbitPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARabbitPlayerController);
ARabbitPlayerController::~ARabbitPlayerController() {}
// End Class ARabbitPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project08_Source_Project08_Public_RabbitPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARabbitPlayerController, ARabbitPlayerController::StaticClass, TEXT("ARabbitPlayerController"), &Z_Registration_Info_UClass_ARabbitPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARabbitPlayerController), 1231310872U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project08_Source_Project08_Public_RabbitPlayerController_h_2217771135(TEXT("/Script/Project08"),
	Z_CompiledInDeferFile_FID_Project08_Source_Project08_Public_RabbitPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project08_Source_Project08_Public_RabbitPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
