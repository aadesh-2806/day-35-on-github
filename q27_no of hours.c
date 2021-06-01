#include<stdio.h>
#include<math.h>
void main()
{
	
	int s,t;
	float n;
	printf("hello\nenter no of hours=");
	scanf("%f",&n);
	 
	if(n>=2 && n<=3)
	{
		printf("highly efficient");			
	}
	else
	{
		if(n>3 && n<=4)
		{
			printf("improve speed");
		}
		else
		{
			if(n>4 && n<=5)
			{
				printf("need training");
			}
			else
			{
				if(n>5)
				{
					printf("sorry but you are fired");
				}
			}
		}
	}
	
	getch();
	
}
