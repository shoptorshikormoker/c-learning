
#include<stdio.h>
int funct2 (int n)
{
    static int u;
    u+=n;
    return u;
}
int funct1 (int n)
{
    static int v=1;
    v=v+funct2 (n+2);
    return v;
}
int main(void)
{
    int i,t;
    for (i=1, t=0; i<=13; i=i+3)
    {
        t=t+funct1 (i+5);
        printf("%d\n",t);
    }
}

i = 1
u = 8
v = 9
t = 9



i =4
u = 19
v = 28
t = 37

i = 7
u = 33
v = 61
t = 98
