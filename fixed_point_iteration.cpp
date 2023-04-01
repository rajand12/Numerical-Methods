#include<stdio.h>
#include<math.h>
#define   f(x)   sin(x)-2*x+1
#define   g(x)   (1+sin(x))/2

int main()
{
	 int step=1;
	 float x0, x1, e;
	 printf("Enter initial guess: ");
	 scanf("%f", &x0);
	 printf("\nStep\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");
	 do
	 {
		  x1 = g(x0);
		  printf("%d\t%f\t%f\t%f\t%f\n",step, x0, f(x0), x1, f(x1));
		  step = step + 1;
          e = (x1-x0)/x1;		  
		  x0 = x1;
		  
	 }while(abs(e)>0.05);
	 
	 printf("\nRoot is %f", x1);
	 return(0);
}
