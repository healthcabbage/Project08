// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RabbitGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT08_RabbitGameInstance_generated_h
#error "RabbitGameInstance.generated.h already included, missing '#pragma once' in RabbitGameInstance.h"
#endif
#define PROJECT08_RabbitGameInstance_generated_h

#define FID_Project08_Source_Project08_Public_RabbitGameInstance_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddToScore);


#define FID_Project08_Source_Project08_Public_RabbitGameInstance_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURabbitGameInstance(); \
	friend struct Z_Construct_UClass_URabbitGameInstance_Statics; \
public: \
	DECLARE_CLASS(URabbitGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Project08"), NO_API) \
	DECLARE_SERIALIZER(URabbitGameInstance)


#define FID_Project08_Source_Project08_Public_RabbitGameInstance_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URabbitGameInstance(URabbitGameInstance&&); \
	URabbitGameInstance(const URabbitGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URabbitGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URabbitGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URabbitGameInstance) \
	NO_API virtual ~URabbitGameInstance();


#define FID_Project08_Source_Project08_Public_RabbitGameInstance_h_7_PROLOG
#define FID_Project08_Source_Project08_Public_RabbitGameInstance_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project08_Source_Project08_Public_RabbitGameInstance_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project08_Source_Project08_Public_RabbitGameInstance_h_10_INCLASS_NO_PURE_DECLS \
	FID_Project08_Source_Project08_Public_RabbitGameInstance_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT08_API UClass* StaticClass<class URabbitGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project08_Source_Project08_Public_RabbitGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
