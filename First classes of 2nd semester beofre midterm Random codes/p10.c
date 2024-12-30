
main()
{

    int Father_and_daughters_combined_age;
    int Fathers_age;
    int Daughters_age;

    printf("enter Father and daughters combined age\n");
    scanf("%d", & Father_and_daughters_combined_age);


    Daughters_age=Father_and_daughters_combined_age/5;
    printf("Daughters age %d\n", Daughters_age);


    Fathers_age=Daughters_age*4;
    printf("Fathers age %d\n", Fathers_age);

}
