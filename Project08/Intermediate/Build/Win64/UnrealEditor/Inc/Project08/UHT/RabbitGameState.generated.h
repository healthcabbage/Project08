// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RabbitGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT08_RabbitGameState_generated_h
#error "RabbitGameState.generated.h already included, missing '#pragma once' in RabbitGameState.h"
#endif
#define PROJECT08_RabbitGameState_generated_h

#define FID_Project08_Source_Project08_Public_RabbitGameState_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCoinCollected); \
	DECLARE_FUNCTION(execOnGameOver); \
	DECLARE_FUNCTION(execAddScore); \
	DECLARE_FUNCTION(execGetScore);


#define FID_Project08_Source_Project08_Public_RabbitGameState_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARabbitGameState(); \
	friend struct Z_Construct_UClass_ARabbitGameState_Statics; \
public: \
	DECLARE_CLASS(ARabbitGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project08"), NO_API) \
	DECLARE_SERIALIZER(ARabbitGameState)


#define FID_Project08_Source_Project08_Public_RabbitGameState_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARabbitGameState(ARabbitGameState&&); \
	ARabbitGameState(const ARabbitGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARabbitGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARabbitGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARabbitGameState) \
	NO_API virtual ~ARabbitGameState();


#define FID_Project08_Source_Project08_Public_RabbitGameState_h_7_PROLOG
#define FID_Project08_Source_Project08_Public_RabbitGameState_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project08_Source_Project08_Public_RabbitGameState_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project08_Source_Project08_Public_RabbitGameState_h_10_INCLASS_NO_PURE_DECLS \
	FID_Project08_Source_Project08_Public_RabbitGameState_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT08_API UClass* StaticClass<class ARabbitGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project08_Source_Project08_Public_RabbitGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
