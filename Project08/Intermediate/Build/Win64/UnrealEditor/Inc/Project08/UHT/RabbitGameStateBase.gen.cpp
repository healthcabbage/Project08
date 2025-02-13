// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project08/Public/RabbitGameStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRabbitGameStateBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
PROJECT08_API UClass* Z_Construct_UClass_ARabbitGameStateBase();
PROJECT08_API UClass* Z_Construct_UClass_ARabbitGameStateBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project08();
// End Cross Module References

// Begin Class ARabbitGameStateBase Function AddScore
struct Z_Construct_UFunction_ARabbitGameStateBase_AddScore_Statics
{
	struct RabbitGameStateBase_eventAddScore_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Public/RabbitGameStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARabbitGameStateBase_AddScore_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RabbitGameStateBase_eventAddScore_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARabbitGameStateBase_AddScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARabbitGameStateBase_AddScore_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARabbitGameStateBase_AddScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARabbitGameStateBase_AddScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARabbitGameStateBase, nullptr, "AddScore", nullptr, nullptr, Z_Construct_UFunction_ARabbitGameStateBase_AddScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARabbitGameStateBase_AddScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARabbitGameStateBase_AddScore_Statics::RabbitGameStateBase_eventAddScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARabbitGameStateBase_AddScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARabbitGameStateBase_AddScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARabbitGameStateBase_AddScore_Statics::RabbitGameStateBase_eventAddScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARabbitGameStateBase_AddScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARabbitGameStateBase_AddScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARabbitGameStateBase::execAddScore)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddScore(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class ARabbitGameStateBase Function AddScore

// Begin Class ARabbitGameStateBase Function GetScore
struct Z_Construct_UFunction_ARabbitGameStateBase_GetScore_Statics
{
	struct RabbitGameStateBase_eventGetScore_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Public/RabbitGameStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARabbitGameStateBase_GetScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RabbitGameStateBase_eventGetScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARabbitGameStateBase_GetScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARabbitGameStateBase_GetScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARabbitGameStateBase_GetScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARabbitGameStateBase_GetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARabbitGameStateBase, nullptr, "GetScore", nullptr, nullptr, Z_Construct_UFunction_ARabbitGameStateBase_GetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARabbitGameStateBase_GetScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARabbitGameStateBase_GetScore_Statics::RabbitGameStateBase_eventGetScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARabbitGameStateBase_GetScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARabbitGameStateBase_GetScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARabbitGameStateBase_GetScore_Statics::RabbitGameStateBase_eventGetScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARabbitGameStateBase_GetScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARabbitGameStateBase_GetScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARabbitGameStateBase::execGetScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetScore();
	P_NATIVE_END;
}
// End Class ARabbitGameStateBase Function GetScore

// Begin Class ARabbitGameStateBase
void ARabbitGameStateBase::StaticRegisterNativesARabbitGameStateBase()
{
	UClass* Class = ARabbitGameStateBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddScore", &ARabbitGameStateBase::execAddScore },
		{ "GetScore", &ARabbitGameStateBase::execGetScore },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARabbitGameStateBase);
UClass* Z_Construct_UClass_ARabbitGameStateBase_NoRegister()
{
	return ARabbitGameStateBase::StaticClass();
}
struct Z_Construct_UClass_ARabbitGameStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RabbitGameStateBase.h" },
		{ "ModuleRelativePath", "Public/RabbitGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Public/RabbitGameStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARabbitGameStateBase_AddScore, "AddScore" }, // 1009293241
		{ &Z_Construct_UFunction_ARabbitGameStateBase_GetScore, "GetScore" }, // 4046699808
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARabbitGameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARabbitGameStateBase_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARabbitGameStateBase, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARabbitGameStateBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARabbitGameStateBase_Statics::NewProp_Score,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARabbitGameStateBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARabbitGameStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Project08,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARabbitGameStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARabbitGameStateBase_Statics::ClassParams = {
	&ARabbitGameStateBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARabbitGameStateBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARabbitGameStateBase_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARabbitGameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ARabbitGameStateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARabbitGameStateBase()
{
	if (!Z_Registration_Info_UClass_ARabbitGameStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARabbitGameStateBase.OuterSingleton, Z_Construct_UClass_ARabbitGameStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARabbitGameStateBase.OuterSingleton;
}
template<> PROJECT08_API UClass* StaticClass<ARabbitGameStateBase>()
{
	return ARabbitGameStateBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARabbitGameStateBase);
ARabbitGameStateBase::~ARabbitGameStateBase() {}
// End Class ARabbitGameStateBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project08_Source_Project08_Public_RabbitGameStateBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARabbitGameStateBase, ARabbitGameStateBase::StaticClass, TEXT("ARabbitGameStateBase"), &Z_Registration_Info_UClass_ARabbitGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARabbitGameStateBase), 3380668745U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project08_Source_Project08_Public_RabbitGameStateBase_h_2045254356(TEXT("/Script/Project08"),
	Z_CompiledInDeferFile_FID_Project08_Source_Project08_Public_RabbitGameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project08_Source_Project08_Public_RabbitGameStateBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
