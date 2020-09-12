// Excercise1-18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define MAX 1000

int main()
{
    char c;
    int character = 0;
    char lineArray[1000];
#if 1
    while ((c = getchar()) != EOF) {
        lineArray[character] = c;
        character++;

        if (c == '\n') {

            character -= 1;

            while (lineArray[character] == ' ' || lineArray[character] == '\t' || lineArray[character] == '\n') {
                lineArray[character] = '\0';
                character--;
            }

            for (int i = 0; i < character + 1; i++) {
                putchar(lineArray[i]);
            }

            for (int i = 0; i < 10; i++) {
                lineArray[i] = '\0';
            }
            putchar('\n');

            character = 0;
        }
    }
}
#else 0
// Alexes approach will be here
// First obtain all data and save it into lineArray
// Second analize it

    while ((c = getchar()) != EOF) {
        lineArray[character] = c;
        character++;

        if (c == '\n') {
            lineArray[character] = '\0';
            break;
        }
    }

    printf("%s\n", lineArray);

    character -= 1;

    while (lineArray[character] == ' ' || lineArray[character] == '\t' || lineArray[character] == '\n') {
        lineArray[character] = '\0';
        character--;
    }

    for (int i = 0; i < character + 1; i++) {
        putchar(lineArray[i]);
    }

    for (int i = 0; i < 10; i++) {
        lineArray[i] = '\0';
    }
    putchar('\n');

    character = 0;
    
}
#endif

