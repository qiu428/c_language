#include <stdio.h>
void PrimeNum(int num);
int main()
{
    int num = 0;

    puts("请输入一个大于1的自然数:");
    scanf("%d", &num);
    if (num > 1)
    {
        puts("小于或等于该数的素数:");
        PrimeNum(num);
    }

    return 0;
}
void PrimeNum(int num)
{
    for (int i = 2; i <= num; i++)
        for (int j = 2; j <= i; j++)
            if (i % j == 0)
                if (i == j)
                    printf("%d\n", i);
                else
                    break;
}
