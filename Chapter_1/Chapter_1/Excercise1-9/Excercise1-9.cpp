// Excercise1-9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int c;
    bool isSpace = false;

    while ((c = getchar()) != EOF) {
        if (c != ' ' && isSpace == true) {
            isSpace = false;
        }
        
        if (c == ' ' && isSpace == false) {
            isSpace = true;
            putchar(c);
        }
        else {
            if (c != ' ' && isSpace == false) {
                putchar(c);
            }
        }
    }
}