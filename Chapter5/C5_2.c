#include <stdio.h>
int main(void)
{
    int number=0;
    puts("请输入一个整数:");
    while (scanf("%d",&number)==0)
    {
        while(getchar()!='\n');
        puts("输入错误!");
        puts("请输入一个整数:");
    }
    for (int i = number; i < number+10+1; i++)
    {
        printf("%d\t",i);
    }
    

    return 0;
}
