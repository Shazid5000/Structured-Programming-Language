#include <stdio.h>
int main()
{
      int n1,n2,n3,n4,sum,t1;

      printf("Enter 3-Digit Number: ");
      scanf("%d",&n1);

      n3=n1/100;
      t1=n1%100;
      n2=t1%10;
      n4=t1/10;

      sum=n2+n4+n3;
      printf("\nSum of All 3-Digits : %d",sum);

      return 0;
}
