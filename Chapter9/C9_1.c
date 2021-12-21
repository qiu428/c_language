#include <stdio.h>

double min(double x,double y);
int main(void)
{
    double a1=2.32;
    double a2=2.23;
    printf("%f",min(a1,a2));
    return 0;
}

double min(double x,double y)
{
    return x>y?y:x;
}