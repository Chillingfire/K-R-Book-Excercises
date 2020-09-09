// Excercise1-13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define IN  1
#define OUT 0

int main()
{
    int c, nl, nw, nc, state, characters;

    state = OUT;
    nl = nw = nc = characters = 0;

    while ((c = getchar()) != EOF) {
        ++characters;
        
        ++nc;
        if (c == '/n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            for (int i = 0; i < characters - 1; i++) {
                printf("0");
            }
            characters = 0;
            putchar('\n');
        }

        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
}

