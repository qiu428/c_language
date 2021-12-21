#include <stdio.h>
#define HOUR 60
int main()
{
    int time = 0;
    printf("请输入一个用分钟表示的时间:\n");
    while (scanf("%d", &time) && time > 0)
    {
        printf("%d分钟，为%d小时%d分钟\n", time, time / HOUR, time % HOUR);
        printf("请输入一个用分钟表示的时间:(输入小于等于0的数以退出)\n");
    }
    return 0;
}
