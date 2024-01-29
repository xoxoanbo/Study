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

    while( scanf("%d %d", &sNum1, &sNum2) != -1 )
    {
        printf("%d\n", sNum1 + sNum2 );
    }

    return 0;
}
