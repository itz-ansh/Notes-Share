Array:- collection of same data types


1D Array:
  --> Reading and Printing
  --> Passing array into a function (using *call by reference* ie. pointers concept) -- **written notes**
  --> Array sorting
  --> Array searching
      a) linear searching
      b) binary searching 



**Declaration or Syntax:-**
    
    Type arrayname [array size];


**Imp Note:-** 
Array size --> integer constant --> ie. CAN'T be variable and CAN'T be 0 and float

    Eg. int Ansh[10];

    Eg. int a[] = {1,4,5,6}    OR    int a[4] = {1,4,5,6}
        
        a[0] = 1
        a[1] = 4
        a[2] = 5
        a[3] = 6



**Reading and Printing:-**

Eg 1) Print the values in a given array.

int A[] = {2,1,5,6,7};
for(i=0;i<=4;i++)
    printf("%d", A[i])


Eg 2) Enter the values in a array.

    int  a[100], i, n; 
    printf(“Enter the elements”);
    for(i=0;i<5;i++)
        scanf("%d", &a[i]);













In 2D array:-
Row is optional but column is mandatory during initialization?