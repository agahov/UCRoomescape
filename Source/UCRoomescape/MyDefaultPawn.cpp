// Fill out your copyright notice in the Description page of Project Settings.

#include "MyDefaultPawn.h"


void AMyDefaultPawn::BeginPlay()
{
    Super::BeginPlay();

    InitGrabber();

}


void AMyDefaultPawn::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
    Super::SetupPlayerInputComponent(InputComponent);


    if (InputComponent== nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("Can not init  Input component "));
    }
    else
    {
//        InputComponent->BindAction("Grab", IE_Pressed, this, &UGrabber::Grab);
//        InputComponent->BindAction("Grab", IE_Released, this, &UGrabber::Ungrab);
        InputComponent->BindAction("Grab", IE_Pressed, this, &AMyDefaultPawn::Grab);
        InputComponent->BindAction("Grab", IE_Released, this, &AMyDefaultPawn::Ungrab);

    }


}


void AMyDefaultPawn::InitGrabber()
{
    Grabber = this->FindComponentByClass<UGrabber>();

    if (Grabber== nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("%s miss Grabber "),*this->GetName());
    }

}



void AMyDefaultPawn::Grab() {

    if (Grabber== nullptr)
        return;
    UE_LOG(LogTemp, Warning, TEXT("Grab Pressed"));

    Grabber->Grab();

}

void AMyDefaultPawn::Ungrab() {
    if (Grabber== nullptr)
        return;


    UE_LOG(LogTemp, Warning, TEXT("Grab Release"));

    Grabber->Ungrab();
}

