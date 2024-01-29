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

    while( 1 )
    {
        scanf("%d", &sNum1);
        scanf("%d", &sNum2);

        if( sNum1 == 0 && sNum2 == 0 )
            break;

        printf("%d\n", sNum1 + sNum2 );
    }

    return 0;
}
