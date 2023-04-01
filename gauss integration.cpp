#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) exp(x)
int main(){
	float a,b,z1,z2,c1,c2,x1,x2,v;
	printf("The function is e^x.");
	printf("\nEnter lower and upper limit: ");
	scanf("%f %f",&a,&b);
	c1=c2=1;
	z1= -0.57735;
	z2= 0.57735;
	x1 =(b-a)*z1/2+(b+a)/2;	
	x2 =(b-a)*z2/2+(b+a)/2;
	v = (b-a)*(f(x1)+f(x2))/2;
	printf("The value of intergration is : %.3f",v);
	getch();
	return 0;
}
