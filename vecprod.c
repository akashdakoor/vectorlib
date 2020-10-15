#include "veclib.h"

void elem_Prod(Vector v1, Vector v2, Vector vRes)
{
    for(int i=0; i<DIM; ++i)
    {
        vRes[i] = v1[i] * v2[i];
    }
    return;
}