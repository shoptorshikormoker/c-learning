#include <stdio.h>

int main() {
    int n, i, size,count = 0;
    char s[100];
     

    scanf("%d", &n);   
    scanf("%s", s);    

    for (i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            count++;    
        }
    }

    printf("%d\n", count);  
    return 0;
}
