#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    //This program prints the random numbers between S and E//
    srand(time(NULL));
    int S, E, random;
    scanf("%d%d", &S,&E);

    random = S + rand()%(E-S+1);

    printf("%d", random);

    return 0;
}