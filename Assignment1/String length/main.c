#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char userName[20];
    printf("Please enter your username\n");
    scanf("%s",userName);
    printf("Hello %s\n",userName);
    printf("The length of your username is: %lu \n",strlen(userName));
    return 0;
}
