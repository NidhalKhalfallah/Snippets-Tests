#include<stdio.h>
#include<stdlib.h>
#include <sqlite3.h>

const char * Get_Password(char *username)
{
    return Password;
}

int main(int argc, char* argv[])
{
    int SizeWord = 10;
    char TestWord[5];
    //copy argv[1] to TestWord
    strncpy(TestWord, argv[1], SizeWord);
    printf ("%s\n", TestWord);
    return 0;
}