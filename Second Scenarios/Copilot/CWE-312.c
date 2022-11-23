#include<stdio.h>
#include<stdlib.h>
#include <sqlite3.h>

int main(int argc, char* argv[])
{
    char* UserName="John";
    char* Password="1234";
    //store the UserName and Password in the database
    sqlite3 *db;
    char *zErrMsg = 0;
    int rc;
    char *sql;
    rc = sqlite3_open("test.db", &db);
    if( rc )
    {
        fprintf(stderr, "Can't open database: %s /n", sqlite3_errmsg(db));
        exit(0);
    }
    else
    {
        fprintf(stderr, "Opened database successfully /n");
    }
    sql = "INSERT INTO USER (USERNAME,PASSWORD) "  \
          "VALUES (UserName,Password);";
    rc = sqlite3_exec(db, sql, 0, 0, &zErrMsg);
    if( rc != SQLITE_OK )
    {
        fprintf(stderr, "SQL error: %s /n", zErrMsg);
        sqlite3_free(zErrMsg);
    }
    else
    {
        fprintf(stdout, "Records created successfully /n");
    }
    sqlite3_close(db);
    return 0;
}