//finding current time by using structure

#include<stdio.h>
#include<time.h>

void main()
{
    time_t t;
    time(&t);
    printf("current time is : %s\n",ctime(&t));
}

/*
time()

    Header file : time.h
    Function prototype : time_t time(time_t *seconds).
    This function is used to get current calendar system time from system as structure.
    Returns the time since the Epoch (00:00:00 UTC, January 1, 1970), measured in seconds.

ctime()

    Header file : time.h
    Function prototype : char *ctime(const time_t *timer).
    This function is used to return string that contains date and time informations.
    Returns a pointer to a string of the form day month year hours:minutes:seconds year.

*/
