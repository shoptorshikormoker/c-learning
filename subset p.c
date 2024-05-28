#include<stdio.h>
int main()
{
    int n=5,i,j;
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
        printf("%d,%d\n",i,j);

        }
    }
    return 0;
}
