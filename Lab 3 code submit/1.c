//Convert seconds into hours, minutes and seconds.


#include<stdio.h>
int main()


{

int hour,min,sec;

printf("Enter the sec\n");
scanf("%d",&sec);

hour=sec/3600;
sec=sec%3600;

min=sec/60;
sec=sec%60;

printf("hour:%d\t min:%d\t sec:%d", hour, min, sec);

return 0;

}
