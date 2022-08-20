//WAP to find maximum occurring character in a string.
#include <stdio.h>
#include <string.h>
int main(){
	char a[100];
	int i,j,max=0,index,count;
	printf("Enter sentence : ");
	gets(a);
	for(i=0;i<strlen(a);i++){
		count=1;
		for(j=i+1;j<strlen(a);j++){
			if(a[i]==a[j]&&a[i]!=' ')
				count++;
		}
		if(max<count){
			max=count;
			index=i;
		}
			
	}
	printf("maximum occuring character  : %c-%d times",a[index],max);
	
	return 0;
}
