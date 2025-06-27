#include <stdio.h>
int main()
{
    int x, sum ;
    int y = 0  ;
    printf("enter a number ");
    scanf("%d", &x );
    for ( int i = x ; i >= 1 ; i --)
    {
        y += i ;
    }

    sum = x * (x + 1) / 2 ;
    printf ( "%d\n%d", y, sum ) ;
    return 0 ;
}

