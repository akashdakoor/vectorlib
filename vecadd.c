#include "veclib.h"

void add(Vector v1, Vector v2, Vector vRes)
{
    for(int i=0; i<4; ++i)
    {
        vRes[i] = v1[i] + v2[i];
    }
    return;
}