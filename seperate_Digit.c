//WAP that accepts one seven-digit number and separates with double spaces.
#include <stdio.h>
int main()
{
	int i,x,arr[7],temp;
	int j=0;
	printf("Enter the values : ");
	scanf("%d",&x);
	for(i=6;i>=0;i--)
	{
		temp=x%10;
		arr[i]=temp;
		x=x/10;
		
	}
	for(j=0;j<7;j++)
	{
		printf("%d  ",arr[j]);
	}
	
	
	
}
