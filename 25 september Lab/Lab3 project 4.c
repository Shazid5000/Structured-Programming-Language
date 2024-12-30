#include<stdio.h>
main()

{
    int total_distance;
    int total_fuel;
    int avg_cons;

    printf("Enter total distance");
    scanf("%d",&total_distance);

    printf("Enter total fuel spent in liters");
    scanf("%d",&total_fuel);

    avg_cons=total_distance/total_fuel;
    printf("Average consumption is %d",avg_cons);
    return 0;

}
