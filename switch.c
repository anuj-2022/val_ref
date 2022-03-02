#include<stdio.h>
#include<stdlib.h>

void malloc_fun(void);
void calloc_fun(void);
void main()
{
	int n;
	printf("Enter the choice\n1. malloc fun\n2. calloc fun\n");
	scanf("%d",&n);
	switch(n)
	{
	case 1:
		malloc_fun();
		break;
	case 2:
		calloc_fun();
		break;
	default:
		malloc_fun();

}
}

void malloc_fun(void)
{
	int i,j,*ptr,n;
	printf("Enter the size in malloc fun:\n");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL)
        printf("memory is not allocated\n");
	for(i=0;i<n;i++)
	{
	printf("Enter the data %d \n",i+1);
	scanf("%d",&ptr[i]);
	}
	for(i=0;i<n;i++)
	printf("%p %d\n",&ptr[i],ptr[i]);
	printf("Reverse data is :\n");
	for(i=0;i<n;i++)
	printf("%d\t",ptr[n-i-1]);

	free(ptr);
}

void calloc_fun(void)
{
	int i,j,*ptr,n;
	printf("Enter the size in calloc fun:\n");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	if(ptr==NULL)
        printf("memory is not allocated\n");
	for(i=0;i<n;i++)
	{
	printf("Enter the data %d \n",i+1);
	scanf("%d",&ptr[i]);
	}
	for(i=0;i<n;i++)
	printf("%p %d\n",&ptr[i],ptr[i]);
	printf("Reverse data is :\n");
	for(i=0;i<n;i++)
	printf("%d\t",ptr[n-i-1]);

	free(ptr);
}

