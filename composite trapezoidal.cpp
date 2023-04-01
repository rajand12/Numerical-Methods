#include<stdio.h>
#include<conio.h>
#define f(x) x*x*x+2
int main(){
	int i,k;
	float a,h,x0,xn,fx0,fxn,v,term=0;
	printf("The function is x^3 + 2.");
	printf("\nEnter lower and upper limit: ");
	scanf("%f %f",&x0,&xn);
	printf("Enter number of segments: ");
	scanf("%d",&k);
	h = (xn-x0)/k;
	fx0=f(x0);
	fxn=f(xn);
	term = f(x0)+f(xn);
	for(i=1;i<=k-1;i++){
		a=x0+i*h;
		term=term+2*(f(a));
	}
	v = h*term/2;
	printf("The value of intergration is: %.3f",v);
	getch();
	return 0;
}

