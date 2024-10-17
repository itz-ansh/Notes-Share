#include <stdio.h>

//Observe:-
int a[10] = {1,2,3,4,5};
main()
{
    for(int i=0; i<10; i++)
        printf(" %d", a[i]);
}
/*
   Output:- 1 2 3 4 5 0 0 0 0 0

   Automatically by default baki ke saare elements zero hojayenge.
*/




// main()
// {
//     int A[100], n;
//     printf("Enter the number of elements = ");
//     scanf("%d", &n);
//     getchar();
//     printf("Enter the string: ");
//     for (int i=0; i<n; i++)
//         scanf("%c", &A[i]);
    
//    printf("Output:\n");
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j <= i; j++)
//             printf("%c", A[j]);
//         printf("\n");
//     }
// }


main()
{
    int A[100], n;
    printf("Enter the number of elements = ");
    scanf("%d", &n);

    printf("Enter the string: ");
    for (int i=0; i<n; i++)
        scanf(" %c", &A[i]); //check this remove space
    
   printf("Output:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++)  
            printf("%c", A[j]);
        printf("\n");
    } 
}
