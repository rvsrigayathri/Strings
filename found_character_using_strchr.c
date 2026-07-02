#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch;
    char *ptr;

    scanf("%s %c", &str, &ch);

    ptr = strchr(str, ch);

    if (ptr != NULL)
    {
        printf("Character '%c' is found in %ld position", ch, ptr - str + 1);
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}