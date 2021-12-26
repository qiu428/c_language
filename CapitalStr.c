#include <string.h>
#include <stdio.h>

int main(void)
{
    char str[40];
    scanf("%s", str);

    printf("#ifndef\t__");
    printf("%s", strupr(str));
    printf("_H__\n");

    printf("#define\t__");
    printf("%s", strupr(str));
    printf("_H__\n");

    printf("\n#endif\n");
    return 0;
}