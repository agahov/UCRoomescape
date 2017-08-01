// Fill out your copyright notice in the Description page of Project Settings.

#include "OpenDoor.h"


// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	PrimaryComponentTick.bCanEverTick = true;

}

void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();


    if (!PressurePlate)
    {
        UE_LOG(LogTemp, Error, TEXT("%s variable PressurePlate is undefinded"), *GetOwner()->GetName());
        return;
    }
}


void UOpenDoor::OpenDoor() {

    if (!IsDoorOpened)
    {
        OnOpenRequest.Broadcast(0);
        IsDoorOpened = true;
    }
}


void UOpenDoor::CloseDoor()
{

    if (IsDoorOpened)
    {
        OnCloseRequest.Broadcast(0);
        IsDoorOpened = false;
    }

}


void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);



    if (GetTotalMassOfActorsOnPlate()>=TriggerMassIn && GetTotalMassOfActorsOnPlate()<TriggerMassOut)
    {
        OpenDoor();
    } else
    {
        CloseDoor();
    }

}


float UOpenDoor::GetTotalMassOfActorsOnPlate()
{
    float TotalMass = 0.f;
    FString TotalMassStr;

    TArray<AActor*> OverlappingActors;


    if (!PressurePlate) return TotalMass;


        PressurePlate->GetOverlappingActors(OUT OverlappingActors);


    //AActor JoinedStr;
    for (const auto& Actor : OverlappingActors)
    {
        TotalMass += Actor->FindComponentByClass<UPrimitiveComponent>()->GetMass();
        TotalMassStr = FString::SanitizeFloat(TotalMass);

        UE_LOG(LogTemp,Warning,TEXT("name: %s   mass:: %s"), *Actor->GetName(), *TotalMassStr);

    }

    return TotalMass;

}


