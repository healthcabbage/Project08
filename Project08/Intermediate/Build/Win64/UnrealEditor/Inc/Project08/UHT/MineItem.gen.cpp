// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project08/Public/MineItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMineItem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
PROJECT08_API UClass* Z_Construct_UClass_ABaseItem();
PROJECT08_API UClass* Z_Construct_UClass_AMineItem();
PROJECT08_API UClass* Z_Construct_UClass_AMineItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project08();
// End Cross Module References

// Begin Class AMineItem
void AMineItem::StaticRegisterNativesAMineItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMineItem);
UClass* Z_Construct_UClass_AMineItem_NoRegister()
{
	return AMineItem::StaticClass();
}
struct Z_Construct_UClass_AMineItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MineItem.h" },
		{ "ModuleRelativePath", "Public/MineItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionCollision_MetaData[] = {
		{ "Category", "Item|Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MineItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionDelay_MetaData[] = {
		{ "Category", "Mine" },
		{ "ModuleRelativePath", "Public/MineItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionRadius_MetaData[] = {
		{ "Category", "Mine" },
		{ "ModuleRelativePath", "Public/MineItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionDamage_MetaData[] = {
		{ "Category", "Mine" },
		{ "ModuleRelativePath", "Public/MineItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExplosionCollision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplosionDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplosionRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplosionDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMineItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMineItem_Statics::NewProp_ExplosionCollision = { "ExplosionCollision", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMineItem, ExplosionCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionCollision_MetaData), NewProp_ExplosionCollision_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMineItem_Statics::NewProp_ExplosionDelay = { "ExplosionDelay", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMineItem, ExplosionDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionDelay_MetaData), NewProp_ExplosionDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMineItem_Statics::NewProp_ExplosionRadius = { "ExplosionRadius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMineItem, ExplosionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionRadius_MetaData), NewProp_ExplosionRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMineItem_Statics::NewProp_ExplosionDamage = { "ExplosionDamage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMineItem, ExplosionDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionDamage_MetaData), NewProp_ExplosionDamage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMineItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMineItem_Statics::NewProp_ExplosionCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMineItem_Statics::NewProp_ExplosionDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMineItem_Statics::NewProp_ExplosionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMineItem_Statics::NewProp_ExplosionDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMineItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMineItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseItem,
	(UObject* (*)())Z_Construct_UPackage__Script_Project08,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMineItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMineItem_Statics::ClassParams = {
	&AMineItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMineItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMineItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMineItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AMineItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMineItem()
{
	if (!Z_Registration_Info_UClass_AMineItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMineItem.OuterSingleton, Z_Construct_UClass_AMineItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMineItem.OuterSingleton;
}
template<> PROJECT08_API UClass* StaticClass<AMineItem>()
{
	return AMineItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMineItem);
AMineItem::~AMineItem() {}
// End Class AMineItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project08_Source_Project08_Public_MineItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMineItem, AMineItem::StaticClass, TEXT("AMineItem"), &Z_Registration_Info_UClass_AMineItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMineItem), 1233782961U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project08_Source_Project08_Public_MineItem_h_1221499457(TEXT("/Script/Project08"),
	Z_CompiledInDeferFile_FID_Project08_Source_Project08_Public_MineItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project08_Source_Project08_Public_MineItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
