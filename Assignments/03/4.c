#include <stdio.h>
#include <string.h>
struct employee {
  int id;
  char firstName[50];
  char lastName[50];
  int salary;
  char dateOfJoining[50];
  char dept[50];
};
struct employee employees[] = {
  {001, "Monika", "Arora", 100000, "2014-02-20 09:00:00", "HR"},
  {002, "Niharika", "Verma", 80000, "2014-06-11 09:00:00", "Admin"},
  {003, "Vishal", "Verma", 300000, "2014-02-20 09:00:00", "HR"},
  {004, "Amitabh", "Singh", 500000, "2014-02-20 09:00:00", "Admin"},
  {005, "Vivek", "Bhati", 500000, "2014-06-11 09:00:00", "Admin"},
  {006, "Vipul", "Dewan", 200000, "2014-06-11 09:00:00", "Account"},
  {007, "Satish", "Kumar", 75000, "2014-01-20 09:00:00", "Account"},
  {8, "Geetika", "Chauhan", 90000, "2014-04-11 09:00:00", "Admin"}
};
int sizeofEmployees = sizeof(employees) / sizeof(employees[0]);
void highestSalary(int numEmployees) {
  int maxSalary[3] = {0};
  int maxIndex[3] = {-1};
 for (int i = 0; i < numEmployees; i++) {
    int deptIndex = -1;
    if (strcmp(employees[i].dept, "HR") == 0) {
      deptIndex = 0;
    } else if (strcmp(employees[i].dept, "Admin") == 0) {
      deptIndex = 1;
    } else if (strcmp(employees[i].dept, "Account") == 0) {
      deptIndex = 2;
    }
if (deptIndex >= 0 && employees[i].salary > maxSalary[deptIndex]) {
      maxSalary[deptIndex] = employees[i].salary;
      maxIndex[deptIndex] = i;
    }
  }
printf("\tDetails of employees with highest salary for each department:\n");
printf("\n");
for (int i = 0; i < 3; i++) {
    if (maxIndex[i] >= 0) {
      printf("00%d %s %s %d %s %s\n\n", employees[maxIndex[i]].id,
             employees[maxIndex[i]].firstName, employees[maxIndex[i]].lastName,
             employees[maxIndex[i]].salary, employees[maxIndex[i]].dateOfJoining,
             employees[maxIndex[i]].dept);
    } else {
      printf("No employee found with highest salary in department %s\n\n",
             (i == 0) ? "HR" : (i == 1) ? "Admin" : "Account");
    }
  }

  printf("\n\n");
}
void totalSalary(int numEmployees) {
  int totalSalary[3] = {0, 0, 0};
  i = 0;
while (i < numEmployees) {
    if (strcmp(employees[i].dept, "HR") == 0) {
      totalSalary[0] += employees[i].salary;
    } else if (
else if (strcmp(employees[i].dept, "Admin") == 0) {
      totalSalary[1] += employees[i].salary;
    } else if (strcmp(employees[i].dept, "Account") == 0) {
      totalSalary[2] += employees[i].salary;
    }
    i++;
  }

  printf("Departments along with total salaries:\n\n");
  printf(" HR - %d\n", totalSalary[0]);
  printf(" Admin - %d\n", totalSalary[1]);
  printf(" Account - %d\n", totalSalary[2]);
}

int main() {
  printf("Ghulam Murtaza Kazi ID: 23K-0020");
  int numEmployees = sizeofEmployees / sizeof(employees[0]);
  highestSalary(numEmployees);
  totalSalary(numEmployees);
	return 0;
}
