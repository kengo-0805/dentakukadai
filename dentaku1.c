#include "stdio.h"
#include "math.h"

#define PI 3.141592
	double rad1, rad2;
	double x, y, limit1, limit2, answer,restert;
	char a,b,c,s,t,e;
	char dammy;

 

int main(void)
{
	printf("四則演算をします\n終了するときはeを入力してください\n");
	
	
		printf( "Ready:" );
		scanf("%c",&b);		//sin cos tan
		if(b == 'e'){
		a = 'e';//終了条件
		} else {
		scanf("%lf",&x);	//数字
		scanf("%c",&a);		//+-*/
		scanf("%c",&c);		//sin cos tan
		scanf("%lf",&y);	//数字
		scanf("%c",&dammy);	//Enter
		}
		if(b == s || c || t) rad1 = x * PI / 180;	//三角関数の時のみ実行
		if(c == s || c || t) rad2 = y * PI / 180;	//三角関数の時のみ実行
	switch(b){
		case 's':
			limit1 = sin(rad1); break;
		case 'c':
			limit1 = cos(rad1); break;
		case 't':
			limit1 = tan(rad1); break;
		case 'l':
			limit1 = log(x); break;
		
		default: limit1 = x; break;
	}
	

	switch(c){
        	case 's':
			limit2 = sin(rad2); break;
        	case 'c':
			limit2 = cos(rad2); break;
        	case 't':
			limit2 = tan(rad2); break;
        	case 'l':
			limit2 = log(y); break;

		default: limit2 = y; break;
        }
	
	
	switch(a){
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
		
		default:  printf( "演算記号が誤りです\n"); break;  
	}
	
	if(b != 'e')printf("=%lf\n",answer);


	while( a != 'e' ){

		limit1 = answer;

		printf("%lf",limit1);
		scanf("%c",&a);		//+-*/
		if(a == 'e')break;	//終了条件
		scanf("%c",&c);		//sin cos tan
		scanf("%lf",&y);	//数字
		scanf("%c",&dammy);	//Enter

		if(c == s || c || t) rad2 = y * PI / 180;	//三角関数の時のみ実行	

	switch(c){
        	case 's':
			limit2 = sin(rad2); break;
        	case 'c':
			limit2 = cos(rad2); break;
        	case 't':
			limit2 = tan(rad2); break;
        	case 'l':
			limit2 = log(y); break;

		default: limit2 = y; break;
        }
	
	
	switch(a){
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
		
		default:  printf( "演算記号が誤りです\n"); break;  
	}
	
	printf("=%lf\n",answer);
	
	}

}   
