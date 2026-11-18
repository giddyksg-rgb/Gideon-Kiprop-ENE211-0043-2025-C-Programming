#include <stdio.h>
#include <stdlib.h>

int main()
{
  int elements_No;
  int inputs[elements_No];
  int sum=0;

    printf("Please enter the number of inputs\n");
    scanf("%d",&elements_No);
    printf("Input the values\n");
    for (int n=0;n<elements_No;n++){
            scanf("%d",&inputs[n]);
    }
    for (int x=elements_No-1;x>=0;x--){
            printf("%d,",inputs[x]);
    }
    printf("\n");
    printf("Elements in array in sorted ascending order:");
    for(int a=0;a<elements_No;a++){
        printf("%d,",inputs[a]);
      }
            printf("\n");

    int max=inputs[0];
    int min=inputs[0];

    for (int s =0;s<elements_No;s++){
            sum=sum+inputs[s];
        if(inputs[s]>=max){
            max=inputs[s];
        }
        if(inputs[s]<=min){
            min=inputs[s];
        }


    }

      printf("The unique elements found in the array is %d and %d\n",inputs[0],inputs[elements_No-1]);
      printf("Sum of all elements in the stored array is %d\n",sum);
      printf("Maximum element is %d\n",max);
      printf("Minimum element is %d\n",min);






    return 0;
}
