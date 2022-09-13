#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    printf("%d", a);
    if (a % 10 == 1) {
        if (a == 11) { printf("th"); }
        else { printf("st"); }
    }
    else if (a % 10 == 2) {
        if (a == 12) { printf("th"); }
        else { printf("nd"); }
    }
    else if (a % 10 == 3) {
        if (a == 13) { printf("th"); }
        else { printf("rd"); }
    }
    else { printf("th"); }

    return 0;
}

