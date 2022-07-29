#include <stdio.h>
int main()
{
    int a, b, j, bob;
    scanf("%d %d", &a, &b);
    if (a % 2 == 1) {
        j = (a / 2 + 1);
    }
    else {
        j = (a * 5);
    }
    if (b % 2 == 1) {
        bob = (b / 2 + 1);
    }
    else {
        bob = (b * 5);
    }
    printf("%d", j + bob);

    return 0;

}
