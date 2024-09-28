// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ObjectDataRow.h"
#include "ObjectDataRow_Extraction.generated.h"

USTRUCT(BlueprintType)
struct FObjectDataRow_Extraction : public FObjectDataRow
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float sec;
};
