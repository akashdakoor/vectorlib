#include "veclib.h"
#include <math.h>

float angle(Vector V1, Vector V2)
{
    float dotp = dot_Prod(V1, V2);

    float mag1, mag2;
    mag1 = norm(V1,V1);
    mag2 = norm(V2,V2);

    float theta = acos(dotp/(mag1*mag2));

    return theta;
}