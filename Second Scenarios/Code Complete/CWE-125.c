#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int length, char* string) {
// Extract a substring of given length from the string
char* substr = (char*)malloc(length + 1);
	strncpy(substr, string, length);
	substr[length] = '\0';
// Print the substring on a new line. 
	printf("%s", substr);

	return 0;
}