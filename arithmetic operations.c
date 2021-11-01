#include<stdio.h>
void main()
{
	int a,b,s,d,p,q,r;
	printf("Enter a and b values:");
	scanf("%d%d",&a,&b);
	s=a+b;
	d=a-b;
	p=a*b;
	q=a/b;
	r=a%b;
	printf("Sum of %d and %d is %d\n",a,b,s);
	printf("Difference of %d and %d is %d\n",a,b,d);
	printf("Product of %d and %d is %d\n",a,b,p);
	printf("Quotient when %d is divided with %d is %d\n",a,b,q);
	printf("Remainder when %d is divided with %d is %d\n",a,b,r);
	printf("Sum of all arithmetic operations is %d",(s+d+p+q+r));
}
