
#include<stdio.h>
int main(void)
{
    int i, j;
    for (i=0; i<=6; i++)
    {
        for (j=0; j<=6-i; j++)
        {
            if (i%2==1)
                printf("%c", 'a'+j);
            else
                printf("%c", 'a'+i);
        }
        printf("\n");
    }

}
