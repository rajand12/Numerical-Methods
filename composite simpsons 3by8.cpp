#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) exp(x)
int main(){
	int i,k;
	float a,h,x0,xn,fx0,fxn,v,term=0;
	printf("The function is e^x.");
	printf("\nEnter lower and upper limit: ");
	scanf("%f %f",&x0,&xn);
	printf("Enter the number of segments: ");
	scanf("%d",&k);
	h = (xn-x0)/k;
	fx0=f(x0);
	fxn=f(xn);
	term = f(x0)+f(xn);
	for(i=1;i<=k-1;i++){
		a=x0+i*h;
		if(i%3!=0){	
			term=term+3*(f(a));
		}
		else{
			term=term+2*(f(a));		
		}
	}
	v = 3*h*term/8;
	printf("The value of intergration is: %.3f",v);
	getch();
	return 0;

}
