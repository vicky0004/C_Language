// reverse function in string.h
#include <stdio.h>
#include <string.h>
int main(){
	char name[20];
	
	printf("enter the name : \n");
	scanf("%s",name);
	strrev(name);
	printf("%s",name);
}
