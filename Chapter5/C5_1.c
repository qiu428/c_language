#include <stdio.h>
#define HOUR 60
int main()
{
    int time = 0;
    printf("������һ���÷��ӱ�ʾ��ʱ��:\n");
    while (scanf("%d", &time) && time > 0)
    {
        printf("%d���ӣ�Ϊ%dСʱ%d����\n", time, time / HOUR, time % HOUR);
        printf("������һ���÷��ӱ�ʾ��ʱ��:(����С�ڵ���0�������˳�)\n");
    }
    return 0;
}
