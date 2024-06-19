#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * #include "anbo.h"
 */

int main( int aArgc, char *aArgv[] )
{
    int sNumberCount = 0;
    char sInputNum[101];
    int sLoopCount = 0;
    int sSum = 0;

    scanf("%d", &sNumberCount);
    scanf("%100s", sInputNum);

    for( sLoopCount = 0; sLoopCount < sNumberCount; sLoopCount++ )
    {
        sSum += sInputNum[sLoopCount] - 48;
    }

    printf("%d\n", sSum);

    return 0;
}
