#include <stdio.h>

int main() {
    char ar[] = "DGJA";
    int length = 13; // Total number of characters to print

    for (int i = 0; i < length; i++) {
        printf("%c ", ar[i % 4]);
    }

    return 0;
}
