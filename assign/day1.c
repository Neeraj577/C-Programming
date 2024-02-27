#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Student Structure Definition
typedef struct personalInfo
{
	char *firstName;
	char *lastName;
	int studentID;
	enum gradelevel
	{
		FRESHMAN = 17,
		SOPHMORE,
		JUNIOR,
		SENIOR,
		GRAD,
		INSTRUCTOR
	} level;
	int languages; // See #defines for the bitmap values
	char message[100];
} personalInfo;

// Struct pointer as a function parameter
void showStudentData(personalInfo pi);
void updateData(personalInfo *pi);

int main(int argc, char **argv)
{
	personalInfo student1;
	updateData(&student1);
	showStudentData(student1);

	return 0;
}

void updateData(personalInfo *pi)
{
	strcpy(pi->message, "The program access the function");
	pi->firstName = "Shankar";
	pi->lastName = "Deuja";
	pi->studentID = 922403765;
	// pi->level = SENIOR;
	pi->languages = 23;
}
void showStudentData(personalInfo pi)
{
	printf("\nStudent:\n");
	printf("Name: %s\n", pi.firstName);
	printf("Caste: %s\n", pi.lastName);
	printf("ID-Number: %d\n", pi.studentID);
	// printf("GradeNum: %s\n", pi.level);
	printf("Languages Known: %d\n", pi.languages);
	printf("Message: %s\n", pi.message);
}
