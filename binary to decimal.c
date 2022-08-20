//Wap to convert decimal to binary
//#include <math.h>
#include <stdio.h>
int power(int);
int main(){
	int i=0,n,num=0,r;
	printf("enter the number: ");
	scanf("%d",&n);
	while(n!=0){
		r=n%10;
		num+=r*power(i++);								// pow(2,i++) while using math.h header file
		n=n/10;
		
	}
	printf("%d",num);
	return 0;
	
}
int	power(int x){
	int result=1;
	while(x!=0){
		result*=2;
		x--;
	}
		return result;
}
	
