// Excercise2-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

void htoi();
int main()
{
    htoi();
}

void htoi() {
    char hexaArray[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
    char decimaray[16] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
    char userArrayChar[5];
    int userArrayInt[5];
    int sizeOfHexa = 0;
    int count = 0;
    int sum = 0;
    char c;

    while ((c = getchar()) != EOF) {
        userArrayChar[sizeOfHexa] = c;
        sizeOfHexa++;

        if (c == '\n') {
            sizeOfHexa--;

            for (int i = 0; i < sizeOfHexa; i++) {
                for (int x = 0; x < 16; x++) {
                    if (userArrayChar[i] == hexaArray[x]) {
                        userArrayInt[i] = decimaray[x];
                        break;
                    }
                }
            }

            //Used for sixteen power function
            int sixteenbase = sizeOfHexa - 1;

            while (count < sizeOfHexa) {
                if (sixteenbase > 0) sum += (pow(16, sixteenbase)) * userArrayInt[count];
                else sum += userArrayInt[count];
                count++;
                sixteenbase--;
            }

            printf("%d\n", sum);
            sizeOfHexa = count = sum = 0;
        }
    }
}
