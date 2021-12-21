#include <stdio.h>

void swap(char *a,char *b)
{
    char temp=*a;
    *a=*b;
    *b=temp;
}

void reverseString(char *s, int sSize) {
    for (int left = 0, right = sSize - 1; left < right; ++left, --right) {
        swap(s + left, s + right);
    }
}
int main()
{
    char s[]={'h','e','l','l','o'};
    reverseString(s,5);
    
    puts(s);
    return 0;
}
