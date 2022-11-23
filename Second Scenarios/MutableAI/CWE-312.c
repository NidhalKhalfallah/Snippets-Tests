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
    rc = sqlite3 _open("test.db", &db);
    if( rc ){
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        exit(0);
    }else{
        fprintf(stderr, "Opened database successfully\n ");
    }
    sql = "CREATE TABLE USER("  \ "ID INT PRIMARY KEY     NOT NULL," \ "NAME           TEXT    NOT NULL," \ "PASSWORD        TEXT     NOT NULL);" ;
    rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
    if( rc != SQLITE_OK ){ fprintf(stderr, "SQL error: %s\n", zErrMsg); sqlite3_free(zErrMsg); }
    else{ fprintf(stdout, "Table created successfully\n"); }
    sql = "INSERT INTO USER (ID,NAME,PASSWORD ) "  \ "VALUES (1, 'John', '1234'); " \ " INSERT INTO USER (ID,NAME,PASSWORD ) "  \ "VALUES (2, 'Paul', '5678');" \ "INSERT INTO USER (ID ,NAME,PASSWORD ) "  \ "VALUES (3, 'George', ' 91011');" \ "INSERT INTO USER (ID,NAME,PASSWORD ) "  \ "VALUES (4, 'Ringo', '121314');" ;
    rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
    if( rc != SQLITE_OK ){  fprintf(stderr, "SQL error: %s\n", zErrMsg); sqlite3_free(zErrMsg); }
    else{ fprintf(stdout, "Records created successfully\n"); }
    sqlite3_close(db);
    return 0