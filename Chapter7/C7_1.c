#include <stdio.h>

int main(void)
{
    int num_space = 0;
    int num_enter = 0;
    int num_other = 0;
    int ch;
    while ((ch = getchar()) != '#')
    {
        if (ch == ' ')
            num_space++;
        else if (ch == '\n')
            num_enter++;
        else
            num_other++;
    }
    printf("共读取到了%d个空格,%d个换行，%d个其他字符.\n", num_space, num_enter, num_other);

    return 0;
}
