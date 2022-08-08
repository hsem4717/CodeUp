#include <stdio.h>
int main()
{
    char a[20];
    char b[20];
    char c[20];

    gets(a);
    gets(b);
    gets(c);
    char d, e, f;
    int i, j, k;

    for (i = 0; a[i] != '\0'; i++) {}
    d = a[i - 1];
    for (j = 0; b[j] != '\0'; j++) {}
    e = b[j - 1];
    for (k = 0; c[k] != '\0'; k++) {}
    f = c[k - 1];

    if (d == b[0] && e == c[0] && f == a[0]) {
        printf("good");
    }
    else {
        printf("bad");
    }
    return 0;
}

