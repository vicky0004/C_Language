//WAP to extract a substring from a given string.
#include <stdio.h>
#include <string.h>
int main(){
	char a[20],sub[20];
	int p,l,i,j=0;
	printf("Enter sentence : \n");
	gets(a);
	printf("enter the where to extract : ");
	scanf("%d",&p);
	printf("enter the length of substring : ");
	scanf("%d",&l);
	for(i=p-1;i<p+l-1;i++){
		sub[j]=a[i];
		j++;
	}
	sub[j]='\0';
	
	
	
	
	puts(sub);
	return 0;
}
