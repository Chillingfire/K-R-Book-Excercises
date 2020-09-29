// Excercise2-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void squeeze(char s1[], char s2[]);
int main()
{
    char s1[5] = { 'h', 'e', 'l', 'l', 'o' };
    char s2[6] = { 'a', 'b', 'p', 'e', 'h', 'b' };

    squeeze(s1, s2);
}

void squeeze(char s1[], char s2[]) 
{
    int sizeS1 = sizeof(s1) / sizeof(s1[0]);
    int sizeS2 = sizeof(s2) / sizeof(s2[0]);
    bool sameCharacter = false;

    for (int i = 0; i < sizeS1; i++) {
        for (int x = 0; x < sizeS2; x++) {
            if (s1[i] == s2[x]) sameCharacter = true;           
        }
        if (sameCharacter == false) putchar(s1[i]);
        sameCharacter = false;
    }
}
