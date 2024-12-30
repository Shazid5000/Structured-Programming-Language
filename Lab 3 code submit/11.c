
#include<stdio.h>
int main()
{
    int am_eggs;
    int bill;

    printf("Enter amount of eggs\n");
    scanf("%d",&am_eggs);

    bill=am_eggs*9;
    printf("The bill is %d",bill);

    return 0;
}
