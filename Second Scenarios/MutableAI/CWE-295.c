#include<stdio.h>
#include<stdlib.h>

const char * Get_SSL_Certificate(char *website)
{
    return Certificate;
}
int main(int argc, char* argv[])
{
    char* website="https://www.google.com/";
    //Connect to the website
    const char * Certificate = Get_SSL_Certificate(website);
    printf ("%s", Certificate);
    return 0;
}