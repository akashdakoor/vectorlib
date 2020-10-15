#include "veclib.h"
#include <math.h>

float norm(Vector V1, Vector V2)
{
    float ans = 0;
    for(int i=0;i<DIM;i++)
    {
        ans += V1[i]*V2[i];
    }

    ans = sqrt(ans);
    return ans;
}