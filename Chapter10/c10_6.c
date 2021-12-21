#include <stdio.h>
void Sort_Insert(double arr[], int len);

int main(void)
{
    double arr[] = {1.223, 21.573, 7.564, 45.78, 12.34};
    for (int i = 0; i < sizeof(arr) / sizeof(double); i++)
        printf("arr[%d]=%f\n", i, arr[i]);

    Sort_Insert(arr,sizeof(arr) / sizeof(double));

    for (int i = 0; i < sizeof(arr) / sizeof(double); i++)
        printf("arr[%d]=%f\n", i, arr[i]);
    return 0;
}

void Sort_Insert(double arr[], int len)
{
    int temp, i, j;
    for (i = 1; i < len; i++)
    {
        temp = arr[i];
        for (j = i; j > 0 && arr[j - 1] < temp; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[j] = temp;
    }
}