#include <stdio.h>


/* Study the follwing examples thoroughlly:--- */


//Example 1: when global variable is declared and initialized 

// int i=1;
// main()
// {
//     int j = 1 + i;  // j = 1 + 1 = 2
//     printf("j = %d", j);
// }



//Example 2: when global variable is declared but NOT initialized 

// int i;  // by default i = 0 (since not initialized)
// main()
// {
//     int j;
//     j = 1 + i ;  // j = 1 + 0 = 1
//     printf("j = %d", j);
// }



//Example 3 
/* The value of global variable keeps updating and is retained after every function call.
   Any modification made to a global variable in one function will affect its value globally, 
   and that change will be visible to all other functions.**
*/

// int a = 2;  
// main()
// {
//     void Sum(int);
//     void Subtract(int);

//     int b = 3;

//     printf("initial value of variable a = %d", a);
//     printf("\n");

//     Sum(b);
//     printf("Value of variable a after Sum function call  = %d", a);
//     printf("\n");

//     Subtract(b);
//     printf("Value of variable a after Subtract function call  = %d", a);
//     printf("\n");

//     printf("Final value of variable a = %d \n", a);

//     int c = a + 6;
//     printf("c = %d", c);
// }

// void Sum(int b)
// {
//     int sum = a + b;
//     printf("sum = %d \n", sum);

//     a = a + 4;
// }

// void Subtract(int b)
// {
//     int subtract = a - b;
//     printf("subtraction = %d \n", subtract);

//     a = a + 8;
// }



//Example 4: Local variable always have more priority than the global variable

int i = 10;  // global i
main()
{
    int i = 5;  // local i
    // local i will have more priority than global i or local i would be preferred over global i

    i = i + 6; // i = 5 + 6 = 11
    printf("Updated value of i = %d", i);
}