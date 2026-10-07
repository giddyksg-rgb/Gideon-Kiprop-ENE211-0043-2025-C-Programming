#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    char correctPin[] = "0099";
    char userPin[20];
    int attempts = 0;
    int count = 3;
    int action;
    int systemlock = 0;

   while(attempts<=3){
    printf("Please enter user pin.\n");
    printf("You have %d remaining attempts.\n",count);
    scanf("%19s",userPin);

      size_t len = strlen(userPin);
      if( len<4){
        printf(" PIN is too short(must be 4 digits long)\n");
       }

       else if(len>4){
         printf(" PIN is too long(must be 4 digits long)\n");
       }

       else if(strcmp(userPin,correctPin)==0){
        printf("PIN is exactly 4 digits:Access Granted!\n");
        printf("=====DEVICE MENU=====\n");
        printf("1.Open Door\n");
        printf("2.Change Username\n");
        printf("3.Change PIN\n");
        printf("4.Exit\n");
        printf("Please select an option from the above menu:\n",action);
        scanf("%d", &action);
        printf("You have entered: %d\n",action);

       switch(action){
         case 1 :
            printf("Access granted. Door unlocked.\n");
            break;
         case 2 :
            printf("Change username feature coming soon.\n");
            break;
         case 3 :
            printf("Change PIN feature coming soon.\n");
            break;
         case 4 :
            printf("Exiting system.\n");
            break;
         default:
            printf("Invalid option!Please try again.");
            break;

       }

      break;
      }

        else{
        printf("Incorrect Userpin\n");
       }
     attempts++;
     count = 3- attempts;
     systemlock++;
   }


    if(systemlock>=3 && userPin!=correctPin){
        printf("System locked! Wait for 5 seconds...\n");
      int i;

      for(i=5;i>=1;i--){
        printf("%d...\n",i);
        Sleep(1000);
      }

      printf("You can try again now.\n");

    }


    return 0;
}
