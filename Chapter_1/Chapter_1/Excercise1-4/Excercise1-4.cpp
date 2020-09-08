// Excercise1-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    printf("Celsius  Fahr\n");

    while (celsius <= upper) {
        fahr = ((9.0 / 5.0) * celsius) + 32;
        printf("%3.0f \t%6.1f\n", celsius, fahr);
        //cout << fahr << " " << fixed << setprecision(2) << celsius << endl;
        celsius = celsius + step;
    }
}


