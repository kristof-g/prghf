#include "rekord.h"
rekord_print(bejegyzes b)
{
    printf("\t   - %s | %s | %d/%d/%d \n",b.megnevzes,b.hely,b.datum.ev,b.datum.honap,b.datum.nap);
}
