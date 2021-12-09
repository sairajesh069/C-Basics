#include<stdio.h>
void main()
{
	int eng,mat,phy,che,cs,total;
	double perc;
	printf("Enter marks of student: ");
	scanf("%d%d%d%d%d",&eng,&mat,&phy,&che,&cs);
	total=eng+mat+phy+che+cs;
	perc=total*1.0/5;
	printf("Total Marks= %d\n",total);
	printf("Percentage= %.2lf\n",perc);
	if(eng>=35 && mat>=35 && phy>=35 && che>=35 && cs>=35)
	{
		printf("Result: Pass\n");
		if(perc>=90)
		{
			printf("Grade: O");
		}
		else if(perc>=80)
		{
			printf("Grade: A");
		}
		else if(perc>=70)
		{
			printf("Grade: B");
		}
		else if(perc>=60)
		{
			printf("Grade: C");
		}
		else if(perc>=50)
		{
			printf("Grade: D");
		}
		else
		{
			printf("Grade: E");
		}
	}
	else
	{
		printf("Result: Fail\n");
		if(eng<35)
		{
			printf("Failed in English by %d marks\n",35-eng);
		}
		if(mat<35)
		{
			printf("Failed in Mathematics by %d marks\n",35-mat);
		}
		if(phy<35)
		{
			printf("Failed in Physics by %d marks\n",35-phy);
		}
		if(che<35)
		{
			printf("Failed in Chemistry by %d marks\n",35-che);
		}
		if(cs<35)
		{
			printf("Failed in Computer Science by %d marks",35-cs);
		}
	}
}
