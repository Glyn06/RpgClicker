// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacter.h"

// Sets default values
ABaseCharacter::ABaseCharacter()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ABaseCharacter::PerformAttack(ABaseCharacter* target)
{
	//Roll
	int hitChance = 100 - target->GetAvoidChance();
	int roll = FMath::RandRange(1, 100);

	if (roll < hitChance)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("HIT!"));

		//Calculate Damage
		int dmg = attack - target->GetDefense();

		//RollCrit
		int critRoll = FMath::RandRange(1, 100);
		if (critRoll < critChance)
			dmg *= 2;

		FMath::Clamp(dmg, 1, INT_MAX);
		target->TakeDamage(dmg);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Miss..."));
	}
}

void ABaseCharacter::TakeDamage(int damage)
{
	if (damage <= 0)
		damage = 1;

	health -= damage;
	CheckDead();
}

void ABaseCharacter::CheckDead()
{
	if (health <= 0)
		OnDeath();
}

float ABaseCharacter::CalculatePercentHealth()
{
	return (float)health / (float)maxHealth;
}

int ABaseCharacter::GetAttack()
{
	return attack;
}
int ABaseCharacter::GetDefense()
{
	return defense;
}
int ABaseCharacter::GetAvoidChance()
{
	return avoidChance;
}
int ABaseCharacter::GetCritChance()
{
	return critChance;
}
int ABaseCharacter::GetHealth()
{
	return health;
}
int ABaseCharacter::GetMaxHealth()
{
	return maxHealth;
}

void ABaseCharacter::SetAttack(int _attack)
{
	attack = _attack;
}
void ABaseCharacter::SetDefense(int _defense)
{
	defense = _defense;
}
void ABaseCharacter::SetAvoidChance(int _avoidChance)
{
	avoidChance = _avoidChance;
}
void ABaseCharacter::SetCritChance(int _critChance)
{
	critChance = _critChance;
}
void ABaseCharacter::SetHealth(int _health)
{
	health = _health;
}
void ABaseCharacter::SetMaxHealth(int _health)
{
	maxHealth = _health;
}


// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();

	health = maxHealth;
}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

