#include <stdio.h>

int main(void)
{
    int ch;
    while ((ch = getchar()) != EOF)
    {
        if (ch == '\n')
            printf("\\n -- %d\n", ch);
        else if (ch == '\t')
            printf("\\t -- %d\n", ch);
        else
            printf("%c -- %d\n", ch, ch);
    }

    return 0;
}