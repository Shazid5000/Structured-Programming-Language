//There are X grams of rice at home. If we eat Y (Y<X) grams of rice every day, when the rice will be finish?

#include<stdio.h>
int main()
{
    int total_numofrice;
    int daily_cons;
    int days_to_finish;

    printf("Enter the amount of rice in the house\n");
    scanf("%d",&total_numofrice);

    printf("Enter the number of rice daily consumed\n");
    scanf("%d",&daily_cons);

    days_to_finish=total_numofrice/daily_cons;

    printf("Rice will be consumed in %d days",days_to_finish);
    return 0;
}
