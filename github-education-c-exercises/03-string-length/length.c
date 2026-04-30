#include <stdio.h>

int string_length(char s[]);

int main(void)
{
    char name[100];

    printf("Name: ");
    scanf("%s", name);

    int len = string_length(name);
    printf("%i\n", len);
}

int string_length(char s[])
{
    int i = 0;

    while (s[i] != '\0')
    {
        i++;
    }

    return i;
}