// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"

#include "InterfazProxy.generated.h"


// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInterfazProxy : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_API IInterfazProxy
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void Recoger(class ACapsulas*Capsulas)=0;
	virtual void Soltar(const FTransform& PutDownLocation)=0;

};
