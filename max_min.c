//WAP to find difference of the max and min values of four numbers.

#include <stdio.h>
int main(){
	int arr[4],i,min,max;
	for(i=0;i<4;i++)
	{
		printf("enter %d  element ",i);
		scanf("%d",&arr[i]);
		min=arr[0];
		max=arr[0];
	}
	for(i=0;i<4;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	printf("max = %d,min = %d,difference = %d",max,min,max-min);
}
