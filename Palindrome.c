//WAP to check a number is Palindrome or not
#include <stdio.h>
int main()
{
	int a,b,rev=0,r;
	printf("Enter the number : ");
	scanf("%d",&a);
	b=a;
	while(b!=0){
		r=b%10;
		rev=(rev*10)+r;
		b=b/10;
	}
	if(a==rev)
		printf("%d is a Palindrome number.\n",a);
	else
		printf("%d is not a Palindrome Number",a);
}
