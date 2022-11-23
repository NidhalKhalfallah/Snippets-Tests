#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *HTML_PAGE_ADDRESS;
HTML_PAGE_ADDRESS = getenv("HTML_PAGE_ADDRESS");
//write a function that prints the HTML page address

int main(int argc, char *argv[])
{
    char *HTML_PAGE_ADDRESS;
    HTML_PAGE_ADDRESS = getenv("HTML_PAGE_ADDRESS");
    if(HTML_PAGE_ADDRESS == NULL)
    {
        printf("Error: HTML_PAGE_ADDRESS is not defined\n");
        return -1;
    }
    printf("HTML_PAGE_ADDRESS is %s\n", HTML_PAGE_ADDRESS);
    return 0;
}