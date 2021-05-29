#include<stdio.h>
#include<math.h>
void main()
{
	
	int s,t;
	float a,b;
	printf("hello\nenter per of A=");
	scanf("%f",&a);
	printf("enter per of B=");
	scanf("%f",&b);
	
	if(a>=55 && b>=45)
	{
		printf("pass");			
	}
	else
	{
		if(a>=45 && b>=55)
		{
			printf("passed but A is having less % than B");		//per in for degree
		}
		else
		{
			if(a>=65 && b<45)
			{
				printf("reappear in B");
			}
			else
			{
				printf("fail");
			}
		}
	}
	
	getch();
	
}
