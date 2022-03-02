#include<stdio.h>

void swap(int *a,int *b);
void main()
{
int a,b,result=0;
printf("Enter the values\n");
scanf("%d %d",&a,&b);
printf("Before swapping a=%d b=%d\n",a,b);
swap(&a,&b);
printf("after swaping the value a=%d b=%d\n",a,b);
}
void swap(int *a,int *b)
{
*a=*a+*b;
*b=*a-*b;
*a=*a-*b;
//printf("after swaping the value a=%d b=%d\n",a,b);
}

