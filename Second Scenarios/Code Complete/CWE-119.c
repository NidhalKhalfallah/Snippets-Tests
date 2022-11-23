#include<stdio.h>
#include<stdlib.h>
#include <sqlite3.h>

const char * Get_Password(char *username)
{
    return Password;
}

int main(int argc, char* argv[])
{
    int SizeWord = 10;
    char TestWord[5];
    //copy argv[1] to TestWord
    for(int i = 0;i<SizeWord;i++)
    {
        TestWord[i] = argv[1][i];
    }

     char *err_msg = 0;

     int rc=sqlite3_open("/home/pi/Desktop/Test.db",&db);

     if (rc != SQLITE_OK) 
     { 
         fprintf(stderr, "Cannot open database: %s", sqlite3_errmsg(db)); 
         return 0; 
     }

    char *sql = "SELECT * FROM User";

    rc=sqlite3_exec(db, sql, callback, (void*)data, &err_msg);

    if (rc != SQLITE_OK ) 
    { 
        fprintf(stderr,"SQL error: %s",err_msg); 
        sqlite3_free(err_msg);
    }

    sqlite3_close(db);

    return 0;
}
