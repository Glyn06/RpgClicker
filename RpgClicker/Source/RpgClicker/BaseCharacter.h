// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseCharacter.generated.h"

UCLASS()
class RPGCLICKER_API ABaseCharacter : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Stats
	UPROPERTY(EditAnywhere)
	int attack;

	UPROPERTY(EditAnywhere)
	int defense;

	UPROPERTY(EditAnywhere)
	int avoidChance;

	UPROPERTY(EditAnywhere)
	int critChance;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
