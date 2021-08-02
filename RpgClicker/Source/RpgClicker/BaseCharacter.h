// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseCharacter.generated.h"



UCLASS()
class RPGCLICKER_API ABaseCharacter : public AActor
{
	GENERATED_BODY()

private:
	int health;

public:
	// Sets default values for this actor's properties
	ABaseCharacter();

	UFUNCTION(BlueprintCallable)
		void PerformAttack(ABaseCharacter* target);
	UFUNCTION(BlueprintCallable)
		void TakeDamage(int damage);
	UFUNCTION(BlueprintCallable)
		void CheckDead();
	UFUNCTION(BlueprintCallable)
		float CalculatePercentHealth();

	UFUNCTION(BlueprintImplementableEvent)
		void OnDeath();

	//Getters
	UFUNCTION(BlueprintCallable)
		int GetAttack();
	UFUNCTION(BlueprintCallable)
		int GetDefense();
	UFUNCTION(BlueprintCallable)
		int GetAvoidChance();
	UFUNCTION(BlueprintCallable)
		int GetCritChance();
	UFUNCTION(BlueprintCallable)
		int GetHealth();
	UFUNCTION(BlueprintCallable)
		int GetMaxHealth();

	//Setters
	UFUNCTION(BlueprintCallable)
		void SetAttack(int _attack);
	UFUNCTION(BlueprintCallable)
		void SetDefense(int _defense);
	UFUNCTION(BlueprintCallable)
		void SetAvoidChance(int _avoidChance);
	UFUNCTION(BlueprintCallable)
		void SetCritChance(int _critChance);
	UFUNCTION(BlueprintCallable)
		void SetHealth(int _health);
	UFUNCTION(BlueprintCallable)
		void SetMaxHealth(int _health);

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

	UPROPERTY(EditAnywhere)
		int maxHealth;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
