#include <stdio.h>

// ImpNote: printf() doesn’t print the '\0'

// Printing a string


//Method 1 --> using %c format specifier

main()
{
    char str[] = "Hello" ;
    for (int i=0; i<5; i++)
        printf("%c", str[i]);
}


main( )
{
 char name[ ] = "Klinsman" ;
 int i = 0 ;
 while ( name[i] != '\0' )
 {
 printf ( "%c", name[i] ) ;
 i++ ;
 }
}
// Output:    Klinsman
/*  This program doesn’t rely on the length of the string (number of
characters in it) to print out its contents and hence is definitely
more general than the earlier one.   */




//Method 2 --> using %s format specifier

main( )
{
 char str[ ] = "Klinsman" ;
 printf ("%s", str) ;
}

