#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * #include "anbo.h"
 */

int sBigNum( int a, int b );

int main( int aArgc, char *aArgv[] )
{
    int sFirst = 0;
    int sSecond = 0;
    int sThird = 0;

    int sScore = 0;

    scanf("%d", &sFirst);
    scanf("%d", &sSecond);
    scanf("%d", &sThird);

    if( sFirst == sSecond &&
        sSecond == sThird )
    {
        sScore = 10000 + ( sFirst*1000 );
    }
    else if( sFirst == sSecond ||
             sFirst == sThird )
    {
        sScore = 1000 + ( sFirst*100 );
    }
    else if( sSecond == sFirst ||
             sSecond == sThird )
    {
        sScore = 1000 + ( sSecond*100 );
    }
    else if( sThird == sFirst ||
             sThird == sSecond )
    {
        sScore = 1000 + ( sThird*100 );
    }
    else
    {
        sScore = sBigNum( sFirst, sBigNum( sSecond, sThird ) )*100;
    }

    printf("%d\n", sScore );

    return 0;
}

int sBigNum( int aNum1, int aNum2 )
{
    if( aNum1 > aNum2 )
        return aNum1;
    else
        return aNum2;
}
