// Excercise1-23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define MAX 1000

int main()
{
    char c;
    int chars = 0;
    char lineArray[MAX];
    
    while ((c = getchar()) != EOF) {
        lineArray[chars] = c;
        chars++;

        if (c == '\n') {
            lineArray[chars] = '\0';

            if (lineArray[0] == '*') {
                for (int i = 0; i < 1000; i++) {
                    lineArray[i] = '\0';
                }
                printf("*Comment deleted*\n");
            }
            else {
                printf("%s", lineArray);      
                for (int i = 0; i < 1000; i++) {
                    lineArray[i] = '\0';
                }
            }

            chars = 0;
        }
    }
}

