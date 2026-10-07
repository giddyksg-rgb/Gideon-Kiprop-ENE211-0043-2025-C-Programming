#include <stdio.h>
#include <stdlib.h>

int main()
{
    double area ;
    const double Pi = 3.142;
    double radius;
    printf("Please enter radius\n");
    scanf("%lf",&radius);
    area= 4*Pi*radius*radius;
    printf("The area of the circle is %lf",area);
    return 0;
}
