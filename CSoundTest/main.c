#include "stdio.h"
#include "stdlib.h"
#include "csound.h"
#include "cscore.h"


static void eval(x)
{
    if (x != CSOUND_SUCCESS)
    {
        printf("!! Function error %d !!", x);
    }
}


int main()
{
    void* csound;
 
    // Create Csound.
    csound = csoundCreate(0);
    
    // Start it

//    eval(csoundSetOption(csound, "-odac0"));
    eval(csoundCompileCsd(csound, "/Users/florentcapelle/Documents/CSOUND/CSOUND Test/test.csd"));
    eval(csoundPerform(csound));


        
        
        
    csoundCleanup(csound);
    csoundDestroy(csound);
    
    return 0;
}