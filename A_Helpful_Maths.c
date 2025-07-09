#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    scanf("%s", s);

    int ones = 0, twos = 0, threes = 0;

    
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '1') ones++;
        else if (s[i] == '2') twos++;
        else if (s[i] == '3') threes++;
    }

   
    int first = 1;
    for (int i = 0; i < ones; i++) {
        if (!first) printf("+");
        printf("1");
        first = 0;
    }
    for (int i = 0; i < twos; i++) {
        if (!first) printf("+");
        printf("2");
        first = 0;
    }
    for (int i = 0; i < threes; i++) {
        if (!first) printf("+");
        printf("3");
        first = 0;
    }

    return 0;
}