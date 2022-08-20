#include <stdio.h>
void main()
{
	char a[100];
	printf("enter all string.  \n");
	gets(a);
	printf("old array : [%s]\n",a);
	int r,w;
	for(r=0;a[r]==' ';r++);
	for(w=0;a[r];r++)
	{
		if(a[r]==' ' && a[r-1]==' ')
			continue;
		a[w++]=a[r];
	}
	if(a[w-1]==' ')
		a[w-1]='\0';
	else
		a[w]='\0';
	printf("new string : [%s]\n",a);
}
