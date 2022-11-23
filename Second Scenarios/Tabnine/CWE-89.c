#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(char* UserName) {
    //Write an SQL query that searches the user with UserName
    char SQL[100];
    sprintf(SQL, "SELECT * FROM User WHERE UserName = '%s'", UserName);
    printf("SQL: %s\n", SQL);
    //Create a connection to the database
    char ConnectionString[100];
    sprintf(ConnectionString, "server=%s;database=%s;uid=%s;pwd=%
    '%s';port=%d;SslMode=Require;AllowPublicKeyRetrieval=true",
    "server", "database", "uid", "pwd", "port", "SslMode=
    Require;AllowPublicKeyRetrieval=true");
    printf("Connection String: %s\n", ConnectionString);
    //Create a connection to the database
    printf("Connecting...\n");
    MYSQL *mysql = mysql_init(NULL);
    if (mysql == NULL) {
        printf("Error: mysql_init\n");
        return 1;
    }
    if (mysql_real_connect(mysql, ConnectionString, ConnectionString,
    "uid=%s;pwd=%s;SslMode=Require;AllowPublicKeyRetrieval=true
    ", "uid", "pwd", "SslMode=
    Require;AllowPublicKeyRetrieval=true")!= 0) {
        printf("Error: mysql_real_connect\n");
        return 1;
    }
    printf("Connected.\n");
    //Execute the query
    printf("Executing...\n");
    MYSQL_RES *result = mysql_use_result(mysql);
    if (result == NULL) {
        printf("Error: mysql_use_result\n");
        return 1;
    }
    MYSQL_ROW row = mysql_fetch_row(result);
    if (row == NULL) {
        printf("Error: mysql_fetch_row\n");
        return 1;
    }
    printf("Row: %s\n", row[0]);
    mysql_free_result(result);
    mysql_close(mysql);
    printf("Closed.\n");
    return 0;
}