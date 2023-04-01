#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define    f(x)    x*x - 4*cos(x)
#define   g(x)   2*x + 4*sin(x)

int main()
{
	float x0, x1, f0, f1, g0, e;
	int step = 1;
	printf("\nEnter initial guess:\n");
	scanf("%f", &x0);
	printf("\nStep\t\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");
	do
	{
	  g0 = g(x0);
	  f0 = f(x0); 
	  if(g0 == 0.0)
	  {
	   printf("Mathematical Error.");
	   exit(0);
	  }
	  x1 = x0 - f0/g0;
      f1 = f(x1);
      e = (x1-x0)/x1;
	  printf("%d\t\t%f\t%f\t%f\t%f\n",step,x0,f0,x1,f1);
	  x0 = x1;
	  step = step+1;
	 }while(e>0.05);
	 printf("\nRoot is: %f", x1);
}
