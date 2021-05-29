#include<stdio.h>

void main()
{
	
	int n1,n2,n3;
	
	printf("hello\nenter 3 n0.=");
	scanf("%d%d%d",&n1,&n2,&n3);
	
	if(n1>n2 && n1>n3)
	{
		printf("%d is largest",n1);
	}
	if(n1<n2 && n2>n3)
	{
		printf("%d is largest",n2);
	}
	if(n3>n2 && n1<n3)
	{
		printf("%d is largest",n3);
	}
	getch();
	
}
