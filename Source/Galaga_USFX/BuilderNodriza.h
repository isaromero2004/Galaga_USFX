// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NaveNodriza.h"
#include "BuilderNodriza.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBuilderNodriza : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_API IBuilderNodriza
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
	
public:
	virtual void BuildCascos() = 0;
	virtual void BuildMotor() = 0;
	virtual void BuildArmamento() = 0;
	virtual void BuildEscudos() = 0;

	virtual class ANaveNodriza* GetNaveNodriza() = 0;


};
