#include<stdio.h>
void main()
{
	int marks;
	printf("Enter marks: ");
	scanf("%d",&marks);
	if(marks>=80)
	{
		printf("A");
	}
	else if(marks<80 && marks>=70)
	{
		printf("B");
	}
	else if(marks<70 && marks>=60)
	{
		printf("C");
	}
	else if(marks<60 && marks>=50)
	{
		printf("D");
	}
	else
	{
		printf("Fail");
	}
}
