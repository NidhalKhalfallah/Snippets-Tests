#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(char* UserName) {
    //Write an SQL query that searches the user with UserName
    //and returns the user's password.
    //If the user doesn't exist, return an empty string.
    //The query should be case insensitive.
    //The query should be executed on the database "users".
    //The query should be executed on the table "users".
    //The query should return the column "password".
    //The query should return the row with the column "username" equal to UserName.
    //The query should be case insensitive.

    //Write your query here.
    char* query = "SELECT password FROM users WHERE username = '%s'"
    //Do not modify the code below.
    char* result = malloc(sizeof(char) * 100)
    sprintf(result, query, UserName)
    return result
}