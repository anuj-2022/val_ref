#include<stdio.h>

int enm_check(int);

enum check{NO,YES};
void main()
{
int n=0,result=0;
printf("Enter the number\n");
scanf("%d",&n);
result=enm_check(n);
if(result==YES)
printf("even\n");
else
printf("odd\n");

}
int enm_check(int v)
{
if(v%2==NO)
return YES;
else
return NO;
}

