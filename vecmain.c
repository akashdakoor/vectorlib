#include <stdio.h>
#include "veclib.h"
#include "vecadd.c"
#include "vecdot.c"
#include "vecprod.c"


int main(void)
{
    // declare and initialise the two vectors from stdin
    Vector v1, v2, vRes;
    printf("Enter the first vector\n");
    for(int i=0; i<4; ++i)
    {
        scanf("%f", &v1[i]);
    }
    printf("Enter the second vector\n");
    for(int i=0; i<4; ++i)
    {
        scanf("%f", &v2[i]);
    }

    // printing sum
    add(v1, v2, vRes);
    printf("The sum is:\n");
    print(vRes);
    // printing elementwise product
    elem_Prod(v1, v2, vRes);
    printf("The elementwise product is:\n");
    print(vRes);
    // printing difference
    // diff(v1, v2, vRes);
    // printf("The difference is:\n");
    // print(vRes);
    // printing dot product
    printf("The dot product is %.2f\n", dot_Prod(v1, v2));
    // printing norm
    // printf("The norm is %.2f\n", norm(v1, v2));
    // printing angle between the two vectors
    // printf("The angle between the two vectors is %.2f\n", angle(v1, v2));
    return 0;
}