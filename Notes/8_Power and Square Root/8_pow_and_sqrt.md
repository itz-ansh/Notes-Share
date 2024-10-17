1) Power

Syntax:-   

pow(x,y) --> read as *x to the power y*


2) Square root

Syntax:-

sqrt(x) --> read as *square root of x*


3) to access pow and sqrt :-

#include <math.h>



**Imp Note:-**
Both *pow* and *sqrt* return float values!! Agar int form me print karoage toh 0 aayega!!

Eg 1) 

main()
{
  int x = 5;
  printf("square of x is %d", pow(x,2));       --> Ans = 0 ie. galat aayega
}

main()
{
  double x = 5;                                --> float and long double bhi chaljata yaha
  printf("square of x is %lf", pow(x,2));      --> Ans = 25.0 aayega ie. sahi
}


**But we can use typecasting to get answer in int form:----**

main()
{
  double x = 5, y;
  y = pow(x,2);
  printf("square of x is %d", int(y));      --> Ans = 25
}
                      
                      OR

main()
{
  double x = 5, y;
  y = pow(x,2);
  int z = int(y);
  printf("square of x is %d", z);
}




Eg 2) Same will be in case of square root

main()
{
  float x = 5, y;
  y = sqrt(x);
  printf("square root of x = %f is %f", x, y);
}

          OR

main()
{
  int x = 5; float y;
  y = sqrt(x);
  printf("square root of x = %d is %f", x, y);
}




**Imp Note:-**

Observe the following code:

main()
{
  int b = -5;
  printf("%f", sqrt(b));     --> Ans:   -nan(ind)
}

**In C, when you see -nan(ind) or nan(ind), it refers to "Not a Number" (NaN) with an "indeterminate" form. This happens when an operation results in an undefined or invalid numerical result.**