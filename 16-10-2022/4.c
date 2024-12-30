#include<stdio.h>
void main()
{
    int a,b,small;

    printf("Enter two number\n");

    scanf("%d %d",&a,&b);

    small = a<b?a:b;

    printf("Smallest among 2 number is : %d",small);

}
