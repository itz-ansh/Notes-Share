#include <stdio.h>

//Addition of two matrices --> Concept --> Cij = Aij + Bij

main()
{
    int m, n, A[100][100], B[100][100], C[100][100];  // m = no. of rows and n = no. of columns
    void read_2D(int [][100], int, int);
    void sum_2D(int [][100], int [][100], int [][100], int, int);
    void print_2D(int [][100], int, int);

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Matrix A:- ");
    read_2D(A,m,n);

    printf("Matrix B:- ");
    read_2D(B,m,n);

    sum_2D(C,A,B,m,n);

    printf("Matrix A:- \n");
    print_2D(A,m,n);

    printf("Matrix B:- \n");
    print_2D(B,m,n);
    
    printf("Resultant Matrix C:- \n");
    print_2D(C,m,n);
}

void read_2D(int A[][100], int m, int n)
{
    int i,j ;
    printf("Enter the %d elements of matrix: ", m*n);
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
        scanf("%d", &A[i][j]);
}

void sum_2D(int C[][100], int A[][100], int B[][100], int m, int n)
{
    int i,j ;
    // Cij = Aij + Bij

    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            C[i][j] = A[i][j] + B[i][j] ;
}

void print_2D(int C[][100], int m, int n)
{
    int i,j ;
    for (i=0; i<m; i++)     // Loop through rows
    {
        for(j=0; j<n; j++)   // Loop through columns
        {
            printf("   %d", C[i][j]);
        }
        printf("\n");
    }
}