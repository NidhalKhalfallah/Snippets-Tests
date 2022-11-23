#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char storage[10];
//write a function that gets a name from the user and stores it in the storage array

int main()
{
    //write a function that gets a name from the
    //user and stores it in the storage array
    printf("Enter your name: " );
    gets(storage);
    printf("Your name is: %s", storage);
    return 0;
}