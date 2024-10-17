1) char

--> occupies 1byte (8bits) in memory
--> format specifier: %c
--> Range: -128 to +127 (signed char)
            0 to 255 (unsigned char)


2) int

--> occupies 2bytes (16bits) in memory
--> format specifier: %d
--> Range: -32768 to +32767 (short signed int or signed int)
            0 to 65535 (short unsigned int or unsigned int -- %u)

Note: The sizes and ranges of int, short and long are compiler dependent. Sizes in this figures are are for 16-bit compiler


3) long signed int 

--> occupies 4bytes (32bits) in memory
--> format specifier: %ld
--> Range: -2147483648 to 2147483647


4) long unsigned int 

--> occupies 4bytes (32bits) in memory
--> format specifier: %lu
--> Range: 0 to 4294967295


5) float

--> occupies 4bytes (32bits) in memory
--> format specifier: %f
--> Range: -3.4e38 to +3.4e38


6) double

--> occupies 8bytes (64bits) in memory
--> format specifier: %lf
--> Range: -1.7e308 and +1.7e308


7) long double

--> occupies 10bytes (80bits) in memory
--> format specifier: %Lf
--> Range: -1.7e4932 to +1.7e4932


Note: 
1) double and long double are category of float.

2) %.2f    --> rounds and prints floating-point values to two decimal places.

    a) Used in printf to print floating-point numbers rounded to two decimal places.
    b) The %.2f format specifier limits the decimal places to two digits for better readability.
    
    Example: printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart); prints the real and imaginary parts of the complex roots rounded to two decimal places.

