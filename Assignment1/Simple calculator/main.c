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
    else if(ope == '/' && num2!=0){
        printf("%f",num1 / num2);
    }
    else if(ope == '/' && num2 == 0){
        printf("Error: Cannot divide number by 0\n");
    }
    else if(ope == '%' && num2 !=0){
        printf("%d", (int)num1 % (int)num2);
    }
    else if(ope == '%' && num2 ==0){
        printf("Error: Modulus by zero\n");
    }
    else if(ope == '*'){
        printf("%f",num1*num2);
    }
    else printf("Invalid operator");



    return 0;
}
