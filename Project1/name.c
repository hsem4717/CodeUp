#include <stdio.h>
int main()
{
    char a[30];
    gets(a);
    printf("welcome! ");
    for (int i = 0; a[i] != '\0'; i++)
        printf("%c", a[i]);

    return 0;
}
