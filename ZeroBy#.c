#include <stdio.h>
int main()
{
	int size,i,j;
	printf("Enter the side of square : ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(j==0 || j==size-1 || i==0 ||i==size-1)
			{
				printf("#");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
}
