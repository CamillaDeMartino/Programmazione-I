#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Header.h"

//function che stampa tutti i prodotti presenti inizialmente nel magazzino
void visualizza_prodotti(Prodotto magazzino[20])
{
   int i;
    for(i = 0 ; i < 20 ; i++)    //stampiamo per ogni prodotto tutte le classi appartenenti alla struct
        printf("Cod.: %d Nome: %s  Specifica: %s  Scorta: %d  Prezzo: %.2f$\n", magazzino[i].codice, magazzino[i].nome, magazzino[i].specifica, magazzino[i].scorta, magazzino[i].costo);

}



//function che stabilisce in maniera casuale quanti prodotti sono stati venduti, dunque la scorta relativa
void scorta (Prodotto magazzino[20])
{
   int i, venduti;
   srand(time(NULL));
   Prodotto *articolo;                               //uso del puntatore per poter aggiornare il contenuto della struct
   articolo = &magazzino[0];
   for(i = 0; i < 20; i++)                          //per ogni prodotto la rand gener� un numero da 0 a 20(massima scorta)
   {
        venduti = rand()%21;                       //il numero generato � la quantit� di prodotto venduta quel giorno
        if(articolo[i].scorta >= venduti)          //i prodotti venduti non possono essere maggiori alla quantit� di scorta di magazzino
        articolo[i].scorta -= venduti;             //calcoleremo quanti prodotti per ogni articoli sono ancora disponibili
   }

}



//function che consente all'utente di scegliere tra le due opzioni
void scelta_utente(int opzione, Prodotto magazzino[20])
{
    scorta(magazzino);
    switch(opzione)                                     //uso del costrutto swtich per poter consentire la scelta
    {
    case 1:                                             //opzione 1: si visualizzano i prodotti sotto scorta
        printf( "\nElementi sotto scorta\n" );
        sotto_scorta(magazzino);
        break;
    case 2:                                             //opzione 2: si visualizzano i prodotti pi� venduti a quelli meno venduti
        printf( "\nClassifica elementi piu' venduti\n" );
        ordinamento(magazzino);
        classifica(magazzino);
        break;
    default:                                            //non esistono opzioni differenti
        printf ( "Opzione non esistente\n" );
    }
}




//function che rileva i prodotti sotto scorta (la cui scorta restante � minore di 5)
void sotto_scorta(Prodotto magazzino[20])
{

   int i;                                                          //poich� ogni giorni vengono effettuate delle vendite casuali, per ogni prodotto, grazie alla function scorta
   for(i = 0; i < 20; i++)                                         //si scorre nuovamente la struct e rilevando solo quali sono i prodotti la cui classe scorta presenter� un numero inferiore a 5
    {                                                              //dopodich� si procede stampandone tutte le caratteristiche
        if(magazzino[i].scorta < 5 && magazzino[i].scorta >= 0 )   //si nota che ogni giorno la quantit� dei prodotti sotto socorta aumenta, e che essi continueranno ad essere venduti finch� non giungeranno a scorta 0
         printf( "Cod.%d Nome: %s Specifica: %s Scorta: %d Costo: %.2f$\n", magazzino[i].codice, magazzino[i].nome, magazzino[i].specifica, magazzino[i].scorta, magazzino[i].costo);

    }

}






//function che ordina i prodotti pi� venduti(da quello pi� venduto a quello meno venduto)
//si nota che ci� non implica che in tale giorno i prodotti non possano essere venduti, sar� dunque considerata anche la possibilit� che essi siano stati venduti il giorno stesso
//in tal caso sar� una classifica aggiornata(potr� cio� presentare una scorta minore rispetto a quella precedente)
void ordinamento (Prodotto magazzino[20])
{
    int el_da_ins, i,j;
    Prodotto temp;
    for(i = 1; i < 20; i++)                 //si nota che l'algoritmo simula l'algoritmo di ordinamento di inserimento di minimo
    {
       el_da_ins = magazzino[i].scorta;     //l'elemento da inserire � la scorta restante di ogni prodotto
        j = i - 1;
        while( j >= 0 && el_da_ins < magazzino[j].scorta)    //finch� l'elemento da inserire � minore del precedente, effettuiamo uno scambio
        {
            temp = magazzino[j+1];                           //viene utilizzata una viariabile temp per consetire lo scambio non scoltato tra le calssi scorte
            magazzino[j+1] = magazzino[j];                   //ma per tutte le classi, cos� che ci sar� sempre corrispondenza tra la scorta e le caratteristiche dell'articolo
            magazzino[j] = temp;
            j--;
        }
        magazzino[j+1].scorta = el_da_ins;
    }

}




//function che stampa gli articoli ordinati dalla function ordinamento
void classifica(Prodotto magazzino[20])
{
    int i;
    for ( i = 0; i < 20; i++)                           //prende in input tutti i prodotti aggiornati e li stampa
        printf ( "%d ---> Cod.%d  Nome: %s Scorta: %d\n",i+1, magazzino[i].codice, magazzino[i].nome ,magazzino[i].scorta );
}


