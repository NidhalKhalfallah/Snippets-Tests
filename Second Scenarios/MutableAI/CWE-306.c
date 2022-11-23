#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
    char *username;
    username = argv[1];
    int amount;
    amount = argv[2];
    //Grant a bank loan to a user
    printf("%s has been granted a loan of %d", username, amount) ;
    return 0;
}