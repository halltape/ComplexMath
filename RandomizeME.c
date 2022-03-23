#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    // This program generates the random numbers between 0 and 2 //
    srand(time(NULL));
        printf("%d", rand()%3);

    return 0;
}