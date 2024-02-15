#include <stdio.h>
int factorial(int n)
{
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main(void)
{
    int p = 0;
    printf("Enter a number :");

    scanf("%d", &p);

    printf("\t\tHello Good Morninng!\n");
    printf("Factorial of %d : %d\n", p, factorial(p));

    return 0;
}