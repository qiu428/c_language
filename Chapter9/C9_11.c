#include <stdio.h>
int Fibonacci(int n);
int main(void)
{
    for(int i=0;i<=45;i++)
    printf("%d\n",Fibonacci(i));
    return 0;
}
int Fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        int first = 0;
        int second = 1;
        int last;
        for (int i = 2; i <= n; i++)
        {
            last = first + second;
            first = second;
            second = last;
        }
        return last;
    }
}