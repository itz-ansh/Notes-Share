#include <stdio.h>

//Transpose of a matrix --> Rows <--> Columns (interchange)

/*
main()
{
    int m, n, a[100][100];  // m = no. of rows and n = no. of columns
    void read_2D(int [][100], int, int);
    void print_2D(int [][100], int, int);
    void transpose(int [][100], int, int);

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    read_2D(a,m,n);

    printf("The matrix is: \n");
    print_2D(a,m,n);

    printf("The transpose of the matrix is: \n");
    transpose(a,m,n);
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
*/


//Agar kisi B array me store karna ho A transpose ko toh:-


main()
{
    int m, n, a[100][100], b[100][100]; // m = no. of rows and n = no. of columns
    void read_2D(int [][100], int, int);
    void print_2D(int [][100], int, int);
    void transpose(int [][100],int [][100], int, int);

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    read_2D(a,m,n);

    transpose(a,b,m,n);

    printf("The matrix is: \n");
    print_2D(a,m,n);


    printf("The transpose of the matrix is: \n");
    print_2D(b,n,m);

}

void read_2D(int a[][100], int m, int n)
{
    int i,j ;
    printf("Enter the %d elements: ", m*n);
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
        scanf("%d", &a[i][j]);
}

void transpose(int a[][100], int b[][100], int m, int n)
{
    for (int i=0; i<n; i++)  // After transpose:-   rows = n and columns = m
    {
        for(int j=0; j<m; j++)
            b[i][j] = a[j][i] ;
    }
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
 
