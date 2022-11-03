#include <stdio.h>
#include <stdlib.h>
#include "Header.h"
#include <time.h>


int main()
{
    int i,scelta;
    Prodotto magazzino[20] ={{1,  "Auricolari", "Progettati da apple",       20, 15.00},
                             {2,  "Alexa",      "Altoparlante intelligente", 20, 60.00},
                             {3,  "Hard Disk",  "2 TB",                      20, 80.00},
                             {4,  "Kindle",     "Schermo antiriflesso",      20, 80.00},
                             {5,  "Mouse",      "Wireless",                  20, 10.50},
                             {6,  "Tastiera",   "Wireless",                  20, 35.00},
                             {7,  "Cavo USB",   "480 Megabit al secondo",    20, 4.00},
                             {8,  "Scheda SD",  "64 GB",                     20, 9.50},
                             {9,  "Webcam",     "1080P Full HD Video",       20, 30.00},
                             {10, "Microfono",  "Pickup Cardioide",          20, 38.80},
                             {11, "Polaroid",   "Istantanea",                20, 60.00},
                             {12, "Joystick ",  "Wireless",                  20, 35.00},
                             {13, "Proiettore", "230 Volt",                  20, 85.00},
                             {14, "Smartwatch", "Bluetooth",                 20, 40.00},
                             {15, "Treppiedi",  "127 Centimetri",            20, 17.80},
                             {16, "Cordless",   "dual mode",                 20, 55.40},
                             {17, "Caricatore", "Wireless",                  20, 25.00},
                             {18, "Cuffie ",    "Bluetooth",                 20, 32.00},
                             {19, "Tablet ",    "64 GB",                     20, 119.00},
                             {20, "Drone",      "HD 720p",                   20, 70.00}};

    printf( "\n**Benvenuti nel mio magazzino di elettronica!**\n" );
    printf( "\nEcco i prodotti disponibili\n\n" );
    visualizza_prodotti(magazzino);

    printf( "\nQuale operazione si desidera eseguire?\n" );
    printf( "1. Visualizzare i prodotti sotto scorta\n2. Visualizzare i prodotti piu' venduti\n" );

    for (i = 0; i < 10; i++)          //tale ciclo consente all'utente di scegliere ogni giorno l'operazione da svolgere
    {
        printf( "\nGiorno %d\nScegli un opzione: ", i+1 );
        scanf( "%d", &scelta );
        scelta_utente(scelta,magazzino);
    }



    return 0;
}
