////1. Write a program to approximate the functional value at any given x from given n no. of data using Lagrange�s interpolation.
//
//#include<stdio.h>
//int main(){
//	int i,valueToFind,num;
//	float foundValue;
//	printf("Enter the number of values available: ");
//	scanf("%d",&num);
//	int x[100],fx[100];
//	for(i=0;i<num;i++){
//		printf("Enter the value of x%d:",i+1);
//		scanf("%d",&x[i]);
//		printf("Enter the value of fx%d: ",i+1);
//		scanf("%d",&fx[i]);
//	}
////		printf("%d",x[1]);
////		printf("Hello World");
//	printf("Enter the value of x for which you want functional value: ");
//	scanf("%d",&valueToFind);
//	
////	printf("%d",x[1]);
//	foundValue = float((float(valueToFind-x[1])/(x[0]-x[1]))*fx[0]) + ((float(valueToFind-x[0])/(x[1]-x[0]))*fx[1]);
//	printf("The functional value of %d is %.2f",valueToFind,foundValue);
//}
#include<stdio.h>
#include<conio.h>
int main()
{
	 float x[100], y[100], xp, yp=0, p;
	 int i,j,n;
	 /* Input Section */
	 printf("Enter number of data: ");
	 scanf("%d", &n);
	 printf("Enter data:\n");
	 for(i=1;i<=n;i++)
	 {
		  printf("x[%d] = ", i);
		  scanf("%f", &x[i]);
		  printf("y[%d] = ", i);
		  scanf("%f", &y[i]);
	 }
	 printf("Enter interpolation point: ");
	 scanf("%f", &xp);
	 /* Implementing Lagrange Interpolation */
	 for(i=1;i<=n;i++)
	 {
		  p=1;
		  for(j=1;j<=n;j++)
		  {
			   if(i!=j)
			   {
			    	p = p* (xp - x[j])/(x[i] - x[j]);
			   }
		  }
		  yp = yp + p * y[i];
	 }
	 printf("Interpolated value at %.3f is %.3f.", xp, yp);
	 getch();
}
