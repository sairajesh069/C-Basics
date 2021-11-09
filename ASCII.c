#include<stdio.h>
void main()
{
	int n;
	char ch;
	printf("Enter any number:");
	scanf("%d",&n);
	printf("Corresponding ASCII character for %d is %c\n",n,n);
	printf("Enter any character:");
	scanf("%c%c",&ch,&ch);
	printf("Corresponding ASCII number for %c is %d",ch,ch);
}
