#include <stdio.h>
int main(void)
{
    int number=0;
    puts("������һ������:");
    while (scanf("%d",&number)==0)
    {
        while(getchar()!='\n');
        puts("�������!");
        puts("������һ������:");
    }
    for (int i = number; i < number+10+1; i++)
    {
        printf("%d\t",i);
    }
    

    return 0;
}
