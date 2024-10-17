#include <stdio.h>

/*
The printf() function executes from **right to left** because 
common operator associativity is from right to left. 
*/

// Observe the following examples:-


// Example 1 (VERY VERY VERY IMPORTANT):-
int main()
{
    int k = 50;
    printf("%d %d %d %d", k, k==50, k++, ++k);
    //                   <------------------- execution
    //          printing ------------------->
}
/*
Run in Turbo C (VSCode me galat answer aayega kyuki pure C me nahi likha gaya hai VSCode)

Expected Output:-   50  1  50  52  ---> WRONG output
Actual Output:-     52  0  51  51  ---> CORRECT output

Aisa tab dekhne ko milta hai jab jinhe hum print karva rahe hote hai unme dependency ho.
*/



/* Example 2:- iss example me bhi right se hi execute hoga but fark nahi dekhne ko milega as 
               dono independent hai ek dusre ke.  */
int main()
{
    int i = 1, j = 2;
    printf("i = %d and j = %d", i, j);
}
// Output:-   i = 1 and j = 2