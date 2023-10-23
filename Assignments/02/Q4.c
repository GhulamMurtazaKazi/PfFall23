Question 04
You are given a maze represented by a 2D array. The maze consists of walls represented by 'W', open
paths represented by 'O', the starting point represented by 'S', and the exit represented by 'E'. The
objective is to find a path from the starting point to the exit.
char maze[N][M] = {
{'S', 'O', 'O', 'W', 'W'},
{'O', 'W', 'O', 'O', 'W'},
{'O', 'O', 'O', 'W', 'O'},
{'W', 'W', 'O', 'W', 'O'},
{'W', 'W', 'O', 'E', 'W'} };
Write a C program to traverse the maze of 5 x 5 and find a path from the starting point to the exit.
Constraints
- There will be at least one path from the starting point to the exit. In case of more than one path
then consider only one.
- You can visit only right and down direction.
- Output will be only indexes of correct path.
Input Original Maze:
S O O W W
O W O W W
W O O W O
W W O W O
W W O E W
Output Maze after traversal:
0,0 0,1 0,2 1,2 2,2 3,2 4,2 4,3
 #include<stdio.h>
int main () {
	char maze[5][5];
	int i=0,j,coordinates[25],y=0;
	printf("enter the maze\n");
	while (i<5) {
		j=0;
		while (j<5) {
			scanf(" %c",&maze[i][j]);
			++j;
		}
		++i;
	}
	i=0;
	j=0;
	while (i<5&&j<5) {
		if (maze[i][j]=='S')
		{
			coordinates[y]=i;
				++y;
			coordinates[y]=j;
			++y;
		} 
		++j;
		if  (j==5) {
			--j;
			++i;
			if (i<5) {
		if (maze[i][j]=='E') {
			coordinates[y]=i;
			++y;
			coordinates[y]=j;
			break;
		}
		else if  (maze[i][j]=='O') {
			coordinates[y]=i;
			++y;
			coordinates[y]=j;
			++y;
		}
		else {
			maze[i-1][j]='W';
		y=0;
		i=0;
		j=0;
		
		}
	} else {
			maze[i-1][j]='W';
		y=0;
		i=0;
		j=0;
	}
		} 
		else if (maze[i][j]=='E') {
			coordinates[y]=i;
			++y;
			coordinates[y]=j;
			break;
		}
		else if  (maze[i][j]=='O') {
			coordinates[y]=i;
			++y;
			coordinates[y]=j;
			++y;
		}
	
		else if (i+1<5) { 
		if (maze[i+1][j-1]=='E') {
				coordinates[y]=i+1;
			++y;
			coordinates[y]=j-1;
			break;
		}
		
		else if (maze[i+1][j-1]=='O'){
			--j;
			++i;
				coordinates[y]=i;
			++y;
			coordinates[y]=j;
			++y;
		}
		else if (maze[i+1][j-1]=='W'){
		maze[i][j-1]='W';
		y=0;
		i=0;
		j=0;
		}
	} 
	else {
		maze[i][j-1]='W';
		y=0;
		i=0;
		j=0;
		}
	} 
i=0;
printf("coordinates=");
  while (i<=y) { 
 	printf("(%d,%d)\n",coordinates[i],coordinates[i+1]);
	 i=i+2;
	  }
return 0;
} 
