#include <stdio.h>

int main(void)
{
    int even_num = 0,  odd_num = 0;
    float even_average = 0.0, odd_average = 0.0;
    int temp = 0;
    while (1)
    {
        puts("������һ������������0�Խ�����:");
        if (scanf("%d", &temp) != 1)
        {
            while (getchar() != '\n')
                ;
            puts("�������!");
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
    printf("��������%d��ż����ƽ��ֵΪ%f��\n������%d��������ƽ��ֵΪ%f\n",odd_num,odd_average,even_num,even_average);

    return 0;
}
