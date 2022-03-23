#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    //This program prints the random numbers between 1 and 666//
    srand(time(NULL));
    int N, random;
    scanf("%d", &N);

    random = rand()%(N+1);

    printf("%d", random);

    return 0;
}