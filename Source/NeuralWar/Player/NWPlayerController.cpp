// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/NWPlayerController.h"

void ANWPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// 게임 실행 시 마우스가 뷰포트 안으로 들어가도록 설정
	FInputModeGameOnly GameOnlyInputMode;
	SetInputMode(GameOnlyInputMode);
}