//count the digit of number

#include <stdio.h>
int main()
{
	int a,i,arr[20];
	int count=1;
	printf("Enter the original numer : ");
	scanf("%d",&a);
	for(i=0;i<20;i++)
	{
		a=a/10;
		if(a>0)
		{
			count++;
		}
	}
	printf("%d",count);
}
