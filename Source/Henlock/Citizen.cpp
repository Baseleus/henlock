// Fill out your copyright notice in the Description page of Project Settings.


#include "Citizen.h"

// Sets default values
ACitizen::ACitizen()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CitizenJob = static_cast<ECitizenJob>(rand() % Unemployed);
	Gender = static_cast<EGender>(rand() % NonBinary);
}

// Called when the game starts or when spawned
void ACitizen::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACitizen::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACitizen::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

