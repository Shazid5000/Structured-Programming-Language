#include<stdio.h>
int main( void )

{
    int length;
    int width;
    int area;

    printf("Enter length");
    scanf( "%d",&length );

    printf("Enter width\n");
    scanf( "%d",&width );

    area = length*width;
    printf("area is %d\n", area );

    return 0;

}

