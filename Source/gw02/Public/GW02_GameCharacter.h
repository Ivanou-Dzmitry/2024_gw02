// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"
#include "GW02_GameCharacter.generated.h"


UCLASS()
class GW02_API AGW02_GameCharacter : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AGW02_GameCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//main Pawn camera
	UPROPERTY(EditAnywhere)
	UCameraComponent* MainCamera;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* CameraPivot;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
