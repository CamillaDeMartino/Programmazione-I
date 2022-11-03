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
   for(i = 0; i < 20; i++)                          //per ogni prodotto la rand generà un numero da 0 a 20(massima scorta)
   {
        venduti = rand()%21;                       //il numero generato è la quantità di prodotto venduta quel giorno
        if(articolo[i].scorta >= venduti)          //i prodotti venduti non possono essere maggiori alla quantità di scorta di magazzino
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
    case 2:                                             //opzione 2: si visualizzano i prodotti più venduti a quelli meno venduti
        printf( "\nClassifica elementi piu' venduti\n" );
        ordinamento(magazzino);
        classifica(magazzino);
        break;
    default:                                            //non esistono opzioni differenti
        printf ( "Opzione non esistente\n" );
    }
}




//function che rileva i prodotti sotto scorta (la cui scorta restante è minore di 5)
void sotto_scorta(Prodotto magazzino[20])
{

   int i;                                                          //poiché ogni giorni vengono effettuate delle vendite casuali, per ogni prodotto, grazie alla function scorta
   for(i = 0; i < 20; i++)                                         //si scorre nuovamente la struct e rilevando solo quali sono i prodotti la cui classe scorta presenterà un numero inferiore a 5
    {                                                              //dopodiché si procede stampandone tutte le caratteristiche
        if(magazzino[i].scorta < 5 && magazzino[i].scorta >= 0 )   //si nota che ogni giorno la quantità dei prodotti sotto socorta aumenta, e che essi continueranno ad essere venduti finché non giungeranno a scorta 0
         printf( "Cod.%d Nome: %s Specifica: %s Scorta: %d Costo: %.2f$\n", magazzino[i].codice, magazzino[i].nome, magazzino[i].specifica, magazzino[i].scorta, magazzino[i].costo);

    }

}






//function che ordina i prodotti più venduti(da quello più venduto a quello meno venduto)
//si nota che ciò non implica che in tale giorno i prodotti non possano essere venduti, sarà dunque considerata anche la possibilità che essi siano stati venduti il giorno stesso
//in tal caso sarà una classifica aggiornata(potrà cioè presentare una scorta minore rispetto a quella precedente)
void ordinamento (Prodotto magazzino[20])
{
    int el_da_ins, i,j;
    Prodotto temp;
    for(i = 1; i < 20; i++)                 //si nota che l'algoritmo simula l'algoritmo di ordinamento di inserimento di minimo
    {
       el_da_ins = magazzino[i].scorta;     //l'elemento da inserire è la scorta restante di ogni prodotto
        j = i - 1;
        while( j >= 0 && el_da_ins < magazzino[j].scorta)    //finché l'elemento da inserire è minore del precedente, effettuiamo uno scambio
        {
            temp = magazzino[j+1];                           //viene utilizzata una viariabile temp per consetire lo scambio non scoltato tra le calssi scorte
            magazzino[j+1] = magazzino[j];                   //ma per tutte le classi, così che ci sarà sempre corrispondenza tra la scorta e le caratteristiche dell'articolo
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


