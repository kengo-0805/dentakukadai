#include "stdio.h"
#include "math.h"

int main(void)
{
    double  a, b, ans;
    char    op;

    printf( "四則演算をします。\n" );
    while( 1 ) {
        printf( "Ready : " );
        scanf( "%lf %c %lf", &a, &op, &b );
        switch( op ) {
        case '+': ans = a + b; break;
        case '-': ans = a - b; break;
        case '*': ans = a * b; break;
        case '/': if( b == 0.0 ) {
                     printf( "ゼロでの割算はできません)\n" );
                     continue;
                  }
                  ans = a / b; break;
        default:  printf( "演算記号が誤りです)\n" );
                  continue;
        }
        printf( "= %g\n", ans );
    }
    printf( ".... Power OFF\n" );
}

   
