#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char storage[10];
//write a function that gets a name from the user and stores it in the storage array
void get_name(char name[]){
	printf("Enter your name: ");
	scanf("%s", &storage); //get the input and store it in storage array
	strcpy(name, storage); //copy the content of storage to name array
}