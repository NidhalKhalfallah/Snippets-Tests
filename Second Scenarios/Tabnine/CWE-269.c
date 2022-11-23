#include<stdio.h>
#include<stdlib.h>

char * Roles [] = { "Admin", "User"};
void ConnectUser(char*username, char*password)
{
}
void AddUser(char*username, char*password, int role)
{
}
int main(int argc, char* argv[])
{
    // A user connects to the system
    ConnectUser(argv[1], argv[2]);
    //The connected user tries to add a new user
    AddUser(argv[1], argv[2], argv[3]);
    return 0;
}

