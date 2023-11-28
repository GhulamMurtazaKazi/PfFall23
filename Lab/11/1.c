1. Create a structure to specify data on students given below:
Roll number, Name, Department, Course, Year of joining Assume that there are not more than
450 students in the college.
● Print names of all students who joined in a particular year.
● Print the data of a student whose roll number is given.
#include <stdio.h>
#include <string.h>

struct StudentDetails
{
	int rollnumber;
	char Name[50];
	char deptname[100];
	char course[50];
	int yearjoining;
};


int main()
{
 //Array of Struct
struct StudentDetails mystudentdetails[450];//t is an array of struct
int i = 0;
int yoj,n;
printf("enter the number of students");
scanf("%d", &n);
while(i<n)
{
	printf("enter student data for %d\n",i+1);
		printf("enter student name for %d\n",i+1);
scanf("%s",mystudentdetails[i].Name);
	printf("enter student rollnumber for %d\n",i+1);
scanf("%d",&mystudentdetails[i].rollnumber);
	printf("enter student deptname for %d\n",i+1);
scanf("%s",mystudentdetails[i].deptname);
	printf("enter student course for %d\n",i+1);
scanf("%s",mystudentdetails[i].course);
	printf("enter student yearjoining for %d\n",i+1);
scanf("%d",&mystudentdetails[i].yearjoining);

++i;
}
// TO print this array of Struct
printf("student data\n\n");
i = 0;
while(i<n)
{
puts(mystudentdetails[i].Name);
printf("%d/n",mystudentdetails[i].rollnumber);
printf("%s\n",mystudentdetails[i].deptname);
printf("%s\n",mystudentdetails[i].course);
printf("%d\n",mystudentdetails[i].yearjoining);
++i;
}
printf("\n");

printf("enter the yaer of students to be found");
scanf("%d\n", &yoj);
for(i=0;i<n;i++){
	if(mystudentdetails[i].yearjoining==yoj){
		printf("%s\n", mystudentdetails[i].Name);
	}
}


}
 
