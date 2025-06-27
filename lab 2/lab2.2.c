#include <stdio.h>
int main()
{
    int x ;
    printf("enter a number ");
    scanf("%d", &x );
    while ( x > 0 )
    {
        printf ("%d\n", x) ;
        x = x - 2 ;
    }

    return 0 ;
}
