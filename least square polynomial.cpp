#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int n,i,j,k,m;
	float a[20][20],b[20],z[20],x[20], y[10];
	float sum, pivot, term;
	printf("Enter the no Of points: ");
	scanf("%d",&n);
	printf("Enter the degree of polynomial to be fitted : ");
	scanf("%d",&m);
	fflush(stdin);	
	for(i=0;i<n;i++){
		printf("Enter value of x : ");
		scanf("%f",&x[i]);
		printf("Enter value of fx : ");
		scanf("%f",&y[i]);		
	}
	fflush(stdin);
	for(i=0;i<=m;i++){
		for(j=0;j<=m;j++){
			sum = 0;
			for(k=0;k<n;k++)
				sum+=pow(x[k],i+j);
			a[i][j] = sum;
		}
	} 
	for(i=0;i<=m;i++){
		sum = 0;
		for(k=0;k<n;k++)
			sum+=y[k]*pow(x[k],i);
	    b[i] = sum;
	}	
	for(k =0;k<m;k++){
		pivot  = a[k][k];
		if(pivot<0.000001)
			printf("method failed \n");
		else
			for(i=k+1;i<=m;i++){
				term = a[i][k]/pivot;
				for(j=0;j<=m;j++){
					a[i][j] = a[i][j] - a[k][j]*term;
				}
				b[i] = b[i]-b[k]*term;
			}
		
	}
	z[m] = b[m]/a[m][m]; 
	for(i =m-1;i>=0;i--){
		sum = 0;
		for(j=i+1;j<=m;j++){
			sum = sum+a[i][j]*z[j];
		}
		z[i] = (b[i]-sum)/a[i][i];
	}	
	printf("The polynomial of regression is :\n");
	printf(" y = %0.4f+%0.4fx",z[0],z[1]);
	for(i=2;i<=m;i++){
		printf("+%fx^%d",z[i],i);
	}
	getch();
	return 0;
}

