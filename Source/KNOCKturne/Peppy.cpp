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

// Called to bind functionality to input
void APeppy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

