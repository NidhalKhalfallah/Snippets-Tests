#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char storage[10];
//write a function that gets a name from the user and stores it in the storage array

int main()
{
    char name[10];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Your name is: %s", name);
    strcpy(storage, name);
    return 0;
}