#include "stdio.h"
#include "math.h"

int main(void)
{
    double  x, y, answer;
    char    a;

    printf( "四則演算をします。\n" );
    while( 1 ) {
        printf( "Ready : " );
        scanf( "%lf", &x);
       	scanf("%c", &a);
	scanf("%lf", &y);
	
	switch( a ) {
        case '+': answer = x + y; break;
        case '-': answer = x - y; break;
        case '*': answer = x * y; break;
        case '/': if(y == 0){
		printf("定義外です。");
		}
		answer = x / y; break;
        default:  printf( "演算記号が誤りです\n" );
                  break;
        }
        printf( "= %g\n", answer );
    }    
}

   
