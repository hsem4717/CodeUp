#include <stdio.h>
int main()
{

    char a[11];
    gets(a);
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == 't')
        {
            printf("%d ", i + 1);
        }
    }


    return 0;
}
