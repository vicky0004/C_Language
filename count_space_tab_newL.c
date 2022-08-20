#include <stdio.h>
int main()
{
	char s[100];
	int i=0;
	int blank=0,tab=0,newL=0;
	printf("Enter the sentence(ending with .) :");
	
	scanf("%[^.]s",s);
	
	for(i=0;i<100;i++)
	{
		if(s[i]==' ')
			blank++;
		if(s[i]=='\t')
			tab++;
		if(s[i]=='\n')
			newL++;
		if(s[i]=='.')
			break;
	}
	printf("blank= %d, tab= %d, NewLine= %d",blank,tab,newL);
}
