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
    int *sNumbers = NULL;

    int sFindNum = 0;
    int sFindNumCount = 0;

    scanf("%d", &sCount);

    sNumbers = (int*)malloc( sizeof( int ) * sCount );

    for( sLoopCount = 0; sLoopCount < sCount; sLoopCount++ )
    {
        scanf("%d", &sNumbers[sLoopCount]);
    }

    scanf("%d", &sFindNum);

    for( sLoopCount = 0; sLoopCount < sCount; sLoopCount++ )
    {
        if( sNumbers[sLoopCount] == sFindNum )
        {
            sFindNumCount++;
        }
    }

    printf("%d\n", sFindNumCount);

    free( sNumbers );

    return 0;
}
