// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Citizen.generated.h"

UENUM()
enum ECitizenJob
{
	BusinessPerson,
	OfficeWorker,
	Laborer,
	Unemployed,
	Barista
};

UENUM()
enum EGender
{
	Male,
	Female,
	NonBinary
};

UCLASS()
class HENLOCK_API ACitizen : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACitizen();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECitizenJob> CitizenJob;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TEnumAsByte<EGender> Gender;
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
