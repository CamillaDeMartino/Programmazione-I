#include <stdio.h>
#include <stdlib.h>
#include "Header.h"
#include <string.h>

int main()
{
    /*//ricerca binaria divide et impera
    char elenco[100], chiave;
    int indice;

    printf( "Inserire l'elenco ordinato\n" );
    gets(elenco);
    printf( "Inserire la chiave da ricercare: ");
    scanf( " %c", &chiave);

    indice = ric_bic(chiave,elenco,strlen(elenco));

    if( indice >= 0)
        printf ( "Chiave trovata all'indice %d\n", indice);
    else
        printf( "Chiave non trovata\n");
*/

 /*//ricerca binaria con ricorsione
 char elenco[100], chiave;
 int indice;

 printf( " Inserisci l'elenco ordinato di caratteri\n" );
 gets(elenco);

 printf( "Inserisci la chiave: " );
 scanf("%c", &chiave);

 indice = ric_bic_ric(chiave, elenco, 0, strlen(elenco)-1);
 if(indice >= 0)
    printf ( "Chiave trovata all'indice %d\n", indice+1 );
 else
    printf( "Chaive non trovata\n" );
*/

//seconda versione ricerca binaria ricorsiva

/*char elenco[100], chiave;
int indice;

printf( "Inserire l'elenco di caratteri ordinato\n" );
gets(elenco);

printf( "Inserire la chiave da ricercare: " );
scanf (" %c", &chiave);

indice = ric_bic_ric2(chiave,elenco, strlen(elenco));

if(indice == 1)
    printf( "Chiave trovata\n" );
else
    printf( "Chiave non trovata\n" );
*/

//ricerca binaria con logical
/*
char elenco[100],chiave;
 Logical indice;
 printf( "Inserire l'elenco di caratteri ordinato\n" );
 gets(elenco);
 printf( "Inserire il carattere da ricercare: " );
 scanf("%c",&chiave);
 indice = ric_bin_ricTF(chiave,elenco,strlen(elenco));
  if(indice == True)
    printf( "Chiave trovata\n" );
    else
      printf( "Chiave non trovata\n" );

*/

//somma dei primi numeri naturali
/*
int n;
printf ( "Inserisci il n-esimo numero natutale: " );
scanf("%d", &n);

printf( "La somma dei primi %d numeri naturali e' %d\n", n, somma_ric(n));
*/


//fattoriale dei primi n numeri naturali

/*
int n;
printf ( "Inserisci il n-esimo numero natutale: " );
scanf("%d", &n);

printf ( "Il fattoriale di %d e' %d\n", n, fattoriale_ric(n) );
*/


//somma incrementali dei numeri di un array

/*int a[] = {1,2,3,4,5};
int n = 5;

printf( "La somma degli elementi dell'array e' %d\n", somma_a_ricAI(a,n));
*/

//somma considerando il primo elemento
/*
int a[] = {1,2,3,4,5};
int n = 5;

printf ( "La somma degli elementi degli array e' %d\n", somma_a_ricI(a,n) );
*/

//somma array con divide et impera
/*
int a[] = {1,2,3,4,5};
int n = 5;

printf ( "La somma degli elementi degli array e' %d\n", somma_a_ricDI(a,0,4));
*/

//somma array divide et impera seconda versione
/*
int a[] = {1,2,3,4,5};
int n = 5;

printf ( "La somma degli elementi degli array e' %d\n",somma_a_ricDI2(a,n));
*/


/*//massimo con metodo di ciaramella

   int a[] = {1,2,3,4,5,6,7,8,9,10};
   int n = 10;
    printf ( "Il massimo e' : %d\n", max_a_ricI(a,n) );
*/


//massimo ricorsivo incrementale
/*
   int a[] = {15,2,3,4,5,6,7,8,9,10};
   int n = 10;
    printf ( "Il massimo e' : %d\n", max_a_ricAI(a,n) );
*/


//massimo ricorsivo divide et impera versione 1
/* int a[] = {1,2,3,4,5,6,7,8,9,10};

    printf( "Il massimo e' : %d\n", max_a_ricDI (a,0,9));
*/

//massimo divide et impera versione 2
/*
   int a[] = {1,2,3,4,5,6,7,8,9,10};
   int n = 10;

   printf( "Il massimo e' %d\n", max_a_ricDI2(a,n) );
*/


//fibonacci ricorsivo
 /*
    int n;

    printf( "Inserisci il numero di fibonacci: " );
    scanf("%d", &n);

    printf( "Il %d numero di fibonacci e': %d\n", n, fib_ric_el(n) );
*/

//numeri pari
/*
    int a[100], n;

    printf( "Inserire il size dell'array: " );
    scanf("%d", &n);

    legge_da_tastiera(a,n);

    printf ( "I numeri par sono %d\n", num_pari_ric(a,n) );
*/

//lunghezza stringa
/*
    char testo[100];
    int i;

    printf( "Inserisci il testo\n" );
    while((testo[i] = getchar()) != EOF)
        i++;
      testo[i] = '\0';
    printf( "La lunghezza del testo e' %d lettere\n", strlen_ric(&testo) );
*/

//ricerca sequenziale
/*
    int a[100], chiave, n, ind;

    printf( "Inserisci il size: " );
    scanf("%d", &n);
    legge_da_tastiera(a,n);

    printf( "Inserisci la chiave: ");
    scanf(" %d", &chiave);

    ind = appartiene_ric(a,n,chiave);

    if( ind == 1)
        printf( "\nChiave trovata\n" );
        else
            printf( "\nChiave non trovata\n" );
*/

//uguaglianza tra 2 stringhe
/*
     char stringa1[100], stringa2[100];
     int indice;

     printf( "Inserisci la prima stringa\n" );
     scanf(" %s", &stringa1);

     printf( "Inserisci la seconda stringa\n" );
     scanf(" %s", &stringa2);

     indice = uguaglianza_str_ric(&stringa1, &stringa2);

     if( indice == 1)
        printf( "\nLe due stringhe sono uguali\n" );
     else
        printf ( "\nLe due stringhe sono diverse\n" );
*/

//string matching ricorsivo
/*
     char testo[100], chiave[10];
     int indice;

    printf ( "Inserisci il testo:\n" );
    gets(testo);
    printf ( "Inserisci la chiave:\n" );
    gets(chiave);

     indice = string_matching_ric(testo, chiave);
     printf( "La chiave ricorre nel testo %d volte\n", indice );
*/

//ordianmento per inserimento
/*
    int a[100], n , i;

    printf( "Inserisci il size: ");
    scanf("%d", &n);

    legge_da_tastiera(a,n);

    ord_ins_ric(a,n);

    printf("\nArray ordinato\n");
    for (i = 0; i < n; i++)
        printf ( "%d ", a[i] );
*/


//
    return 0;
}
