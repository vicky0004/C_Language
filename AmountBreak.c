//WAP to read an amount(interge value) and break the amount into smallest possible
//number of  bank notes.

#include <stdio.h>
int main(){
	int a,b,c;
	printf("enter the amount : ");
	scanf("%d",&a);
	printf("%d note(s) of 2000.0\n",a/2000);
	printf("%d note(s) of 1000.0\n",(a%2000/1000));
	printf("%d note(s) of 500.0\n",(((a%2000)%1000)/500));
	printf("%d note(s) of 200.0\n",(((a%2000)%1000)%500)/200);
	printf("%d note(s) of 100.0\n",((((a%2000)%1000)%500)%200)/100);
	
	
	b=(((((a%2000)%1000)%500)%200)%100);
	printf("%d note(s) of 50.0\n",b/50);
	printf("%d note(s) of 20.0\n",(b%50)/20);
	printf("%d note(s) of 10.0\n",((b%50)%20)/10);
	
	
	c=(((b%50)%20)%10);
	printf("%d sikka of 5 rupee\n",c/5);
	printf("%d sikka of 2 rupee\n",(c%5)/2);
	printf("%d sikka of 1 rupee\n",((c%5)%2));
		
	return 0;
}


