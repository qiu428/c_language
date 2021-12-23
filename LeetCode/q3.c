#include <stdio.h>
#include <limits.h>
int myAtoi(char *s);

int main()
{
    printf("%ld", myAtoi("-91283472332"));
    return 0;
}

int myAtoi(char *s)
{
    int digit = 0;
    int PN = 1;
    while (*s == ' ')
        s++;
    if (*s == '-')
    {
        PN = -1;
        s++;
    }
    else if (*s == '+')
        s++;
    while (*s >= '0' && *s <= '9')
    {
        int num = *s - '0';
        if (digit < INT_MAX / 10 || (digit == INT_MAX / 10 && num < 8))
        {
            digit = digit * 10 + num;
        }
        else
            return PN == 1 ? INT_MAX : INT_MIN;
        s++;
    }
    return digit * PN;
}