#include <stdio.h>
 
int main() {
    int n, i, count = 0, groups = 0;
    char s[105];
    
 
    scanf("%d", &n);
    scanf("%s", s);
    int store[n];

    // BBBWBBWBB
    for (i = 0; i < n; i++) {
        if (s[i] == 'B') {
            count++;  
        } 
        if (s[i] == 'W' || i == n - 1) { 
            if (count > 0) {
                store[++groups] = count;            
                count = 0;             
            }
        }
    }
    printf("\n%d\n", groups);  
    for (int i = 1; i <= groups; i++)
    {
       printf("%d ", store[i]);
    }
    printf("\n");
 
    return 0;
}