// Excercise2-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    const int lim = 10;
    char c;
    char s[lim];

    while (c = getchar()) 
    {
        for (int i = 0; i < lim - 1; ++i) {
            if (c != EOF) {
                if ((c = getchar()) != '\n') {
                    s[i] = c;
                }
            }
        }
    }
}


