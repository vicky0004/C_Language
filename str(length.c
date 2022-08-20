//WAP to find the length of a string without using library function.
#include <stdio.h>
#include <string.h>
int main(){
	char a[]="vickykumar.com";
	int i=0,j=0;
	while(a[i]!='\0'){
		j++;
		i++;
	}
	printf("%d",j);
	
	return 0;
}
