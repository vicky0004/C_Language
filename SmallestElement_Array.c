 //WAP to read an array and find the smallest element and its position.
 #include <stdio.h>
 int main()
 {
 	int temp;
 	int pos=0;
 	int i,arr[100];
 	for(i=0;i<5;i++)
	 {
	 	printf("Enter %d element : ",i);
	 	scanf("%d",&arr[i]);
	 }
	 
	 temp=arr[0];
	 
	 for(i=0;i<5;i++)
	 {
	 	if(temp>arr[i])
	 	{
	 		temp=arr[i];
	 		pos=i;
	 		
		}
	 }
 	
 	printf("value = %d  pos = %d",temp,pos);
 }
