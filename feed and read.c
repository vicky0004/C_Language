#include <stdio.h>
struct st{
	char roll[15];
    char fname[30];
    //char lname[20];
    int marks;
	}std;
	
void main()
{  
	char ch;
	int n=1;
    FILE *fptr;
    fptr = fopen("vicky.txt","w+");/*  open for writing */  
    fprintf(fptr, "roll no		name		marks\n"); 
    fprintf(fptr, "___________________________________\n"); 
	while(n!=0){
    printf("Enter roll no.: ");
    gets(std.roll);
    //scanf("%s",std.roll);
    printf("Enter name: ");
    //scanf("%s%s",&std.fname,&std.lname);
    gets(std.fname);
    printf("Enter marks: ");
    scanf("%d",&std.marks);
    fprintf(fptr,"%s	%s	%d",std.roll,std.fname,std.marks);
    printf("Enter 1 for next and 0 for end. ");
    scanf("%d",&n);
	}
	rewind(fptr);
	printf("\n\n");
	while(ch!=EOF){
		ch=fgetc(fptr);
		printf("%c",ch);
		
	}
    fclose(fptr);
}  
