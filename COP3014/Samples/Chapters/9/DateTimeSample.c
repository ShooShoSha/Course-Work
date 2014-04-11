/*
 * DateTimeSample.c
 *
 * Cop 3014
 * Jim Lewis
 */

#include <stdio.h>
#include <time.h>

int main()
{
    char *cp;
    struct tm *sp;
    long t;
    time_t *tp, tv; 
    tp = &tv;
    
    t = time(tp); // returns numeric version of time - seconds since beginning of 1970
    sp = localtime(tp); // returns localtime in a struct
    cp = asctime(sp); // return string version of time
    printf("Date and time in seconds = %ld\n", t);
    printf("Local Date and Time now:\n    %s\n", asctime(sp));

    return 0;
}

/* SAMPLE RUN
 
Date and time in seconds = 1288886585
Date and Time now:
    Thu Nov  4 11:03:05 2010
 
*/
