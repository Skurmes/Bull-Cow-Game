// Fill out your copyright notice in the Description page of Project Settings.
#include <string>
#include <iostream>
#include "BullCowCartridge.h"


void UBullCowCartridge::BeginPlay() // When the game starts
{

    Super::BeginPlay();
    PrintLine(TEXT("Welcome to the Bull Cow Game!"));
    PrintLine(TEXT("Guess the 5 letter word.")); //Magic number Remove!
    PrintLine(TEXT("\nPress enter to continue."));

}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{

    ClearScreen();
    FString HiddenWord = TEXT("magic"); //Move outside of this function.
    
    if (Input == HiddenWord)
    {
        PrintLine(TEXT("You Win!")); 
    }
    else
    {
        PrintLine(TEXT("That is not correct. You Lose."));
    }

}