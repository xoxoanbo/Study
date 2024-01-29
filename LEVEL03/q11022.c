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
    int *sNum1 = NULL;
    int *sNum2 = NULL;

    int *sSum = NULL;
    int sCount = 0;

    scanf("%d", &sCase);

    sSum = (int*)malloc( sizeof(int)*sCase );
    sNum1 = (int*)malloc( sizeof(int)*sCase );
    sNum2 = (int*)malloc( sizeof(int)*sCase );

    for( sCount = 0 ; sCount < sCase; sCount++ )
    {
        scanf("%d", &sNum1[sCount]);
        scanf("%d", &sNum2[sCount]);

        sSum[sCount] = sNum1[sCount]+sNum2[sCount];
    }

    for( sCount = 0; sCount < sCase; sCount++ )
    {
        printf("Case #%d: %d + %d = %d\n", sCount + 1, sNum1[sCount], sNum2[sCount], sSum[sCount]);
    }

    return 0;
}
