
#include <stdio.h>

int main()
{
    int rows = 7;

    // first loop for printing rows
    for (int i = 0; i < rows; i++) {
            for(int k=0; k<rows-i; k++){
               printf(" ");
            }
        // second loop for printing character in each rows
        for (int j = 0; j <= i; j++) {
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}
