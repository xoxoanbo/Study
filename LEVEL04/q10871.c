#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * #include "anbo.h"
 */

int main( int aArgc, char *aArgv[] )
{
    int sCount = 0;
    int sLoopCount = 0;
    int sArrCount = 0;
    int *sNumbers = NULL;

    int sInputNum = 0;
    int sCompareNum = 0;

    scanf("%d", &sCount);
    scanf("%d", &sCompareNum);

    sNumbers = (int*)malloc( sizeof( int ) * sCount );

    for( sLoopCount = 0; sLoopCount < sCount; sLoopCount++ )
    {
        scanf("%d", &sInputNum);
        
        if( sInputNum < sCompareNum )
        {
            sNumbers[sArrCount] = sInputNum;
            sArrCount++;
        }
    }

    for( sLoopCount = 0; sLoopCount < sArrCount; sLoopCount++ )
    {
        printf("%d ", sNumbers[sLoopCount]);
    }

    free( sNumbers );

    return 0;
}
