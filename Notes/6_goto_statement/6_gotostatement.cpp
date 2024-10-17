// goto statement: backbone of loops
// not very popular

/*
The goto statement in C is a jump statement that allows transferring control
to a labeled statement within the same function. It is an unconditional jump, 
meaning it does not evaluate any conditions before jumping to the target label.

Syntax:-

    label:
        // code to be executed
    goto label;

*/


#include <stdio.h>


/*
int main() 
{
    int i = 0;

    loop1:
        printf("Iteration %d\n", i);
        i++;
        if (i == 3) 
        {
            goto loop2;
        }

    loop2:
        printf("Final iteration\n");
        return 0;
}
*/

/*
main()
{
    int i = 1;
    L:
    printf("%d", i);
    i++;      //i = i + 1
    if (i<=10)
     {
        goto L;
     }
}
*/

/*
main()
{
    int i = 1;
    L:
    printf("%d", i);
    i++;      //i = i + 1
    goto L;
}
*/




/* The big problem with gotos is that when we do use them we can
never be sure how we got to a certain point in our code. They
obscure the flow of control. So as far as possible skip them. You
can always get the job done without them. Trust me, with good
programming skills goto can always be avoided. */