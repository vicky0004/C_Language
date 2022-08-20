//WAP to copy a given string into another and count the number of characters.

#include <stdio.h>
int main()
{
	int i=0;
	char arr1[100],arr2[100];
	printf("Enter the word : ");
	scanf("%s",arr1);
	printf("%s ",arr1);
	while(arr1[i]!='\0')
	{
		arr2[i]=arr1[i];
		i++;
	}
	printf("Numbers of characters = %d",i);
}
