#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char s[100];

    printf("Before: ");
    scanf("%[^\n]", s);   // boşlukları da alır

    printf("After: ");

    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c", toupper(s[i]));
    }

    printf("\n");
}