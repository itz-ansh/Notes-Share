#include <stdio.h>

/*

Check whether a matrix is symmetric matrix or not.

A symmetric matrix is a square matrix that is equal to its transpose. In other words, 
the elements of the matrix are symmetric with respect to the diagonal.

A matrix A is symmetric if: 𝐴 = 𝐴' , this means: 𝑎𝑖𝑗 = 𝑎𝑗𝑖  ​for all elements in the matrix

A is a symmetric matrix iff:   A = A(transpose)  OR  A = A'

*/


//Method 1

// main()
// {
//     int m, n, a[100][100], b[100][100]; // m = no. of rows and n = no. of columns
//     void read_2D(int [][100], int, int);
//     void print_2D(int [][100], int, int);
//     void transpose(int [][100],int [][100], int, int);
//     int are_matrices_equal(int a[][100], int b[][100], int m, int n);

//     printf("Enter the number of rows and columns: ");
//     scanf("%d %d", &m, &n);

//     read_2D(a,m,n);

//     transpose(a,b,m,n);

//     printf("The matrix A is: \n");
//     print_2D(a,m,n);
//     printf("\n");

//     printf("The transpose of the matrix is: \n");
//     print_2D(b,n,m);
//     printf("\n");

//     // if (a==b) 
//     /*
//     This if(a==b) is incorrect statement because a and b are pointers to arrays, and the == operator 
//     compares the addresses of a and b, not their actual contents (the matrix elements). Even 
//     though a and b contain the same values (in the case where the matrix is symmetric), 
//     they are stored in different locations in memory, so the condition will always evaluate to false.
//     */
//     if (are_matrices_equal(a, b, m, n))  
//         printf("The matrix A is a symmetrix matrix");
//     else
//         printf("The matrix A is NOT a symmetrix matrix");
// }

// void read_2D(int a[][100], int m, int n)
// {
//     int i,j ;
//     printf("Enter the %d elements: ", m*n);
//     for(i=0; i<m; i++)
//         for(j=0; j<n; j++)
//         scanf("%d", &a[i][j]);
// }

// void transpose(int a[][100], int b[][100], int m, int n)
// {
//     for (int i=0; i<n; i++)  // After transpose:-   rows = n and columns = m
//     {
//         for(int j=0; j<m; j++)
//             b[i][j] = a[j][i] ;
//     }
// }

// // Function To check if matrix a is symmetrix ie.   a = b , where  b = transpose of matrix a
// // Function to compare two matrices element by element
// int are_matrices_equal(int a[][100], int b[][100], int m, int n)  
// {
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (a[i][j] != b[i][j])
//                 return 0;  // Matrices are not equal
//         }
//     }
//     return 1;  // Matrices are equal      // 0 --> False, 1 --> True
// }

// void print_2D(int a[][100], int m, int n)
// {
//     int i,j ;

//     for (i=0; i<m; i++)
//     {
//         for(j=0; j<n; j++)
//         {
//             printf("   %d", a[i][j]);
//         }
//         printf("\n");
//     }
// }




//Method 2 

int main()
{
    int m, n, a[100][100];  // m = no. of rows and n = no. of columns
    void read_2D(int [][100], int, int);
    void print_2D(int [][100], int, int);
    void transpose(int [][100], int, int);
    int symmetric(int [][100], int, int);

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    read_2D(a,m,n);

    printf("The matrix is: \n");
    print_2D(a,m,n);
    printf("\n");

    printf("The transpose of the matrix is: \n");
    transpose(a,m,n);
    printf("\n");

    if (m==n)
    {
        if (symmetric(a, m, n))
            printf("The matrix is a symmetrix matrix");
        else
            printf("The matrix is NOT a symmetrix matrix.");
    }
    else
        printf("The matrix is not a square matrix.");
}

void read_2D(int a[][100], int m, int n)
{
    int i,j ;
    printf("Enter the %d elements: ", m*n);
    for(i=0; i<m; i++)      // Loop through rows of the matrix
        for(j=0; j<n; j++)  // Loop through columns of the matrix
        scanf("%d", &a[i][j]);
}  

void transpose(int a[][100], int m, int n)
{
    // After transpose:-   rows = n and columns = m
    for (int i=0; i<n; i++)       
    {
        for(int j=0; j<m; j++)
            printf("  %d", a[j][i]);
        printf("\n");
    }
}

int symmetric(int a[][100], int m, int n)
{
    for (int i=0; i<n; i++)       
    {
        for(int j=0; j<m; j++)
            if (a[i][j] != a[j][i])
                return 0;   // matrix is not a symmetric matrix
    }
    return 1; // matrix is symmetric matrix
}

void print_2D(int a[][100], int m, int n)
{
    int i,j ;

    for (i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("   %d", a[i][j]);
        }
        printf("\n");
    }
}