// print the root of ax^2+bx+c=0 (bhaskara's formula)

#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	float d,x,y;
	printf("let equation is ax^2+bx+c=0  then \n");
	printf("Enter the value of a,b,c : ");
	scanf("%d %d %d",&a,&b,&c);

	d= (b*b)-(4*(a)*(c));

	d=sqrt(d);
	x=(-b+d)/(2*a);
	y=(-b-d)/(2*a);
	printf("roots are (%.1f,%.1f)",x,y);

	return 0;
}
