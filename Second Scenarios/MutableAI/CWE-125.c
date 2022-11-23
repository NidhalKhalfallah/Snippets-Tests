#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int length, char* string) {
// Extract a substring of given length from the string

char* substr = malloc(length + 1)
strncpy(substr, string, length)
substr[length] = '\0'

printf("%s\n", substr)

return 0;
}