#include <stdio.h>

//Reading and Printing an array using function (call by reference ie. pointers)


//Row major:-

main()
{
    int m, n, a[100][100];  // m = no. of rows and n = no. of columns
    void read_2D(int [][100], int, int);
    void print_2D(int [][100], int, int);

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    read_2D(a,m,n);
    print_2D(a,m,n);
}

void read_2D(int a[][100], int m, int n)
{
    int i,j ;
    printf("Enter the %d elements: ", m*n);
    for(i=0; i<m; i++)       // Loop through rows 
        for(j=0; j<n; j++)   // Loop through columns
        scanf("%d", &a[i][j]);
}

void print_2D(int a[][100], int m, int n)
{
    int i,j ;
    printf("The matrix is: ");
    printf("\n");

    for (i=0; i<m; i++)    // Loop through rows 
    {
        for(j=0; j<n; j++)  // Loop through columns
        {
            printf("   %d", a[i][j]);
        }
        printf("\n");
    }
}


