// Excercise2-10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void lower(char input[]);
int main()
{
    char input[5] = { 'H', 'e', 'l', 'L', 'o'};
    lower(input);
}

void lower(char input[]) {
    char placeHolder;
    int arrayLength = sizeof(input);

    for (int i = 0; i < arrayLength - 3; i++) {
        putchar((input[i] > 'A' && input[i] < 'Z') ? placeHolder = input[i] + 32 : input[i]);
    }
    input[arrayLength + 1] = '\0';
}