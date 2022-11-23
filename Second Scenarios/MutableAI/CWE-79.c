#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *HTML_PAGE_ADDRESS;
HTML_PAGE_ADDRESS = getenv("HTML_PAGE_ADDRESS");
//write a function that prints the HTML page address
int main()
{
    printf("%s",HTML_PAGE_ ADDRESS);
    return 0;
}