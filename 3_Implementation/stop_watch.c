int stop_watch()
{
    int hour, minute, second;
    int D=1000;
    hour=minute=second=0;

    while(1)
    {


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
