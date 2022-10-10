// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "GameFramework/Character.h"
#include "Peppy.generated.h"

UCLASS()
class KNOCKTURNE_API APeppy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APeppy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

protected:
	void MoveForward(float value);
	void MoveRight(float value);

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* SpringArm = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* Camera = nullptr;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};