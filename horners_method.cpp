#include <stdio.h>
int main()
{
    int n,i,x,a[100],sum=0;
    printf("\nEnter degree of the polynomial X :: ");
    scanf("%d",&n);
    printf("\nEnter coefficient's of the polynomial X :: \n");
    for(i=n;i>=0;i--)   
    {
        printf("\nEnter Coefficient of [ X^%d ] :: ",i);
        scanf("%d",&a[i]);
    }
    printf("\nEnter the value of X :: ");
    scanf("%d",&x);
    for(i=n;i>0;i--)
    {
        sum=(sum+a[i])*x;
    }
    sum=sum+a[0];
    printf("\nValue of the polynomial at %d is  %d.",x,sum);
    return 0;
}
