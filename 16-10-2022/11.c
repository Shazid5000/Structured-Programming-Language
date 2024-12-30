#include<stdio.h>

 int main()
{
  int number;

  float i, i2, i3, i4;
  printf("Enter the four digit number \n");
  scanf("%d", &number);

  i = number+=8;
  i2 = number/=3;
  i3 = number%=5;
  i4 = number*=5;
  printf("%f\n", i4);

  return 0;
}
