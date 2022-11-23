#include<stdio.h>
#include<SQLAPI.h>
int main(int argc, char* argv[])
{
    //connect a user to a database
    SQLRETURN ret;
  
    //SQLConnect
    ret = SQLConnect(
        SQLHENV(SQL_NULL_HANDLE),
        SQLHDBC(SQL_NULL_HANDLE),
        SQLCHAR *,
        SQLCHAR *,
        SQLCHAR *,
        SQLCHAR *,