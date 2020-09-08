// Excercise1-8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int c, nl, t, b;

    nl = 0;
    t = 0;
    b = 0;

    while ((c = getchar() != EOF)) {
        if (c == '\n') {
            ++nl;
        }
        else {
            if (c == '\t') {
                ++t;
            }
            else {
                if (c == ' ') {
                    ++b;
                }
            }
        }
        
    }
    printf("Tabs: %d\nblanks: %d\nnewlines: %d\n", t, b, nl);
}
