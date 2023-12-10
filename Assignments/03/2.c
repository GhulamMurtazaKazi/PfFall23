#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct staff
{
	char staffName[20];
	char position[15];
	int commSkill;
	int teamSkill;
	int creativeSkill;
} staff;

typedef struct division
{
	char divisionName[15];
	staff staffMember[5];
} division;

int generateRandom(int n);
void populate(char staffNames[][20], char positions[][15], division divisions[]);
void topDivision(division divisions[]);

int main(){
	char staffNames[][20] = {"Ayesh", "Burhan", "iqbal", "farhan", "ashad", "soaem", "shahbaz", "Murtaza", "fawad", "sharjeel", "Mehfooz", "Rafay", "Daud", "Waseem", "sohail", "ashish", "danish", "atta", "naveed", "kazi"};
	char positions[][15] = {"Director", "Executive", "Manager", "Employee", "Trainee"}; 
	division divisions[4];
	printf("Name:Ghulam Murtaza Kazi Id: 23K-0020\n");
	populate(staffNames, positions, divisions);
	topDivision(divisions);
}

int generateRandom(int n){
	return rand() % n;
}

void populate(char staffNames[][20], char positions[][15], division divisions[]){
	int randomNumber;
	int nameTracker[20] = {0};
	char divisionNames[][15] = {"Hr", "Finance", "Marketing", "Logistics"};
	int i = 0;
	while(i < 4) {
		int positionsTracker[5] = {0};
		int j = 0;
		while(j < 5) {
			strcpy(divisions[i].divisionName, divisionNames[i]);	
			do {
				randomNumber = generateRandom(20);
			} while(nameTracker[randomNumber] == 1);
			nameTracker[randomNumber] = 1;
			strcpy(divisions[i].staffMember[j].staffName, staffNames[randomNumber]);
			do {
				randomNumber = generateRandom(5);
			} while(positionsTracker[randomNumber] == 1);
			positionsTracker[randomNumber] = 1;
			strcpy(divisions[i].staffMember[j].position, positions[randomNumber]);
			randomNumber = generateRandom(100) + 1;
			divisions[i].staffMember[j].commSkill = randomNumber;
			randomNumber = generateRandom(100) + 1;
			divisions[i].staffMember[j].teamSkill = randomNumber;
			randomNumber = generateRandom(100) + 1;
			divisions[i].staffMember[j].creativeSkill = randomNumber;
			j++;
		}
		i++;
	}
}

void topDivision(division divisions[]){
	int total, best, highest = 0;
	char divisionNames[][15] = {"Hr", "Finance", "Marketing", "Logistics"};
	int i = 0;
	while(i < 4) {
		total = 0;
		int j = 0;
		while(j < 5) {
			total += divisions[i].staffMember[j].teamSkill + divisions[i].staffMember[j].creativeSkill + divisions[i].staffMember[j].commSkill;
			j++;
		}
		printf("Total Score of %s Department: %d\n", divisionNames[i], total);
		if (total > highest)
		{
			highest = total;
			best = i;
		}
		i++;
	}
	printf("The Department with the Highest Score is %s with a score of: %d\n", divisionNames[best], highest);
	printf("Details of the Best Department (in tabular form):\n");
	printf("|%-15s| %-15s| %-15s| %-11s| %-9s|\n", "Staff Name", "Staff Role", "Communication", "Creativity", "Teamwork");
	int k = 0;
	while(k < 5) {
		printf("|%-15s| %-15s| %-15d| %-11d| %-9d|\n", divisions[best].staffMember[k].staffName, divisions[best].staffMember[k].position, divisions[best].staffMember[k].commSkill, divisions[best].staffMember[k].creativeSkill, divisions[best].staffMember[k].teamSkill);
		k++;
	}
}
