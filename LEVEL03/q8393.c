#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * #include "anbo.h"
 */

int main( int aArgc, char *aArgv[] )
{
    int sNum = 0;
    int sSum = 0;

    int sCount = 0;

    scanf("%d", &sNum );

    for( sCount = 1; sCount <= sNum; sCount++ )
    {
        sSum = sSum + sCount;
    }

    printf("%d\n", sSum);

    return 0;
}
