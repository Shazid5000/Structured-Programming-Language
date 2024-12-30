main()

{
    int months,days;

    printf("Enter the amount of days\n");
    scanf("%d",&days);

    months= days/30;
    days = days%30;

    printf("\n\nMonths:%d\t Days:%d\n\n", months,days);
}
