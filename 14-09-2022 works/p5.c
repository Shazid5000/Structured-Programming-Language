/*Write a program for p5*/

#include <stdio.h>

int main( void )
{

    int People_in_the_village_last_year;
    int People_moved_in;
    int People_moved_out;
    int People_in_the_village_this_year;

    printf("People in the village last year\n");
    scanf("%d", & People_in_the_village_last_year);

    printf("enter Moved in\n");
    scanf("%d", & People_moved_in);

    printf("enter Moved out\n");
    scanf("%d", & People_moved_out);

    People_in_the_village_this_year=People_in_the_village_last_year+People_moved_in-People_moved_out;
    printf("People in the village this year %d\n", People_in_the_village_this_year);


}

