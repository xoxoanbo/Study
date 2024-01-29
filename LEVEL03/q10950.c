#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * #include "anbo.h"
 */

int main( int aArgc, char *aArgv[] )
{
    int sNum1 = 0;
    int sNum2 = 0;

    int *sSum = NULL;

    int sLoopCount = 0;
    int sCount = 0;

    scanf("%d", &sCount);

    sSum = (int*)malloc( sizeof(int) * sCount );

    for( sLoopCount = 0; sLoopCount < sCount; sLoopCount++ )
    {
        scanf("%d", &sNum1);
        scanf("%d", &sNum2);

        sSum[sLoopCount] = sNum1 + sNum2;
    }

    for( sLoopCount = 0; sLoopCount < sCount; sLoopCount++ )
    {
        printf("%d\n", sSum[sLoopCount]);
    }

    free( sSum );

    return 0;
}
