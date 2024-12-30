
#include<stdio.h>
int main()
{
    int num_products;
    int num_box;

    printf("Enter number of number of products\n");
    scanf("%d",&num_products);

    num_box=num_products/250;
    printf("number of boxes %d",num_box);
    return 0;
}
