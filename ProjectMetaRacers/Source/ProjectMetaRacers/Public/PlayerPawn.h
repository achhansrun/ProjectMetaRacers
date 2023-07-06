// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerPawn.generated.h"

UCLASS()
class PROJECTMETARACERS_API APlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerPawn();

private:

     UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
     class UStaticMeshComponent* MeshComponent;

     UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
     class USpringArmComponent* SpringArm;

     UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
     class UCameraComponent* FollowCamera;

     UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
     class UStaticMeshComponent* StaticMesh;

     UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
     class UBoxComponent* BoxComponent;

     UPROPERTY(EditAnywhere, Category = "Movement")
     float Speed = 200;

     UPROPERTY(EditAnywhere, Category = "Movement")
     float TurnRate = 45.f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
     void Move(float Value);
     void Turn(float Value);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

     APlayerController* PlayerControllerRef;

};
