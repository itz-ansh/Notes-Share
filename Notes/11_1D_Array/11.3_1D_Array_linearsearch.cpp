#include <stdio.h>

// Linear Searching

main()
{
    int  a[100], i, n;
    void array_search(int [], int);
    void array_read(int [], int); 

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    array_read(a, n);   // 'a' here is array name or base address
    array_search(a, n);  // 'a' here is array name or base address
}

void array_read(int a[], int n)
{
    printf("Enter the elements: ");
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);  
}

void array_search(int a[], int n)
{
    int x;
    printf("Enter the element you want to search: ");
    scanf("%d", &x);

    for(int i=0; i<n; i++)
        if (a[i]==x)
        {
            printf("The element %d is present in the array at position %d", x, i);
            return;
        }
        printf("The element %d is NOT present in the array", x);
}

