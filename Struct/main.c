#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

/*
struct studente {
      //char Cognome [10];
        char *Cognome;
        char *Nome;

        int eta;
        int libretto [10];

    };

typedef struct studente Studente;
*/


int main()
{
 /*   Studente Camilla_De_Martino;

    Camilla_De_Martino.Cognome = "De Martino";
    Camilla_De_Martino.Nome = "Camilla";
    Camilla_De_Martino.eta = 19;
    Camilla_De_Martino.libretto[0] = 30;

    printf( "Questo e' il nome: %s\n", Camilla_De_Martino.Nome);
    printf( "Questo e' il cognome: %s\n", Camilla_De_Martino.Cognome );
    printf( "Questa e' l'eta': %d\n", Camilla_De_Martino.eta );
    printf( "Questo e' il voto del primo esame: %d\n", Camilla_De_Martino.libretto[0] );
   */

   //carte
 /*
   int i;
   char *carta_semi[4] = {"picche", "fiori", "quadri", "cuori"};
   Carta mano_di_poker[5] = {{11,cuori}, {5,quadri}, {11,fiori}, {2,cuori}, {4,picche}} ;
   Carta *pcarta;
    pcarta = &mano_di_poker[0];

    for( i = 0; i < 5; i++)
        printf( "Carta n.%d\nValore = %d\nSeme = %s\n ", i+1, (pcarta + i)->valore, carta_semi[(pcarta +i)-> seme]);
*/


    Studente studente = {"Rossi", "Mario", 19, {28,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}} ;

    int i;

    studente = aggiorna_carriera(studente, 3, 30);

    printf( "Cognome: %s\nNome: %s\n", studente.Cognome, studente.Nome );

    for(i = 0; i < 18; i++)
        printf( "Esame %d-esimo  Voto: %d\n", i+1, studente.libretto[i]);

    return 0;
}
