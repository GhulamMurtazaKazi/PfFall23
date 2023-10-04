Write a program for a match-stick game between the computer and a user. Your 
program should ensure that the computer always wins. Rules for the game are as 
follows:
1. There are 21 matchsticks.
2. The computer asks the player to pick 1,2,3 or 4 match sticks.
3. After the person picks, the computer does its picking.
4. Whoever is forced to pick up the last matchstick loses the game.

	
#include<stdio.h>
int main () {
	int user,computer,match_sticks=21;
	while (match_sticks>1) {
		printf("choose any number of match sticks between 1 to 4\n");
		scanf("%d",&user);
		computer=5-user;
		printf("computer picks %d\n",computer);
		match_sticks=match_sticks-(computer+user);
		printf("remaining match sticks are %d\n",match_sticks);
		
	} 
	printf("you choose the last remaining 1 match stick so you loss");
	return 0;
}
