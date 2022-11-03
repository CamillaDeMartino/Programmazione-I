#include <stdio.h>
#include <math.h>
#include "Header.h"

int main()
{
    /*//es 10
int x;
float equazione;
printf( "Inserisci un numero: \n" );
scanf(" %d", &x);

equazione = ((x*x)+3*x )/(0.5+x) + ((0.1*x)+1)/((x*x*x)+x)*5;
printf ( "Il risultato dell'equazione e': %f", equazione);
*/

//es 9
/*Scrivere un programma in cui l’utente deve indovinare, in due fasi, con un massimo di 10
tentativi, un codice segreto. Il codice segreto `e un intero definito dal programmatore con
valore tra 0 e 100. Se l’utente indovina il codice nella prima fase, allora nella seconda fase
l’utente deve indovinare un secondo codice segreto composto da una vocale (controllare
che l’utente non inserisca una consonante)*/
/*
int i, codice;
int codice_segreto = 50;
int found_code = 0;
int found_letter = 0;
char lettera;
char lettera_segreta = 'a';

printf("Inserisci un codice segreto: \n");

for (i=0; i<10 && !found_code; i++)
    {
        scanf(" %d", &codice);
        if(codice != codice_segreto)
        {
            printf("Ritenta\n");
        }
        else if (codice == codice_segreto)
        {
            found_code = 1;
        }
    }

printf("Inserisci una vocale segreta: \n");
for (int j = i; j<10 && !found_letter; j++)
    {
        scanf(" %c", &lettera);
        if(lettera != lettera_segreta)
        {
             printf("Riprova\n");
        }
        else if (lettera== lettera_segreta)
        {
            printf("Hai vinto");
            found_letter = 1;
        }

    }*/

/*//versione alternativa
    int i, j;
    int codice, codice_corretto = 50;
    char lettera, lettera_corretta = 'a';
    int trovato = 0, trovato1 = 0;

    printf("Inserisci il codice segereto: \n");
    while ( trovato == 0 && i<10)
    {
        scanf("%d", &codice);
        if(codice == codice_corretto)
          trovato = 1;
        i++;
    }

if (codice == codice_corretto){
        printf("Inserire vocale segreta: \n");
 for (j=i; j <10 && trovato1==0; j++)
 {
            scanf(" %c", &lettera);
           if (lettera== lettera_corretta){
            trovato1 = 1;
            }
           else
           {
               printf( "Lettera sbagliata!\n");
           }

 }
}

if (trovato== 1 && trovato1== 1)
    printf( "Hai indovinato entrambi i codici\n" );
else if (trovato == 0 || j==10)
    printf ("Tentativi terminati\n");
*/

/*Scrivere un programma per simulare l' inserimento di un PIN per il telefonino. Nella
prima fase viene chiesto all'u tente di inserire un codice di lunghezza 5. Nella seconda fase
l'utente inserisce il codice e ha al massimo 3 tentativi per indovinarlo.*/

/*int i=0, pin=12345, pin_utente;
int pin_trovato = 0;

printf( "Inserisci un Pin di 5 cifre: \n");
while ( pin_trovato==0 && i<3)
{
   scanf (" %d", &pin_utente);
   if(pin==pin_utente)
     pin_trovato = 1;

   else {
    printf ( "Pin sbagliato\n" );
    i++;
   }
}
if (pin_trovato==1)
    printf ( "PIN ESATTO!\n");
    else
        printf( "Codice sbagliato per tre volte\nTentativi esauriti\n" );

*/

//Funzioni

/*Dato il seguente programma costruire due funzioni: una che restituisca la distanza tra due
punti e l’altra per la traslazione di un punto. Suddividere il programma su pi`u file: file
per il main, il file header ed un file con le funzioni.*/

/*float x1,y1,x2,y2,d,a=2,b=10, t1, t2;
printf ("Inserire le coordinate del primo punto (float) : ");
scanf("%f%f",&x1,&y1);
printf ("Inserire le coordinate del secondo punto (float) : ");
scanf("%f%f",&x2,&y2);

d = distanza_due_punti(x1, x2, y1, y2);
printf ("la distanza dei punti e':%f\n",d);


t1 = traslazione(x1, a);
t2 = traslazione(y1, b);
printf ( "Il primo punto traslato ha coordinate %f - %f\n", t1, t2);

t1 = traslazione(x2, a);
t2 = traslazione(y2, b);
printf ( "Il secondo punto traslato ha coordinate %f - %f\n", t1, t2);
*/

//verifica cosa fa questo programma
/*int i;
for(i=0;i<=10;i++) f();
*/

//riscirivi il programma con una procedura
/*int i;
int a, s=0, sum;
for(i=0;i<3;i++)
{
    printf("Dammi il %d numero\n", i+1);
scanf("%d", &a);
s += funzione(a, &s);
}
printf("Il risultato e’: %d", s);
*/

/*//realizza una procedura che calcoli tali risultati (x^3 + 3x + 5)/(8x + 1)
int x;
float eq;
for (x = 0; x <= 20; x+=2){
    eq = equazione(x);
printf ( "Il risultato e' %f\n" , eq);
}
*/

/*//calcola i risultati di (x^3 + 3x + 5)/(8x + 1) e (y^4)/(1+y)
int x=0;
float result_1, result_2;
equazioni( x, x, &result_1, &result_2);
printf ( "I valori per i punti (%d;%d) sono: %f %f\n", x, x, result_1, result_2 );
for (x = 1; x <= 10; x+= 2)
{
equazioni( x, x, &result_1, &result_2);
printf ( "I valori per i punti (%d;%d) sono: %f %f\n", x, x, result_1, result_2 );
}*/

/*//riscrivere la procedura come function
int m, n=2, prodotto;
for(m=0; m<=n; m++)
    prodotto = p(m,n);
printf("Il prodotto e' %d", prodotto);
  */

/*Scrivere un programma che simuli un salvadanaio. L’utente pu`o inserire e prelevare soldi.
Visualizzare salvadanaio vuoto se non ci sono soldi. Il numero di operazioni di inserimento
e prelievo sono decise dall’utente. L’inserimento e il prelievo devono avvenire con la
chiamata a due procedure differenti. */

/*char operazione, uscita = 0;
int sold = 0;
while (uscita != 1){
fflush(stdin);
printf( "Premere P per prelevare dal salvadanaio\n" );
printf( "Premere I per inserire nel salvadanaio\n" );
printf ( "Premere U per uscire\n");
operazione = getchar();
switch (operazione){
case 'p':
    prelievo(&sold);
    break;
case 'd':
    deposito(&sold);
    break;
case 'u':
    uscita = 1;
    break;
}
if (sold == 0)
    printf("Salvadanaio vuoto!\n\n");
}
*/

/*Scrivere una funzione che prende in input due array di dimensioni n ed m, rispettivamente,
e restituisce un array composto dalla concatenazione dei due array in modo tale che nelle
posizioni dispari sono contenuti i valori del primo array e nelle posizioni pari quelle del
secondo.*/
/*
int n,m,i;
char a[] = {'a', 'b', 'c', 'd'};
n = 4;
char b[] = {'e', 'f', 'g'};
m = 3;
char c[n+m];

concatenazione(a,n,b,m,c);

for(i = 0; i < n+m; i++){
    printf ( "Il valore dell'array c e': %c\n", c[i]);
}*/

/*Scrivere una funzione che prende in input una matrice e restituisca in output la matrice
trasposta (ovvero la matrice in cui la j-esima colonna è la j-esima riga della matrice data,
per j = 1, 2, . . . , n).
*/
/*
int n,m;
int a[10][10];
int b[10][10];
printf ( "Inserire il numero di righe: ");
scanf ("%d", &n);
printf ( "Inserire il numeri di colonne: ");
scanf("%d", &m);

legge_da_tastiera2D(a,n,m);

trasporta(a,n,m,b);
int i,j;

for (i = 0; i < n; i++)
{
    for (j = 0; j < m; j++)
        printf( "Elemento [%d][%d] e' %d \n", i, j, b[i][j] );
}
*/


/*Scrivere una funzione che prende in input due matrici e restituisce come output una matrice
che corrisponde alla somma delle due matrici. Usare la notazione a puntatori.*/
/*
int i,j,n,m;
int a[10][10], b[10][10], c[10][10];

printf ( "Inserisci il numero di righe: ");
scanf("%d", &n);
printf( "Inserisci il numero di colonne: " );
scanf("%d", &m);

printf( "Array A\n");
legge_da_tastiera2D(a,n,m);
printf( "Array B\n" );
legge_da_tastiera2D(b,n,m);

somma_matrici(a,b,n,m,c);
for(i = 0; i < n; i++)
{
    for(j = 0; j < m; j++)
        printf( "L'elemento [%d][%d] e' %d\n", i,j,c[i][j] );
}
*/


/*Sviluppare una function C che, dati come parametri di input un array 2D di float, il
numero delle righe, il numero delle colonne, un int p e un int q (con int p minore di int
q), determina e restituisce come parametro di output la somma degli elementi che hanno
gli indici di riga e di colonna compresi tra int p e int q. */

/*int a[10][10];
int p,q;

printf ( "Inserisci il numero di righe: " );
scanf( "%d", &p);

printf( "Inserisci il numero di colonne: " );
scanf( "%d", &q);

legge_da_tastiera2D(a,p,q);

printf ( "\nLa somma degli elementi e' %d\n", somma(a,p,q) );
*/

/*Sviluppare una function C che, dati come parametri di input un array 2D di int, il numero delle
righe, il numero delle colonne e un int k, determina e restituisce come parametro di output la
somma degli elementi della k-sima riga.*/

/*int a[10][10], k[20];
int n,m;
printf ( "Inserisci il numero di righe: " );
scanf( "%d", &n);

printf( "Inserisci il numero di colonne: " );
scanf( "%d", &m);

legge_da_tastiera2D(a,n,m);

somma_righe(a,n,m,k);

int i;
for (i=0; i<n; i++)
{
    printf("\nLa somma della riga %d e' : %d\n", i+1, k[i]);
}

*/

/*Sviluppare una function C che, dati come parametri di input un array 2D di int, il numero
delle righe, il numero delle colonne e un int k, determina e restituisce come parametro di
output la somma degli elementi della k-sima colonna*/
/*

int a[10][10];
int n,m;

printf ( "Inserisci il numero di righe: " );
scanf("%d", &n);
printf( "Inserisci il numero di colonne: " );
scanf("%d", &m);

legge_da_tastiera2D(a,n,m);

int j, k[20];

somma_colonne(a,n,m,k);

for ( j = 0; j < m; j++)
{
    printf ( "Colonna %d e': %d\n", j, k[j] );
}
*/


//massimo per righe
/*
int a[10][10];
int n,m;

printf ( "Inserisci il numero di righe: " );
scanf("%d", &n);
printf( "Inserisci il numero di colonne: " );
scanf("%d", &m);

legge_da_tastiera2D(a,n,m);

massimo_righe(a,n,m);
*/

/*Sviluppare una function C che, dati come parametri di input un array 2D di int, il numero
delle righe, il numero delle colonne e un int k, determina e restituisce come parametro di
output la somma degli elementi della k-sima riga.*/

int a[100][100], k[100];
int righe, colonne;

printf( "Inserisci il numero di righe: " );
scanf( "%d", &righe);
printf( "Inserisci il numero di colonne: " );
scanf(" %d", &colonne);

legge_da_tastiera2D(a,righe,colonne);
somma_righept2(a,righe,colonne, k);

int i;
for ( i = 0; i < righe; i++)
    printf( "La somma dell' %d-sima riga e' : %d\n",i, k[i] );

    return 0;
}
