5. Consider there are two structures: Employee (dependent structure) and another structure
called Organization (Outer structure). The structure Organization has the data members like
organisation_name,organisation_number. The Employee structure is nested inside the structure
Organization and it has the data members like employee_id, name, salary.
org.emp.employee_id;
org.emp.name;
org.emp.salary;
org.organisation_name;
org.organisation_number;
Here, org is the structure variable of the outer structure Organisation and emp is
the structure variable of the inner structure Employee.

Output the following data using above structure
The size of structure organisation : 123
Organisation Name : NU-Fast
  Organisation Number : NUFAST123ABC
Employee id : 127
Employee name : Linus Sebastian
Employee Salary : 400000
  #include <stdio.h>
#include <string.h>

typedef struct {
	char employee_id[5];
	char name[20];
	int salary;
} Employee;

typedef struct {
	char organization_name[40];
	char organization_number[50];
	Employee emp; 
} Organization;

int main()
{
	Organization org;

	strcpy(org.organization_name, "NU-Fast");
	strcpy(org.organization_number, "NUFAST123ABC");
	strcpy(org.emp.employee_id, "127");
	strcpy(org.emp.name, "Linus Sebastian");
	org.emp.salary = 40000;

	printf("The size of structure organization : %d\n", sizeof(Organization));
	printf("Organization Name : %s\nOrganization Number : %s\nEmployee id : %s\nEmployee name : %s\nEmployee Salary : %d", 
		org.organization_name, org.organization_number, org.emp.employee_id, org.emp.name, org.emp.salary
	);

	return 0;
} // end main()
