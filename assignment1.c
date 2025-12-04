//program to swap two numbers
#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	printf("before swapping:a=%d,b=%d",a,b);
	c=a;
	a=b;
	b=c;
	printf("after swapping:a=%d,b=%d",a,b);
}
