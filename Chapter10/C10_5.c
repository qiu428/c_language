#include <stdio.h>
double MaxMinPoor(double arr[], int len);

int main()
{
    double arr[] = {1.223, 21.573, 7.564, 45.78, 12.34};
    for (int i = 0; i < sizeof(arr) / sizeof(double); i++)
        printf("arr[%d]=%f\n", i, arr[i]);
    printf("MAX-MIN=%f", MaxMinPoor(arr, sizeof(arr) / sizeof(double)));
    return 0;
}

double MaxMinPoor(double arr[], int len)
{
    double max, min;
    max = min = arr[0];
    for (int i = 0; i < len - 1; i++)
    {
        max = max > arr[i + 1] ? max : arr[i + 1];
        min = min < arr[i + 1] ? min : arr[i + 1];
    }
    return max - min;
}