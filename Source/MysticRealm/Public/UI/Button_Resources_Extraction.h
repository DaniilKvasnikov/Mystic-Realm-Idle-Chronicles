// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "Components/VerticalBox.h"
#include "Styling/SlateBrush.h"
#include "Button_Resource_Extraction.h"

#include "Button_Resources_Extraction.generated.h"

/**
 * 
 */
UCLASS()
class MYSTICREALM_API UButton_Resources_Extraction : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	TSubclassOf<UButton_Resource_Extraction> Button_Resource_Extraction;
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	class UDataTable* Data_Resources;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	TObjectPtr<UVerticalBox> Resources_Box;

	UPROPERTY(BlueprintReadWrite)
	TArray<UButton_Resource_Extraction*> Button_Resources_Extraction;
};
