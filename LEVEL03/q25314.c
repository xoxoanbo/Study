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
    sNum /= 4;

    for( sCount = 0; sCount < sNum; sCount++ )
    {
        printf("long ");
    }

    printf("int\n");

    return 0;
}
