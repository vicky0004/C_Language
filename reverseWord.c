// reverse the word without using strrev()
#include <stdio.h>
#include <string.h>
int main(){
	int i,j,k=0;
	char name[20];
	printf("enter the name : \n");
	scanf("%s",name);

	char temp[strlen(name)];
	temp[strlen(name)]='\0';
	
	for(i=strlen(name)-1;i>=0;i--){
		temp[k]=name[i];
		k++;
	}
	printf("%s",temp);
	return 0;
}
