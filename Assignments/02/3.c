Question: 03
You are assisting a traveler who is planning a trip and needs to book a flight for a specific day and time
slot. The traveler is looking for the most convenient day and time slot where flights are available. You have
access to a 2D array representing the flight availability for different days and time slots.
The 2D array below represents the availability of flights for different days of the week and two time slots:
Morning and Evening. Each row corresponds to a day, and each column corresponds to a time slot. A value
of 1 indicates that the flight is available (not full) for that time slot, and 0 indicates that the flight is full.
       
  
  -                   -        figure           -                           -               -

  
  1. Analyze the flight availability for each day and time slot. Determine the day and time slot where
the traveler has the highest chance of booking a flight on the basis user preferences i.e. based
on time and price.
2. The traveler is flexible with the day of travel but prefers the morning time slot. Determine the
day(s) when a flight is available in the morning and suggest the best option for booking based on
this preference.
3. Considering the traveler's preference for an evening flight, identify the day(s) when an evening
flight is available and suggest the best option for booking based on this preference.
4. The traveler is inquiring about flights on a specific day. Confirm if flights are available or not and
provide the prices if available.
#include<stdio.h>
int main ()  {
	int price,schedule[5][4]={1,300,0,0,1,320,1,310,0,0,1,280,1,380,0,0,1,375,1,400},i=0,j,option,best_price=400,day;
		char time;
	printf("Want to check availability of flight  provided time slot and price\n");
		printf("Want to check availability of flight with best prices in morning\n");
			printf("Want to check availability of flight with best prices in evening\n");
				printf("inquiring about flights on a specific day\n");
				printf("choose an option\n");
				scanf("%d",&option);
				if (option==1) {
	printf("enter the time\n");
	scanf(" %c",&time);
	printf("enter the price\n");
	scanf("%d",&price);
	if (time=='M') { 
		while (i<5) { 
			j=0; 
			if (schedule[i][j]==1) { 
				++j;
				if (schedule[i][j]==price) {
				printf("the flight is available on day %d",i+1);
				return 0;
			}
			}   
		++i; 
	}	
	}
	 
	else {
			while (i<5) {
			j=2;  
			if (schedule[i][j]==1) {
				++j;
				if (schedule[i][j]==price) {
				printf("the flight is available on day %d",i+1);
				return 0;
			}
			}
			++i;
		}
	}
	printf("the flight isnot available");
}
else if (option==2) {
	j=1;
	while (i<5) {
		if (schedule[i][j]!=0&&schedule[i][j]<best_price) {
			best_price=schedule[i][j];
			++i;
		}
		++i;
	}
	printf("the best price available for the morning time is %d",best_price);
}
else if (option==3) { 
	j=3;
	while (i<5) {
		if (schedule[i][j]!=0&&schedule[i][j]<best_price) {
			best_price=schedule[i][j];
			++i;
		}
		++i;
	}
	printf("the best price available for the evening time is %d",best_price);
}
else if  (option==4) {
	printf("enter the day that you want to check the availability of the flights for\n");
	scanf("%d",&day);
	i=day-1;
	j=0;
	while (j<4) {
		if (schedule[i][j]==1)  {
			j++;
			if (j==1) 
			printf("the flight is available in the morning time and price=%d\n",schedule[i][j]);
			else if (j==3) 
				printf("the flight is available in the evening time and price=%d\n",schedule[i][j]);
		}
		j+=1;
	}
}
 return 0;
}  
