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
  char username[20];
  char password[20];
  char role;
  int i;
  
  printf("Enter username: ");
  scanf("%s", username);
  printf("Enter password: ");
  scanf("%s", password);
  printf("Enter role: ");
  scanf("%d", &role);
  //The connected user tries to add a new user
  AddUser(username, password, role);
  //The user disconnects
  return 0;
}
