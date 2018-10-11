#include "stdio.h"
#include "math.h"

int main(void)
{
    double  a, b, ans;
    char    op;

    printf( "加減乗除(+,-,*,/)ができます。\n" );
    while( 1 ) {
        printf( "Ready : " );
        if( scanf( "%lf %c %lf", &a, &op, &b ) != 3 ) break;
        switch( op ) {
        case '+': ans = a + b; break;
        case '-': ans = a - b; break;
        case '*': ans = a * b; break;
        case '/': if( b == 0.0 ) {
                     printf( "Error!(ゼロでの割算はできません)\n" );
                     continue;
                  }
                  ans = a / b; break;
        default:  printf( "Error!(演算記号の指定が誤りです)\n" );
                  continue;
        }
        printf( "= %g\n", ans );
    }
    printf( ".... Power OFF\n" );
}

   
