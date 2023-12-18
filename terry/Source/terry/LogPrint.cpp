// Fill out your copyright notice in the Description page of Project Settings.


#include "LogPrint.h"

// Sets default values for this component's properties
ULogPrint::ULogPrint()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void ULogPrint::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void ULogPrint::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void ULogPrint::print()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("Test from C++"));

}
