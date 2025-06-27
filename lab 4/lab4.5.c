#include<stdio.h>
#include<math.h>
const double PI = 3.1415926 ;
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
double deagretorad( double x ){
 double radian = x * ( PI / 180 ) ;
 return radian ;


}
double power(double n , int m ){
double result = 1 ;
for (int i =0 ;i < m ; i++){
  result = result * n ;
}
return result ;
}
double siin(double x , int N ){
     double  value ;

   double  radian = deagretorad(x) ;
for ( int i = 0 ; i < N ; i++)
        {
            int term = (2 * i + 1) ;
            double currunt_term = power( -1, i ) * power( radian, term ) / factorial( term ) ;
            value = value + currunt_term ;
        }
        printf("sin ( %lf ) = %lf \n", x, value);


return value ;

}
int main ()
{
      int N ;
    double  x ;
   printf("enter the x in degree ");
    scanf("%lf",&x);
    printf("enter the numbers of terms ");
    scanf("%d",&N);
    if ( N <= 12 && N >= 0)
    {
       siin(x,N);

    }
    else
    {

        printf("please enter value of N between 0 - 12") ;
    }

    return 0 ;
}
