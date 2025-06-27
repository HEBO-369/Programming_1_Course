#include <stdio.h>
int main()
{
    int x ;
    int y = 1  ;
    printf("enter a number ");
    scanf("%d", &x );
    if ( x <= 12 && x >= 0)
    {
        while ( x >= 1 )
        {
            y = y * x ;
            x = x - 1 ;
        }
        printf ( "%d", y) ;
    }
    else
    {

        printf("please enter value between 0 - 12") ;
    }

    return 0 ;
}
