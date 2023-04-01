#include<stdio.h>
#include<conio.h>
#include<math.h>
#define   f(x)   x*x - 4*cos(x)
int main()
{
	
	 float x0, x1, x2, f0, f1, f2, e,eabs;
	 int step = 1;
	 up:
	 printf("\nEnter two initial guesses:\n");
	 scanf("%f%f", &x0, &x1);
	 f0 = f(x0);
	 f1 = f(x1);
	 if( f0*f1 > 0.0)
	 {
		  printf("Incorrect Initial Guesses.\n");
		  goto up;
	 }
	 printf("\nStep\t\tx0\t\tx1\t\tx2\t\tf(x2)\n");
	 do
	 {
		  x2 = x0 - (x1-x0) * f0/(f1-f0);
		  f2 = f(x2);
		  e = (x2-x1)/x2;
		  if(e<0){
		      e = e*-1;
          }
		  printf("%d\t\t%f\t%f\t%f\t%f\n",step, x0, x1, x2, f2);
		  if(f0*f2 < 0)
		  {
			   x1 = x2;
			   f1 = f2;
		  }
		  else
		  {
			   x0 = x2;
			   f0 = f2;
		  }
		  step = step + 1;
	
	 }while(e>0.05);

	 printf("\nRoot is: %f", x2);
	 getch();
	 return 0;
}
