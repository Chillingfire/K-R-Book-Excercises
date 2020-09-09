// Excercise1-20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            printf("  ");
        }
        else {
            putchar(c);
        }
    }
}

