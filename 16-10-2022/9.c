
#include<stdio.h>

int main()
{
 int num,perimeter, area;
 printf("Enter the radius of the circle: ");
 scanf("%d", &num);


 perimeter = 2 * 3.1416 * num;
 area = 3.1416 * (num*num);

 printf("In the given circle, perimeter is %d meter and area is %d square meter", perimeter,area);
 return 0;
}
