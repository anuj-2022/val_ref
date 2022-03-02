#include<stdio.h>

void swap(int a,int b);
void main()
{
int a,b,result=0;
printf("Enter the values\n");
scanf("%d %d",&a,&b);
printf("Before swapping a=%d b=%d\n",a,b);
swap(a,b);
}
void swap(int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;
printf("after swaping the value a=%d b=%d\n",a,b);
}

