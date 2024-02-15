#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * #include "anbo.h"
 */

int main( int aArgc, char *aArgv[] )
{
    double *sNumbers = 0;
    double sMaxScore = 0;
    double sSum = 0;
    double sAverage = 0;

    double sNumberCount = 0;
    int sLoopCount = 0;

    scanf("%lf", &sNumberCount);

    sNumbers = (double*)malloc( sizeof( double ) * sNumberCount );

    for( sLoopCount = 0; sLoopCount < sNumberCount; sLoopCount++ )
    {
        scanf("%lf", &sNumbers[sLoopCount]);

        if( sMaxScore < sNumbers[sLoopCount] )
        {
            sMaxScore = sNumbers[sLoopCount];
        }

        sSum += sNumbers[sLoopCount];
    }

    sAverage = sSum / sMaxScore * 100 / sNumberCount;

    printf("%lf\n", sAverage);

    free( sNumbers );

    return 0;
}
