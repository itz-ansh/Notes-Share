#include <stdio.h>

//Observe the following examples:- 

// 1)
main()
{
    int A[2][4] = {
                    {1,2},
                    {3,4}
                  };
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<4; j++)
            printf("  %d", A[i][j]);
        printf("\n");
    }
}
/*
Output:- 
Just like we observed in 1D Array, we will get zeros printed by default in the remaining columns.

    1  2  0  0
    3  4  0  0

*/




// 2a)
int main()
{
    int A[][5] = {
                    {1,2},
                    {3,4},
                    {5,6}
                  };
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<5; j++)
            printf("  %d", A[i][j]);
        printf("\n");
    }
}
/*
Output:- 
Just like we observed in 1D Array, we will get zeros printed by default in the remaining columns.

    1  2  0  0  0
    3  4  0  0  0
    5  6  0  0  0

*/

//But, now compare examples 2b) and 2c) :-

// 2b)
int main()
{
    int A[][5] = {1,2,3,4,5,6};
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<5; j++)
            printf("  %d", A[i][j]);
        printf("\n");
    }
}
/*
Output:-

    1  2  3  4  5
    6  0  0  0  0
    1537749504  2016404120  1  0  355327376     //garbage values

*/

// 2c)
int main()
{
    int A[3][5] = {1,2,3,4,5,6};
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<5; j++)
            printf("  %d", A[i][j]);
        printf("\n");
    }
}
/*
Output:-

    1  2  3  4  5
    6  0  0  0  0
    0  0  0  0  0

*/




// 3)
int main()
{
    int A[][3] = {
                    { },
                    { },
                    { }
                  };
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            printf("  %d", A[i][j]);
        printf("\n");
    }
}
/*
Output:- 
Just like we observed in 1D Array, we will get zeros printed by default in the remaining columns.

    0  0  0
    0  0  0
    0  0  0

*/




// 4a)
int main()
{
    int A[][3] = {};     // 2D Array (Matrix) 3x3 ki banegi
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            printf("  %d", A[i][j]);
        printf("\n");
    }
}
/*
Output:- 
3rd column mai garbage values hongi
Reason: The garbage values appear because the array is partially initialized and uninitialized 
elements are left with whatever values happen to be in memory. 

    0  0  7100176
    0  -804252946  32759
    0  0  -804229048

*/


// 4b)
int main()
{
    int A[][3] = {0};         // 3x3 ki zero matrix banegi
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            printf("        %d", A[i][j]);
        printf("\n");
    }
}
/*
Output ( Run in C of https://www.onlinegdb.com/ or replit.com ):-
    
    0  0  0
    0  0  0
    0  0  0

*/


// 4c) 
int main()
{
    static int A[][3] = {0};        // 3x3 ki zero matrix banegi
    // static ensures that the matrix is fully zero-initialized
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            printf("        %d", A[i][j]);
        printf("\n");
    }
}
/*
Output ( Run in C of https://www.onlinegdb.com/ or replit.com ):-

    0  0  0
    0  0  0
    0  0  0

Why static Works??
--> If you declare A as static, all elements in the array will be automatically 
    initialized to zero, even if you don't explicitly set them. This behavior 
    ensures that no garbage values appear in the array.

https://chatgpt.com/share/67067408-c438-800a-8de6-5dc1f3de4593

*/