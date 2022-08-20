//WAP to count the total number of words in a string.
#include <stdio.h>
#include <string.h>
int main(){
	char a[100];
	int i=0,count=1;
	printf("Enter sentence : ");
	gets(a);
	for(i;i<strlen(a);i++){
		if(a[i]==' ')
			count++;
	}
	printf("total no. of words = %d",count);
	return 0;
}
