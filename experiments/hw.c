#include <stdio.h>
#include <cs50.h>

int collatz(n)
{
    if (n == 1)
        return 0;
    
    else if (n % 2 == 0)
        return 1 + collatz(n/2);
    else
        return 1 + collatz(3 * n + 1);
}

int main (void)
{
    int y = get_int("NUmber: ");
    int x = collatz(y);
    printf("%i\n", x);
}