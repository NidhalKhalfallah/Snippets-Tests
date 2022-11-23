#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(char* UserName) {
    //Write an SQL query that searches the user with UserName
    'UserName' and returns the user's password.
    char* UserPassword;
    char query[500];
    sprintf(query, "SELECT Password FROM Users WHERE UserName = '%s';", UserName);
    //printf("%s