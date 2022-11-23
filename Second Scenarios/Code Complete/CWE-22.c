#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char** argv) {
    char fileLocation[9] = "C:/Users/";
//read a file located in fileLocation directory
FILE *file = fopen(strcat(fileLocation, "test.txt"), "r");
    if (file == NULL) {
        printf("Error reading file