#include <stdio.h>

int main()
{
	int mon , day;
	int week;
	int year[] = { 0 , 31 , 29 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 };
	int n;
	int i;
	char week_day[] = { Monday , Tuesday , Wednesday , Thursday , Friday , Saturday , Sunday};
	
	while(1)
	{
		scanf("%d %d" , &mon , &day);
		if(mon == 0)
		{
			break;
		}
		
		for( i = 0 ; i <= mon - 1 ; i++)
		{
			n += year[i];
		}
		
		n += day;
		
		week = (n % 7 + 3) % 7;
		
		switch(week)
		{
			case 1:
			{
				printf("Monday\n");
			}
			
			case 2:
			
