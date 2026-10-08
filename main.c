#include <stdio.h>

int get_integer(void);
int factorial(int n);
int combination(int n, int r);

int main(void)
{
    //변수 선언
    int n, r;

    n = get_integer();
    r = get_integer();

    printf("C(%d, %d) = %d\n", n, r, combination(n, r));

    return 0;
}

int combination(int n, int r)
{
    return (factorial(n) / (factorial(n - r) * factorial(r)));
}

int factorial(int n)
{
    int i;
    int res = 1;

    for (i = 1; i <= n; i++)
        res = res * i;

    return res;
}

int get_integer(void)
{
    int value;

    printf("The integer: ");
    scanf("%d", &value);

    return value;
}