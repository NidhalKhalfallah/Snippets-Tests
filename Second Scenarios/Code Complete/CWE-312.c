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

    /* Open database */
    rc = sqlite3_open("test.db", &db);

    if( rc ) {
        fprintf(stderr, "Can't open database: %s", sqlite3_errmsg(db));
        exit(0);
    } else {
        fprintf(stderr, "Opened database successfully
    }

    /* Create SQL statement */
    char *sql = "CREATE TABLE USERINFO(USERNAME TEXT PRIMARY KEY NOT NULL, PASSWORD TEXT NOT NULL);";

    /* Execute SQL statement */
    rc = sqlite3_exec(db, sql, 0, 0, &zErrMsg);

    if( rc != SQLITE_OK ){
        fprintf(stderr, "SQL error: %s} else {
        fprintf(stdout, "Table created successfully}

    sqlite3_close(db);
}