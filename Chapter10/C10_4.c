#include <stdio.h>
int ArrayMaxIndex(double arr[], int len);
int main(void)
{
    double arr[] = {1.223, 21.573, 7.564, 45.78, 12.34};
    for (int i = 0; i < sizeof(arr) / sizeof(double); i++)
        printf("arr[%d]=%f\n", i, arr[i]);

    printf("MAX=%d", ArrayMaxIndex(arr, sizeof(arr) / sizeof(double)));
    return 0;
}

int ArrayMaxIndex(double arr[], int len)
{
    int max = 0;
    for (int i = 0; i < len - 1; i++)
    {
        max = arr[max] > arr[i + 1] ? max : i + 1;
    }
    return max;
}