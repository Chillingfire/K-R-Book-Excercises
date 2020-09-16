// Excercise1-22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define MAX 1000
int main()
{
    char c;
    int i = 0; //used for locations in lineArray
    int n = 14; //used as 'nth'
    int chars = 0;
    char lineArray[MAX];

    while ((c = getchar()) != EOF) {
        lineArray[chars] = c;
        chars++;

        if (c == '\n') {
            lineArray[chars + 1] = '\0';
            putchar('\n');

            while (i < chars) {
                putchar(lineArray[i]);
                i++;

                if (i % n == 0) {
                    while (lineArray[i] != ' ') {
                        putchar(lineArray[i]);
                        i++;  
                        if (i == chars) {
                            break;
                        }
                    }
                    
                    putchar('\n');
                    i++;
                }
            }

            for (int i = 0; i < 1000; i++) {
                lineArray[i] = '\0';
            }

            putchar('\n');
            chars = i = 0;
        }
    }
}


