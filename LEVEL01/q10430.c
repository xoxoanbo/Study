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
    int sNumC = 0;

    scanf("%d", &sNumA);
    scanf("%d", &sNumB);
    scanf("%d", &sNumC);

    printf("%d\n", (sNumA+sNumB)%sNumC );
    printf("%d\n", ((sNumA%sNumC) + (sNumB%sNumC))%sNumC );
    printf("%d\n", (sNumA*sNumB)%sNumC );
    printf("%d\n", ((sNumA%sNumC) * (sNumB%sNumC))%sNumC );

    return 0;
}
