#include <stdio.h>
int main()
{
	int h,m;
	float h_angle,m_angle,Total;
	printf("Enter Time seperated with space : ");
	scanf("%d %d",&h,&m);
	
	m_angle=m*6;
	h_angle=((h*60)+m)*0.5;
	Total= m_angle - h_angle;
	if(Total<0){
		Total=Total*(-1);
	}
	printf("Angle between hour and minute hand : %.2f",Total);
	
	return 0;
} 
