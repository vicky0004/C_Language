#include <stdio.h>
struct emp{
	int id;  
    char name[30];  
    int salary;
	}emp;
  
void main()  
{  
	int n=1;
    FILE *fptr;  
    
    fptr = fopen("list.txt", "a+");/*  open for writing */  
    if (fptr == NULL)  
    {  
        printf("File does not exists \n");
        return;  
    }  
    //fprintf(fptr, "id	name	salary \n"); 
	while(n!=0){
    printf("Enter the id\n");  
    scanf("%d",&emp.id);  
    fprintf(fptr, "%d", emp.id);  
    printf("Enter the name \n");  
    scanf("%s", &emp.name);
    fprintf(fptr, "%s",emp.name);
    printf("Enter the salary\n");
    scanf("%d", &emp.salary);
    fprintf(fptr, "%d\n",emp.salary); 
    printf("Enter 1 for next and 0 for end.");
    scanf("%d",&n);
	}
    fclose(fptr);  
}  
