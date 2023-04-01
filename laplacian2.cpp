#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define   SIZE   10

int main()
{
	 float a[SIZE][SIZE], x[SIZE], ratio;
	 int i,j,k,n=4;
	 a[1][1]=-4;a[1][2]=1;a[1][3]=1;a[1][4]=0;
	 a[2][1]=1;a[2][2]=-4;a[2][3]=0;a[2][4]=1;
	 a[3][1]=1;a[3][2]=0;a[3][3]=-4;a[3][4]=1;
	 a[4][1]=0;a[4][2]=1;a[4][3]=1;a[4][4]=-4;
	 printf("Use this program only after creating equations\n\n");
	 printf("Enter the total of first equation:");
	 scanf("%f",&a[1][5]);
	 printf("Enter the total of second equation:");
	 scanf("%f",&a[2][5]);
	 printf("Enter the total of third equation:");
	 scanf("%f",&a[3][5]);
	 printf("Enter the total of last equation:");
	 scanf("%f",&a[4][5]);
	 for(i=1;i<=n-1;i++)
	 {
		  if(a[i][i] == 0.0)
		  {
			   printf("Mathematical Error!");
			   exit(0);
		  }
		  for(j=i+1;j<=n;j++)
		  {
			   ratio = a[j][i]/a[i][i];
			   
			   for(k=1;k<=n+1;k++)
			   {
			  		a[j][k] = a[j][k] - ratio*a[i][k];
			   }
		  }
	 }
	 
	 x[n] = a[n][n+1]/a[n][n];
	
	 for(i=n-1;i>=1;i--)
	 {
		  x[i] = a[i][n+1];
		  for(j=i+1;j<=n;j++)
		  {
		  		x[i] = x[i] - a[i][j]*x[j];
		  }
		  x[i] = x[i]/a[i][i];
	 }
	 printf("\nSolution:\n");
	 for(i=1;i<=n;i++)
	 {
	  	printf("x[%d] = %0.3f\n",i, x[i]);
	 }
}
