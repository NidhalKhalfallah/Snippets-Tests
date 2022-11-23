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
    SSL_Init();
  
    //Get the certificate
    SSL_Certificate = Get_SSL_Certificate(website);
  
    //Connect to the website
    SSL_Connect(website);
  
    //Send the request
    SSL_Send(website);
  
    //Receive the response
    SSL_Receive(website);
  
    //Close the connection
    SSL_Close();
  
    //Free the memory
    free(website);
    free(SSL_Certificate);
  
    return 0;
}