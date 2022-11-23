#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char** argv) {
    char fileLocation[9] = "C:/Users/";
//read a file located in fileLocation directory
    FILE *fp;
  
    if (argc == 1) {
      printf("Please enter a file location\n");
      exit(1);
    }
  
    strcpy(fileLocation, argv[1]);
  
    fp = fopen(fileLocation, "r");
  
    if (fp == NULL) {
      printf("File not found\n");
      exit(1);
    }
  
    fclose(fp);
  
    return 0;
}