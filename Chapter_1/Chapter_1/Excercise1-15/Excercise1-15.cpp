// Excercise1-15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int conversion(int fahr);

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("Fahr  Celsius\n");

    while (fahr <= upper) {
        celsius = conversion(fahr);
        printf("%3.0f %6.1f\n", fahr, celsius);
        //cout << fahr << " " << fixed << setprecision(2) << celsius << endl;
        fahr = fahr + step;
    }
}

int conversion(int fahr)
{
    return (5.0 / 9.0) * (fahr - 32.0);
}
