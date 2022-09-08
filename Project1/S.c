#include <stdio.h>
int main() {
	char a[100];
	char c[1000] = { 0, };
	char x[100];
	char y[1000] = { 0, };
	int i, b, z = 0;
	gets(a);
	for (i = 0; a[i] != '\0'; i++)
	{
		b = a[i];
		c[b]++;
	}
	gets(x);
	for (i = 0; x[i] != '\0'; i++)
	{
		b = x[i];
		y[b]++;
	}
	for (i = 65; i <= 122; i++)
	{
		if (c[i] == y[i])
			z++;
	}
	if (z == 58)
		printf("YES");
	else
		printf("NO");
	return 0;
}
