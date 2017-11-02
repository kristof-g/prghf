#include <stdio.h>
#include <stdlib.h>
#include "tipusok.h"
#include "econio.h"
#include "start.h"
#if defined(WIN32) || defined(_WIN32)
    #include <windows.h>
#endif

int main()
{
    #if defined(WIN32) || defined(_WIN32)
    SetConsoleCP(1250);
    SetConsoleOutputCP(1250);
    #endif
    printf("Hello world!\n");
    int v;
    while(1)
    {
        draw_menu();
        scanf("%d",&v);
        switch(v)
        {
            case 1: /* Keresés megnevezés alapján! */
            break;

            case 2: /* Listázás dátum alapján! */
            break;

            case 3: /* Bejegyzés módósítása/törlése */
            break;

            case 4: /* Adatok betöltése/mentése */
            break;

            case 5: /* Kilépés a programból */
            exit(0);
            break;

        }
    }
    return 0;
}
