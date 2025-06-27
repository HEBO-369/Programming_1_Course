#include<stdio.h>
#include<math.h>
int factorial ( int num )
{
    int fact = 1 ;
    while ( num >=1 )
    {
        fact = fact * num ;
        num = num - 1 ;
    }
    return fact ;
}
int main ()
{
    const float PI = 3.1415926 ;
    int N ;
    double x, value ;
    printf("enter the x in degree ");
    scanf("%lf",&x);
    printf("enter the numbers of terms ");
    scanf("%d",&N);
    if ( N <= 12 && N >= 0)
    {
        float radian = x * ( PI / 180 ) ;
        for ( int i = 0 ; i < N ; i++)
        {
            int term = (2 * i + 1) ;
            double currunt_term = pow( -1, i ) * pow( radian, term ) / factorial( term ) ;
            value = value + currunt_term ;
        }
        printf("sin ( %lf ) = %lf \n", x, value);
    }
    else
    {

        printf("please enter value of N between 0 - 12") ;
    }

    return 0 ;
}
