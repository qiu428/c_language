#include <stdio.h>

void Cube(double x);

int main(void)
{
    double x = 0;
    puts("请输入一个double类型的数:");
    scanf("%lf", &x);
    Cube(x);

    return 0;
}

void Cube(double x)
{
    double c=x*x*x;
    printf("%lf的立方为%lf",x,c);
}