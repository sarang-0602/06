#include <stdio.h>

void square(int a)
{
    a = a * a;
}

int main(void)
{
    int a = 2;
    square(a);
    printf("a=%i\n", a);

    return 0;
}
