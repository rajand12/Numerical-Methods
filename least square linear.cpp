#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int n,i,j,k;
	float a= 0,b=0,x[10], y[10],sx=0,sy=0,sxy=0,sx2=0;
	printf("Enter the no Of points: ");
	scanf("%d",&n);
	fflush(stdin);	
	for(i=0;i<n;i++){
		printf("Enter value of x : ");
		scanf("%f",&x[i]);
		printf("Enter value of fx : ");
		scanf("%f",&y[i]);		
	}
	fflush(stdin);
	//calculate sumation 
	for(i=0;i<n;i++){
		sx +=x[i];
		sy+=y[i];
		sxy +=x[i]*y[i]; 
		sx2+=pow(x[i],2);
	}
	b = ((n*sxy)-(sx*sy))/((n*sx2)-pow(sx,2));
	a = (sy/n)-(b*sx/n);
	
	printf("The fitted line is :  %f+%fx",a,b);
	getch();
	return 0;
}

