#include <stdio.h>

int main(void)
{
    int ch;
    int count = 0;
    while ((ch = getchar()) != '#')
    {
        /*if (ch == '.')
         {
             putchar('!');
             count++;
         }
         else if (ch == '!')
         {
             putchar('!');
             putchar('!');
             count++;
         }
         else
             putchar(ch);*/

        switch (ch)
        {
        case '.':
            putchar('!');
            count++;
            break;
        case '!':
            putchar('!');
            putchar('!');
            count++;
            break;
        default:
            putchar(ch);
        }
    }
    printf("\n共进行了%d次替换。\n", count);

    return 0;
}
