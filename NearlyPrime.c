#include <stdio.h>

int main()
{
	int a,i,flag=0,flag1=0,up,dn;
	printf("Enter number : ");
	scanf("%d",&a);
	up=a+1;
	dn=a-1;
	for(i=2;i<up;i++)
	{
		if(up%i==0)
		{
			flag=1;
			break;
		}
	}
	for(i=2;i<dn;i++)
	{
		if(dn%i==0)
		{
			flag1=1;
			break;
		}
	}
	if(flag==0||flag1==0)
		printf("%d is nearly prime number",a);
	else
		printf("%d is not a nearly prime number",a);
	return 0;
	
}
