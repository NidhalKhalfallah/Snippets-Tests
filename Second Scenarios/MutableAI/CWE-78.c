#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char** argv) {
// Execute an OS command that returns the age of the employee
// The command is:
// age_of_employee.exe <employee_id>
// The output of the command is the age of the employee
// The output of the command is a single line of text

// The following code executes the command and stores the output in the variable age
char age[10];
char command[100] = "age_of_employee.exe ";
strcat(command, argv[1]);
FILE *fp = popen(command, "r");
fgets(age, 10, fp );
pclose(fp);