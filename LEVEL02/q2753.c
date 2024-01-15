#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * #include "anbo.h"
 */

int main( int aArgc, char *aArgv[] )
{
    int sYear = 0;

    scanf("%d", &sYear);

    if( sYear % 4 == 0 &&
        sYear % 100 != 0 )
    {
        printf("1\n");
    }
    else if( sYear % 400 == 0 )
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }

    return 0;
}
