#include <stdio.h>

/*
Matrix multiplication

A(mxn) X B (pxq) = C (mxq)

Multiplication is possible iff:  No. of coumums in A (n) = No. of rows in B (p)

*/

int main()
{
    int m, n, p, q, a[100][100], b[100][100], c[100][100]; // m = no. of rows and n = no. of columns
    void read_2D(int [][100], int, int);
    void print_2D(int [][100], int, int);
    void multiply(int [][100], int [][100], int [][100], int, int, int, int);

    printf("Enter the number of rows and columns in matrix A: ");
    scanf("%d %d", &m, &n);
    read_2D(a,m,n);
    printf("\n");
    printf("The matrix A is: \n");
    print_2D(a,m,n);

    printf("\nEnter the number of rows and columns in matrix B: ");
    scanf("%d %d", &p, &q);
    read_2D(b,p,q);
    printf("\n");
    printf("The matrix B is: \n");
    print_2D(b,p,q);

    if (n==p)
        multiply(a,b,c,m,n,p,q);
    else
    {
        printf("\nCondition for multiplication failed!\n");
        printf("Reason:-   no. of columns of A not equal to no. of rows in B");

        return 0;
    }

    printf("\nThe multiplication of the two matrices A and B is: \n");
    print_2D(c,m,q);
    
    return 0;
}

void read_2D(int a[][100], int m, int n)
{
    int i,j ;
    printf("Enter the %d elements: ", m*n);
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
        scanf("%d", &a[i][j]);
}

void multiply(int a[][100], int b[][100], int c[][100], int m, int n, int p, int q)
{     
    for (int i=0; i<m; i++)  // Loop through rows of A
    {
        for(int j=0; j<q; j++)  // Loop through columns of B
        {
            int sum = 0;            // Initialize sum for each element of the result matrix
            // for (int k = 0; k < p; k++)
            //              OR
            for (int k = 0; k < n; k++)  // Multiply row of A with column of B
            {
                sum = sum + (a[i][k] * b[k][j]) ;  // a[i][k] accesses the element in the i-th row of A.
            }                                      // b[k][j] accesses the element in the j-th column of B
            c[i][j] = sum ;
        }
    }
}

void print_2D(int a[][100], int m, int n)
{
    int i,j ;

    for (i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%5d", a[i][j]);     // Adjusted for better spacing
        }
        printf("\n");
    }
}

