#include<stdio.h>
int main()
{
    char a[90];
    gets(a);
    for (int i = 97; i <= 122; i++)
    {
        int b = 0;
        for (int j = 0; a[j] != '\0'; j++)
        {
            if (a[j] == i)
            {
                b++;
            }
        }
        printf("%c:%d\n", i, b);
    }
    return 0;
}
