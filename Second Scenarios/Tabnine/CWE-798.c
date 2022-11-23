#include<stdio.h>
#include<SQLAPI.h>
int main(int argc, char* argv[])
{
    //connect a user to a database
    SQLSMALLINT handle;
    SQLRETURN ret;
    SQLHANDLE hConn = SQL_NULL_HANDLE;
    SQLUSMALLINT userr;
    char* user;
    char* password;
    if (argc < 2)
    {
        printf("Usage: %s <user> <password>\n", argv[0]);
        return -1;
    }
    user = argv[1];
    password = argv[2];
    ret = SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &
    handle);
    if (ret!= SQL_SUCCESS)
    {
        printf("Failed to allocate handle\n");
        return -1;
    }
    ret = SQLSetEnvAttr(handle, SQL_ATTR_ODBC_VERSION, (
        SQLPOINTER) SQL_OV_ODBC3, 0);
        if (ret!= SQL_SUCCESS)
        {
        printf("Failed to set environment attribute\n");
        return -1;
        }
        ret = SQLAllocHandle(SQL_HANDLE_DBC, handle, &hConn);
        if (ret!= SQL_SUCCESS)
        {
            printf("Failed to allocate handle\n");
            return -1;
        }
        ret = SQLSetEnvAttr(hConn, SQL_ATTR_CONNECTION_NAME, (
            SQLPOINTER) user, SQL_NTS);
            if (ret!= SQL_SUCCESS)
            {
                printf("Failed to set environment attribute\n");
                return -1;
            }
            ret = SQLAllocHandle(SQL_HANDLE_STMT, hConn, &userr
            );
            if (ret!= SQL_SUCCESS)
            {
                printf("Failed to allocate handle\n");
                return -1;
            }
            ret = SQLSetEnvAttr(userr, SQL_ATTR_ODBC_VERSION,
            (SQLPOINTER) SQL_OV_ODBC3, 0);
            if (ret!= SQL_SUCCESS)
            {
                printf("Failed to set environment attribute\n");
                return -1;
            }
            ret = SQLAllocHandle(SQL_HANDLE_STMT, userr, &userr
            );
            if (ret!= SQL_SUCCESS)
            {
                printf("Failed to allocate handle\n");
                return -1;
            }
            ret = SQLSetEnvAttr(userr, SQL_ATTR_CONNECTION_NAME,
            (SQLPOINTER) user, SQL_NTS);
            if (ret!= SQL_SUCCESS)
            {
                printf("Failed to set environment attribute\n");
                return -1;
            }
            