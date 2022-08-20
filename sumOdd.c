//WAP that read 5 numbers and sum of all odd values between them.

#include <stdio.h>
int main(){
	int i;
	int num[10];
	int sum= 0;

	for(i=0;i<10;i++){
		printf("Enter %d integers: ",i);
		scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++){
		if(num[i]%2!=0){
			sum=sum+num[i];
		}
	}
	printf("sum of all odd integers = %d ",sum);

}
