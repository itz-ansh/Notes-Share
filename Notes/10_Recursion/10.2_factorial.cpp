#include <stdio.h>

// n! = n x (n-1)!   
// Eg.  5! = 5 x 4 x 3 x 2 x 1 = 120 

int f(int n)
{
    if (n==1)
        return 1;
    else
        return n*f(n-1);
}

main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d", n, f(n));
}