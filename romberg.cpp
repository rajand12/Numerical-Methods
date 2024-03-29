#include<stdio.h>
#include<conio.h>
#include <math.h>
#define f(x) x*x*x + 2
int main(){
	float x0,xn,t[10][10],h,sm,sl,a;
	int i,k,r,m,p,q;
	printf("The function is x^3 + 2.");
	printf("\nEnter lower and upper limit: ");
	scanf("%f %f",&x0,&xn);
	fflush(stdin);
	printf("Enter p and q for t{p,q}: ");
	scanf("%d %d",&p,&q);
	h = xn-x0;
	t[0][0] = h*(f(x0)+f(xn))/2;	
	// to find t[i][0]
	for(i=1;i<=p;i++){
		sl = pow(2,i-1);
		sm =0;
		for(k=1;k<=sl;k++){
			a= x0+(2*k-1)*h/pow(2,i);
			sm+=f(a);
		}
		t[i][0]=(t[i-1][0]/2)+(h*sm/pow(2,i));
	}
	//to find[i][j]
	for(i=1;i<=p;i++){
		for(k=1;k<=i&&k<=q;k++){
			m=i-k;
			t[m+k][k] = ((pow(4,k)*t[m+k][k-1])-t[m+k-1][k-1])/(pow(4,k)-1);
		}
	}
 	printf("\nRomberg estimation of integration is: %.3f",t[p][q]);
	getch();
	return 0;
}
