#include<stdio.h>
int main()
{
    int arr[5]={2,5,6,10,3};
     if(arr[0]>arr[1]&&arr[0]>arr[2]&&arr[0]>arr[3]&&arr[0]>arr[4])
     {
         printf("%d is the largest number",arr[0]);
     }
     else if(arr[1]>arr[0]&&arr[1]>arr[2]&&arr[1]>arr[3]&&arr[1]>arr[4])
     {
         printf("%d is the largest number",arr[1]);
     }
     else if(arr[2]>arr[0]&&arr[2]>arr[1]&&arr[2]>arr[3]&&arr[2]>arr[4])
     {
         printf("%d is the largest number",arr[2]);
     }
     else if(arr[3]>arr[0]&&arr[3]>arr[1]&&arr[3]>arr[2]&&arr[3]>arr[4])
     {
         printf("%d is the largest number",arr[3]);
     }
     else
     {
         printf("%d is the largest number",arr[4]);
     }


}
