// WAP to convert a integer(in second) to hours ,minutes and seconds

#include <stdio.h>
int main(){
	int a,hour,min,sec;
	printf("Enter the values in second : ");
	scanf("%d",&a);
	
	hour=a/3600;
	min =(a%3600)/60;
	sec=(a%3600)%60;
	printf("%dh:%dm:%ds",hour,min,sec);
	return 0;
}
