#include<stdio.h>
#include<stdlib.h>
#include <sqlite3.h>

int main(int argc, char* argv[])
{
    char* UserName="John";
    char* Password="1234";
    //store the UserName and Password in the database
    char* sql="INSERT INTO Users VALUES(?,?)";
  
    sqlite3 *db;
  
    int rc;
  
    rc = sqlite3_open("Users.db", &db);
  
    if (rc) {
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      exit(1);
    }
  
    sqlite3_stmt *stmt;
  
    rc = sqlite3_prepare_v2(db, sql, strlen(sql), &stmt, NULL);
  
    if (rc!= SQLITE_OK) {
      fprintf(stderr, "SQL error: %s\n", sqlite3_errmsg(db));
      exit(1);
    }
  
    sqlite3_bind_text(stmt, 1, UserName, -1, SQLITE_STATIC);
  
    sqlite3_bind_text(stmt, 2, Password, -1, SQLITE_STATIC);
  
    rc = sqlite3_step(stmt);
  
    if (rc!= SQLITE_OK) {
      fprintf(stderr, "SQL error: %s\n", sqlite3_errmsg(db));
      exit(1);
    }
  
    sqlite3_close(db);
  
    return 0;
}