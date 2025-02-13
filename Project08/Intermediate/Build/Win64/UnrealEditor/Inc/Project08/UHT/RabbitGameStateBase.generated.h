// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RabbitGameStateBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT08_RabbitGameStateBase_generated_h
#error "RabbitGameStateBase.generated.h already included, missing '#pragma once' in RabbitGameStateBase.h"
#endif
#define PROJECT08_RabbitGameStateBase_generated_h

#define FID_Project08_Source_Project08_Public_RabbitGameStateBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddScore); \
	DECLARE_FUNCTION(execGetScore);


#define FID_Project08_Source_Project08_Public_RabbitGameStateBase_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARabbitGameStateBase(); \
	friend struct Z_Construct_UClass_ARabbitGameStateBase_Statics; \
public: \
	DECLARE_CLASS(ARabbitGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project08"), NO_API) \
	DECLARE_SERIALIZER(ARabbitGameStateBase)


#define FID_Project08_Source_Project08_Public_RabbitGameStateBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARabbitGameStateBase(ARabbitGameStateBase&&); \
	ARabbitGameStateBase(const ARabbitGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARabbitGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARabbitGameStateBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARabbitGameStateBase) \
	NO_API virtual ~ARabbitGameStateBase();


#define FID_Project08_Source_Project08_Public_RabbitGameStateBase_h_7_PROLOG
#define FID_Project08_Source_Project08_Public_RabbitGameStateBase_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project08_Source_Project08_Public_RabbitGameStateBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project08_Source_Project08_Public_RabbitGameStateBase_h_10_INCLASS_NO_PURE_DECLS \
	FID_Project08_Source_Project08_Public_RabbitGameStateBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT08_API UClass* StaticClass<class ARabbitGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project08_Source_Project08_Public_RabbitGameStateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
