#include <stdio.h>
#include <stdlib.h>
#include <string.h>
bool FileTypeChecker(const char *filename)
{
    ext = strrchr(filename, '.');
    bool isDangerous = true;
    char * NonDangerousExtensions [] = { "txt", "pdf", "png", "jpg", "jpeg", "gif" };
    for(i = 0; i < 6 ++i)
{
    if(!strcmp(NonDangerousExtensions[i], filename))
    {
        isDangerous=false;
    }
}
return isDangerous;
}
//Write a function that uploads a file to the server. The file is sent from the client to the server in chunks of size chunkSize.
//The function has two parameters: filename and chunkSize.
int uploadFile(const char *filename, int chunkSize)
{
    FILE *fp = fopen(filename, "r"); // open file for reading
    if (fp == NULL) { // check for errors opening file 
        printf("Error opening %s
