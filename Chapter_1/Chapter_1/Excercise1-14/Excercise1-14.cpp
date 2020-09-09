// Excercise1-14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define ALPHABET_LENGTH 26

int main()
{
    char alphabet[ALPHABET_LENGTH] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
        'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
    int charOccurences[ALPHABET_LENGTH];

    for (int i = 0; i < ALPHABET_LENGTH; i++) {
        charOccurences[i] = 0;
    }

    int c;

    while ((c = getchar()) != EOF) {
        for (int i = 0; i < ALPHABET_LENGTH; i++) {
            if (c == alphabet[i]) {
                charOccurences[i] += 1;
            }
        }

        if (c == '\n') {
            for (int i = 0; i < ALPHABET_LENGTH; i++) {
                printf("%c:", alphabet[i]);
                for (int x = 0; x < charOccurences[i]; x++) {
                    printf("0");
                }
                printf("\n");
            }
        }
    }
}

