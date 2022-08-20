//WAP to separate the individual characters from a string.
#include <stdio.h>
#include <string.h>
int main(){
	char a[]="vickykumar.com";
	int i=0;
	while(a[i]!='\0'){
		printf("\'%c\' ",a[i]);
		i++;
	}
	
	return 0;
}
