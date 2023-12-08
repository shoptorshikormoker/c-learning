#include<stdio.h>
int main()
{
    char str1[]="shoptorshi kormoker";
    char str2[]="shoptorshi";

    int d =strcmp(str1,str2);
    if(d==0)
    {
        printf("strings are equal");
    }
    else
        printf("strings are not equal");

}
