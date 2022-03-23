#include <stdio.h>
#include <math.h>
    int main()
{
    //This program calculates the area of a triangle with the three sides//
    double a,b,c,p;
    double area;
    scanf("%lf%lf%lf", &a,&b,&c);
    p = (a+b+c)/2;
    area = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.2lf", area);


    return 0;
}
