#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char** argv) {
    char fileLocation[9] = "C:/Users/";
    //read a file located in fileLocation directory
    FILE* fp = fopen(fileLocation, "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return -1;
    }
    fseek(fp, 0L, SEEK_END);
    long fsize = ftell(fp);
    rewind(fp);
    char* buffer = (char*)malloc(fsize + 1);
    fread(buffer, fsize, 1, fp);
    fclose(fp);
    buffer[fsize] = '\0';
    printf("%s", buffer);
    free(buffer);
    return 0;
}