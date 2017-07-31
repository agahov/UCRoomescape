// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Grabber.h"
//#include "CoreMinimal.h"
#include "Engine.h"
#include "GameFramework/DefaultPawn.h"
#include "MyDefaultPawn.generated.h"


/**
 * 
 */
UCLASS()
class UCROOMESCAPE_API AMyDefaultPawn : public ADefaultPawn
{
	GENERATED_BODY()


protected:
// Called when the game starts or when spawned
virtual void BeginPlay() override;

public:
// Called every frame
//virtual void Tick( float DeltaSeconds ) override;

// Called to bind functionality to input
virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;



private:

UGrabber* Grabber;
void InitGrabber();

void  Grab();
void Ungrab();


};
