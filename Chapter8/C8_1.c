#include <stdio.h>

int main()
{
    int num=0;
    while ((getchar())!=EOF)
    {
        num++;
    }
    printf("以上总计输入了%d个字符",num);
    return 0;
}
