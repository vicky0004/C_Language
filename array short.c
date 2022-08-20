#include <stdio.h>
//#include "C:\Vicky\c_Language\lab_class1\factorial.c"
int main(){
	int arr[10],i,temp,j;
	int max=0;
	for(i=0;i<10;i++){
		printf("Enter %dth numbers : ",i);
		scanf("%d",&arr[i]);	
	}
	for(i=0;i<10;i++){
		for(j=0;j<10;j++)
		if(arr[i]<arr[j]){				//change < to > deacending
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	for(i=0;i<10;i++){
	printf(" %d ",arr[i]);
	}
	return 0;
}
