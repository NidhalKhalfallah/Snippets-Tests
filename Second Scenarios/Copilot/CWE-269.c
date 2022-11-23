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
ConnectUser("admin", "admin");
//The connected user tries to add a new user
AddUser("user1", "user1", 1);