#include "veclib.h"

float dot_Prod(Vector V1, Vector V2)
{
    float ans = 0;
    for(int i = 0;i < 4;++i)
    {
        ans += V1[i]*V2[i];
    }
    return ans;
}