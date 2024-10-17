Function: It is a self contained block of statement which do a particular task.

--> A function consists of three parts:-
    a) Function prototype
    b) Function calling
    c) Function definition


1) Function prototype:- 

How to define prototype?

      return_type  function_name (type of arguments);


Examples:-

a) Addition of two integers

   int sum(int, int);  
                              

b ) Area of circle: A=3.14*r*r
    
   float  Area(int);                            


c) Volume of cone: V= 3.14r*r*h/3

   float volume(int, float);      




2) Function calling:- 

      function_name (arguments);
   

Examples:-

a) sum(a, b);

b) Area(r);
 
c) volume(r, h);


**Note**
What is the difference between parameters and arguments??

a) Parameters (also called formal parameters)

--> Definition: These are the variables defined in the function declaration or definition that will receive the values when the function is called.

--> Scope: Parameters exist only inside the function where they are declared.

--> Purpose: They act as placeholders for the values that will be passed to the function.

Example:

int add(int a, int b) 
{  
   // 'a' and 'b' are parameters (formal parameters)
   return a + b;
}


b) Arguments (also called actual arguments)

--> Definition: These are the actual values or expressions that you pass to the function when calling it. These values are assigned to the corresponding parameters.

--> Purpose: They provide the real input to the function, which is then used inside the function.


Example:

int result = add(5, 10);  // '5' and '10' are arguments (actual arguments)


**Key Differences between paramters and arguments:-**

Parameters are variables defined in the function signature, used as placeholders for the values passed to the function.

Arguments are the actual values or variables that you pass to the function when you call it.

Example Clarifying the Difference:

#include <stdio.h>

int multiply(int x, int y) 
{  
   // 'x' and 'y' are parameters (formal parameters)
   return x * y;
}

int main() 
{
    int a = 3, b = 4;
    int result = multiply(a, b);  // 'a' and 'b' are arguments (actual arguments)
    printf("Result: %d\n", result);
    return 0;
}

In this example:

x and y are parameters in the function multiply.
a and b are arguments that are passed to the function when it is called.




3) Function definition:-

      return_type  function_name(type1 arg1, type2 arg2……………)
      {
         Body of function
      }
       
      
Eg.

int sum(int a, int b)
{
   int c;
   c=a+b;
   return c;
} 


Example:-

main()
{
   int a,b,c;
   int sum(int, int);    //Function Prototype
   printf("Enter a and b: ");
   scanf("%d %d", &a, &b);

   c = sum(a,b);   // Function call
   printf("sum = %d", c);
}
// Function definition
int sum(int a, int b)
{
   int c;
   c = a + b;
   return c;
}

**Note**
If we define function before calling it, then no need of function prototype.

Eg.

// Function definition
int sum(int a, int b)
{
   int c;
   c = a + b;
   return c;
}
main()
{
   int a,b,c;
   printf("Enter a and b: ");
   scanf("%d %d", &a, &b);
   c = sum(a,b);   // Function call
   printf("sum = %d", c);
}



**Imp Points to Remember**

a) If we define function before calling it, then no need of function prototype

b) Static variable or integer: Increment/Decrement value is considered.

   Auto integer: 


c) return value --> returns computed value
   return --> terminate the function

   **VeryImpNote** 
   A function can only return one value.

   return a --> CORRECT
   return a,b --> WRONG

   Reason:-
   This is because C functions are designed to return a single result, which can be of any data type, including primitive types like int, char, float, pointers, or even complex data types like structures.


d) Default initial value of global variable is 0 (if not initialized).

Eg. 

int i;  // i = 0 (by default)
main()
{
   int a = i + 2;
   printf("a = %d", a);
}

Output:
a = 2

**Note**
Local variables (declared inside a function) are not automatically initialized. If not initialized explicitly, they will contain garbage (undefined) values.

Eg.

main()
{
   int i;
   int a = i + 2;
   printf("a = %d", a);
}

What Happens in This Code:

1) Uninitialized Local Variable i:

--> The variable i is declared but not initialized. Local variables (unlike global variables) in C are not automatically initialized, so i will have a garbage (undefined) value.
-->This means i will hold some random value left over in memory from previous operations, which leads to unpredictable behavior.

2) Assignment to a:

--> The expression int a = i + 2; attempts to add 2 to i, but since i contains an undefined value, the result stored in a will also be undefined and random.

3) Output via printf():

--> The printf("a = %d", a); line will print the value of a, but since a was calculated based on the garbage value of i, the output will also be unpredictable.


Important Point:-

Undefined Behavior: Since i is not initialized, this code leads to undefined behavior. The value of a will vary each time you run the program, depending on the random value stored in i.

Example Output:

The output could be something like:
a = 1567

But if you run the program again, the value of a might change to a completely different value, such as:
a = -342




**Remember**

Eg.

void Sum(int b)
{
    int Sum = a + b;
    printf("sum = %d", Sum); 
}

*Avoid naming variables with the same name as the function (for eg. Sum here) (even though case sensitivity makes this technically valid in C).*