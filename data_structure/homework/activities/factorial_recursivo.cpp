#include <stdio.h>

int factRecursion(int n)
{
	if (n < 0)
		return 0;
	else if (n == 0)
		return 1;
	else if (n == 1)
		return 1;
	else
		return n * factRecursion(n - 1);
}

int main()
{
	printf("%d ", factRecursion(8));
	return 0;
}