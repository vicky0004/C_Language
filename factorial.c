#include <stdio.h>
#include <string.h>

//pass by value
int fact(int x){
	int i,k=1;
	for(i=1;i<=x;i++)
	{
		k=k*i;
	}
	return k;
}

//pass poiter as reference
void facto(int *p){
	int i;
	for(i=*p-1;i>=1;i--){
		*p=i*(*p);
	}
	
	
}
int main(){
	int b,r,m;
	printf("Enter the number : ");
	scanf("%d",&b);
	r=b;
	facto(&r);
	m=fact(b);
	printf("\t\t--pass by Value--\n");
	printf("Factorial of %d = %d\n",b,m);
	printf("\t\t--pass by reference--\n");
	printf("Factorial of %d = %d",b,r);
	return 0;
}
