#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 int login (char userPin[40]){
     char correctPin[] = "0099";
     int attempts=0;
      while(attempts<=2){
      printf("Please enter user pin.\n");
      scanf("%39s",userPin);

      if (strcmp(userPin,correctPin)==0){
       printf("Successful login\n");
       return 1; }//correct pin
      else{
        attempts++;
        printf("Incorrect pin!\n");
        printf("%d attempts remaining\n",3 - attempts);
        }
      }
        printf("Maximum attempt exceeded. Access denied!\n");
}

 float checkBalance(float accountBalance){
     printf("Your account balance is: %f",accountBalance);
     printf("\n");
    return 0;
 }



 float deposit(float *accountBalance){

    float depositAmount;
      printf("Please enter the amount being deposited\n");
      scanf("%f",&depositAmount);
        if(depositAmount>0){
            *accountBalance = *accountBalance + depositAmount;
             printf("Your new account balance is: %.2f\n",*accountBalance);
        }
        else{
            printf("invalid deposit amount!\n");
        }
}

 float withdraw(float *accountBalance){

    float withdrawalAmount;
      printf("Please enter the amount withdrawn\n");
      scanf("%f",&withdrawalAmount);
      if(withdrawalAmount>0 && withdrawalAmount< *accountBalance){
            *accountBalance = *accountBalance - withdrawalAmount;
             printf("Your new account balance is: %.2f\n",*accountBalance);
          }
      else{
          printf("Invalid withdrawal amount!\n");
      }
      printf("\n");

}




int main()
{
  char userPin[40];
  int action;
  float accountBalance = 1000;
  float depositAmount;
  float withdrawalAmount;



  if (login(userPin)==1){
   do{
    printf("\n");
    printf("---ATM MENU---\n");
    printf("1. Balance Inquiry\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("Please select an option from the above menu.\n");
    scanf("%d",&action);

     switch(action){
      case 1 :
          checkBalance(accountBalance);
          break;
      case 2 :
          deposit(&accountBalance);
          break;
      case 3 :
          withdraw(&accountBalance);
          break;
      case 4 :
          printf("Session closed\n");
          break;
      default :
          printf("Invalid option!\n");


     }
   }while(action != 4);




  }
  else{

  }



    return 0;
}
