/*
*Programmer:Ghulam Murtza
*Date:12-9-23
*Description:This program tells which person is older.*/


//--Include Files--//
#include <stdio.h>

int main() {
	int datePerson1, monthPerson1, yearPerson1; // birthDate, birthMonth, birthYear of person1
	int datePerson2, monthPerson2, yearPerson2; // birthDate, birthMonth, birthYear of person2
	int dateDiff, monthDiff, yearDiff; // diifference in their ages 

	printf("Input DOB of person1 in format dd/mm/yyyy: ");
	scanf("%d/%d/%d", &datePerson1, &monthPerson1, &yearPerson1);

	printf("Input DOB of person2 in format dd/mm/yyyy: ");
	scanf("%d/%d/%d", &datePerson2, &monthPerson2, &yearPerson2);

	dateDiff = datePerson1 - datePerson2;
	monthDiff = monthPerson1 - monthPerson2;
	yearDiff = yearPerson1 - yearPerson2;

	if (yearDiff > 0) {
		printf("person2 is older");
		return 1;		
	} else if (!yearDiff && monthDiff > 0) {
		printf("person2 is older");
		return 1;
	} else if (!yearDiff && !monthDiff && dateDiff > 0) {
		printf("person2 is older");
		return 1; 
	} else {
		printf("Same age");
	}

	printf("person1 is older");
}// end main
