// sum of digits....


#include <stdio.h> 
int main()
{
	int a,temp,sum=0;
	printf("Enter the value : ");
	scanf("%d",&a);
	
	while(a>=1)
	{
	temp=a%10;
	sum=sum+temp;
	a=a/10;
	}
	
	printf("%d",sum);
}


