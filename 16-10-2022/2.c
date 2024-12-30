void main()
{
    int number;

    printf("Enter a number:\t");
    scanf("%d", &number);

    (number > 0) ? printf("%d is a positive number\n", number):
    (number < 0) ? printf("%d is a negative number\n", number):

    printf("Number is zero\n");
}
