#include<stdio.h>
int main()
{
    int a=5,b=40,c=25,d=20,e=30;
    if(a>b&& a>c && a>d && a>e)
    {
        printf("%d is the largest number",a);
    }
    else if(b>a && b>c && b>d && b>e)
    {
        printf("%d is the largest number",b);
    }
    else if(c>a && c>b && c>d && c>e )
    {
        printf("%d is the largest number",c);
    }
    else if(d>a && d>b && d>c && d>e )
    {
        printf("%d is the largest number",d);
    }
    else
    {
        printf("%d is the largest number",e);
    }
return 0;
}
