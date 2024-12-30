#include<stdio.h>

int main(void)

{

    int radius;
    float area_of_circle;

    printf("Enter the radius");
    scanf("%d",&radius);

    area_of_circle = 2*3.1416*(radius*radius);
    printf("Area is %f",area_of_circle);

    return 0;


}
