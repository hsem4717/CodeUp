#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char a[80];
        scanf("%s", a);
        int c = 0, r = 0;

        for (int j = 0; j < strlen(a); j++)
        {
            if (a[j] == 'O')
            {
                c++;
                r += c;
            }
            else
                c = 0;

        }
        printf("%d\n", r);
    }

    return 0;
}