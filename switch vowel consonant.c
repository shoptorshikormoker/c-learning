#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any letter : ");
    scanf("%c",&ch);


    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':

    printf("vowel\n");
    break;
    default:
        printf("consonant\n");



    }
}
