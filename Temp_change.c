#include <stdio.h>

int main()
{
  float f_temp,c_temp;
  printf("Enter temprature(fahrenheit) : ");
  scanf("%f",&f_temp);
  
	c_temp = (f_temp - 32) * 5 / 9;
	//f_temp = c_temp * 9 / 5 + 32;
	printf("%f celcius",c_temp);
	return 0;
	
}
  
