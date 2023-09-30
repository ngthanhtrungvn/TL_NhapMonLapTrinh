#include <stdio.h>
#include <conio.h>
void so(int x);
void main()
{
	for (int i = 10000; i < 100000; i++)
	{
		so(i);
	}
	getch();
}
void so(int x)
{
	int a = x;
	int b, c, d, e;
	e = a % 10;
	a = a / 10;
	d = a % 10;
	a = a / 10;
	c = a % 10;
	a = a / 10;
	b = a % 10;
	a = a / 10;
	if (e == d && e != c && e != b && e != a && a != b && a != c && b != c)
	{
		printf("%d ", x);
	}
	else
	{
		if (e != d && e == c && e != b && e != a && a != b && a != d && b != d)
		{
			printf("%d ", x);
		}
		else
		{
			if (e != d && e != c && e == b && e != a && a != d && a != c && d != c)
			{
				printf("%d ", x);
			}
			else
			{
				if (e != d && e != c && e != b && e == a && b != c && b != d && d != c)
				{
					printf("%d ", x);
				}
				else
				{
					if (d != e && d != c && d != b && d == a && b != c && b != e && e != c)
					{
						printf("%d ", x);
					}
					else
					{
						if (d != e && d != c && d == b && d != a && a != c && a != e && c != e)
						{
							printf("%d ", x);
						}
						else
						{
							if (d != e && d == c && d != b && d != a && a != e && a != b && e != b)
							{
								printf("%d ", x);
							}
							else
							{
								if (c != e && c != d && c == b && c != a && a != d && a != e && e != d)
								{
									printf("%d ", x);
								}
								else
								{
									if (c != e && c != d && c != b && c == a && b != d && b != e && e != d)
									{
										printf("%d ", x);
									}
									else
									{
										if (b != e && b != d && b != c && b == a && c != d && c != e && d != e)
										{
											printf("%d ", x);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
