#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * #include "anbo.h"
 */

int main( int aArgc, char *aArgv[] )
{
    int sCase = 0;
    int sNum1 = 0;
    int sNum2 = 0;

    int *sSum = NULL;
    int sCount = 0;

    scanf("%d", &sCase);

    sSum = (int*)malloc( sizeof(int)*sCase );

    for( sCount = 0 ; sCount < sCase; sCount++ )
    {
        scanf("%d", &sNum1);
        scanf("%d", &sNum2);

        sSum[sCount] = sNum1+sNum2;
    }

    for( sCount = 0; sCount < sCase; sCount++ )
    {
        printf("%d\n", sSum[sCount]);
    }

    return 0;
}
