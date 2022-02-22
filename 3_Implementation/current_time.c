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
