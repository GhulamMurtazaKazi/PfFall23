#include <stdio.h>
#include <stdlib.h>
void mergeAndWriteToMergedFile(int id) {
    FILE *personalInfoFile = fopen("PersonalInfo.txt", "r");
    if (personalInfoFile == NULL) {
        printf("Error opening PersonalInfo.txt");
        exit(EXIT_FAILURE);
    }

    FILE *deptInfoFile = fopen("DeptInfo.txt", "r");
    if (deptInfoFile == NULL) {
        printf("Error opening DeptInfo.txt");
        fclose(personalInfoFile);
        exit(EXIT_FAILURE);
    }
 FILE *mergedInfoFile = fopen("MergedInfo.txt", "a");
    if (mergedInfoFile == NULL) {
        printf("Error opening MergedInfo.txt");
        fclose(personalInfoFile);
        fclose(deptInfoFile);
        exit(EXIT_FAILURE);
    }
int personalId, deptId, salary;
    char empName[50];
 while (fscanf(personalInfoFile, "%d,%s", &personalId, empName) == 2) {
        if (personalId == id) {
            fseek(deptInfoFile, 0, SEEK_SET);
 while (fscanf(deptInfoFile, "%d,%d", &deptId, &salary) == 2) {
                if (deptId == id) {
                    fprintf(mergedInfoFile, "%d,%s,%d\n", id, empName, salary);
                    printf("Record with ID %d merged and written to MergedInfo.txt\n", id);
                    break;
                }
            }
            break;
        }
    }
    fclose(personalInfoFile);
    fclose(deptInfoFile);
    fclose(mergedInfoFile);
}
int main() {
int id;
printf("Ghulam Murtaza Kazi  23k-0002\n\n");
printf("Input isn't required as filing will do the entire work.\n\n");
printf("Enter the record ID: ");
scanf("%d", &id);
mergeAndWriteToMergedFile(id);
return 0;
}
