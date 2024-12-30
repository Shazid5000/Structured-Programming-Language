#include <stdio.h>

int main()
{
    float Celsius, Fahrenheit;


    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &Fahrenheit);


    Celsius = (Fahrenheit - 32) * 5 / 9;


    printf("%.2f Fahrenheit = %.2f Celsius", Fahrenheit, Celsius);

    return 0;
}
