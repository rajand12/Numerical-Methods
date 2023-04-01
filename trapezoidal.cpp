#include<stdio.h>
#include<conio.h>
#define f(x) x*x*x + 2
int main(){
	float h,x0,x1,fx0,fx1,v;
	printf("The function is x^3 + 2.");
	printf("\nEnter lower and upper limit: ");
	scanf("%f %f",&x0,&x1);
	h = x1-x0;
	fx0=f(x0);
	fx1=f(x1);
	v = h*(fx1+fx0)/2;
	printf("\nThe value of intergration : %.3f",v);
	getch();
	return 0;
}

