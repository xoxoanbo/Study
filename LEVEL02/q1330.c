#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * #include "anbo.h"
 */

int main( int aArgc, char *aArgv[] )
{
    int sNumA = 0;
    int sNumB = 0;

    scanf("%d", &sNumA);
    scanf("%d", &sNumB);

    if( sNumA > sNumB )
        printf(">\n");
    else if( sNumA < sNumB )
        printf("<\n");
    else
        printf("==\n");

    return 0;
}
