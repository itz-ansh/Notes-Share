#include <stdio.h>

/*

Check whether a matrix is skew symmetric matrix or not.

A skew-symmetric matrix (or anti-symmetric matrix) is a square matrix whose transpose 
is equal to its negative.

A matrix A is skew-symmetric if: 𝐴 = − 𝐴' , this means:  𝑎𝑖𝑗 = −𝑎𝑗𝑖 
for all elements in the matrix. 

--> All the diagonal elements of a skew-symmetric matrix must be zero.
--> A is a skew symmetric matrix iff:   A = -A(transpose)

*/

//Method 1

// int main()
// {
//     int m, n, a[100][100], b[100][100]; // m = no. of rows and n = no. of columns
//     void read_2D(int [][100], int, int);
//     void print_2D(int [][100], int, int);
//     void transpose(int [][100],int [][100], int, int);
//     int skew_sym(int a[][100], int m, int n);

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


//     if (skew_sym(a, m, n))  
//         printf("The matrix A is a skew symmetric matrix.");
//     else
//         printf("The matrix A is NOT a skew symmetric matrix.");
// }

// void read_2D(int a[][100], int m, int n)
// {
//     int i,j ;
//     printf("Enter the %d elements: ", m*n);
//     for(i=0; i<m; i++)
//         for(j=0; j<n; j++)
//         scanf("%d", &a[i][j]);
// }

// int skew_sym(int a[][100], int m, int n)  
// {
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (a[i][j] != -a[j][i])
//                 return 0;  //Matrix is not skew symmetric
//         }
//         if (a[i][i]!=0)
//         {
//             printf("All diagonal elements are not zero! \n");
//             return 0;
//         }
//     }
//     return 1;  //Matrix is skew symmetric    // 0 --> False, 1 --> True
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
    int skew_symmetric(int [][100], int, int);

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
        if (skew_symmetric(a, m, n))
            printf("The matrix is a skew symmetrix matrix");
        else
            printf("The matrix is NOT a skew symmetrix matrix.");
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

int skew_symmetric(int a[][100], int m, int n)
{
    for (int i=0; i<n; i++)       
    {
        for(int j=0; j<m; j++)
            if (a[i][j] != -a[j][i])
                return 0;   // matrix is not a skew symmetric matrix
    }
    return 1; // matrix is skew symmetric matrix
}

void print_2D(int a[][100], int m, int n)
{
    int i,j ;
    for (i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("      %d", a[i][j]);
        }
        printf("\n");
    }
}