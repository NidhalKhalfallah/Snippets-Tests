#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
FILE *fp = fopen(argv[1], "w");
char* UserName="John";
char* Password="1234";
//save the credentials in the file
fprintf(fp, "%s %s", UserName, Password);  
fclose(fp);
return 0;
}