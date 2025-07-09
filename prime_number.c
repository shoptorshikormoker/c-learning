#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 2; i<=n/2; i++){
        if(n%i==0){
           printf("It is not prime number");
           return 0;
        }
    }
    printf("It is prime number");

    return 0;
}