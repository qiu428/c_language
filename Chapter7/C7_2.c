#include <stdio.h>

int main(void)
{
    int ch;
    int count = 0;
    while ((ch = getchar()) != '#')
    {
        printf("%c-%d\t", ch, ch);
        if (count % 8 == 7)
            printf("\n");
        count++;
    }

    return 0;
}
