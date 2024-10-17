#include <stdio.h>

// Binary Searching --> saves time
// Remember: if the array is not arranged, the binary search is not applicable


main()
{
    int  a[100], i, n;
    void array_search(int [], int, int);
    void array_read(int [], int); 

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    array_read(a, n);   // 'a' here is array name or base address
    array_search(a, 0, n-1);  // 'a' here is array name or base address
}

void array_read(int a[], int n)
{
    printf("Enter the elements: ");
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);  
}

void array_search(int a[], int lb, int ub)  // lb --> lower bound, up --> upper bound
{
    int x, mid;
    printf("Enter the element you want to search: ");
    scanf("%d", &x);

    while (lb<=ub)
    {
        mid = (lb+ub)/2 ;
        if (x == a[mid])
        {
            printf("The element %d is present in the array at position %d", x, mid);
            return;
        }
        if (x<a[mid])
            ub = mid - 1 ;
        else
            lb = mid + 1 ;
    }

    printf("The element %d is NOT in the array", x);
}

