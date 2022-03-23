#include <stdio.h>
int main(void)
{
    //This program calculates the mathematical expression in the brackets//
    double a,b,c,d,e,f,h;
    double area;
    scanf("%lf%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f,&h);

    area =  a/(b*c/(d*e/(f*h)));
    printf("%.2lf", area);


    return 0;
}