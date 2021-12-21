#include <stdio.h>

void chline(char ch,int i,int j);
int main()
{
    chline('6',3,4);
    return 0;
}

void chline(char ch,int i,int j)
{
    for (int row = 0; row < j; row++)
    {
        for (int col = 0; col < i; col++)
        {
            putchar(ch);
        }
        putchar('\n');
    }
}