#include <stdio.h>

int fac(int);
int fib(int);

int main()
{
    printf("%d\n", fac(5));
    printf("%d\n", fib(7));
    return 0;
}

int fac(int n)
{
    if (n == 0)
        return 1;
    int facnum = fac(n - 1);
    return n * facnum;
}
int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fib(n - 1) + fib(n - 2);
}
