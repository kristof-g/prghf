#include "start.h"
#include "rekord.h"

draw_menu()
{

    bejegyzes r = { "Foci edzes" , "park" , {2017,11,02} , {14,12} , "hello hello"};
    clrscr();
    printf("\t   |==== Napl�bejegyz�sek a mai napra: ====|\n");
    rekord_print(r);
    printf("\n\n\t   |================ Men� =================|\n");
    printf("\t[1.] Keres�s megnevez�s alapj�n!\n");
    printf("\t[2.] List�z�s d�tum alapj�n!\n");
    printf("\t[3.] Bejegyz�s m�d�s�t�sa/t�rl�se\n");
    printf("\t[4.] Adatok bet�lt�se/ment�se\n");
    printf("\t[5.] Kil�p�s!\n\n");
    printf("\t    V�laszt�s: ");

}
