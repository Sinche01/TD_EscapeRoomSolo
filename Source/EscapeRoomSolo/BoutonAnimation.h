// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "BoutonAnimation.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ESCAPEROOMSOLO_API UBoutonAnimation : public UActorComponent
{
	GENERATED_BODY()
private:
		UPROPERTY(EditAnywhere)
		float StartLocation;
	UPROPERTY(EditAnywhere)
		float FinishLocation;
	UPROPERTY(EditAnywhere)
		float speed;
	UPROPERTY(EditAnywhere)
		ATriggerVolume *PressurePlate;//Set TriggerVolume Editable UE4
	UPROPERTY(EditAnywhere)
		AActor *ActorThatOpen = nullptr;//pawn h�rite de actor

	UPROPERTY(EditAnywhere)
		float Delay = 1.0f;

	float LastDoorOpenTime;
	FVector CurentLocation;
	AActor *Owner;
public:	
	// Sets default values for this component's properties
	UBoutonAnimation();

	// Called when the game starts
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

	void Monte();

	//M�thode descendre
	void Descendre();
		
	
};
