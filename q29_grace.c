#include<stdio.h>
#include<math.h>
void main()
{
	
	int a,b;
	printf("hello\nenter class=");
	scanf("%d",&a);
	printf("enter subject failed=");
	scanf("%d",&b);
	
	switch(a)
	{
		case 1:
			if(b>3)
			{
				printf("no grace");
			}
			else
			{
				printf("grace of 5 marks");
			}
			break;
		case 2:
			if(b>2)
			{
				printf("no grace");
			}
			else
			{
				printf("grace of 4 marks");
			}
			break;
		case 3:
			if(b>1)
			{
				printf("no grace");
			}
			else
			{
				printf("grace of 5 marks");
			}
			break;
	}
	getch();
	
}
