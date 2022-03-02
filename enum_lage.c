#include<stdio.h>
#include<stdlib.h>
#define PI 3.14 


void malloc_fun(void);
void calloc_fun(void);
void palindrome(void);
void fabnico(void);
void swap(void);
void area_circle(void);
void area_rectangl(void);

//enum week{mon,tue,wed,thu,fri,sat,sun};

void main()
{
	enum days{Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
//    	enum days weekDay;
    	int i = 0;

//    	printf("Insert a week day: ");
//    	scanf("%s",&weekDay);
//	char n[10];
	printf("Enter the choice\n0. area_circle\n1. area_rectangl\n2. malloc\n3. calloc\n4. swap\n5. fabnico\n6. palindrime\n");
	scanf("%d",&i);
	switch(i)
	{
	case Sunday:
		area_circle();
		break;
	case Monday:
		area_rectangl();
		break;
	case Tuesday:
                malloc_fun();
                break;
        case Wednesday:
                calloc_fun();
                break;
	case Thursday:
                swap();
                break;
        case Friday:
                fabnico();
                break;
	case Saturday:
                palindrome();
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

void area_circle(void)
{
	unsigned int r,result=0;
	printf("Enter the redius of circle :\n");
	scanf("%d",&r);
	result=3.14*r*r;
	printf("Area of the circle is %d\n",result);
}

void area_rectangl(void)
{
unsigned int l=0,w=0,r=0;
printf("Enter the length and width of rectangle\n");
scanf("%d %d",&l,&w);
r=l*w;
printf("area of rectangle is %d\n",r);
}

void swap(void)
{
int a,b;
printf("Enter the value of a and b :\n");
scanf("%d %d",&a,&b);//a=10,b=20
printf("Before swapping a=%d b=%d\n",a,b);
a=a+b;//a=10+20,a=30
b=a-b;//b=30-20,b=10
a=a-b;//a=30-10,a=20
printf("after swapping a=%d b=%d\n",a,b);
}

void fabnico(void)
{
        int n=0,n1=1,n2,i,a;
	printf("Enter the number of count :\n");
	scanf("%d",&a);
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

void palindrome(void)
{
        int rev=0,rem,original,i,a;
        printf("Enter the number in palindrome:\n");
        scanf("%d",&a);

        original=a;
        while(a!=0)
        {
        rem=a%10;
        rev=rev*10 + rem;
        a=a/10;
        }
	if(rev==original)
                printf("number is Palindrome %d",rev);
        else
                printf("number is not Palindrome %d",rev);

}

