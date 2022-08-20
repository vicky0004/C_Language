//Wap to convert decimal to binari

#include <stdio.h>
int main(){
	int i=0,n,arr[100];
	printf("enter the number: ");
	scanf("%d",&n);
	while(n!=0){
		arr[i++]=n%2;
		n=n/2;
		
	}
	int size=i;
	for(i=0;i<size;i++){
		printf("%d",arr[i]);
	}
	
}
