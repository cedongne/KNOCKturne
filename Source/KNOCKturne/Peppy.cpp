// Fill out your copyright notice in the Description page of Project Settings.


#include "Peppy.h"

// Sets default values
APeppy::APeppy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APeppy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APeppy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APeppy::MoveForward(float Value) {
	if ((Controller != nullptr) && (Value != 0.0f)) {
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void APeppy::MoveRight(float Value) {
	if ((Controller != nullptr) && (Value != 0.0f)) {
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, Value);
	}
}

// Called to bind functionality to input
void APeppy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Move Forward / Backward", this, &APeppy::MoveForward);
	PlayerInputComponent->BindAxis("Move Right / Left", this, &APeppy::MoveRight);
}

