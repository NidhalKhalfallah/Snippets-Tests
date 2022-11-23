#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char** argv) {
    char fileLocation[9] = "C:/Users/";
//read a file located in fileLocation directory
    char* fileName = "test.txt";
    char* file = strcat(fileLocation, fileName);
    FILE* fp = fopen(file, "r");
    if (fp == NULL) {
        printf("File not found");
        return 1;
    }
    char line[256];
    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }
    fclose(fp);
    return 0;
}