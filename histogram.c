//WAP that takes some integer values from the user and print a histogram.

#include <stdio.h>
void main()
{
	int a,b[a],i,j;
	printf(" Enter  the histogram bar number (max-10)");
	scanf("%d",&a);
	printf("value (1-9)");	
	
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<b[i];j++)
		{
			printf("#");
		}
		printf("\n");
	}
	
}
