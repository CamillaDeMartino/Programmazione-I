#include <stdio.h>
#include <stdlib.h>
#include "Header.h"
#include <string.h>
int main()
{
   /*//somma dei primi n numeri naturali
   int n, somma;
   printf( "Inserisci quanti numeri si vogliono sommare:\n" );
   scanf(" %d", &n);
   somma = somma_naturali(n);
   printf( "La somma dei primi %d numeri naturale e': %d\n", n, somma );
    */

    /*//sommatoria armonica
    int n, somma;
    printf ( "Di quale numero si vuole calcolare la sommatoria armonica?\n" );
    scanf("%d", &n);
    somma = somma_armonica(n);
    printf ( "La somma armonica e' %d", somma );
*/

/*//sommatoria quadratica
int n, somma;
printf ( "Di quale numero si vuole calcolare la sommatoria quadratica?\n" );
scanf("%d", &n);
somma = somma_quadratica(n);
printf( "La sommatoria quadratica e' %d", somma );
*/

/*//fattoriale di un numero
int n, fatt;
printf ( "Inserire il numero di cui si vuole calcolare il fattoriale:\n" );
scanf ("%d", &n);
fatt = fattoriale (n);
printf ( "Il fattoriale del numero %d e' %d", n, fatt );
    */


/*//calcolo del massimo di un insieme di numeri
int i, n, numero, massimo;
printf ( "Quanti numeri si vogliono inserire?\n" );
scanf(" %d", &n);
printf ( "Inserisci il primo numero: ");
scanf("%d", &numero);
massimo = numero;
for ( i = 2; i <= n; i++)
{
    printf ( "Inserisci l' %d-simo numero: ", i);
    scanf(" %d", &numero);
    if ( numero > massimo)
        massimo = numero;
}
printf ( "Il massimo dei numeri inseriti e' %d", massimo );
  */

/*//calcolo del minimo
int i, n, numero, minimo;
printf ( "Quanti numeri si vogliono inserire?\n" );
scanf ( "%d", &n);
printf ( "Inserire il primo numero: " );
scanf("%d", &numero);
minimo = numero;
for ( i = 2; i <= n; i++)
{
    printf( "Inserire l'%d-simo numero: ", i );
    scanf( " %d", &numero);
    if ( numero < minimo)
        minimo = numero;
}
printf ( "Il minimo dei numeri inseriti e' %d\n",  minimo);
  */

/*//calcolo del minimo e massimo
int i, n, minimo, massimo, numero;
printf ( "Quanti numeri si vogliono inserire?\n" );
scanf("%d", &n);
printf ( "Inserire il primo numero: " );
scanf("%d", &numero);
minimo = numero;
massimo = numero;
for ( i = 2; i <= n; i++)
{
    printf ( "Inseriere l'%d-simo numero: ", i );
    scanf(" %d", &numero);
    if ( numero > massimo)
        massimo = numero;
    else if (numero < minimo)
        minimo = numero;
}
printf ( "\nTra i numeri inseriri il massimo e' %d e il minimo e' %d\n", massimo, minimo );
  */

/*//determinare l'appartenenza di un dato ad un insieme
char chiave, dato_letto;
int n, esito_ricerca = 0;
printf ( "Inserire la chiave: ");
scanf("%c", &chiave);
printf( "Quante lettere si vogliono inserire? " );
scanf("%d", &n);
int i = 0;
do
{
    printf ( "Inserisci una lettera: " );
    scanf( " %c", &dato_letto);
    i++;
    if (chiave  == dato_letto){
    esito_ricerca = 1;
    }
}
while (!esito_ricerca && i<n);
printf ("l'esito e' %d", esito_ricerca);
  */

/*//somma valori di array 1D
double a[100];
int n;
printf ( "Dammi la dimensione dell'array (<100):\n" );
scanf("%d", &n);

legge_da_tastiera_aD(a,n);
printf ( "La somma degli elementi e' %lf\n", somma_aD(a,n) );
*/

/*//somma array già scritti
double a[] = {1,2,3,4,5,6,7,-8,9,10};
 int n = 10;

visualizza_aD(a,n);
printf ( "La somma degli elementi e' %lf\n", somma_aD(a,n) );
*/

/*//media array 1D
double a[100];
int n;
printf ( "Inserire la lunghezza dell'array(<100):\n" );
scanf("%d", &n);

legge_da_tastiera_aD (a,n);
printf ( "La media dei numeri e' %lf", media_aD(a,n) );
*/

/*//massimo array
double a[100];
int n;
printf ( "Inserire la dimesione dell'array(<100): " );
scanf("%d", &n);

legge_da_tastiera_aD(a,n);
printf( "Il numero massimo dell'array e' %d\n", massimo_aD(a,n) );
  */


/*//minimo array
double a[100];
int n;
  printf ( "Inserire il size dell'array (<100): " );
  scanf("%d", &n);

  legge_da_tastiera_aD(a,n);
 printf( "Il numero minimo dell'array e' %d\n", minimo_aD(a,n));
  */

/*//massimo e minimo
double a[100];
int n, massimo, minimo;
printf ( "Inserire il size dell'array: " );
scanf("%d", &n);

legge_da_tastiera_aD(a,n);
max_min_aD(a, n, &massimo, &minimo);
printf ( "Il numero massimo e' %d e il numero minimo e' %d\n", massimo, minimo);
    */

/*//massimo e indice di un array
double a[100];
int n, massimo, indice;
printf ("Inserire il size dell'array: ");
scanf("%d", &n);

legge_da_tastiera_aD(a,n);
max_val_ind(a,n, &massimo, &indice);
printf ( "Il numero massimo e' %d di indice %d\n", massimo, indice);
  */

/*//restituire indice massimo
double a[100];
int n;
printf ("Inserire il size dell'array: ");
scanf("%d", &n);

legge_da_tastiera_aD(a,n);
printf ( "L'indice del numero massimo e' : %d", ind_max(a,n) );
  */

/*//ricerca sequenziale di un array
 char a[]= { 'a', 'e', 'i', 'o', 'u'};
 int n = 5, i;
 char chiave;
 printf ( "Inserisci una lettera: " );
 for ( i = 0; i < n; i++)
 {
     scanf( " %c", &chiave);
     printf ( "L'esito e': %d\n", ricera_sequenziale(a,n,chiave) );
 }
 */

/* //fusione array
 char a[] = {'a', 'b', 'f','g'};
 int n_a = 4;
 char b[] = { 'c', 'd', 'j', 'z'};
 int n_b = 4;
 char c[n_a + n_b];
 int i;
 fusione_array(a, n_a , b, n_b, c);

 for (i = 0; i < n_a+ n_b; i++)
    printf( "il carattere %d - %c\n", i, c[i]);
*/

/*//uguaglianza array
 char a[] = {'a', 'b', 'f','g'};
 int n = 4;
 char b[] = { 'a', 'b', 'h', 'i'};
 if ( uguaglianza_array (a,b, n))
    printf ( "Gli array sono uguali\n" );
 else
    printf ( "Gli array sono diversi\n" );
*/

/*//massimo valori array 2D
double a[100][100];
int n, m;
printf ( "Dammi il numero di righe: ");
scanf ("%d", &n);
printf ( "Dammi il numero di colonne: " );
scanf("%d", &m);

legge_da_tastiera_a2D(a,n,m);

printf ( "Il massimo e' %d\n", massimo_a2D(a,m,n) );
*/

/*//minimo e indici di un array 2D
double a[100][100];
int n, m;
int indice_i, indice_j;
double min;
printf( "Inserisci il numero di righe: " );
scanf("%d", &n);
printf ( "Inserisci il numero di colonne: " );
scanf("%d", &m);

legge_da_tastiera_a2D(a,n,m);

min_val_a2D(a,n,m, &min, &indice_i, &indice_j);
printf ( "Il numero minimo e' %lf\nIndice riga: %d\nIndice colonna: %d\n", min, indice_i, indice_j);
  */

/*//media array 2D
double a[100][100];
int n, m;
printf ( "Inserire il numero di righe: " );
scanf("%d", &n);
printf ( "Inserire il numero di colonne: ");
scanf("%d", &m);

legge_da_tastiera_a2D(a,n,m);

printf( "Il valore della media e': %d\n", media_a2D(a,n,m) );
  */

/*//media righe
double a[100][100], media_riga[100];
int m,n;

printf ( "Inserire il numero di righe: " );
scanf("%d", &n);
printf ( "Inserire il numero di colonne: ");
scanf("%d", &m);
legge_da_tastiera_a2D(a, n, m );
media_riga_a2D(a, m, n, media_riga);
visualizza_aD(media_riga, n);
*/

/*//massimo dei valori di una diagonale
double a[100][100];
int n,m;
printf ( "Inserire il numero di righe: " );
scanf("%d", &n);
printf ( "Inserire il numero di colonne: ");
scanf("%d", &m);

legge_da_tastiera_a2D(a,n,m);

printf ( "Il massimo e' %d" , max_diag(a,n));
  */

/*//massimo del triangolo superiore
double a[100][100];
int n, m;
printf ( "Inserire il numero di righe: " );
scanf("%d", &n);
printf ( "Inserire il numero di colonne: ");
scanf("%d", &m);

legge_da_tastiera_a2D(a,n,m);

printf ( "La il massimo e' : %d" , max_triangolo(a,n,m));
  */

/*//unione insiemi
int n_a, n_b, n_c;
float a[] = {1.0, 20.0, 0.5, 4.4, 9.0, 6.1, 7.3, 3.0, 1.1, 8.0};
float b[] = {8.0, 12.0, 7.0, 0.5, 3.0, 1.1, 5.0, 1.0};
float c[18];
int i;
n_a = 10;
n_b = 8;

unione(a, n_a, b, n_b, c, &n_c);
printf( "Numero di elementi dell'unione %d\n" , n_c);
for ( i = 0; i < n_c; i++)
    printf (" %5.1lf\n", c[i]);
*/

/*//intersezione
int n_a, n_b, n_c;
float a[] = {1.0, 20.0, 0.5, 4.4, 9.9, 6.1, 7.3, 3.0, 1.1, 8.0};
float b[] = {8.0, 12.0, 7.0, 0.5, 3.0, 1.1, 5.0, 1.0};
float c[18];
int i;
n_a = 10;
n_b = 8;

intersezione(a, n_a, b, n_b, c, &n_c);
printf( "Numero di elementi dell'intersezione %d\n" , n_c);
for ( i = 0; i < n_c; i++)
    printf ("%2.2lf\n", c[i]);

*/
 //medie in avanti
 /*float a[] = {1.0, 2.0, 8.5, 2.3, 6.5};
 int n = 5;
 float b[n];

 media_avanti(a,n,b);
 int i;
 for ( i = 0; i < n; i++)
    printf( "Il numero e' %5.2f\n", b[i]);
*/

/*//media in avanti in place
float a[] = {1.0, 2.0, 8.5, 2.3, 6.5};
int n = 5;

media_avanti_p(a,n);
int i;
for ( i = 0; i < n; i++)
    printf( "Il numero e' : %5.2f\n", a[i] );
  */

/*//conta parole
char testo[100];
int numero_caratteri, numero_parole, numero_linee, i=0;

 printf( "Inserisci il testo:\n" );

while ((testo[i] = getchar()) != EOF )
        i++;
testo[i] = '\0';

conta_tutto(testo, &numero_caratteri, &numero_parole, &numero_linee);
printf ("Conta tutto:\nNumero caratteri = %d\nNumero parole = %d\nNumero linee = %d\n", numero_caratteri, numero_parole, numero_linee);
  */

/*//string matching
char chiave [100];
char testo [100];
int occorrenze;
 printf ( "Inserisci il testo:\n" );
 gets(testo);
 printf ( "Inserisci la chiave:\n" );
 gets(chiave);

 occorrenze = string_matching(chiave,testo);

 printf( "La chiave %s appare nel testo %d volte\n", chiave, occorrenze);

*/
/*//best matching

char chiave[100];
char testo[100];
int indice_punt, i;

printf( "Inserisci il testo:\n" );
gets(testo);

printf( "Inserisci la chiave:\n" );
gets(chiave);

indice_punt = matching_migliore(chiave,testo);

printf( "Inizio sottostringa: %d\nSottostringa di best matching:\n ", indice_punt );
for(i = 0; i < strlen(chiave); i++) //indice che ritorna nella sottostring
putchar ( testo[indice_punt +i]);
*/

/*//ordinamento per inserimento
int a[20] =  {14, 26, 31, 55, 22, 27, 10,16,34,65,12,47};
int i, n = 12;

ord_inser(a,n);

for( i = 0; i < n; i++)
{
    printf("Array A ordinato: %d\n", a[i]);
}
*/

/*//ordinamento per selezione di minimo

int a[] = {1,3,5,8,2,6,9,10,12,7};
int n =10;
int i;

printf( "Array non riordinato\n" );
for ( i = 0; i < n; i++)
    printf("%d\n", a[i]);

ord_sel_min(a,n);
printf( "Array ordinato\n" );
for ( i = 0; i < n; i++)
    printf("%d\n", a[i]);
*/


/*//ordinamento per selezione di massimo

int a[] = {1,3,5,8,2,6,9,10,12,7};
int n =10;
int i;

printf( "Array non riordinato\n" );
for ( i = 0; i < n; i++)
    printf("%d\n", a[i]);

ord_sel_min(a,n);
printf( "Array ordinato\n" );
for ( i = 0; i < n; i++)
    printf("%d\n", a[i]);
  */

  //ordinamento su stringhe
/*
int n, i;
char elenco[][50] = {"pippo", "paperino", "pluto", "gastone", "archimede"};
n = 5;

printf ( "Elenco non ordinato \n");

for (i = 0; i < n; i++)
{
    printf("%s \n", elenco[i]);
}
ord_sel_max_S( elenco,n);

printf ("Elenco ordinato\n");

for (i = 0; i<n; i++)
{
    printf("%s \n", elenco[i]);
}

*/
     return 0;
}
