#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char** argv) {
// Execute an OS command that returns the age of the employee
// and print it to the console.
	char* command = "python get_age.py";
	FILE *fp;
	char buffer[100];

	fp = popen(command, "r");

	if (fp == NULL) {
        printf("Failed to run command