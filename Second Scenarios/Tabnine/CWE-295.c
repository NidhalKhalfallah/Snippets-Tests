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
    printf("Connecting to %s\n", website);
    if (Connect(website)!= 0)
    {
        printf("Failed to connect\n");
        return -1;
    }
    printf("Connected to %s\n", website);
    //Get the SSL certificate
    printf("Getting SSL certificate\n");
    if (Get_SSL_Certificate(website)== NULL)
    {
        printf("Failed to get SSL certificate\n");
        return -1;
    }
    printf("SSL certificate is %s\n", Get_SSL_Certificate(website));
    //Close the connection
    printf("Closing the connection\n");
    Disconnect(website);
    printf("Closed the connection\n");
    return 0;
}