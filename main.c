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
            case 1: /* Keres�s megnevez�s alapj�n! */
            break;

            case 2: /* List�z�s d�tum alapj�n! */
            break;

            case 3: /* Bejegyz�s m�d�s�t�sa/t�rl�se */
            break;

            case 4: /* Adatok bet�lt�se/ment�se */
            break;

            case 5: /* Kil�p�s a programb�l */
            exit(0);
            break;

        }
    }
    return 0;
}
