#include <stdio.h>
int main()
{
    int const constant = 3 ;
    int input ;
    printf(" guess  a number between 1 - 10 : ") ;

    do
    {
        scanf("%d",&input) ;

        if ( input == constant )
        {

            printf ("that is a correct answer ");
            return 0 ;
        }
        else if  ( input > 10 || input < 1)
           {
                printf(" please enter a number between 1 - 10 ") ;
            }
        else
        {
            printf(" that is wrong , try again :" );
        }
    }
    while( input != constant );


}
