// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/NWCharacterBase.h"
#include "NWCharacterPlayer.generated.h"

/**
 * 
 */
UCLASS()
class NEURALWAR_API ANWCharacterPlayer : public ANWCharacterBase
{
	GENERATED_BODY()
	
public:
	ANWCharacterPlayer();

	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	//virtual void BeginPlay() override;

	// Camera Section
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	TObjectPtr<class USpringArmComponent> CameraBoom;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	TObjectPtr<class UCameraComponent> FollowCamera;


	// Input Section




};
