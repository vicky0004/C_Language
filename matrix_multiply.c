//WAP to multiply two of matrix

#include<stdio.h>
int main()
{
	int m1,n1,m2,n2,i,j,k,sum;
	printf("Enter First matrix order(as :m1*n1) : ");
	scanf("%d*%d",&m1,&n1);
	printf("Enter Second matrix order(as :m2*n2) : ");
	scanf("%d*%d",&m2,&n2);
	int arr1[m1][n1],arr2[m2][n2],arr3[m1][n2];
	if(n1!=m2)
	{
		printf("Multiplication is not possible....");
	}
	else
	{
		for(i=0;i<m1;i++){
			for(j=0;j<n1;j++){
				printf("Enter %d%d element of first matrix : ",i,j);
				scanf("%d",&arr1[i][j]);
			}
		}
		for(i=0;i<m2;i++){
			for(j=0;j<n2;j++){
				printf("Enter %d%d element of Second matrix : ",i,j);
				scanf("%d",&arr2[i][j]);
			}
		}
		for(i=0;i<m1;i++){
			for(j=0;j<n2;j++){
				sum=0;
				for(k=0;k<n1;k++){
					sum+=arr1[i][k]*arr2[k][j];
				}
				arr3[i][j]=sum;
			}
		}
	/*	printf("\n\n matrix1 : \n");
		for(i=0;i<m1;i++){
			for(j=0;j<n1;j++){
				printf("  %d  ",arr1[i][j]);
			}
			printf("\n");
		}
		printf("\n\n matrix2 : \n");
		for(i=0;i<m2;i++){
			for(j=0;j<n2;j++){
				printf("  %d  ",arr2[i][j]);
			}
			printf("\n");
		}
	*/	printf("\n\nmatrix1 x matrix2 = matrix3 :\n");
		for(i=0;i<m1;i++){
			for(j=0;j<n2;j++){
				printf("  %d  ",arr3[i][j]);
			}
			printf("\n");
		}
	}
}

