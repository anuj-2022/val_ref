#include<stdio.h>
#define original 101

int fun(int *a);

void main()
{
	int n,rev=0;
//	printf("Enter the number:\n");
//	scanf("%d",&n);
	n=original;
	rev=fun(&n);
	if(rev==original)
                printf("number is Palindrome %d\n",rev);
        else
                printf("number is not Palindrome %d\n",rev);

}

int fun(int *a)
{
	int rev=0,rem;
//	original=a;
	while(*a!=0)
	{
	rem=(*a%10);
	rev=rev*10 + rem;
	*a=(*a/10);
	}
return rev;

}
