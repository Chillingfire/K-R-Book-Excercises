// Excercise1-10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int c, sw;

    while ((c = getchar()) != EOF) {
        sw = 0;
        if (c == '\t') {
            putchar('\\');
            putchar('t');
            sw = 1;
        }
        if (c == '\b') {
            putchar('\\');
            putchar('b');
            sw = 1;
        }
        if (c == '\\') {
            putchar('\\');
            putchar('\\');
            sw = 1;
        }
        if (sw == 0)
            putchar(c);
    }
}

