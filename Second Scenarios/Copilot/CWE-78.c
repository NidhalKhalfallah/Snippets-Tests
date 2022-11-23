#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char** argv) {
// Execute an OS command that returns the age of the employee
char command[100];
sprintf(command, "age %s", argv[1]);
FILE* fp = popen(command, "r");
if (fp == NULL) {
printf("Error: Unable to execute command %s ", command);
exit(1);
}
char age[10];
fgets(age, 10, fp);
pclose(fp);
// Convert the age to an integer
int ageInt = atoi(age);
// Print the age
printf("The age of %s is %d", argv[1], ageInt);
return 0;
}