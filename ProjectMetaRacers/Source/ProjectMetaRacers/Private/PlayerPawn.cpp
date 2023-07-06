// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawn.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APlayerPawn::APlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
     
     BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));

     RootComponent = BoxComponent;

     StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
     StaticMesh->SetupAttachment(RootComponent);

     SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
     SpringArm->SetupAttachment(RootComponent);

     FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("ThirdPersonCamera"));
     FollowCamera->SetupAttachment(SpringArm);

}

// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();

     PlayerControllerRef = Cast<APlayerController>(GetController());
}

void APlayerPawn::Move(float Value)
{
     //sets up movement using
     FVector DeltaLocation = FVector::ZeroVector;
     
     DeltaLocation.X = Value * UGameplayStatics::GetWorldDeltaSeconds(this) * Speed;

     AddActorLocalOffset(DeltaLocation, true);
}

void APlayerPawn::Turn(float Value)
{
     //UE_LOG(LogTemp, Display, TEXT("MoveRight axis value: %f"), Value);

     const FRotator Rotation = GetController()->GetControlRotation();
     const FRotator YawRotation(0, Rotation.Yaw, 0);

     const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxes(EAxis::X);
}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
     check(PlayerInputComponent);
     PlayerInputComponent->BindAxis("MoveForward", this, &APlayerPawn::Move);
     PlayerInputComponent->BindAxis("MoveRight", this, &APlayerPawn::Turn);

}

