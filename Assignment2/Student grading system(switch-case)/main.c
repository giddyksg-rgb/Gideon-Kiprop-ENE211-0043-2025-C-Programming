#include <stdio.h>
#include <stdlib.h>

int main()
{
   char registration[50];
      char studentName[40];
      int inputMark;
      char grade;
      char status[20];
      int studentsNo;
      int i;
      int Count = 1;

    printf("Please enter the number of students\n");
    scanf("%d",&studentsNo);

    for(i=1;i<=studentsNo;i++){
    printf("STUDENT NUMBER %d\n",Count);
    printf("Please enter student registration number.\n");
    scanf("%s",registration);
    printf("Please enter student Name.\n");
    scanf("%s", studentName);
    printf("Please enter input mark.\n");
    scanf("%d",&inputMark);

    if(inputMark <0 || inputMark>100){
        printf("Invalid input mark.\n");
       continue;
    }
     else{
    switch(inputMark/10){
       case 10:
       grade = 'A';
        break;
        case 9:
       grade = 'A';
        break;
        case 8:
       grade = 'A';
        break;
       case 7:
       grade = 'A';
        break;
       case 6:
       grade = 'B';
        break;
      case 5:
       grade = 'C';
        break;
        case 4:
       grade = 'D';
        break;
        case 3:
       grade = 'F';
        break;
        case 2:
       grade = 'F';
        break;
        case 1:
       grade = 'F';
        break;


        default:
            printf("Invalid input mark.\n");

    }
     }

    printf("----------------------------\n");

    printf("    STUDENT INFORMATION\n");

    printf("---------------------------\n");
    printf("Registration No: %s\n",registration);
    printf("Name: %s\n",studentName);
    printf("Marks: %d\n",inputMark);
    printf("Grade: %c\n",grade);
    if(inputMark>=40 && inputMark<=100){
        printf("Pass\n");
    }
    else{
        printf("Fail\n");
    }

    printf("----------------------------\n");

   Count++;
    }



    return 0;
}
