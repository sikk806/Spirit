// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PCharacterPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class GPROJECT_API APCharacterPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<class UUserWidget> HUDOverlayAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	UUserWidget* HUDOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<UUserWidget> WEnemyHealthBar;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Widgets")
	UUserWidget* EnemyHealthBar;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<UUserWidget> WInteractionToTransferVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	UUserWidget* InteractionToTransferVolume;

	bool bEnemyHealthBarVisible;
	bool bInteractionToTransferVolumeVisible;

	void DisplayEnemyHealthBar();
	void RemoveEnemyHealthBar();

	void DisplayInteractionToTransferVolume();
	void RemoveInteractionToTransferVolume();

	FVector EnemyLocation;
	FVector TransferVolumeLocation;

protected:

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;
};
