
#include<stdio.h>
int main()
{
    int profit;
    int num_employee;
    int money_dist_each;

    printf("Enter the gained profit\n");
    scanf("%d",&profit);

    printf("Enter the money distributed to each employee\n");
    scanf("%d",&money_dist_each);
    num_employee=profit/money_dist_each;
    printf("There are %d employees",num_employee);
    return 0;
}
