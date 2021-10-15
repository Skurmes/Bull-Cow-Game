// Fill out your copyright notice in the Description page of Project Settings.
#include <string>
#include <iostream>
#include "BullCowCartridge.h"


void UBullCowCartridge::BeginPlay() // When the game starts
{

    Super::BeginPlay();
    PrintLine(TEXT("Welcome to the Bull Cow Game!"));
    PrintLine(TEXT("Please hit tab to access the terminal."));
    PrintLine(TEXT("After you accessed the terminal, \nPlease enter to continue."));

}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    
    ClearScreen();
    FString HiddenWord = TEXT("magic");
}