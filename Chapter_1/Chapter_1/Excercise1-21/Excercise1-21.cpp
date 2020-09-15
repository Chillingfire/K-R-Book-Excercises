// Excercise1-21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define MAX 1000

int main()
{
    char c;
    int character = 0;
    int blanks = 0;
    char lineArray[MAX];

    while ((c = getchar()) != EOF) {
        lineArray[character] = c;
        character++;

        if (c == '\n') {
            for (int i = character; i >= 0; i--) {
                if (lineArray[i] == ' ') {
                    blanks++;
                }
            }

            while (blanks > 0) {
                if (blanks > 2) {
                    printf("\\t");
                    blanks -= 3;
                }
                else {
                    printf("_");
                    blanks--;
                }
            }

            for (int i = 0; i < 1000; i++) {
                lineArray[i] = '\0';
            }

            putchar('\n');
            character = 0;
        } 
    }      
}

