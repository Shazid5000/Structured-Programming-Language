/* C Program to Convert Days to Years Weeks and Days */

#include <stdio.h>

int main()
{
  	int Days, years, weeks, days;


 	printf("\n Please Enter the Number of days  :  ");
  	scanf("%d", &Days);


  	years = Days / 365;
  	weeks = (Days % 365) / 7;
  	days = (Days % 365) % 7;



    printf("\n Years  = %d", years);
    printf("\n Weeks  = %d", weeks);
    printf("\n Days   = %d", days);

   	return 0;
}
