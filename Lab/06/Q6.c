#include<stdio.h>
int main () {
	int user,computer,match_sticks=21;
	while (match_sticks>0) {
		printf("choose any nmumber of match sticks between 1 to 4\n");
		scanf("%d",&user);
		computer=5-user;
		printf("computer picks %d\n",computer);
		match_sticks=match_sticks-(computer+user);
		
	} 
	printf("you chosse the last remaining 1 match stick so you loss");
	return 0;
}
