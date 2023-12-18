// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "terry/LogPrint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLogPrint() {}
// Cross Module References
	TERRY_API UClass* Z_Construct_UClass_ULogPrint_NoRegister();
	TERRY_API UClass* Z_Construct_UClass_ULogPrint();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_terry();
// End Cross Module References
	DEFINE_FUNCTION(ULogPrint::execprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->print();
		P_NATIVE_END;
	}
	void ULogPrint::StaticRegisterNativesULogPrint()
	{
		UClass* Class = ULogPrint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "print", &ULogPrint::execprint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULogPrint_print_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogPrint_print_Statics::Function_MetaDataParams[] = {
		{ "Category", "AAA" },
		{ "ModuleRelativePath", "LogPrint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogPrint_print_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogPrint, nullptr, "print", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogPrint_print_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogPrint_print_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogPrint_print()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogPrint_print_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULogPrint_NoRegister()
	{
		return ULogPrint::StaticClass();
	}
	struct Z_Construct_UClass_ULogPrint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULogPrint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_terry,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULogPrint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULogPrint_print, "print" }, // 1246500770
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogPrint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "LogPrint.h" },
		{ "ModuleRelativePath", "LogPrint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULogPrint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULogPrint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULogPrint_Statics::ClassParams = {
		&ULogPrint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULogPrint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULogPrint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULogPrint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULogPrint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULogPrint, 2270886488);
	template<> TERRY_API UClass* StaticClass<ULogPrint>()
	{
		return ULogPrint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULogPrint(Z_Construct_UClass_ULogPrint, &ULogPrint::StaticClass, TEXT("/Script/terry"), TEXT("ULogPrint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULogPrint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
