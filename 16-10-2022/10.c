#include<stdio.h>

 int main()
{
  int number1;
  float number2;

  printf("Enter the four digit number \n");
  scanf("%d", &number1);

  number2=(((number1 + 8)/3)%5)*5;
  printf("%f\n", number2);

  return 0;
}
