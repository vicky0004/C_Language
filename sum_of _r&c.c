//131.135.

#include <conio.h>
int main()
{
	int arr[3][3],i,j;
	int sc,sr;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter %d%d element : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		sr=sc=0;
		for(j=0;j<3;j++)
		{
			sr=sr+arr[i][j];
			sc=sc+arr[j][i];
		}
		printf("Sr= %d , Sc= %d\n",sr,sc);
	}

	
	
	return 0;
}
