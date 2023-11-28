3. Create a structure to keep record of each course (course code, course name, course gpa, semester). Make a console application that allows to input course infromation and save data to a file. Then it has an option to view transcript, calculate CGPA and SGPAs.
#include <stdio.h>
#include <stdlib.h>

#define MAX_COURSES 10

// Structure to store course information
struct Course {
    char code[10];
    char name[50];
    float gpa;
    int semester;
};

// Function to input course information
void inputCourse(struct Course *course) {
    printf("Enter Course Code: ");
    scanf("%s", course->code);

    printf("Enter Course Name: ");
    scanf("%s", course->name);

    printf("Enter GPA: ");
    scanf("%f", &course->gpa);

    printf("Enter Semester: ");
    scanf("%d", &course->semester);
}

// Function to save course data to a file
void saveToFile(struct Course *courses, int count) {
    FILE *file = fopen("transcript.txt", "a");

    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }
	int i;
    for (i = 0; i < count; i++) {
        fprintf(file, "Course Code: %s, Course Name: %s, GPA: %.2f, Semester: %d\n",
                courses[i].code, courses[i].name, courses[i].gpa, courses[i].semester);
    }

    fclose(file);
}

// Function to view transcript
void viewTranscript() {
    FILE *file = fopen("transcript.txt", "r");

    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }

    fclose(file);
}

// Function to calculate CGPA
float calculateCGPA(struct Course *courses, int count) {
    float totalGPA = 0.0;
	int i;
    for (i = 0; i < count; i++) {
        totalGPA += courses[i].gpa;
    }

    return (count > 0) ? totalGPA / count : 0.0;
}

// Function to calculate SGPA for a specific semester
float calculateSGPA(struct Course *courses, int count, int semester) {
    float totalGPA = 0.0;
    int coursesInSemester = 0;
	int i;
    for (i = 0; i < count; i++) {
        if (courses[i].semester == semester) {
            totalGPA += courses[i].gpa;
            coursesInSemester++;
        }
    }

    return (coursesInSemester > 0) ? totalGPA / coursesInSemester : 0.0;
}

int main() {
    struct Course courses[MAX_COURSES];
    int count = 0;
    int option;
	 int semester;
    do {
        printf("\n1. Input Course Information\n");
        printf("2. Save to Transcript\n");
        printf("3. View Transcript\n");
        printf("4. Calculate CGPA\n");
        printf("5. Calculate SGPA\n");
        printf("0. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                if (count < MAX_COURSES) {
                    inputCourse(&courses[count]);
                    count++;
                } else {
                    printf("Maximum number of courses reached.\n");
                }
                break;
            case 2:
                saveToFile(courses, count);
                printf("Data saved to transcript.txt\n");
                break;
            case 3:
                viewTranscript();
                break;
            case 4:
                printf("CGPA: %.2f\n", calculateCGPA(courses, count));
                break;
            case 5:
               
                printf("Enter Semester to Calculate SGPA: ");
                scanf("%d", &semester);
                printf("SGPA for Semester %d: %.2f\n", semester, calculateSGPA(courses, count, semester));
                break;
            case 0:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid option. Please try again.\n");
        }

    } while (option != 0);

    return 0;
}

