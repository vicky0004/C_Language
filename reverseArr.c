//WAP to Reverse an array with size n.

#include <stdio.h>
int main(){
	int  n,i,arr1[100],arr2[100];
	int j=0;
	printf("Enter n : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter %d element : ",i);
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d   ",arr1[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		arr2[j]=arr1[i];
		j++;
		
		
	}
	for(i=0;i<n;i++)
	{
		printf("\narr2[%d]  %d",i,arr2[i]);
	}
		
	
	
	
}
