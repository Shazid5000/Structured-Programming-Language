
//A company gained profit of 95200 Taka in business and wanted to distribute this money equally to its employees. if 800 Taka was given to each employee, how many employees are there in the company?

#include<stdio.h>
int main()
{
    int profit;
    int num_employee;

    printf("Enter the gained profit\n");
    scanf("%d",&profit);


    num_employee=profit/800;
    printf("There are %d employees",num_employee);
    return 0;
}
