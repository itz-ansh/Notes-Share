#include <stdio.h>

// Ex.1

/*
int x = 1;
main()
{
    int i;
    for(i=0;i<5;i++)
    {
        switch(i)
        {
            case 1: 
                    x+=1 ;
                    break ;

            case 2:   
                    x+=2;
            
            default:
                     printf("Hi\n");
        }
    }
}
*/


/*
int x = 1;
main()
{
    int i;
    for(i=0;i<5;i++)
    {
        switch(i)
        {
            case 1: 
                x+=1 ;
                break ;

            case 2:   
                x+=2;
            
            default:
                     printf("Hi");
        }
        printf("%d",x);
        printf("\n");
    }
}

//Output: Hi1 2 Hi4 Hi4 Hi4 

*/



int x = 1;
main()
{
    int i;
    for(i=0;i<5;i++)
    {
        switch(i)
        {
            case 1: 
                x+=1 ;
                break ;

            case 2:   
                x+=2;
                break;
            
            default:
                printf("Hi");
        }
        printf("%d ",x);
        printf("\n");  
    }
}

//Output: Hi1 2 4 Hi4 Hi4