
#include<stdio.h>
int main()
{
    int num_pencil;
    int cost_pencil;
    int bill;

    printf("Enter the number of pencil\n");
    scanf("%d",&num_pencil);

    printf("Cost per pencil\n");
    scanf("%d",&cost_pencil);

    bill=num_pencil*cost_pencil;
    printf("The bill is %d",bill);
    return 0;
}
