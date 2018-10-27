#include<stdio.h>
#include<math.h>

int x=180;
double rad1=0;
double z=0;
#define PI 3.14 

int main(void){
	printf("%d\n",x);
	rad1=x*PI/180;
	printf("%lf\n",rad1);
	z=sin(rad1);
	printf("%lf\n",z);
	}

