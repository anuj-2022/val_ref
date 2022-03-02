#include<stdio.h>

int fun(int a);

void main()
{
	int n,rev=0;
	printf("Enter the number:\n");
	scanf("%d",&n);
	rev=fun(n);
	if(rev==n)
                printf("number is Palindrome %d",rev);
        else
                printf("number is not Palindrome %d",rev);

}

int fun(int a)
{
	int rev=0,rem,original,i;
//	original=a;
	while(a!=0)
	{
	rem=a%10;
	rev=rev*10 + rem;
	a=a/10;
	}
return rev;

}
