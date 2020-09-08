// Excercise1-12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define IN  1
#define OUT 0

int main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '/n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            putchar('\n');
        }
            
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
        putchar(c);
    }
}

