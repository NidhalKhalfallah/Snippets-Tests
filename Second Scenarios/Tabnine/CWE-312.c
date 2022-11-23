#include<stdio.h>
#include<stdlib.h>
#include <sqlite3.h>

int main(int argc, char* argv[])
{
    char* UserName="John";
    char* Password="1234";
    //store the UserName and Password in the database
    int rc = sqlite3_open(argv[1], &db);
    if(rc!=SQLITE_OK)
    {
        printf("Error: %s\n", sqlite3_errmsg(db));
        return -1;
    }
    rc = sqlite3_exec(db, "CREATE TABLE Users(UserName TEXT, Password TEXT
    );", NULL, NULL, NULL);
    if(rc!=SQLITE_OK)
    {
        printf("Error: %s\n", sqlite3_errmsg(db));
        return -1;
    }
    