//WAP to find divisor of integer n

#include <stdio.h>
int main(){
	int  n,i;
	printf("Enter n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d\n",i);
		}
		
	}
	
	
}
