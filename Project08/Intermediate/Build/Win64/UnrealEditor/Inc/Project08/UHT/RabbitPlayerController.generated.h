// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RabbitPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef PROJECT08_RabbitPlayerController_generated_h
#error "RabbitPlayerController.generated.h already included, missing '#pragma once' in RabbitPlayerController.h"
#endif
#define PROJECT08_RabbitPlayerController_generated_h

#define FID_Project08_Source_Project08_Public_RabbitPlayerController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartGame); \
	DECLARE_FUNCTION(execShowMainMenu); \
	DECLARE_FUNCTION(execShowGameHUD); \
	DECLARE_FUNCTION(execGetHUDWidget);


#define FID_Project08_Source_Project08_Public_RabbitPlayerController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARabbitPlayerController(); \
	friend struct Z_Construct_UClass_ARabbitPlayerController_Statics; \
public: \
	DECLARE_CLASS(ARabbitPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project08"), NO_API) \
	DECLARE_SERIALIZER(ARabbitPlayerController)


#define FID_Project08_Source_Project08_Public_RabbitPlayerController_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARabbitPlayerController(ARabbitPlayerController&&); \
	ARabbitPlayerController(const ARabbitPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARabbitPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARabbitPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARabbitPlayerController) \
	NO_API virtual ~ARabbitPlayerController();


#define FID_Project08_Source_Project08_Public_RabbitPlayerController_h_10_PROLOG
#define FID_Project08_Source_Project08_Public_RabbitPlayerController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project08_Source_Project08_Public_RabbitPlayerController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project08_Source_Project08_Public_RabbitPlayerController_h_13_INCLASS_NO_PURE_DECLS \
	FID_Project08_Source_Project08_Public_RabbitPlayerController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT08_API UClass* StaticClass<class ARabbitPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project08_Source_Project08_Public_RabbitPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
