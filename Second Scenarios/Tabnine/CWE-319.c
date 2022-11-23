#include<stdio.h>
#include<stdlib.h>

void ConnectToUrl(char *url)
{
}

int main(int argc, char* argv[])
{
    // Connect to a URL
    ConnectToUrl(argv[1]);
    while(1)
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter the URL: ");
                scanf("%s", url);
                ConnectToUrl(url);
                break;
                case 2:
                printf("Enter the password: ");
                scanf("%s", password);
                ConnectToUrl(url);
                break;
                case 3:
                printf("Enter the username: ");
                scanf("%s", username);
                ConnectToUrl(url);
                break;
                case 4:
                printf("Enter the password: ");
                scanf("%s", password);
                ConnectToUrl(url);
                break;
                case 5:
                printf("Enter the username: ");
                scanf("%s", username);
                ConnectToUrl(url);
                break;
                case 6:
                printf("Enter the password: ");
                scanf("%s", password);
                ConnectToUrl(url);
                break;
                case 7:
                printf("Enter the username: ");
                scanf("%s", username);
                ConnectToUrl(url);
                