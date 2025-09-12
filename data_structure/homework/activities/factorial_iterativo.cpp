#include <stdio.h>

int factTatil(int n, int a)
{
    if (n < 0)
        return 0;
    else if (n == 0)
        return 1;
    else if (n == 1)
        return a;
    else
        return factTatil(n - 1, n * a);
}

int main()
{
    printf("%d ", factTatil(8, 1));
}