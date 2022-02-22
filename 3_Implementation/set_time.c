#include "digitalclock.h"
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
