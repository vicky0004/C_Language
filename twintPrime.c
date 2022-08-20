#include <stdio.h>
// wap to print twin prime numbers under first 100  prime number


int main(){
	int n,i,p,stwin;
	int k=1;
	n=2;
	int flag=0;
	int ftwin=2;
	printf("program running.......\n");
	while(k<=100){
		for (i=2;i<n;i++){
			if (n%i==0)
				flag=1;
		}
		if(flag==0){
			stwin=n;
			p=stwin-ftwin;
			k++;
			if(p==2){
				printf("(%d,%d) \n",ftwin,stwin);
			}
			ftwin=stwin;
		}
		flag=0;
		n++;
	}
	printf("\n\n end....\n");
	return 0;
}
