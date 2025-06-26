// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/NWCharacterBase.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ANWCharacterBase::ANWCharacterBase()
{
	// Pawn
	bUseControllerRotationRoll = false; // X
	bUseControllerRotationPitch = false; // Y
	bUseControllerRotationYaw = false; // Z

	// Capsule
	GetCapsuleComponent()->InitCapsuleSize(50.f, 100.f);
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("NWCapsule"));

	// Movement
	GetCharacterMovement()->bOrientRotationToMovement = true;


	// Mesh
	GetMesh()->SetRelativeLocationAndRotation(FVector(0.f, 0.f, -100.f), FRotator(0.f, -90.f, 0.f));
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	GetMesh()->SetCollisionProfileName(TEXT("NoCollision"));

	// Skeletal Mesh Object 설정
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> CharacterMeshRef(TEXT("/Game/ParagonLtBelica/Characters/Heroes/Belica/Skins/PolarStrike/Meshes/Belica_PolarStrike.Belica_PolarStrike"));
	if (CharacterMeshRef.Object)
	{
		GetMesh()->SetSkeletalMesh(CharacterMeshRef.Object);
	}

	// AnimInstance Class 설정


	// ...
}


