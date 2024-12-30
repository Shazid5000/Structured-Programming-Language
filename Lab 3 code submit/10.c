
#include<stdio.h>
int main()
{
    int num_products;
    int num_prod_to_fill;
    int num_box;

    printf("Enter number of products\n");
    scanf("%d",&num_products);

    printf("Number of products required to fill the box\n");
    scanf("%d",&num_prod_to_fill);

    num_box=num_products/num_prod_to_fill;
    printf("The number of boxes required %d",num_box);
    return 0;
}
