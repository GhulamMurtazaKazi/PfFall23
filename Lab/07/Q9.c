9. Junaid wants to keep track of all mobile phone bills in his X company branches. Let Y be the number
of company mobile phones in each branch. Create a 2D array for bill amount, where keep track of
branch ID in row subscript, mobile phone IDs in column subscript. Ask users to enter a bill for all mobile
phones in all branches. Your program should print the following:
- Total bill for all branches
- Total bill for each branch
- Branch ID where maximum bill arrived
- Branch and Mobile Phone IDs where bill is highest of all mobile phones.
#include<stdio.h>
int main () {
	int bills[100][100],i=0,j,total_bill=0,branch_bill=0,branch_id,mobile_id,maximum=0,rows,columns;
	printf("enter the number of branch id\n");
	scanf("%d",&rows);	
		printf("enter the number of mobile id\n");
	scanf("%d",&columns);
	printf("enter the bills of the mobile phones\n");
	while (i<rows) {
		j=0;
		branch_bill=0;
		while (j<columns) {
			scanf("%d",&bills[i][j]);
			branch_bill=branch_bill+bills[i][j];
				total_bill=total_bill+bills[i][j];
			++j;
		}
		printf("the total bill of branch id %d is %d\n",i,branch_bill);
		if (branch_bill>maximum) {
			maximum=branch_bill;
			branch_id=i;
		}
		++i;
	}
	printf("the total bill of all branches is %d\n",total_bill);
	printf("the maximum bill arrived in branch id %d is %d\n",branch_id,maximum);
	i=0;
	maximum=0;
	while (i<rows)
	{
		j=0;
		while (j<columns) {
			if (bills[i][j]>maximum) {
				maximum=bills[i][j];
				branch_id=i;
				mobile_id=j;
				
			}
			++j;
			
		}
		++i;
	}
	printf("the highest  bill is %d recieved from branch id %d and mobile phone id %d\n",maximum,branch_id,mobile_id);
	return 0;
}
