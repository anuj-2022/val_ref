#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,j,n;
int  *ptr;
printf("Enter the size :\n");
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));
if(ptr==NULL)
	printf("memory iis not allocated\n");
for(i=0;i<n;i++)
{
printf("Enter the data %d \n",i+1);
scanf("%d",ptr+i);
}
for(i=0;i<n;i++)
printf("\n%d\t",*(ptr+i));
free(ptr);
}

