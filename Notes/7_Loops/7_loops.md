Note: 
a) local variable is preferred over global variable.

b) Arguments:- In C programming, the term "argument" typically refers to the values or parameters passed to a function. However, in loops, the term might be used more informally to describe variables or conditions that control the loop's execution.



1) while loop

Syntax:-

    initialization;
    while (condition)
    {
        body of loop
        increment/decrement
    }


Eg)

main()
{
  int i = 0;
  while (i<=5)
  {
    printf("%d", i);
    i++;
  }
}



2) for loop

Syntax:-

    for(initialization; condition; increment/decrement)
    {
        body of loop
    }


Eg)

int i;
for (i=0;i<10;i++)
{
    printf("%d", i);
}

        OR

for (int i=0;i<10;i++)
{
    printf("%d", i);
}



3) do while loop

Syntax:-

    initialization;
    do
    {
        body of loop
        increment/decrement
    }
    while (condition);


**ImpNote**
In *do while* loop, body of the loop is executed atleast once but it is NOT in the case of *while* loop.


Eg1)

main()
{
  int i = 0;
  do
  {
    printf("%d", i);
    i++;
  } 
  while (i<=5);
}


Eg2) Observe:-


main()
{
  int i = 0;
  while (i<0);
  {
    printf("%Hello");
    i++;
  }
}

Output: Nothing


main()
{
  int i = 0;
  do
  {
    printf("Hello");
    i++;
  } 
  while (i<0);
}

Output: Hello



