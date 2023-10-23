Question: 01
You are given a 2D array that represents the batting performance of a cricket team. Each row in the array
corresponds to a different batsman, and each column represents an inning played by that batsman. The
values in the array represent the runs scored by each batsman in each inning.
Write a C program to perform the following tasks:
1) Input the number of batsmen and the number of innings from the user.
2) Input the batting performance for each batsman in each inning.
3) Calculate and display the following statistics for each batsman.
● Total runs scored.
● Average runs per inning
● Highest score in a single inning
● Number of centuries (innings with a score of 100 or more)
● Number of half-centuries (innings with a score of 50-99)
Your program should display the statistics for each batsman individually.
  #include<stdio.h>
int main () {
	int scores[100][100],i=0,j,rows,columns,total=0,highest=0,centuries=0,half_centuries=0;
	printf("enter total number of batsman\n");
	scanf("%d",&rows);
		printf("enter total number of innings\n");
	scanf("%d",&columns);
	printf("enter the runs  scored\n");
	while (i<rows) {
		j=0;
		while (j<columns) {
			scanf("%d",&scores[i][j]);
			total=total+scores[i][j];
			if (scores[i][j]>highest) 
			highest=scores[i][j];
			if (scores[i][j]>=100)
			++centuries;
			if (scores[i][j]<100&&scores[i][j]>=50)
			++half_centuries;
			++j;
		}
		printf("the total runs made by batsman %d is %d\n",i+1,total);
			printf("the average runs made by batsman %d is %d\n",i+1,total/columns);
				printf("the highest runs made by batsman %d in single inning is %d\n",i+1,highest);
					printf("the total centuries made by batsman %d is %d\n",i+1,centuries);
						printf("the total half centuries made by batsman %d is %d\n",i+1,half_centuries);
					total=highest=centuries=half_centuries=0;
		++i;
	}
	return 0;
}
