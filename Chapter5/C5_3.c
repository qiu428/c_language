#include <stdio.h>

void Cube(double x);

int main(void)
{
    double x = 0;
    puts("������һ��double���͵���:");
    scanf("%lf", &x);
    Cube(x);

    return 0;
}

void Cube(double x)
{
    double c=x*x*x;
    printf("%lf������Ϊ%lf",x,c);
}