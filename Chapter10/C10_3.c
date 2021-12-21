#include <stdio.h>
int Max(int x,int y);
int ArrayMax(int arr[],int len);

int main(void)
{
    int arr[]={5,2,4,67,8,9,4,46,784,8,4,563,58,345,6,3354,6,};
    printf("%d",ArrayMax(arr,sizeof(arr)/sizeof(int)));
    
    return 0;
}
int Max(int x,int y)
{
    return x>y?x:y;
}
int ArrayMax(int arr[],int len)
{
    int max=arr[0];
    for (int i = 0; i < len-1; i++)
    {
        max=Max(max,arr[i+1]);
    }
    return max;
}