//rever

#include <stdio.h>
int main()
{
	int a,b,d,i,arr[20];
	int count=1;
	printf("Enter the original numer : ");
	scanf("%d",&a);
	d=a;
	for(i=0;i<20;i++)
	{
		d=d/10;
		if(d>0)
		{
			count++;
		}
	}
	printf("after reverse the value : ");
	for(i=0;i<count;i++)
	{
		b=a%10;
		arr[i]=b;
		a=a/10;
		printf("%d",arr[i]);
	}
}
