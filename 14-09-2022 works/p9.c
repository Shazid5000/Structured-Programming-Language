
/*Write a program for code p9*/

#include <stdio.h>

int main( void )

{

    int M_and_R_together_have;

    int M_has;

    int R_has;

    printf("M and R together have\n");
    scanf("%d", & M_and_R_together_have);


    R_has=(M_and_R_together_have+480)/2;
    printf("R has %d\n", R_has);

    M_has=(R_has-480);
    printf("M has %d\n", M_has);


}
