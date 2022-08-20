#include <stdio.h>
int main()
{
	float W,H,BMI;
	printf("please enter your weight(kg) and Height(meter) : ");
	scanf("%f %f",&W,&H);
	BMI=W/(H*H);
	if(BMI>=25){
		printf("%d  BMI over weight",BMI);
	}
	else if(BMI<18.5){
		printf("%d BMI under weight",BMI);
	}
	else
		printf("%d BMI Healthy",BMI);
		
	return 0;
}
