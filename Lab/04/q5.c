/*
*Programmer:Ghulam Murtza
*Date:12-9-23
*Description:This program tells which person is older.*/


//--Include File--//
#include<stdio.h>
int main () {
	int year_1,month_1,date_1,year_2,month_2,date_2;
	printf("enter date,month,year of birth of 1st person\n");
	scanf("%d %d %d",&date_1,&month_1,&year_1);
	printf("enter date,month,year of birth of 2nd person\n");
	scanf("%d %d %d",&date_2,&month_2,&year_2);
	if (year_1-year_2<0) {
		printf("1st person is older");
	}  else if (year_1-year_2==0)
	{
		if (month_1-month_2<0) {
				printf("1st person is older");
		} else if (month_1-month_2==0) {
			if (date_1-date_2<0) {
				printf("1st person is older");
			} else if (date_1-date_2==0) {
				printf("both are of same");
			} else {
					printf("2nd person is older");
				
			}
		} else { 
		printf("2nd person is older");
			
		}
	} else {
		printf("2nd person is older");
	}
	return 0;
}
