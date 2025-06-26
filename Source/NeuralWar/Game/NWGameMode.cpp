// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/NWGameMode.h"

ANWGameMode::ANWGameMode()
{
	// Default Pawn Class 지정
	static ConstructorHelpers::FClassFinder<APawn> DefaultPawnClassRef(TEXT("/Script/Engine.Blueprint'/Game/NeuralWar/Blueprint/BP_CharacterPlayer.BP_CharacterPlayer_C'"));
	if (DefaultPawnClassRef.Class)
	{
		DefaultPawnClass = DefaultPawnClassRef.Class;
	}

	// Player Controller Class 지정
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerClassRef(TEXT("/Script/NeuralWar.NWPlayerController"));
	if (PlayerControllerClassRef.Class)
	{
		PlayerControllerClass = PlayerControllerClassRef.Class;
	}
}
