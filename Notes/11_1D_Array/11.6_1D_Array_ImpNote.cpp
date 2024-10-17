#include <stdio.h>

//Observe the following examples:-

int A[10] = {1,2};
main()
{
    for(int j=0; j<10; j++)
    /*  There are only 2 elements in the array but if u were to print
        more, the rest of the elements will all be zero by default. */
        printf("  %d", A[j]);
}         
//Output:-     1  2  0  0  0  0  0  0  0  0


int a[10];
main()
{
    for (int i=0; i<10; i++)
        printf("  %d", a[i]);
}
//Output:-    0  0  0  0  0  0  0  0  0  0   --(same logic as above)

