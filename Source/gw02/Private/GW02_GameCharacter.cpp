// Fill out your copyright notice in the Description page of Project Settings.


#include "GW02_GameCharacter.h"

// Sets default values
AGW02_GameCharacter::AGW02_GameCharacter()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	

	//create coponentss
	MainCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Main_Camera"));
	CameraPivot = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Camera_Pivot"));

	MainCamera->SetupAttachment(CameraPivot);
	MainCamera->SetRelativeLocation(FVector(0.0f, 1000.0f, 0.0f));
	MainCamera->SetRelativeRotation(FRotator(0, -90, 0));
	MainCamera->SetAspectRatio(1.78f);

	//set camera
	MainCamera->SetProjectionMode(ECameraProjectionMode::Orthographic);
	MainCamera->SetOrthoFarClipPlane(2000.0f);
	MainCamera->SetOrthoWidth(2300.0f);


}

// Called when the game starts or when spawned
void AGW02_GameCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGW02_GameCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGW02_GameCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

