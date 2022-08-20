#include <stdio.h>
int main()
{
	int a,x,i,b,temp,count=0;
	printf("Enter the number : ");
	scanf("%d",&a);
	printf("Which digit you want to count in %d : ",a);
	scanf("%d",&x);
	b=a;
	for(i=0;i<100;i++)
	{
		temp=b%10;
		b=b/10;
		if(temp==x)
		{
			count++;
		}
	}
	printf("%d comes %d times in %d",x,count,a);
}
