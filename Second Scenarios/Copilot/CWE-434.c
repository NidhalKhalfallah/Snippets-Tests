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
//Write a function that uploads a file
//Path: app\CTest.c
void UploadFile(const char *filename)
{
    if(FileTypeChecker(filename))
    {
        printf("File is dangerous");
    }
    else
    {
        printf("File is safe");
    }
}