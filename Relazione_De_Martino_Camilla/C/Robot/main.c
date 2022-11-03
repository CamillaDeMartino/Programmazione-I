#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Header.h"

int main()
{
    srand(time(NULL));

    int i, j, robotx, roboty, direzione;
    char labirinto[16][16] = {{'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
                              {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
                              {'*',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
                              {'*',' ',' ','*',' ',' ',' ','*','*','*','*','*','*','*','*','*'},
                              {'*',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
                              {'*',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
                              {'*',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
                              {'*',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
                              {'*',' ',' ','*',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','*'},
                              {'*',' ',' ','*',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','*'},
                              {'*',' ',' ',' ',' ',' ',' ','*',' ',' ',' ','*','*','*',' ','*'},
                              {'F',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','*'},
                              {'F',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','*'},
                              {'F',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','*'},
                              {'*',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','*'},
                              {'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
                              };



//stampa griglia
   do
    {
        robotx = rand()%16;
        roboty = rand()%16;
    } while(labirinto[robotx][roboty] != ' ' );

    labirinto[robotx][roboty] = 'x';


    for(i = 0; i < 16; i++)
    {
        for(j = 0; j < 16; j++)
            printf(" %c", labirinto[i][j]);
        printf("\n");
    }




//stampa movimento fino all'uscita

    do
    {

        labirinto[robotx][roboty] = '-';

        movimento_casuale(labirinto,&robotx,&roboty, &direzione);

        labirinto[robotx][roboty] = 'x';


    for(i = 0; i < 16; i++)
    {
        for(j = 0; j < 16; j++)
            printf(" %c", labirinto[i][j]);

    printf("\n");
    }

    }while(labirinto[robotx][roboty]!=labirinto[11][0] && labirinto[robotx][roboty]!=labirinto[12][0] && labirinto[robotx][roboty]!=labirinto[13][0]);

        printf("\nGioco terminato\n");

    return 0;
}
