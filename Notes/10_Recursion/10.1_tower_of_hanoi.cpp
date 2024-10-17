#include <stdio.h>
#include <process.h>
#include <math.h>

void TH(int n, char A, char B, char C)
{
    if (n==1)
    {
        printf("Move top disc from %c to %c \n", A, C);
        return;   // void me return laga sakte ho but return value nahi
    }        
    TH(n-1, A, C, B);
    printf("Move top disc from %c to %c \n", A, C);
    TH(n-1, B, A, C);    
}
main()
{
    int i, n = 3, s;
    char A = 'A', B = 'B', C = 'C';
    TH(n, A, B, C);
    s = pow(2,n) - 1;
    printf("No. of steps = %d", s);
}

  

// TH(n, A, B, C)
/*
void TH(int n, char A, char B, char C)
{
    static int count = 0; // value of count static rahega even after multiple calling of function
    if (n==1)
    {
        printf("Move top disc from %c to %c \n", A, C);
        return;   // void me return laga sakte ho but return value nahi
    }        
    TH(n-1, A, C, B);
    printf("Move top disc from %c to %c \n", A, C);
    count = count + 1;
    TH(n-1, B, A, C);    
}
main()
{
    int i, n = 3, s;
    char A = 'A', B = 'B', C = 'C';
    TH(n, A, B, C);
    s = pow(2,n) - 1;
    printf("No. of steps = %d", s);
}
*/
  