//WAP if it is possible to make a triangle with them then find perimeter of the triangle

#include <stdio.h>
int main(){
	int a,b,c,d;
	printf("Enter all three sides of triangle ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a<(b+c) && b<(a+c) && c<(a+b)){
		printf("triangle is possible.\n");
		printf("perimeter of triangle = %d",a+b+c);
	}
	else
		printf("Triangle is not possible..");
}
