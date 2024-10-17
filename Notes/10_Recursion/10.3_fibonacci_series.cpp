#include <stdio.h>

// Fibonacci series: 0 1 1 2 3 5 8 13 21 ... 

int f(int n)
{
    if (n==0)
        return 0;
    else if (n==1)
        return 1;
    else 
        return (f(n-1)+f(n-2));
}
main()
{
    int i, n;
    printf("Number of terms = ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
        printf("  %d",f(i));
}

