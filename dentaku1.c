#include "stdio.h"
#include "math.h"

int main(void)
{
    double  x, y, answer;
    char    a;

    printf( "四則演算をします。\n" );
    while( 1 ) {
        printf( "Ready : " );
        scanf( "%lf %c %lf", &x, &a, &y );
        switch( a ) {
        case '+': answer = x + y; break;
        case '-': answer = x - y; break;
        case '*': answer = x * y; break;
        case '/': answer = x / y; break;
        default:  printf( "演算記号が誤りです\n" );
                  break;
        }
        printf( "= %g\n", answer );
    }    
}

   
