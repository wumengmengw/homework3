#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	int d;
	int max;
	printf("Please input first number:\n");
	scanf("%d",&a);
	printf("Please input second number:\n");
    scanf("%d",&b);
	printf("Please input third number:\n");
	scanf("%d",&c);
	printf("Please input forth number:\n");
	scanf("%d",&d);
	if(a>b)
	{
		max=a;
		a=b;
		b=max;
	}
	if(b>c)
	{
		max=b;
		b=c;
		c=max;
	}
	if(c>d)
	{
		max=c;
		c=d;
		d=max;
	}
	if(a>b)
	{
		max=a;
		a=b;
		b=max;
	}
	if(b>c)
	{
		max=b;
		b=c;
		c=max;
	}
	if(a>b)
	{
		max=a;
		a=b;
		b=max;
	}
	printf("\n%d,%d,%d,%d\n",a,b,c,d);
}
