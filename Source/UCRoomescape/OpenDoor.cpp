// Fill out your copyright notice in the Description page of Project Settings.

#include "OpenDoor.h"


// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;


	// ...
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();


    if (PressurePlate == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("%s variable PressurePlate is undefinded"), *GetOwner()->GetName());
        return;


    }

	// ...
	//AActor * owner = CFFileSecurityGetOwner()

    //ActorThatOpens = GetWorld()->GetFirstPlayerController()->GetPawn();

}



void UOpenDoor::OpenDoor() {

    AActor* Owner = GetOwner();
    FRotator NewRotation = FRotator(0.f,OpenAngel,0.f);
    Owner->SetActorRotation(NewRotation);

}

void UOpenDoor::CloseDoor() {

    AActor* Owner = GetOwner();
    FRotator NewRotation = FRotator(0.f,0.f,0.f);
    Owner->SetActorRotation(NewRotation);

}

// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);



    if (GetTotalMassOfActorsOnPlate()>=70.f && GetTotalMassOfActorsOnPlate()<80.f)
    {
        OpenDoor();

        LastDoorOpenTime = GetWorld()->GetTimeSeconds();
    }

	// ...

    if (GetWorld()->GetTimeSeconds() - LastDoorOpenTime>= DoorCloseDelay )
    {
        CloseDoor();
    }
}


float UOpenDoor::GetTotalMassOfActorsOnPlate()
{
    float TotalMass = 0.f;
    FString TotalMassStr;

    TArray<AActor*> OverlappingActors;
    if (PressurePlate == nullptr) return 0;


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


