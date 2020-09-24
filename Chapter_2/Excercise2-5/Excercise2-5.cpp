// Excercise2-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int any(char s1[], char s2[]);
int main()
{
    char s1[5] = { 'h', 'y', 'l', 'y', 'o' };
    char s2[6] = { 'a', 'x', 'k', 'b', 'e', 'n' };
    printf("%d", any(s1, s2));
}

int any(char s1[], char s2[]) {
    size_t array1size = sizeof(s1);
    size_t array2size = sizeof(s2);

    for (int location = 0; location < array1size; location++) {
        for (int i = 0; i < array2size; i++) {
            if (s1[location] == s2[i]) return location;
        }
    }

    return -1;
}