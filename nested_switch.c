#include<stdio.h>
void main()
{
	int a,b,choice,ac,rc,bc;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("1. Arithmetic\n2. Relational\n3. Bitwise\nEnter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("1. +\n2. -\n3. *\n4. /\n5. %%\nEnter your choice:");
			scanf("%d",&ac);
			switch(ac)
			{
				case 1:
					printf("%d + %d = %d",a,b,a+b);
					break;
				case 2:
					printf("%d - %d = %d",a,b,a-b);
					break;
				case 3:
					printf("%d * %d = %d",a,b,a*b);
					break;
				case 4:
					printf("%d / %d = %d",a,b,a/b);
					break;
				case 5:
					printf("%d %% %d = %d",a,b,a%b);
					break;
				default:
					printf("Enter valid input");
					break;
			}
			break;
		case 2:
			printf("1. >\n2. >=\n3. <\n4. <=\n5. ==\n6. !=\nEnter your choice:");
			scanf("%d",&rc);
			switch(rc)
			{
				case 1:
					printf("%d > %d = %s",a,b,a>b?"True":"False");
					break;
				case 2:
					printf("%d >= %d = %s",a,b,a>=b?"True":"False");
					break;
				case 3:
					printf("%d < %d = %s",a,b,a<b?"True":"False");
					break;
				case 4:
					printf("%d <= %d = %s",a,b,a<=b?"True":"False");
					break;
				case 5:
					printf("%d == %d = %s",a,b,a==b?"True":"False");
					break;
				case 6:
					printf("%d != %d = %s",a,b,a!=b?"True":"False");
					break;
				default:
					printf("Enter valid input");
					break;
			}
			break;
		case 3:
			printf("1. &\n2. |\n3. ^\nEnter your choice:");
			scanf("%d",&bc);
			switch(bc)
			{
				case 1:
					printf("%d & %d = %d",a,b,a&b);
					break;
				case 2:
					printf("%d | %d = %d",a,b,a|b);
					break;
				case 3:
					printf("%d ^ %d = %d",a,b,a^b);
					break;
		    	default:
					printf("Enter valid input");
					break;
			}
			break;
		default:
			printf("Enter valid input");
			break;
	}
}
