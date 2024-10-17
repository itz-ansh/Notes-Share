1) if statement:

Syntax:- 

    if(condition)
    {                  
        statement1             
        statement2
        ............
    }
  

ImpNote: 
a) Any statement written between these two curly brackets is called compound statement. 
b) If only one statement, then there is no need for any curly brackets.  

Eg. 

main()
{
    int a = 10;


#unary operators (++, --, +, -, !, and ~) always get priority over binary operators (+, -, *, /). 
#compulsory condition or section??

2) if-else statement:

Syntax:- 

    if(condition)
    {
        statement1
        statement2
        .....
    }
    else
    {
        statement3
        statement4
        .....
    }


3) 

Syntax:-

    if(condition1)
        if(condition2)
            if(condition3)
                statement3
        else
            statement4
    else
        statement5
    


4) if-else ladder or else if:

Syntax:-

    if (condition 1)
        statement1
    else if (condition2)
        statement2
        else if (condition2)
            statement3
            else
                statement4



Eg. 

main( )
{
int m1, m2, m3, m4, m5, per ;
per = ( m1+ m2 + m3 + m4+ m5 ) / per ;
if ( per >= 60 )
    printf ( "First division" ) ;
else if ( per >= 50 )
    printf ( "Second division" ) ;
else if ( per >= 40 )
    printf ( "Third division" ) ;
else
    printf ( "fail" ) ;
} 

You can note that this program reduces the indentation of the
statements. In this case every else is associated with its previous if.
*The last **else** goes to work only if all the conditions fail.* 

Imp Note:
a) Even in **else if** ladder the last else is *optional*.

b) **else if** clause is nothing different. It is just a way of
rearranging the else with the if that follows it. This would be
evident if you look at the following code:-

if ( i == 2 )                                         if ( i == 2 )
    printf ("With you…");                                 printf ("With you…" ); 
else                                                  else if ( j == 2 )
{                                                         printf ( "…All the time " );
    if ( j == 2 )
    printf ( "…All the time");
}