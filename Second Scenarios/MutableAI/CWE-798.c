#include<stdio.h>
#include<SQLAPI.h>
int main(int argc, char* argv[])
{
    //connect a user to a database
    SAConnection con;
    try {
        con.Connect("test", "root", "", SA_MySQL_ Client);
        printf("We are connected!\n") ;
    }
    catch(SAException &x) {
        printf ("%s\n", (const char*)x.ErrText());
    }
    return 0;
}