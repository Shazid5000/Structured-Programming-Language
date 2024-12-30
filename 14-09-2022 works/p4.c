/*Write a program for writing three code in a single code p4*/

#include <stdio.h>

int main( void )


{
    int num1;
    int num2;
    int sum;
    printf("Enter 1st integer");
    scanf("%d",&num1);
    printf("Enter 2nd integer");
    scanf("%d",&num2);
    sum=num1+num2;
    printf("summation result is %d\n",sum);


    int length;
    int breadth;
    int area;
    printf("Enter length");
    scanf("%d",&length);
    printf("Enter breadth");
    scanf("%d",&breadth);
    area=length*breadth;
    printf("area is %d\n",area);

    int side;
    int area_of_the_square;
    printf("Enter the side");
    scanf("%d",&side);
    area_of_the_square=side*side;
    printf("Area of the square is %d\n",area_of_the_square);
    return 0;
}
