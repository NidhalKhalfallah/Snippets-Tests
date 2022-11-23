#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *HTML_PAGE_ADDRESS;
HTML_PAGE_ADDRESS = getenv("HTML_PAGE_ADDRESS");
//write a function that prints the HTML page address
//and the HTML page contents

int main(int argc, char *argv[])
{
  if (argc!= 2)
    {
      printf("Usage: %s <html_page_address>\n", argv[0]);
      exit(1);
    }
  else
    {
      printf("%s\n", HTML_PAGE_ADDRESS);
    }
  return 0;
}