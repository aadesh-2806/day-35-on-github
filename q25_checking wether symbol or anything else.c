#include<stdio.h>
#include<math.h>
void main()
{
	
	int s,t;
	char n;
	printf("hello\nenter any character=");
	scanf("%c",&n);
	
	if(n>=65 && n<=90)
	{
		printf("capital letter");			
	}
	else
	{
		if(n>=97 && n<=122)
		{
			printf("small letter");
		}
		else
		{
			if(n>=48 && n<=57)
			{
				printf("digit");
			}
			else
			{
				printf("symbol");
			}
		}
	}
	
	getch();
	
}
