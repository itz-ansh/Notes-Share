Strings ---> simply put, a special kind of array.


What are Strings??

a) The way a group of integers can be stored in an integer array,
   similarly a group of characters can be stored in a character array.

b) Character arrays are many a time also called strings.

c) Many languages internally treat strings as character arrays, but somehow
   conceal this fact from the programmer. Character arrays or strings are used by 
   programming languages to manipulate text such as words and sentences.

d) A string constant is a one-dimensional array of characters
   terminated by a null ('\0'). For example:- 

    char str_name[ ] = { 'H', 'A', 'E', 'S', 'L', 'E', 'R', '\0' } ;

                      OR

    char str_name[ ] = "HAESLER" ;

    Note that, in this declaration '\0' is not necessary. C inserts the
    null character automatically.
    

**Note**
Each character in the array occupies *one byte* of memory and the
last character is *always* '\0'. What character is this? It looks like
two characters, but it is actually only one character, with the \
indicating that what follows it is something special. 
--> '\0' is called null character. 

        **Observe** 
        '\0' and '0' are not same. 
        ASCII value of '\0' = 0 
        ASCII value of '0' = 48

**ImpPoint**
The terminating null ('\0') is important, because it is the only way
the functions that work with a string can know where the string
ends. In fact, a string not terminated by a '\0' is not really a string,
but merely a collection of characters.


**Syntax:-**

     char string_name[string size];


**Key Points about string size**

a) The string size specifies the number of elements (characters) that the array (or string) can hold. This includes the space needed for the null terminator ('\0') that marks the end of the string in C.

b) Total Characters + 1 (for '\0'): The size must be large enough to hold all the characters of the string plus one extra space for the null terminator. For example, if you want to store the string "Hello", which has 5 characters, the size should be at least 6 to accommodate the null terminator.

   char str[6];  // Size is 6: 5 for 'H', 'e', 'l', 'l', 'o', and 1 for '\0'

c) Fixed Size: The size of a character array is fixed once it is declared. You cannot change its size dynamically unless you use dynamic memory allocation (e.g., with malloc or calloc).

d) If Size is Too Small: If the size is smaller than the number of characters you try to store, the string will not fit properly and may cause memory issues like buffer overflows or truncated strings.

   char str[4] = "Hello";  // Error: 'Hello' has 5 characters, but size is only 4

e) Compiler Automatically Adds Null Character: If you initialize a string with double quotes like char str[] = "Hello";, the compiler will automatically determine the size and add the null terminator for you, so you don’t need to explicitly provide the size.

   char str[] = "Hello";  // Compiler sets size to 6: 5 characters + 1 null terminator

f) Size Can Be Larger Than Needed: If you declare a larger size than necessary, the string will take up only part of the array, and the rest of the array will contain garbage values (unless explicitly initialized).

   char str[10] = "Hello";  // Size is 10, but only 6 (including '\0') are used









