#include <stdio.h>
void main()
{
    int num1, num2;

    printf("Enter the two numbers\n");
    scanf("%d %d", &num1, &num2);

    if (num1 == num2)
        printf("They are equal\n");
    else
        printf("They are not equal\n");
}
