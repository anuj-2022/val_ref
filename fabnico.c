#include<stdio.h>

void fabnico(int a);
void main()
{
	int n;
	printf("Enter the no of count:\n");
	scanf("%d",&n);
	fabnico(n);
}

void fabnico(int a)
{
	int n=0,n1=1,n2,i;
	printf("Serise is..\n");
	printf("%d\t%d\t",n,n1);
	for(i=3;i<=a;i++)
	{
	n2=n+n1;
	printf("%d\t",n2);
	n=n1;
	n1=n2;
	}
} 
