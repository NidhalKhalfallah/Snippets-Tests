#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
    FILE *fp = fopen(argv[1], "w");
    char* UserName="John";
    char* Password="1234";
    //save the credentials in the file
    fprintf(fp,"UserName=%s\n",UserName);
    fprintf(fp,"Password=%s\n",Password);
    fclose(fp);
    return 0;
}

