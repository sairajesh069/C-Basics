#include<stdio.h>
void main()
{
	int n,sum;
	printf("Enter n value:");
	scanf("%d",&n);
	sum=(n*(n+1))/2;
	printf("Sum of first %d natural numbers is %d",n,sum);
}
