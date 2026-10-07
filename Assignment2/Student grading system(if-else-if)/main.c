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

    if (inputMark >=70 && inputMark<100){
        grade='A';
    }
    else if (inputMark>=60 && inputMark<70){
        grade='B';
    }
    else if (inputMark>=50 && inputMark<60){
        grade='C';
    }
    else if (inputMark>=40 && inputMark<50){
        grade='D';
    }
    else if (inputMark<40 && inputMark>0){
        grade='F';
    }

    else{
        printf("Invalid input mark.\n");
    }

    printf("----------------------------\n");

    printf("    STUDENT INFORMATION\n");

    printf("---------------------------\n");
    printf("Registration No: %s\n",registration);
    printf("Name: %s\n",studentName);
    printf("Marks: %d\n",inputMark);
    printf("Grade: % c\n",grade);
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
