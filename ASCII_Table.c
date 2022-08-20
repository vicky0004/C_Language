#include <stdio.h>
int main()
{
	int a,A;
	for(a=65;a<91;a++){
		printf("[%d-%c]",a,(char)a);
	}
	for(A=97;A<=122;A++){
		printf("[%d-%c]",A,(char)A);
	}
}
