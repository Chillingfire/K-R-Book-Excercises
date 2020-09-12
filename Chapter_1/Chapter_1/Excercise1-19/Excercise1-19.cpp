// Excercise1-19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define MAX 1000

void Reverse(char s[]);

int main()
{
    char s[MAX];

    Reverse(s);
}

void Reverse(char s[]) 
{
    char c;
    int character = 0;
    int otherCharacter = 0;
    char finalArray[MAX];

    while ((c = getchar()) != EOF) {
        s[character] = c;
        character++;

        if (c == '\n') {

            character -= 1;

            for (int i = character; i > -1; i--) {
                finalArray[otherCharacter] = s[i];
                otherCharacter++;
            }

            finalArray[otherCharacter] = '\0';

            printf("%s", finalArray);

            for (int i = 0; i < MAX; i++) {
                s[i] = '\0';
            }
            printf("\n\n");

            character = 0;
            otherCharacter = 0;
        }
    }
}