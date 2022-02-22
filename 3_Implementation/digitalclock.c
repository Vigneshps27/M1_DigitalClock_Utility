#include<stdio.h>
#include "digitalclock.h"
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
