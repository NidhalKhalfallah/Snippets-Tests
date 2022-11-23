#include<stdio.h>
#include<stdlib.h>
#include <sqlite3.h>

const char * Get_Password(char *username)
{
    return Password;
}

int main(int argc, char* argv[])
{
    char *password;
    char* username=argv[1];
    //Get the password for username
    password=Get_Password(username);
  