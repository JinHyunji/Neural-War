// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/NWCharacterPlayer.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

ANWCharacterPlayer::ANWCharacterPlayer()
{
	// Camera
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.f;
	CameraBoom->bUsePawnControlRotation = true;

	// 위치와 회전 조정
	CameraBoom->SetRelativeLocationAndRotation(FVector(0.f, 0.f, 80.f), FRotator(-15.f, 0.f, 0.f));

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // 소켓 이름을 지정해주면 스프링 암 끝에 자동 부착됨
	FollowCamera->bUsePawnControlRotation = false;

	// Input


}
