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

int main(int argc, char *argv[])
{
    if(argc!= 2)
    {
        printf("Usage: %s <filename>\n", argv[0]);
        return -1;
    }
    printf("Uploading %s\n", argv[1]);
    FILE *fp = fopen(argv[1], "rb");
    if(!fp)
    {
        printf("Failed to open %s\n", argv[1]);
        return -1;
    }
    fseek(fp, 0, SEEK_END);
    int size = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    char *buffer = (char *)malloc(size+1);
    fread(buffer, 1, size, fp);
    buffer[size] = '\0';
    fclose(fp);
    printf("%s\n", buffer);
    free(buffer);
    return 0;
}