#include <stdio.h>
int main()
{
	int ref_year=1901,year,leap=0,Total,day,diff;
	printf("Enter the year : ");
	scanf("%d",&year);
	diff=year-ref_year;
	while(year>ref_year){
	
	if(ref_year%100==0)
	{
		if(ref_year%400==0)
			leap++;
	}
	else if(ref_year%4==0)
		leap++;
		
	ref_year++;
	}
	Total=(diff-leap)*365+leap*366;
	day=Total%7;
	
	
	switch(day)
	{	case 0: printf("tuesday");
			break;
		case 1: printf("wednesday");
			break;
		case 2: printf("Thursday");
			break;
		case 3: printf("friday");
			break;
		case 4: printf("saturday");
			break;
		case 5: printf("sunday");
			break;
		case 6: printf("monday");
			break;
	}
	
	
	return 0;
	
}
