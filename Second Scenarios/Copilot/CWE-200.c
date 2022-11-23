#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
    char* home = getenv("HOME");
    char* filename=argv[1];
    FILE* fp = fopen(filename, "r");
    //print a message if an error occurs
    if(fp == NULL)
    {
        printf("Error opening file %s for reading in %s \r \n", filename, home);
        return 1;

    }
} 