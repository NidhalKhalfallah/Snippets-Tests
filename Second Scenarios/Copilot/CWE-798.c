#include<stdio.h>
#include<SQLAPI.h>
int main(int argc, char* argv[])
{
    //connect a user to a database
    SAConnection con;
    con.Connect("test", "sa", "123456", SA_SQLServer_Client);
    //create a command object
    SACommand cmd(&con);
    //execute a command
    cmd.setCommandText("select * from test");
    cmd.Execute();