#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
  float x[10],y[10][10],sum,p,u,temp;
  int i,n,j,k=0,f,m;
  float fact(int);
 
  printf("How many record will you enter: ");
  scanf("%d",&n);
  for(i=0; i<n; i++)
  {
   printf("Enter the value of x%d: ",i);
   scanf("%f",&x[i]);
   printf("Enter the value of f(x%d): ",i);
   scanf("%f",&y[k][i]);
  }
  printf("Enter X for finding f(x): ");
  scanf("%f",&p);
 
  for(i=1;i<n;i++)
  {
    k=i;
    for(j=0;j<n-i;j++)
    {
     y[i][j]=(y[i-1][j+1]-y[i-1][j])/(x[k]-x[j]);
     k++;
    }
  }
  printf("\n_____________________________________________________\n");
  printf("\n  x(i)\t   y(i)\t    y1(i)    y2(i)    y3(i)    y4(i)");
  printf("\n_____________________________________________________\n");
  for(i=0;i<n;i++)
  {
    printf("\n %.2f",x[i]);
    for(j=0;j<n-i;j++)
    {
     printf("   ");
     printf(" %.2f",y[j][i]);
    }
   printf("\n");
  }
 
  i=0;
  do
  {
   if(x[i]<p && p<x[i+1])
    k=1;
   else
    i++;
  }while(k != 1);
  f=i;
 
  sum=0;
  for(i=0;i<n-1;i++)
  {
   k=f;
   temp=1;
   for(j=0;j<i;j++)
   {
    temp = temp * (p - x[k]);
    k++;
   }
    sum = sum + temp*(y[i][f]);
  }
  printf("\nf(%.2f) = %f ",p,sum);
  getch();
}

//#include<stdio.h>
//#include<conio.h>
 
//int main()
//{
//    int x[10], y[10], p[10];
//    float k,f,n,i,j=1,f1=1,f2=0;
//    printf("\nEnter the number of observations:\n");
//    scanf("%d", &n);
// 
//    printf("\nEnter the different values of x:\n");
//    for (i=1;i<=n;i++)
//        scanf("%d", &x[i]);
// 
//    printf("\nThe corresponding values of y are:\n");
//    for (i=1;i<=n;i++)
//        scanf("%d", &y[i]);
//    f=y[1];
//    printf("\nEnter the value of 'k' in f(k) you want to evaluate:\n");
//    scanf("%d", &k);
//    do
//    {
//        for (i=1;i<=n-1;i++)
//        {
//            p[i] = ((y[i+1]-y[i])/(x[i+j]-x[i]));
//            y[i]=p[i];
//        }
//        f1=1;
//        for(i=1;i<=j;i++)
//            {
//                f1*=(k-x[i]);
//            }
//        f2+=(y[1]*f1);
//        n--;
//        j++;
//    }
//    while(n!=1);
//    f+=f2;
//    printf("\nf(%d) = %d", k , f);
//    getch();
//}

