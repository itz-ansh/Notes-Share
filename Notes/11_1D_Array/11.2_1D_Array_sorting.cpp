#include <stdio.h>

//Bubble sorting (basic sorting)


// non-decreasing
/*
main()
{
    int  a[100], i, n;
    void bubble_sort(int [], int); 

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);  

    bubble_sort(a,n);  // 'a' here is array name or base address

    printf("The elements are: ");
    for(i=0;i<n;i++)
        printf("  %d", a[i]);

}
void bubble_sort(int a[], int n)
{
    int i, j, t;
    int flag = 1;
    for(i=0; i<n-1 && flag==1; i++)
    {
        flag = 0;
        for(j=0; j<n-1-i; j++)
        {
            if (a[j]>a[j+1])
            {   
                //swapping
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
                flag = 1;
            }
        }
    }
}

*/



// Aur sundar form:-


// --> non-increasing sorting
/*
main()
{
    int  a[100], i, n;
    void bubble_sort(int [], int);
    void array_read(int [], int); 
    void array_print(int [], int); 

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    array_read(a, n);   // 'a' here is array name or base address
    bubble_sort(a, n);  // 'a' here is array name or base address
    array_print(a, n);  // 'a' here is array name or base address
}

void array_read(int a[], int n)
{
    printf("Enter the elements: ");
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);  
}

void bubble_sort(int a[], int n)
{
    int i, j, t;
    int flag = 1;
    for(i=0; i<n-1 && flag==1; i++)  // i ---> represents 'pass'
    {
        flag = 0;
        for(j=0; j<n-1-i; j++)
        {
            if (a[j]<a[j+1])      // non-increasing
            {   
                //swapping
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
                flag = 1;
            }
        }
    }
}

void array_print(int a[], int n)
{
    printf("The elements are: ");
    for(int i=0;i<n;i++)
        printf("  %d", a[i]);
}
*/



// --> non-decreasing sorting
main()
{
    int  a[100], i, n;
    void bubble_sort(int [], int);
    void array_read(int [], int); 
    void array_print(int [], int); 

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    array_read(a, n);   // 'a' here is array name or base address
    bubble_sort(a, n);  // 'a' here is array name or base address
    array_print(a, n);  // 'a' here is array name or base address
}

void array_read(int a[], int n)
{
    printf("Enter the elements: ");
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);  
}

void bubble_sort(int a[], int n)
{
    int i, j, t;
    int flag = 1;
    for(i=0; i<n-1 && flag==1; i++)  // i ---> represents 'pass'
    {
        flag = 0;
        for(j=0; j<n-1-i; j++)
        {
            if (a[j]>a[j+1])        // non-decreasing
            {   
                //swapping
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
                flag = 1;
            }
        }
    }
}

void array_print(int a[], int n)
{
    printf("The elements are: ");
    for(int i=0;i<n;i++)
        printf("  %d", a[i]);
}




