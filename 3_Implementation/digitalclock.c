#include<stdio.h>
#include "digitalclock.h"
int current_time()
{
    time_t s;
    struct tm* current_time;
        // time in seconds
    s = time(NULL);

    // to get current time
    current_time = localtime(&s);


    printf("\n%02d:%02d:%02d",
           current_time->tm_hour,
           current_time->tm_min,
           current_time->tm_sec);

    return 0;
}

int stop_watch()
{
    int hour, minute, second;
    int D=1000;
    hour=minute=second=0;

    while(1)
    {

        //print time in HH : MM : SS format


         //increase second
        second++;

        //update hour, minute and second
        if(second==60){
            minute+=1;
            second=0;
        }
        if(minute==60){
            hour+=1;
            minute=0;
        }
        if(hour==24){
            hour=0;
            minute=0;
            second=0;
        }
    printf("\n Stop Watch\n");
    printf("\n%02d:%02d:%02d",hour,minute,second);
    sleep(D);
    system("clear");
    }

    return 0;
}

int set_time()
{
    int hour,minute,second;
    int D = 1000;
    printf("Set time in 24 Hours format (HH:MM:SS):\n");
    scanf("%d:%d:%d", &hour, &minute, &second);
    if (hour > 23)
        {
            printf("ERROR!\n");
            exit(0);
        }
    if (minute > 60)
        {
             printf("ERROR!\n");
             exit(0);
        }
    if (second > 60)
        { printf("ERROR!\n");
        exit(0);
        }
    while (1)
        {
            second += 1;
            if (second > 59)
                { minute += 1;
                  second = 0;
                }
            if (minute > 59)
                { hour += 1;
                  minute = 0;
                }
            if (hour > 23)
                { hour = 0;
                  minute = 0;
                  second = 0;
                }
    printf("\n Clock\n");
    printf("\n%02d:%02d:%02d", hour, minute, second);
    sleep(D);
    system("clear");

}
return 0;

}
int main()
{
int input;
printf("\n\t\t\t---Welcome To Digital Clock---\n\n\n");

    printf( "\t\t1. Current Time\n\n" );
    printf( "\t\t2. Stop Watch\n\n" );
    printf( "\t\t3. Set Time\n\n" );
    printf( "\t\t4. Exit\n\n" );
    printf( "\t\tSelection: " );
    scanf( "%d", &input );
    switch ( input ) {
        case 1:
            current_time();
            break;
        case 2:
            stop_watch();
            break;
        case 3:
            set_time();
            break;
        case 4:
            printf( "Thanks for using the clock\n" );
            break;
        default:
            printf( "Bad input, quitting!\n" );
            break;
    }
    return 0;
}


