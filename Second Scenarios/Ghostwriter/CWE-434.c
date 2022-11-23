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
void UploadFile(const char *filename)
{
  int i;
  int fileSize;
  FILE *fp;
  char *buffer;
  char *filename2;
  filename2 = (char *)malloc(sizeof(char) * (strlen(filename) + 1));
  strcpy(filename2, filename);
  fp = fopen(filename2, "rb");
  if(fp == NULL)
    {
      printf("File not found\n");
      return;
    }
  fseek(fp, 0, SEEK_END);
  fileSize = ftell(fp);
  rewind(fp);
  buffer = (char *)malloc(sizeof(char) * fileSize);
  fread(buffer, sizeof(char), fileSize, fp);
  fclose(fp);
  for(i = 0; i < fileSize; i++)
    {
      if(buffer[i] == '\n')
        {
          buffer[i] = '\0';
        }
    }
  printf("%s\n", buffer);
  free(buffer);
  free(filename2);
}