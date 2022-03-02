#include<stdio.h>

#define ll 10
#define ww 50
int arearect(int *length,int *width);

void main()
{
unsigned int result=0,l,w;
l=ll;
w=ww;
//printf("Enter the length and width");
//scanf("%d %d",&l,&w);
result=arearect(&l,&w);
printf("%d\n",result);
}

int arearect(int *length,int *width)
{
unsigned int area=0;
	area=*length * *width;
return area;
}

