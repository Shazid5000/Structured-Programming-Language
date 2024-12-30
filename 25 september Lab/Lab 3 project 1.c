
#include<stdio.h>
int main()

{
    //1
    int inputSecond;

    //2
    int hours,minutes,seconds;
    int remainingSeconds;

    //3
    int secondsInHour=60*60;
    int secondsInminutes=60;

    //4
    printf("Enter seconds : ");
    scanf("%d",&inputSecond);

    //5
    hours = (inputSecond/secondsInHour);

    //6
    remainingSeconds = inputSecond - (hours * secondsInHour);
    minutes = remainingSeconds/secondsInminutes;

    //7
    remainingSeconds=remainingSeconds-(minutes*secondsInminutes);
    seconds=remainingSeconds;

    //8
    printf("%d hour, %d minutes and %d seconds", hours, minutes,seconds);


}

