#include<stdio.h>
int main()
{
    int arr[5]={2,5,6,10,3},max=0;
    for(int i=0;i<=4;i++)
    {
       if(max<arr[i])
       {
           max=arr[i];
       }
    }
    printf("%d",max);
}
