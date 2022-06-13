#include <stdio.h>
int main()
{
	int a, b, c, x = 0, y = 0;
	scanf_s("%d %d %d", &a, &b, &c);
	int z = c;
	int h = c;
	if (a >= b)
	{
		while (z - a >= 0)
		{
			if (z > a)
			{
				z = z - a;
				y++;
			}
		}
		while ( z- b >= 0)
		{
			z = z - b;
			x++;
		}
			printf("%d %d", y, x);

	}
	if (a < b)
	{
		while (z - b >= 0)
		{
			if (z > b)
			{
				z = z - b;
				x++;
			}
		}
		while (z - a >= 0)
		{
			z = z - a;
			y++;
		}
		
			printf("%d %d", y, x);


	}
	
	
	return 0;
}
