#include <stdio.h>
#include <math.h>

int main(){
	float a,x,c,b,r1,r2,r3;
	printf("Enter a\n");
	scanf("%f",&a);
	printf("Enter x\n");
	scanf("%f",&x);
	printf("Enter c\n");
	scanf("%f",&c);
	printf("Enter b\n");
	scanf("%f",&b);
	if (c<0 && x!=0)
	{
		r1=-(a*x)-c;
		printf("Result:%f",r1);
	}
	else if(c>0 && x==0)
	{
		r2=(x-a)/(-c);
		printf("Result is:%f",r2);
	}
	else {
		r3=b*x/(c-a);
		printf("Result is:%f",r3);
	}
}