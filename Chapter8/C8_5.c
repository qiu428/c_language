#include <stdio.h>

int main(void)
{
    int down = 1, up = 100;
    int ch;
    int guess = 0;
    puts("想一个1~100之间的数。\n准备好了吗？");
    do
    {
        while (getchar() != '\n')
            ;
        if (guess)
        {
            if (ch == '>')
                up = guess;
            else if (ch == '<')
                down = guess;
        }
        guess = down + (up - down) / 2;
        printf("这个数是%d?\n", guess);
    } while ((ch = getchar()) != 'y');
    return 0;
}

