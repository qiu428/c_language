#include <stdio.h>
void PrimeNum(int num);
int main()
{
    int num = 0;

    puts("������һ������1����Ȼ��:");
    scanf("%d", &num);
    if (num > 1)
    {
        puts("С�ڻ���ڸ���������:");
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
