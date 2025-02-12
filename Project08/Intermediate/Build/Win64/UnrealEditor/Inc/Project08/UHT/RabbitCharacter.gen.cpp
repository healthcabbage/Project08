// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project08/Public/RabbitCharacter.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRabbitCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
PROJECT08_API UClass* Z_Construct_UClass_ARabbitCharacter();
PROJECT08_API UClass* Z_Construct_UClass_ARabbitCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project08();
// End Cross Module References

// Begin Class ARabbitCharacter Function Look
struct Z_Construct_UFunction_ARabbitCharacter_Look_Statics
{
	struct RabbitCharacter_eventLook_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RabbitCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARabbitCharacter_Look_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RabbitCharacter_eventLook_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARabbitCharacter_Look_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARabbitCharacter_Look_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARabbitCharacter_Look_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARabbitCharacter_Look_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARabbitCharacter, nullptr, "Look", nullptr, nullptr, Z_Construct_UFunction_ARabbitCharacter_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARabbitCharacter_Look_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARabbitCharacter_Look_Statics::RabbitCharacter_eventLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARabbitCharacter_Look_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARabbitCharacter_Look_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARabbitCharacter_Look_Statics::RabbitCharacter_eventLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARabbitCharacter_Look()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARabbitCharacter_Look_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARabbitCharacter::execLook)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Look(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ARabbitCharacter Function Look

// Begin Class ARabbitCharacter Function Move
struct Z_Construct_UFunction_ARabbitCharacter_Move_Statics
{
	struct RabbitCharacter_eventMove_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RabbitCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARabbitCharacter_Move_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RabbitCharacter_eventMove_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARabbitCharacter_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARabbitCharacter_Move_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARabbitCharacter_Move_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARabbitCharacter_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARabbitCharacter, nullptr, "Move", nullptr, nullptr, Z_Construct_UFunction_ARabbitCharacter_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARabbitCharacter_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARabbitCharacter_Move_Statics::RabbitCharacter_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARabbitCharacter_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARabbitCharacter_Move_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARabbitCharacter_Move_Statics::RabbitCharacter_eventMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARabbitCharacter_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARabbitCharacter_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARabbitCharacter::execMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ARabbitCharacter Function Move

// Begin Class ARabbitCharacter Function StartJump
struct Z_Construct_UFunction_ARabbitCharacter_StartJump_Statics
{
	struct RabbitCharacter_eventStartJump_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RabbitCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARabbitCharacter_StartJump_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RabbitCharacter_eventStartJump_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARabbitCharacter_StartJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARabbitCharacter_StartJump_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARabbitCharacter_StartJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARabbitCharacter_StartJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARabbitCharacter, nullptr, "StartJump", nullptr, nullptr, Z_Construct_UFunction_ARabbitCharacter_StartJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARabbitCharacter_StartJump_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARabbitCharacter_StartJump_Statics::RabbitCharacter_eventStartJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARabbitCharacter_StartJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARabbitCharacter_StartJump_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARabbitCharacter_StartJump_Statics::RabbitCharacter_eventStartJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARabbitCharacter_StartJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARabbitCharacter_StartJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARabbitCharacter::execStartJump)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartJump(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ARabbitCharacter Function StartJump

// Begin Class ARabbitCharacter Function StartSprint
struct Z_Construct_UFunction_ARabbitCharacter_StartSprint_Statics
{
	struct RabbitCharacter_eventStartSprint_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RabbitCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARabbitCharacter_StartSprint_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RabbitCharacter_eventStartSprint_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARabbitCharacter_StartSprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARabbitCharacter_StartSprint_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARabbitCharacter_StartSprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARabbitCharacter_StartSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARabbitCharacter, nullptr, "StartSprint", nullptr, nullptr, Z_Construct_UFunction_ARabbitCharacter_StartSprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARabbitCharacter_StartSprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARabbitCharacter_StartSprint_Statics::RabbitCharacter_eventStartSprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARabbitCharacter_StartSprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARabbitCharacter_StartSprint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARabbitCharacter_StartSprint_Statics::RabbitCharacter_eventStartSprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARabbitCharacter_StartSprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARabbitCharacter_StartSprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARabbitCharacter::execStartSprint)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartSprint(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ARabbitCharacter Function StartSprint

// Begin Class ARabbitCharacter Function StopJump
struct Z_Construct_UFunction_ARabbitCharacter_StopJump_Statics
{
	struct RabbitCharacter_eventStopJump_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RabbitCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARabbitCharacter_StopJump_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RabbitCharacter_eventStopJump_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARabbitCharacter_StopJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARabbitCharacter_StopJump_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARabbitCharacter_StopJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARabbitCharacter_StopJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARabbitCharacter, nullptr, "StopJump", nullptr, nullptr, Z_Construct_UFunction_ARabbitCharacter_StopJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARabbitCharacter_StopJump_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARabbitCharacter_StopJump_Statics::RabbitCharacter_eventStopJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARabbitCharacter_StopJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARabbitCharacter_StopJump_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARabbitCharacter_StopJump_Statics::RabbitCharacter_eventStopJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARabbitCharacter_StopJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARabbitCharacter_StopJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARabbitCharacter::execStopJump)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopJump(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ARabbitCharacter Function StopJump

// Begin Class ARabbitCharacter Function StopSprint
struct Z_Construct_UFunction_ARabbitCharacter_StopSprint_Statics
{
	struct RabbitCharacter_eventStopSprint_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RabbitCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARabbitCharacter_StopSprint_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RabbitCharacter_eventStopSprint_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARabbitCharacter_StopSprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARabbitCharacter_StopSprint_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARabbitCharacter_StopSprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARabbitCharacter_StopSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARabbitCharacter, nullptr, "StopSprint", nullptr, nullptr, Z_Construct_UFunction_ARabbitCharacter_StopSprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARabbitCharacter_StopSprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARabbitCharacter_StopSprint_Statics::RabbitCharacter_eventStopSprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARabbitCharacter_StopSprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARabbitCharacter_StopSprint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARabbitCharacter_StopSprint_Statics::RabbitCharacter_eventStopSprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARabbitCharacter_StopSprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARabbitCharacter_StopSprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARabbitCharacter::execStopSprint)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopSprint(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ARabbitCharacter Function StopSprint

// Begin Class ARabbitCharacter
void ARabbitCharacter::StaticRegisterNativesARabbitCharacter()
{
	UClass* Class = ARabbitCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Look", &ARabbitCharacter::execLook },
		{ "Move", &ARabbitCharacter::execMove },
		{ "StartJump", &ARabbitCharacter::execStartJump },
		{ "StartSprint", &ARabbitCharacter::execStartSprint },
		{ "StopJump", &ARabbitCharacter::execStopJump },
		{ "StopSprint", &ARabbitCharacter::execStopSprint },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARabbitCharacter);
UClass* Z_Construct_UClass_ARabbitCharacter_NoRegister()
{
	return ARabbitCharacter::StaticClass();
}
struct Z_Construct_UClass_ARabbitCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RabbitCharacter.h" },
		{ "ModuleRelativePath", "Public/RabbitCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RabbitCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RabbitCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARabbitCharacter_Look, "Look" }, // 282608883
		{ &Z_Construct_UFunction_ARabbitCharacter_Move, "Move" }, // 3241707781
		{ &Z_Construct_UFunction_ARabbitCharacter_StartJump, "StartJump" }, // 2299935630
		{ &Z_Construct_UFunction_ARabbitCharacter_StartSprint, "StartSprint" }, // 729315810
		{ &Z_Construct_UFunction_ARabbitCharacter_StopJump, "StopJump" }, // 3780257513
		{ &Z_Construct_UFunction_ARabbitCharacter_StopSprint, "StopSprint" }, // 1579021666
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARabbitCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARabbitCharacter_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARabbitCharacter, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComp_MetaData), NewProp_SpringArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARabbitCharacter_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARabbitCharacter, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARabbitCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARabbitCharacter_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARabbitCharacter_Statics::NewProp_CameraComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARabbitCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARabbitCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Project08,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARabbitCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARabbitCharacter_Statics::ClassParams = {
	&ARabbitCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARabbitCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARabbitCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARabbitCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ARabbitCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARabbitCharacter()
{
	if (!Z_Registration_Info_UClass_ARabbitCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARabbitCharacter.OuterSingleton, Z_Construct_UClass_ARabbitCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARabbitCharacter.OuterSingleton;
}
template<> PROJECT08_API UClass* StaticClass<ARabbitCharacter>()
{
	return ARabbitCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARabbitCharacter);
ARabbitCharacter::~ARabbitCharacter() {}
// End Class ARabbitCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project08_Source_Project08_Public_RabbitCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARabbitCharacter, ARabbitCharacter::StaticClass, TEXT("ARabbitCharacter"), &Z_Registration_Info_UClass_ARabbitCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARabbitCharacter), 2407097807U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project08_Source_Project08_Public_RabbitCharacter_h_3241155013(TEXT("/Script/Project08"),
	Z_CompiledInDeferFile_FID_Project08_Source_Project08_Public_RabbitCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project08_Source_Project08_Public_RabbitCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
