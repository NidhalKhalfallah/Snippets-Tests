#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char** argv) {
    // Execute an OS command that returns the age of the employee
    char* age = get_age();
    printf("%s\n", age);