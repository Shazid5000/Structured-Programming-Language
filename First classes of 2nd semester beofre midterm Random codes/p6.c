main()
{
    int beef;
    int mutton;
    int kgm;
    int kgb;
    int pay;
    int sum;

    printf("enter the beef cost per kg\n");
    scanf("%d",&beef);


    printf("enter the mutton cost per kg\n");
    scanf("%d",&mutton);


    printf("enter the how many kg beef you need\n");
    scanf("%d",& kgb);

    printf("enter the how many kg mutton you need\n");
    scanf("%d",& kgm);



    printf("enter the how much money did the customer paid\n");
    scanf("%d",& pay);

    sum=pay-(beef*kgb+mutton*kgm);
    printf("sum is %d\n", sum);

}
