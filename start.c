#include "start.h"
#include "rekord.h"

draw_menu()
{

    bejegyzes r = { "Foci edzes" , "park" , {2017,11,02} , {14,12} , "hello hello"};
    clrscr();
    printf("\t   |==== Naplóbejegyzések a mai napra: ====|\n");
    rekord_print(r);
    printf("\n\n\t   |================ Menü =================|\n");
    printf("\t[1.] Keresés megnevezés alapján!\n");
    printf("\t[2.] Listázás dátum alapján!\n");
    printf("\t[3.] Bejegyzés módósítása/törlése\n");
    printf("\t[4.] Adatok betöltése/mentése\n");
    printf("\t[5.] Kilépés!\n\n");
    printf("\t    Választás: ");

}
