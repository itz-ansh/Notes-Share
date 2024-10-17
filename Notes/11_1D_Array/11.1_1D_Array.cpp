#include <stdio.h>


//Enter the values in an integer array and print them.

/*
main()
{
    int  a[100], i, n; 

    printf("Enter the number of elements");
    scanf("%d", &n);

    printf("Enter the elements");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);

    printf("The elements are");
    for(i=0;i<n;i++)
        printf("%d", &a[i]);
}
*/



//Find the minimum number in an array.

/*
main()
{
    int A[] = {10,4,5,8,34,25,29};

    int min = A[0];  //Let karlo
    for(int i=0; i<7; i++)
        if (A[i]<min)
            min = A[i];
    printf("The minimum number in the array = %d", min);
}
*/


//Find the maximum number in an array.

/*
main()
{
    int A[] = {10,4,5,8,34,25,29};

    int max = A[0];  //Let karlo
    for(int i=0; i<7; i++)
        if (A[i]>max)
            max = A[i];
    printf("The maximum number in the array = %d", max);
}
*/



// Print the second maximum number in an array. 

/*
main()
{
    int A[] = {10,4,5,8,34,25,29};

    int max = A[0];  //Let karlo
    int x;
    for(int i=1; i<7; i++)
        if (A[i]>max)
        {
            max = A[i];
            x = i;
        }

    int t;
    // swapping
    t = A[0];    
    A[0] = A[x];
    A[x] = t;

    int max2 = A[1];
    for(int i=1; i<7; i++) // basically ab hum max ko 0th position par rakhkar, 1st se (n-1)th position 
        if (A[i]>max2)     // ie. bache hue numbers me max dhurenge joki hamara 2nd max hoga of the array.
            max2 = A[i];
    printf("The 2nd maximum number in the array = %d", max2);
}
*/



// Print the second minimum number in an array. --> same logic as 2nd maximum above
/*
main()
{
    int A[] = {10,4,5,8,34,25,29};

    int min = A[0];  //Let karlo
    int x;
    for(int i=0; i<7; i++)
        if (A[i]<min)
        {
            min = A[i];
            x = i;
        }
    
    int t;
    t = A[0];
    A[0] = A[x];
    A[x] = t;

    int min2 = A[1];
    for(int i=1; i<7; i++) // basically ab hum max ko 0th position par rakhkar, 1st se (n-1)th position 
        if (A[i]<min2)     // ie. bache hue numbers me max dhurenge joki hamara 2nd max hoga of the array.
            min2 = A[i];
    printf("The 2nd maximum number in the array = %d", min2);
}
*/



// Fibonacci series: 0 1 1 2 3 5 8 13 21 ... 
// Fiboacci series without using recursion:-

//                  OR
// In short:-
int A[100];
main()
{
    int n;
    printf("No. of terms = ");
    scanf("%d", &n);
    A[0] = 0;
    A[1] = 1;
    for (int i=2; i<n; i++)
        A[i] = A[i-1] + A[i-2] ;
    for(int j=0; j<n; j++)
        printf("  %d", A[j]);         
}

//            OR

int A[100];
main()
{
    int n;
    printf("No. of terms = ");
    scanf("%d", &n);

    // Checking if n exceeds the array limit
    if (n > 100) 
    {
        printf("Limit exceeded! Maximum allowed terms is 100.\n");
        return 1;  // Exiting the program with an error code
    }

    A[0] = 0;
    A[1] = 1;

    for (int i=2; i<n; i++)
        A[i] = A[i-1] + A[i-2] ;

    for(int j=0; j<n; j++)
        printf("  %d", A[j]);      

    return 0;  // Indicating successful program termination   
}


