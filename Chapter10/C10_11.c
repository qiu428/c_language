#include <stdio.h>
void Traverse(double arr[][5], void (*pfun)(double *x));
void Print(double *x);
void Double(double *x);

int main(void)
{
    double arr[3][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};
    Traverse(arr, Print);
    putchar('\n');
    Traverse(arr, Double);
    Traverse(arr, Print);
    return 0;
}
void Traverse(double arr[][5], void (*pfun)(double *x))
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            (*pfun)(&arr[i][j]);
        }
    }
}

void Print(double *x)
{
    printf("%.2f\t", *x);
}
void Double(double *x)
{
    *x*=2;
}