#include <stdio.h>

// Determinant of a matrix of order 3x3

main()
{
    int n=3, a[100][100];  // n = nxn = order of the matrix
    void read_2D(int [][100], int);
    void print_2D(int [][100], int);
    void determinant(int [][100], int);

    read_2D(a,n);

    printf("The matrix A is: \n");
    print_2D(a,n);

    printf("The determinant of the matrix A:- \n");
    determinant(a,n);
}

void read_2D(int a[][100], int n)
{
    int i,j ;
    printf("Enter the %d elements of the matrix A: ", n*n);
    for(i=0; i<n; i++)      // Loop through rows of the matrix
        for(j=0; j<n; j++)  // Loop through columns of the matrix
        scanf("%d", &a[i][j]);
}  

void determinant(int a[][100], int n)
{
    int det, d1, d2, d3;
    /*
    A = {
         {a,b,c}
         {d,e,f}
         {g,h,i}
        }

    det A = a (ei - fh) - b(di - fg) + c(dh - eg) 
    */ 
   d1 = a[0][0]*(a[1][1]*a[2][2]- a[1][2]*a[2][1]) ;
   d2 = a[0][1]*(a[1][0]*a[2][2]- a[1][2]*a[2][0]) ;
   d3 = a[0][2]*(a[1][0]*a[2][1]- a[1][1]*a[2][0]) ;

   det = d1 - d2 + d3;
   printf("det A = %d", det);
}

void print_2D(int a[][100], int n)
{
    int i,j ;

    for (i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("   %d", a[i][j]);
        }
        printf("\n");
    }
}

