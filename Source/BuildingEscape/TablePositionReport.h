// Copyright from legyndir (2016)

#pragma once

#include "Components/ActorComponent.h"
#include "TablePositionReport.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API UTablePositionReport : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTablePositionReport();

	// Called when the game starts
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

		
	
};
