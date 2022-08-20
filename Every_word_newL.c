//WAP to prints each word of a sentence in separate line.

#include <stdio.h>
void main()
{
	char a[100];
	int r;
	printf("Enter string : ");
	gets(a);
	for(r=0;a[r];r++){
		if(a[r]==' ')
			a[r]='\n';
	}
	printf("%s",a);
}
