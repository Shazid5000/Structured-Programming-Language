#include <stdio.h>

int main()
{
    int num1,num2;

    printf("Enter two digits\n");
    scanf("%d%d",&num1,&num2);

    if (num1<50 || num1>num2)
        printf("This is true");
    else
        printf("This is false");

    return 0;
}
