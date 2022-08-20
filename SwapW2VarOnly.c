//WAP that swaps two numbers without using third variable.

#include <stdio.h>
int main()
{
	int x,y;
	printf("Enter x : ");
	scanf("%d",&x);
	printf("Enter y : ");
	scanf("%d",&y);
	
	printf("Before swap x = %d,y = %d\n",x,y);
	
	x=x+y;
	y=x-y;
	x=x-y;
	
	printf("Before swap x = %d,y = %d",x,y);

}
