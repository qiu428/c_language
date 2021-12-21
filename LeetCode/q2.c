#include <stdio.h>
#include <stdbool.h>

bool isUnique(char *astr)
{
    int ascii[128] = {0};
    for (int i = 0; i < strlen(astr); i++)
    {
        if ((++ascii[astr[i]]) > 1)
            return false;
    }
    return true;
}
int main(void)
{
    char s[] = "leetcode";
    printf("%s\n", isUnique(s) ? "true" : "false");
    return 0;
}
