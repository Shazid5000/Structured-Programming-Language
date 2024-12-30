
#include<stdio.h>
int main()
{
    int am_eggs;
    int bill;
    int cost_pp;

    printf("Enter amount of eggs\n");
    scanf("%d",&am_eggs);

    printf("Cost per egg\n");
    scanf("%d",&cost_pp);

    bill=am_eggs*cost_pp;
    printf("The bill is %d",bill);

    return 0;
}
