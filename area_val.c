#include<stdio.h>

int arearect(int length,int width);

void main()
{
int result=0;
result=arearect(10,50);
printf("%d\n",result);
}

int arearect(int length,int width)
{
return (length*width);
}

