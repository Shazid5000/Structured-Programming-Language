
#include<stdio.h>
int main()
{
    int am_banana;
    int cost_pb;
    int bill;

    printf("Enter the number of banana\n");
    scanf("%d",&am_banana);

    printf("Enter cost per banana\n");
    scanf("%d",&cost_pb);

    bill=am_banana*cost_pb;
    printf("The bill is %d",bill);
    return 0;
}
