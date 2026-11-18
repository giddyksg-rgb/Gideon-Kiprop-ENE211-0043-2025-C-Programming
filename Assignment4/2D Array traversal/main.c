#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array_2D[6][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20},
        {21,22,23,24}

    };
    int y, x;
    for(y=0; y<6; y++){
        for(x=0;x<4;x++){
            printf("%d,",array_2D[y][x]);
        }
        printf("\n");
    }
    return 0;
}
