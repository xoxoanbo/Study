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
    int sCount = 0;

    scanf("%d", &sNum);

    for( sCount = 1; sCount < 10; sCount++ )
    {
        printf("%d * %d = %d\n", sNum, sCount, sNum*sCount );
    }

    return 0;
}
