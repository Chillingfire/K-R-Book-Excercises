// Excercise1-17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define MAX_LENGTH 1000
#define ALPHABET_LENGTH 26

int main()
{
	char userString[MAX_LENGTH];
	char returnedString[MAX_LENGTH];
	char c;
	int chars = 0;

	for (int z = 0; z < MAX_LENGTH; z++) {
		userString[z] = ' ';
	}

	while ((c = getchar()) != EOF) {
		userString[chars] = c;
		chars++;
		
		if (c == '\n') {
			if (chars > 80) {
				for (int i = 0; i < chars; i++) {
					printf("%c", userString[i]);
				}

				for (int i = 0; i < chars; i++) {
					userString[i] = ' ';
				}
			}
			else {
				chars = 0;
			}
			
			chars = 0;
		}	
	}
}
