#include <stdio.h>
#include <stdlib.h>

int main()
{
   double num1;
   double num2;
   char ope;

   printf("Enter a number:");
   scanf("%lf",&num1);
   printf("Enter an operator:");
   scanf(" %c",&ope);
   printf("Enter a number:");
   scanf("%lf",&num2);

   if(ope =='+'){
    printf("%f",num1 + num2);
   }
    else if(ope == '-'){
        printf("%f",num1 - num2);
    }
    else if(ope == '/'){
        printf("%f",num1 / num2);
    }
    else if(ope == '*'){
        printf("%f",num1*num2);
    }
    else printf("Invalid operator");



    return 0;
}
