
main()

{
    int years,months,days;

    printf("Enter the amount of days\n");
    scanf("%d",&days);

    years=months/12;

    months= days/30;
    months = months%12;
    days = days%30;

    printf("\n\n years:%d\t months:%d\t Days:%d\n\n",years,months,days);
}
