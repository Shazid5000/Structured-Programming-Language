#include<stdio.h>
int main()
{
    int num1, num2;

    printf("Enter 2 numbers \n\n");
    scanf("%d%d", &num1, &num2);

    int max;

    max = (num1>num2) ? num1 : num2;

        printf("Maximum of %d and %d : %d", num1, num2, max);


}
