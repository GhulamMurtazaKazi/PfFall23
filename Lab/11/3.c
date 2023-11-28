3. Write a program to compare two dates entered by the user. Make a structure named Date to store
the elements day, month and year to store the dates. If the dates are equal, display "Dates are equal"
otherwise display "Dates are not equal".
  #include <stdio.h>
#include <string.h>

/*desc: Write a program to compare two dates entered by the user. Make a structure named Date to store
the elements day, month and year to store the dates. If the dates are equal, display "Dates are equal"
otherwise display "Dates are not equal".
*/

struct Date
{
	int day;
	int month;
	int year;
};


int main()
{
 //Array of Struct
struct Date date1; 
printf("enter the day ");
scanf("%d", &date1.day);
printf("enter the month");
scanf("%d", &date1.month);
printf("enter the year");
scanf("%d", &date1.year);
struct Date date2; //t is an array of struct
printf("enter the day ");
scanf("%d", &date2.day);
printf("enter the month");
scanf("%d", &date2.month);
printf("enter the year");
scanf("%d", &date2.year);


//checking the year of joining
	if(date1.day==date2.day){
	
	if(date1.month==date2.month){
	
	if(date1.year==date2.year){
		printf("they are same");
	}
	else{
		printf("not same");
	}
}
}
}
