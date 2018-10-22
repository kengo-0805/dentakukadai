#include "stdio.h"
#include "math.h"

#define PI 3.141592
double rad1, rad2;
double  x, y, limit1, limit2, answer;
        char    a,b,c;
        char dammy;

 

int main(void)
{
	printf("四則演算をします\n");
	
	while(1){
	printf( "Ready \n" );
	scanf("%c",&b);
	scanf("%lf",&x);
       	scanf("%c",&a);
	scanf("%c",&c);
	scanf("%lf",&y);
	scanf("%c",&dammy);
	
	switch(b){
		rad1 = x * PI / 180;
		case 's':
			limit1 = sin(rad1); break;
		case 'c':
			limit1 = cos(rad1); break;
		case 't':
			limit1 = tan(rad1); break;
		default: limit1 = x; break;
	}
	

	switch(c){
		rad2 = y * PI / 180;
        	case 's':
			limit2 = sin(rad2); break;
        	case 'c':
			limit2 = cos(rad2); break;
        	case 't':
			limit2 = tan(rad2); break;
        	default: limit2 = y; break;
        }
	
	
	switch(a) {
		case '+':
			answer = limit1 + limit2; break;
		case '-':
			answer = limit1 - limit2; break;
		case '*':
			answer = limit1 * limit2; break;
		case '/':
			if(limit2 == 0){
				printf("定義外です。");
			}
			answer = limit1 / limit2; break;
		
	//default:  printf( "演算記号が誤りです\n" );
	//           breaak  
	}
	printf("=%lf\n",answer);

}

}   
