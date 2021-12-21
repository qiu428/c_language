#include <stdio.h>

int main(void)
{
    int even_num = 0,  odd_num = 0;
    float even_average = 0.0, odd_average = 0.0;
    int temp = 0;
    while (1)
    {
        puts("请输入一个整数（输入0以结束）:");
        if (scanf("%d", &temp) != 1)
        {
            while (getchar() != '\n')
                ;
            puts("输入错误!");
            continue;
        }
        if (temp == 0)
            break;
        else
        {
            if (temp % 2 == 0)
            {
                odd_num++;
                odd_average += temp;
            }
            else
            {
                even_num++;
                even_average += temp;
            }
        }
    }
    even_average/=even_num;
    odd_average/=odd_num;
    printf("共输入了%d个偶数，平均值为%f。\n输入了%d个奇数，平均值为%f\n",odd_num,odd_average,even_num,even_average);

    return 0;
}
