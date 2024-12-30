/*Write a program for code p11*/

#include <stdio.h>

int main( void )


{

    int Price_of_one_goat;

    int Price_of_one_cow;

    printf("Price of one goat\n");
    scanf("%d", & Price_of_one_goat);


    Price_of_one_cow=(98050-Price_of_one_goat*3)/3;
    printf("Price of one goat %d\n", Price_of_one_cow);


}
