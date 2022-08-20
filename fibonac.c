#include <stdio.h>
int main(){
	int n,i,a=0,b=1,total;
	printf("enter the numbers of terms: ");
	scanf("%d",&n);
	if(n==1){
		printf("%d",a);
		return 1;
	}
	if(n>=2){
		printf("%d %d ",a,b);
		for(i=2;i<n;i++){
			total=a+b;
			printf("%d ",total);
			a=b;
			b=total;
		}
	}
	return 0;
}
